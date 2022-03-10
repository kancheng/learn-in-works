var fib = (n) => {
	if (n == 0) {
		return 0; // If n = 0 else return 0.
	} else if ( n == 1 || n == 2) {
		return 1;
	} else {
		return (fib(n-1)+fib(n-2));
	}
}

const prompt = require('prompt-sync')();
// npm install prompt-sync
const n = prompt("請輸入所要計算的第幾個費式數列 :");

for ( i = 0; i <= n; i++) {
	console.log("fib("+ i + ") = " + fib(i));
}
