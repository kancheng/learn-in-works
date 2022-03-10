/*
* Radix Sort ，基數排序法，由小到大
*/

var inputarr = (data, size) => {
	for (i = 0; i < size; i++ ) {
		data[i] = Math.floor(Math.random() * 1000); // 設定 data 值，最大為 3 位數
	}
}

var showdata = (data, size) => {
	for (i = 0; i < size; i++ ) {
		process.stdout.write(data[i] + ' ');
	}
	console.log();
}

var radix = (data, size) => {
	for ( n = 1; n <= 100; n = n * 10) { // n 為基數，由個位數開始排序
		// 設定暫存陣列，[0 ~ 9 位數] [資料個數]，所有內容均為 0
		var tmp = new Array();
		for ( var i = 0; i < 10; i++ ) {
			tmp[i] = new Array();
			for (var j = 0; j < 10; j++ ) {
				tmp[i][j] = 0;
			}
		}
		for ( i = 0; i < size; i++ ) { // 比對所有資料
			m = Math.floor((data[i]/n)) % 10;
			// m 為 n 位數的值，如 36 取十位數 (36/10) % 10 = 3
			tmp[m][i] = data[i]; // 把 data[i] 的值暫存於 tmp 裡
		}
		k = 0;
		for ( i = 0; i < 10; i++ ) {
			for ( j = 0; j < size; j++) {
				if (tmp[i][j] != 0) { // 因一開始設定 tmp = [0] 故不為 0
					data[k] = tmp[i][j];
					// data 暫存在 tmp 裡的值，把 tmp 裡的值放回 data[ ] 裡
					k++;
				}
			}
		}
		process.stdout.write('經過 ' + n + ' 位數排序後 : ');
		showdata(data, size);
	}
}

var data = new Array(100);
for ( i = 0; i < 100; i++ ) {
	data[i] = 0;
}
// npm install prompt-sync
const prompt = require ('prompt-sync')();
const size = prompt('請輸入陣列大小 (100 以下)');
process.stdout.write("請輸入原始資料是 : ");
console.log();
inputarr(data, size);
showdata(data, size);
radix(data, size);