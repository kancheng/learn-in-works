/*
* Shell
*/

let SIZE = 8;

var showdata = (data) => {
	for ( i = 0; i < SIZE; i++ ) {
		process.stdout.write(data[i] + ' ');
	}
	console.log();
}

var shell = (data, size) => {
	k = 1; // k 列印計數
	jmp = parseInt(size/2);
	while (jmp != 0 ) {
		for ( i = jmp; i < size - 1; i++ ) { // i 為掃描次數，jmp 為設定間距位移量
			tmp = data[i]; // tmp 用來暫存資料
			j = i -jmp; // 以 j 來定位比較的元素 
			while (tmp < data[j] && j >= 0 ) { // 插入排序法
				data[j + jmp] = data[j];
				j = j - jmp;
			}
			data[jmp + j] = tmp;
		}
		process.stdout.write('第' + k + '次排序過程 : ');
		k = k + 1;
		showdata(data);
		console.log('==================================================');
		jmp = parseInt(jmp / 2); // 控制迴圈數
	}
}

var data = [ 16, 25, 39, 27, 12, 8, 45, 63]; // Raw Data
console.log('Shell Sort - Raw Data : ');
showdata(data);
console.log('==================================================');
shell(data, 8);