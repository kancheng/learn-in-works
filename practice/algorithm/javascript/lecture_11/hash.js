const INDEXBOX = 10; // 雜湊表最大元素
const MAXNUM = 7; // 最大資料個數

// 列進陣列副程式
var print_data = (data, max_number) => {
	process.stdout.write('\t');
	for ( i = 0; i < max_number; i++) {
		process.stdout.write('['+ data[i] +'] ');
	}
	process.stdout.write('\n');
}

var create_table = (num, index) => {
	tmp = num % INDEXBOX; // 建立雜湊表副程式
	while (true) {
		if (index[tmp] == -1) { // 雜湊函數 = 資料 % INDEXBOX
			index[tmp] = num; // 如果資料對應的位置是空的，直接存入
			break; 
		} else {
			tmp = (tmp + 1) % INDEXBOX; // 否則往後找位置存放
		}
	}
}

// Main
index = [];
data = [];
process.stdout.write('原始陣列值 : \n');
for (let i = 0; i < MAXNUM; i++) { // 起始資料值
	data[i] = Math.floor( 1 + Math.random() * 19);
}
for (let i = 0; i < INDEXBOX; i++) { // 清除雜湊表
	index[i] = -1;
}
print_data(index, MAXNUM);

process.stdout.write('雜湊表內容 : \n');
for (let i = 1; i < MAXNUM; i++) { // 建立雜湊表
	create_table(data[i], index);
	process.stdout.write(' ' + data[i] + ' => '); // 列印單一元素的雜湊表位置
	print_data(index, INDEXBOX);
}

process.stdout.write('完成雜湊表 : \n');
print_data(index, INDEXBOX); // Print
