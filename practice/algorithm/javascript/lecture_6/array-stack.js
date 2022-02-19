/*
* 堆疊
*/

const MAXSTACK = 100; // 定義最大堆疊容量
stack = []; // 堆疊的陣列宣告
top = -1; // 堆疊的頂端

// 判斷是否為空堆疊
var isEmpty = () => {
	if (top == -1) {
		return true;
	} else {
		return false;
	}
}

// 指定的資料存入堆疊
var push=(data) => {
	if (top>=MAXSTACK-1) {
		process.stdout.write('堆疊已滿，無法再加入');
	} else {
		top += 1;
		stack[top] = data; // 將資料存入堆疊
	}
}

// 從堆疊取出資料
var pop = () => {
	if (isEmpty()) {
		process.stdout.write('堆疊為空');
	} else {
		process.stdout.write('彈出的元素為 : '+ stack[top] +'\n');
		top = top - 1;
	}
}

// Main
i = 2;
count = 0;
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
		pop();
	}
}
process.stdout.write("========================================\n");

if (top < 0) {
	process.stdout.write('\n 堆疊為空\n');
} else {
	i = top;
	while (i >= 0) {
		process.stdout.write('堆疊彈出的順序 : ' + stack[i] + '\n');
		count += 1;
		i = i - 1;
	}
}
process.stdout.write("========================================\n");



