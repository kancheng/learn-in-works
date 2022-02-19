var NONZERO = 0;
temp = 1;
// Sparse Matrix
Sparse = [ [ 15, 0, 0, 22, 0, -15],
		[ 0, 11, 3, 0, 0, 0],
		[ 0, 0, 0, -6, 0, 0],
		[ 0, 0, 0, 0, 0, 0],
		[ 91, 0, 0, 0, 0, 0],
		[ 0, 0, 28, 0, 0, 0]];

str = '';

console.log('稀疏矩陣個元素');
for ( i = 0; i < 6; i++) {
	for ( j = 0; j < 6; j++) {
		process.stdout.write(Sparse[i][j] + '\t');
		if (Sparse[i][j] != 0) {
			NONZERO = NONZERO + 1;
		}
	}
	console.log();
}

// 宣告壓縮矩陣
Compress = new Array(); 
for (let i = 0; i < NONZERO + 1; i++) {
	Compress[i] = [];
}

// 開始壓縮矩陣
Compress[0][0] = 6;
Compress[0][1] = 6;
Compress[0][2] = NONZERO;

for ( i = 0; i < 6; i++) {
	for ( j = 0; j < 6; j++) {
		if (Sparse[i][j] != 0) {
			Compress[temp][0] = i;
			Compress[temp][1] = j;
			Compress[temp][2] = Sparse[i][j];
			temp = temp + 1;
		}
	}
}

console.log ('稀疏矩陣壓縮後的內容');

for ( i = 0; i < NONZERO + 1; i++) {
	for ( j = 0; j < 3; j++) {
		process.stdout.write(Compress[i][j] + '\t');
	}
	console.log();
}
