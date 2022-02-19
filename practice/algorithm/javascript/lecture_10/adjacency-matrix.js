class list_node {
	constructor () {
		this.val = 0;
		this.next = null;
	}
}
head = [];
for ( i = 0; i < 6; i++ ) {
	head[i] = new list_node();
}

var newnode = new list_node();

data = [[1,2],[2,1],
	[2,5],[5,2],
	[2,3],[3,2],
	[2,4],[4,2],
	[3,4],[4,3],
	[3,5],[5,3],
	[4,5],[5,4]];
process.stdout.write('圖形的鄰接串列內容\n');
process.stdout.write('===================================\n');
for (i = 1; i < 6; i++ ) {
	head[i].val = i; // 串列首 head
	head[i].next = null;
	process.stdout.write('頂點 ' + i + ' => '); // 把頂點值列印出來
	ptr = head[i];
	for (j = 0; j < 14; j++ ) { // 走訪圖形陣列
		if (data[j][0] == i) { // 如果節點值 = i，加入節點到串列首
			newnode.val = data[j][1]; // 宣告新節點，值為終點值
			newnode.next = null;
			while(ptr != null) {
				ptr = ptr.next; // 判斷是否為串列的尾端
			}
			ptr = newnode; // 加入新節點
			process.stdout.write('[' + newnode.val + ']'); // 列印相鄰頂點
		}
	}
	process.stdout.write('\n');
}
