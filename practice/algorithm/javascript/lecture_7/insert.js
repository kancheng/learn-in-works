/*
* Insert
*/

let SIZE = 8; // 定義陣列大小

var showdata = (data) => {
	for ( k = 0; k < 8; k++ ) {
		process.stdout.write(data[k] + ' ');
	}
}

var insert = (data) => {
	for ( i = 0; i < SIZE; i++ ) {
		tmp = data[i]; // tmp 用來暫存資料
		no = i - 1;
		while ( no >= 0 && tmp < data[no] ) {
			data[no + 1] = data[no];  // 就把所有元素往後推一個位置
			no -= 1;
		}
		data[no + 1] = tmp;  // 最小元素放到第一個元素
	}
}

var data = [ 16, 25, 39, 27, 12, 8, 45, 63]; // Raw Data
console.log('Insert Sort - Raw Data : ');
showdata(data);
insert(data);
console.log();
console.log('排序後結果 : ');
showdata(data);