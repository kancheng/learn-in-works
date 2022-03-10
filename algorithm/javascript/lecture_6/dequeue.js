class Node {
	constractor () {
		this.data = 0;
		this.next = null;
	}
}

front = new Node ();
rear = new Node ();
front = null;
rear = null;

// 方法 enqueue 佇列資料的存入
var enqueue = (value) => { 
	node = new Node(); // 建立節點
	node.data = value;
	node.next = null;
	// 檢查是否為空佇列
	if (rear == null) { 
		front = node; // 新建立的節點成為第一個節點
	} else {
		rear.next = node; // 將節點加入到佇列的尾端
	}
	rear = node;  // 將佇列的尾端指標指向新加入的節點
}

// 方法 dequeue 佇列資料的取出
var dequeue = (action) => { 
	// 從前端取出資料
	if (!( front == null) && action == 1 ) {
		if (front == rear) rear = null;
		value = front.data; // 將佇列資料從前端取出
		front = front.next; // 將佇列的前端指標指向下一個
		return value;
	} else if (!( rear == null) && action == 2 ) { // 從尾端取出資料
		startNode = front; // 先記下前端的指標值
		value = rear.data; // 取出目前尾端的資料
		 // 找最尾端節點的前一個節點
		tempNode = front;
		while ( front.next != rear && front.next != null) {
			front = front.next;
			tempNode = front;
		}
		front = startNode; // 記錄從尾端取出資料後的佇列前端指標
		rear = tempNode; // 記錄從尾端取出資料後的佇列後端指標
		 // 下一行程式是指當佇列中僅剩下最節點時
		 // 取出資料後便將 front 、 rear 指向 null
		if (front.next == null || rear.next == null) {
			front = null;
			rear = null;
		}
		return value;
	} else {
		return -1;
	}
}
process.stdout.write('用鏈結來實現雙向佇列\n');
process.stdout.write('=================================\n');

ch = 'a';
// npm install prompt-sync
const prompt = require ('prompt-sync')();

while (true) {
	const ch = prompt("(a)存入; (d)取出; (e)離開 : ");
	if ( ch == 'e') {
		break;
	} else if ( ch == 'a') {
		const item = parseInt(prompt("加入的元素值 : "));
		enqueue(item);
	} else if ( ch == 'd') {
		temp = dequeue(1);
		process.stdout.write("從雙向佇列前端依序取出的元素資料值為 : " + temp + "\n");
		temp = dequeue(2);
		process.stdout.write("從雙向佇列尾端依序取出的元素資料值為 : " + temp + "\n");
	} else {
		break;
	}
}
