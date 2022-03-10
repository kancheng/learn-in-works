
class Node {
	constructor (x) {
		this.x = x;
		this.next = null;
	}
}
class GraphLink {
	constructor () {
		this.first = null;
		this.last = null;
	}

	IsEmpty() {
		return this.first == null;
	}

	Print () {
		let current = this.first;
		while (current != null ) {
			process.stdout.write('[' + current.x +']');
			current = current.next;
		}
		process.stdout.write('\n');
	}

	Insert(x){
		let newNode = new Node(x);
		if (this.IsEmpty()) {
			this.first = newNode;
			this.last = newNode;
		} else {
			this.last.next = newNode;
			this.last = newNode;
		}
	}
}

run = [];
Head = [];
for ( i = 0; i < 9; i++ ) {
	Head[i] = new GraphLink();
}

var Dfs = (current) => { // 深度優先走訪副程式
	run[current] = 1;
	process.stdout.write('[' + current + ']');
	while ((Head[current].first) != null) {
		if (run[Head[current].first.x] == 0 ) {
		 // 如果頂點尚未走訪，就進行 dfs 的遞迴呼叫
			Dfs(Head[current].first.x);
		}
		Head[current].first = Head[current].first.next;
	}
}

Data = [];
Data = [[1,2],[2,1],
	[1,3],[3,1],
	[2,4],[4,2],
	[2,5],[5,2],
	[3,6],[6,3],
	[3,7],[7,3],
	[4,5],[5,4],
	[6,7],[7,6],
	[5,8],[8,5],
	[6,8],[8,6]];
run = []; // 走訪各頂點的記錄
Head = []; 
for(i = 0; i < 9; i++ ) {
	Head[i] = new GraphLink();
}
process.stdout.write('圖形的鄰接串列內容 : \n'); // Print
for (let i = 1; i < 9; i++ ) { // 
	run[i] = 0; // 
	process.stdout.write('頂點 ' + i + ' => ');
	Head[i] = new GraphLink();
	for ( j = 0; j < 20; j++ ) {
		if ( Data[j][0] == i ) { // 如果起點和串列首相等，則把頂點加入串列
			DataNum = Data[j][1];
			Head[i].Insert(DataNum);
		}
	}
	Head[i].Print(); // Print
}
process.stdout.write('深度優先走訪頂點 : \n');
Dfs(1);
process.stdout.write('\n');
