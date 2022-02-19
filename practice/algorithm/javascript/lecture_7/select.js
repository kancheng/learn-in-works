/*
* Select
*/

var showdata = (data) => {
	for ( k = 0; k < 8; k++ ) {
		process.stdout.write(data[k] + ' ');
	}
}

var select = (data) => {
	for ( i = 0; i < 7; i++ ) {
		smallest = data[i];
		index = i;
		for ( j = i + 1; j < 8; j++) { // 由 i + 1 比較起
			if (smallest > data[j]) { // 找出最小元素
				smallest = data[j];
				index = j;
			}
		}
		tmp = data[i];
		data[i] = data[index];
		data[index] = tmp;
		console.log();
		process.stdout.write('第 ' + (i + 1) + ' 次排序結果 : ');
		showdata(data);
	}
}

var data = [ 16, 25, 39, 27, 12, 8, 45, 63]; // Raw Data
console.log('Select Sort - Raw Data : ');
for ( i = 0; i < 8; i++) {
	process.stdout.write(data[i] + ' ');
}
console.log();
console.log('=============================================');
select(data);
console.log();
console.log('=============================================');
console.log('排序後結果 : ');
for ( j = 0; j < 8; j++) {
	process.stdout.write(data[j] + ' ');
}
console.log();
console.log('=============================================');