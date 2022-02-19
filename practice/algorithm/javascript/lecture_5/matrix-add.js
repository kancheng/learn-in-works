var A = new Array();
var B = new Array();
var C = new Array();

for (let i = 0; i < 3; i++) {
	A[i] = new Array();
	B[i] = new Array();
	C[i] = new Array();	
}

A = [[ 1, 3, 5], [ 7, 9, 11], [ 13, 15, 17]];
B = [[ 9, 8, 7], [ 6, 5, 4], [ 3, 2, 1] ];
N = 3;

for (let i = 0; i < 3; i++) {
	for (let j = 0; j < 3; j++ ) {
		C[i][j] = A[i][j] + B[i][j];
	}
}

console.log ("矩陣 A & 矩陣 B 相加的結果");

let str = '';

for (let i = 0; i < 3; i++) {
	for (let j = 0; j < 3; j++) {
		str = str + C[i][j]+'\t';
	}
	str = str + '\n';
}
console.log(str);