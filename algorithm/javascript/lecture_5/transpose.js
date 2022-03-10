arrA = [[ 1, 2, 3, 4],[ 5, 6, 7, 8],[ 9, 10, 11, 12],[ 13, 14, 15, 16]];
N = 4;

arrB = [[],[],[],[]];
console.log('The Raw Matrix');

for ( i = 0; i < 4; i++) {
	str = '';
	for ( j = 0; j < 4; j++) {
		str = str + arrA[i][j] + '\t';
	}
	console.log(str);
}

// Transpose
for ( i = 0; i < 4; i++) {
	for ( j = 0; j < 4; j++) {
		arrB[i][j] = arrA[j][i];
	}
}

console.log('The Transpose Matrix');
for ( i = 0; i < 4; i++) {
	str = '';
	for ( j = 0; j < 4; j++) {
		str = str + arrB [i][j] + '\t';
	}
	console.log(str);
}