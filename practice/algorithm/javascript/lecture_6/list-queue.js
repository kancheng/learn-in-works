class student {
	constractor () {
		this.name = '';
		this.score = 0;
		this.next = null;
	}
}

front = new student ();
rear = new student ();
front = null;
rear = null;

var enqueue = (name, score) => { // 置入佇列資料
	new_data = new student(); // 配置記憶體給新元素
	new_data.name = name; // 設定新元素的資料
	new_data.score = score;
	if (rear == null) { // 如果 rear 為 null，表示這是第一個元素
		front = new_data;
	} else {
		rear.next = new_data; // 將新元素連接至佇列尾端
	}
	rear = new_data; // 將 rear 指向新元素，這是新的佇列尾端
	new_data.next = null; // 新元素之後無其他元素
}

var dequeue = () => { // 取出佇列資料
	if (front == null ) {
		process.stdout.write('佇列已空 !\n');
	} else {
		process.stdout.write("Name : " + front.name + 
			"\t 成績 : " + front.score + " ... 取出");
		front = front.next;	// 將佇列前端移到下一個元素
	}
}

var show = () => {	// 顯示佇列資料
	ptr = front;
	if (ptr == null) {
		process.stdout.write('佇列已空 !\n');
	} else {
		while (ptr != null) { // 由 front 往 rear 走訪序列
			process.stdout.write("Name : " + ptr.name + 
				"\t 成績 : " + ptr.score + "\n");
			ptr = ptr.next;
		}
	}
}

select = 0;
// npm install prompt-sync
const prompt = require ('prompt-sync')();

while (true) {
	const select = parseInt(prompt("(1)存入; (2)取出; (3)顯示; (4)離開 => "));
	if (select == 4) {
		break;
	}
	if (select == 1) {
		const name = prompt("Name : ");
		const score = parseInt(prompt("Score : "));
		enqueue(name, score);
	} else if (select == 2) {
		dequeue();
	} else if (select == 3) {
		show();
	}
}
