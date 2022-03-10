/*
* 堆疊
*/
class Node {
	constractor () {
		this.data = 0;
		this.next = null;
	}
}
top = null;
var isEmpty = () => {
	if (top == null) {
		return true;
	} else {
		return false;
	}
}

// 指定的資料存入堆疊
var push=(data) => {
	new_add_node = new  Node();
	new_add_node.data = data; // 將傳入值指定為節點內容
	new_add_node.next = top; // 將新節點指向堆疊的頂端
	top = new_add_node; // 新節點成為堆疊的頂端
}

// 從堆疊取出資料
var pop = () => {
	if (isEmpty()) {
		process.stdout.write('堆疊為空 \n');
		return -1;
	} else {
		ptr = top; // 指往堆疊頂端
		top = top.next; // 頂端指標指往下一個節點
		temp = ptr.data; // 取出堆疊資料
		return temp; // 將從堆疊取出資料傳回主程式
	}
}

// Main
// npm install prompt-sync
const prompt = require ('prompt-sync')();
while (true) {
	const i = parseInt(prompt('推入堆疊(1)、彈出堆疊(0)、停止操作(-1) : '));
	if (i == -1) {
		break;
	} else if (i == 1) {
		const value = parseInt(prompt('請輸入值 : '));
		push(value);
	} else if (i == 0) {
		process.stdout.write("彈出的元素" + pop() + "\n");
	}
}
process.stdout.write("========================================\n");
while (!isEmpty()) {
	process.stdout.write('堆疊彈出的順序 : ' + pop() + '\n');
}
process.stdout.write("========================================\n");



