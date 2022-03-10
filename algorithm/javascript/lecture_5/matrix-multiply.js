const M = 2;
const N = 3;
const P = 2;

A = [ 6, 3, 5, 8, 9, 7];
B = [ 5, 10, 14, 7, 6, 8];
C = [ 0, 0, 0, 0];

if ( M <= 0 || N <= 0 || P <= 0 ) {
	console.log('ERROR : 維度 M, N, P 必須 > 0 。');
}

for (let i = 0; i < M; i++) {
	for (let j = 0; j < P; j++) {
		let Temp = 0;
		for (let k = 0; k < N; k++) {
			Temp = Temp + parseInt(A[i*N+k])*parseInt(B[k*P+j]);
		}
		C[i*P+j] = Temp;
	}
}

console.log('A X B 的結果');

let str = '';

for ( i = 0; i < M; i++) {
	for ( j = 0; j < P; j++) {
		str = str + C[i*P+j] + '\t';
	}
	str = str + '\n';
}
console.log (str);