/*
* 河內塔
*/
var hanoi = ( n, p1, p2, p3) => {
	if (n == 1) { // 遞迴出口
		process.stdout.write("套環從" + p1 + "移動到" + p3 + "\n");
	} else {
		hanoi(n-1, p1, p3, p2);
		process.stdout.write("套環從" + p1 + "移動到" + p3 + "\n");
		hanoi(n-1, p2, p1, p3);
	}
}

// Main
// npm install prompt-sync
const prompt = require ('prompt-sync')();
const j = parseInt(prompt('請輸入所移動套環數量 : '));
hanoi( j, 1, 2, 3);