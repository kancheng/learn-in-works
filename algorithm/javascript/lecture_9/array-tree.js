length = 8;
data = [ 6, 3, 5, 9, 7, 8, 4, 2]; // Raw Data
btree = [];
for (i = 0; i < 16; i++ ) {
	btree[i] = 0;
}
process.stdout.write('原始陣列內容 : \n ');

for ( i = 0; i < length; i++ ) {
	process.stdout.write(' [' + data[i] + '] ');
}
process.stdout.write('\n');
for ( i = 0; i < length; i++ ) { // 把原始陣列中的值逐一比對
	for ( level = 1; btree[level] != 0; ) { // 比較樹根及陣列中的值
		if (data[i] > btree[level]) { // 如果陣列內的值大於樹根，則往右子樹比較
			level = level * 2 + 1;
		} else { // 如果陣列內的值小於或等於樹根，則往左子樹比較
			level = level * 2;
		} // 如果子樹節點的值不為 0 ，則再與陣列內的值比較一次
	}
	btree[level] = data[i]; // 把陣列值放入二元樹
}

process.stdout.write('二元樹內容 : \n');
for ( i = 1; i < 16; i++ ) {
	process.stdout.write(' ['+ btree[i] +'] ');
}
console.log();


