/*
* Bubble
*/

var data = [ 16, 25, 39, 27, 12, 8, 45, 63]; // Raw Data
console.log('Bubble Sort - Raw Data : ');
for ( i = 0; i < 8; i++) {
	process.stdout.write(data[i] + ' ');
}
console.log();
for ( i = 7; i > 0; i-- ) { // 掃描次數
	for ( j = 0; j < i; j++ ) {
		if (data[j] > data[j+1]) { // 比較，交換次數
			temp = data[j]; // 比較相鄰兩數，如果第一數較大則交換
			data[j] = data[j+1];
			data[j+1] = temp;
		}
	}
	process.stdout.write('第 ' + ( 8 - i) + ' 次排序結果是 : ');
	// 把各次掃描後結果印出
	for ( j = 0; j < 8; j++) {
		process.stdout.write(data[j] + ' ');
	}
	console.log();
}
console.log('排序後結果 : ');
for ( j = 0; j < 8; j++) {
	process.stdout.write(data[j] + ' ');
}