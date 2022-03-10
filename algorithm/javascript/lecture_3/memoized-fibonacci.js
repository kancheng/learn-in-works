output = [];

var fib = (n) => {
	if ( n == 0) return 0;
	if ( n == 1) return 1;
	else {
		output[0] = 0;
		output[1] = 1;
		for ( i = 2; i <= n; i++) {
			output[i] = output[i-1] + output[i-2];
		}
		return output[n];
	}
}

const prompt = require('prompt-sync')();
// npm install prompt-sync
const n = prompt("請輸入所要計算的第幾個費式數列 :");

console.log("fib("+ n + ") = " + fib(n));

