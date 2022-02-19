const MAX = 10; // 定義佇列大小
queue = [];

var front = rear = -1;
var choice = '';
// npm install prompt-sync
const prompt = require ('prompt-sync')();
while ( rear < MAX - 1 && choice != 'e' ) {
	const choice = prompt('[a] 表示存入一個數值; [d] 表示取出一個數值; [e] 表示跳出此程式 : ');
	if (choice == 'a') {
		const val = parseInt(prompt('請輸入數值 : '));
		rear += 1;
		queue[rear] = val;
	} else if (choice == 'd') {
		if (rear > front) {
			front += 1;
			process.stdout.write('取出數值為 : ' + queue[front] + '\n');
			queue[front] = 0;
		} else {
			process.stdout.write('佇列已經空了');
			return;
		}
	} else if (choice == 'e') {
		process.stdout.write('\n');
		break;
	}
}
process.stdout.write("========================================\n");
process.stdout.write("輸出佇列的所有元素 : \n");

if (rear == MAX - 1) {
	process.stdout.write('佇列已滿');
} else if (front >= rear) {
	process.stdout.write('沒有 \n');
	process.stdout.write('佇列已空');
} else {
	while (rear > front) {
		front += 1;
		process.stdout.write('[' + queue[front] + ']');
	}
	process.stdout.write('\n');
	process.stdout.write("========================================\n");
}
process.stdout.write('\n');

