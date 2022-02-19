const VERTS = 6;

class edge {
	constructor() {
		this.start = 0;
		this.to = 0;
		this.find = 0;
		this.val = 0;
		this.next = null;
	}
}
v = [];
for (let i = 0; i < VERTS + 1; i++) {
	v[i] = 0;
}

var findmincost = (head) => { // 搜尋成本最小值
	minval = 100;
	let ptr = head;
	while (ptr != null) {
		if (ptr.val < minval && ptr.find == 0 ) { // 假如 ptr.val 的值小於 minval
			minval = ptr.val; // 就把 ptr.val 設為最小值
			retptr = ptr; // 並且把 ptr 記錄下來
		}
		ptr = ptr.next;
	}
	retptr.find = 1; // 將 retptr 設為已找到的邊
	return retptr; // 傳回 retptr
}

var mintree = (head) => { // 最小成本擴張樹函數
	let result = 0;
	let ptr = head;
	for (let i = 0; i <= VERTS; i++) {
		v[i] = 0;
	}
	while (ptr != null) {
		mceptr = findmincost(head);
		v[mceptr.start] = v[mceptr.start] + 1;
		v[mceptr.to] = v[mceptr.to] + 1;
		if (v[mceptr.start] > 1 && v[mceptr.to] > 1) {
			v[mceptr.start] = v[mceptr.start] - 1;
			v[mceptr.to] = v[mceptr.to] - 1;
			result = 1;
		} else {
			result = 0;
		}
		if (result == 0) {
			process.stdout.write(
				'起始頂點 [' + mceptr.start + 
				'] -> 終止頂點 ['+ mceptr.to +
				'] -> 路徑長度 ['+ mceptr.val +'] \n' 
				);
		}
		ptr = ptr.next;
	}
}

// Cost
 data = [[1,2,6],[1,6,12],[1,5,10],[2,3,3],[2,4,5],[2,6,8],
[3,4,7],[4,6,11],[4,5,9],[5,6,16]];

var head = null;

for ( i = 0; i < 10; i++) {
	for ( j = 1; j <= VERTS + 1; j++ ) {
		if (data[i][0] == j) {
			newnode = new edge();
			newnode.start = data[i][0];
			newnode.to = data[i][1];
			newnode.val = data[i][2];
			newnode.find = 0;
			newnode.next = null;
			if (head == null) {
				head = newnode;
				head.next = null;
				ptr = head;
			} else {
				ptr.next = newnode;
				ptr = ptr.next;
			}
		}
	}
} 


process.stdout.write('===================================\n');
process.stdout.write('建立最小成本擴張樹 : \n');
process.stdout.write('===================================\n');
mintree(head);
process.stdout.write('\n');
