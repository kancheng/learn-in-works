/*
* Quick Sort
*/

var inputarr = (data, size) => {
	for ( i = 0; i < size; i++ ) {
		data[i] = Math.floor(Math.random() * 100) + 1;
	}
}

var showdata = (data, size) => {
	for ( i = 0; i < size; i++ ) {
		process.stdout.write(data[i] + ' ');
	}
	console.log();
}

var quick = ( d, size, lf, rg) => {
	// 第一筆鍵值為 d[lf]
	if (lf < rg) { // 排序資料的左與右
		lf_idx = lf + 1;
		while (d[lf_idx] < d[lf]) {
			if (lf_idx + 1 > size) {
				break;
			}
			lf_idx += 1;
		}
		rg_idx = rg;
		while (d[rg_idx] > d[lf]) {
			rg_idx -= 1;
		}
		while (lf_idx < rg_idx) {
			tmp = d[lf_idx];
			d[lf_idx] = d[rg_idx];
			d[rg_idx] = tmp;                         
			lf_idx += 1;
			while (d[lf_idx] < d[lf]) {
				lf_idx += 1;
			}
			rg_idx -= 1;
			while (d[rg_idx] > d[lf]) {
				rg_idx -= 1;
			}
		}
		tmp = d[lf];
		d[lf] = d[rg_idx];
		d[rg_idx] = tmp;
		for ( i = 0; i < size; i++ ) {
			process.stdout.write(d[i] + ' ');
		}
		console.log();
		quick( d, size, lf, rg_idx - 1 ); // 以 rg_idx 為基準點分成左右兩半以遞迴方式
		quick( d, size, rg_idx + 1 , rg); // 分別為左右兩半進行排序直至完成排序
	}
}

var data = new Array(100);
for ( i = 0; i < 100; i++ ) {
	data[i] = 0;
}
// npm install prompt-sync
const prompt = require ('prompt-sync')();
const size = prompt('請輸入陣列大小 (100 以下)');
inputarr (data, size);
process.stdout.write("請輸入原始資料是 : ");
showdata(data, size);
console.log('排序過程如下 : ');
quick(data, size, 0, size - 1);
process.stdout.write('最終排序結果 : ');
showdata(data, size);

