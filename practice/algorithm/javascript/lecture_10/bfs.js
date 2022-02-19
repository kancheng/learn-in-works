const MAXSIZE = 10; // 定義佇列的最大容量
front = -1; // 指向佇列的前端
rear = -1; // 指向佇列的後端

class Node {
	constructor (x) {
		this.x = x; // 頂點資料
		this.next = null; // 指向下一個頂點的指標
	}
}
class GraphLink {
	constructor () {
		this.first = null;
		this.last = null;
	}

	my_print() {
		let current = this.first;
		while (current != null) {
			process.stdout.write('[' + current.x + ']');
			current = current.next;
		}
		process.stdout.write('\n');
	}

	insert(x){
		let newNode = new Node(x);
		if (this.first == null) {
			this.first = newNode;
			this.last = newNode;
		} else {
			this.last.next = newNode;
			this.last = newNode;
		}
	}
}

// 佇列資料的存入
var enqueue = (value) => {
	if (rear >= MAXSIZE) {
		return
	}
	rear += 1;
	queue[rear] = value;
}

// 佇列資料的取出
var dequeue = () => {
	if (front == rear) {
		return -1;
	}
	front += 1;
	return queue[front];
}


run = [];
Head = [];
for ( i = 0; i < 9; i++ ) {
	Head[i] = new GraphLink();
}

// 廣度優先搜尋
var bfs = (current) => { 
	enqueue(current); // 將第一個頂點存入佇列
	run[current] = 1; // 將走訪過的頂點設定為 1
	process.stdout.write('[' + current + ']'); // 印出該走訪過的頂點
	while (front != rear) { // 判斷目前是否為空佇列
		current = dequeue(); // 將頂點從佇列中取出
		tempnode = Head[current].first; // 先記錄目前頂點的位置
		while (tempnode != null) {
			if (run[tempnode.x] == 0 ) {
				enqueue(tempnode.x);
				run[tempnode.x] = 1; // 記錄已走訪過
				process.stdout.write('[' + tempnode.x + '] ');
			}
			tempnode = tempnode.next;
		}
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
queue = [];
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
			Head[i].insert(DataNum);
		}
	}
	Head[i].my_print(); // Print
}
process.stdout.write('廣度優先走訪頂點 : \n');
bfs(1);
process.stdout.write('\n');
