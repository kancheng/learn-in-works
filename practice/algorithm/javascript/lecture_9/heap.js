var heap = (data, size) => {
	for (let i = Math.floor(size / 2); i > 0; i-- ) {
		ad_heap(data, i, size - 1);
	}
	process.stdout.write('\n');
	process.stdout.write('堆積內容 : ');
	for (let i = 1; i < size; i++) { // 原堆積樹內容
		process.stdout.write('[' + data[i] + '] ');
	}
	process.stdout.write('\n\n');
	for (let i = size - 2; i > 0; i-- ) {
		temp = data[1];
		data[1] = data [ i + 1];
		data[ i + 1] = temp;
		ad_heap(data, 1, i); // 處裡剩餘節點
		process.stdout.write('處理過程 : ');
		for (let j = 1; j < size; j++) {
			process.stdout.write('[' + data[j]+ '] ');
		}
		process.stdout.write('\n');
	}
}

var ad_heap = (data, i, size) => {
	j = 2 * i;
	tmp = data[i];
	post = 0;
	while ( j <= size && post == 0) {
		if (j < size) {
			if (data[j] < data[j + 1]) { // 找出最大節點
				j += 1;
			}
		}
		if (tmp >= data[j]) { // 若樹根較大，結束比較過程
			post = 1;
		} else {
			// 若樹根較小，則繼續比較
			data[Math.floor(j/2)] = data[j];
			j = 2 * j;
		}
	}
	data[Math.floor(j/2)] = tmp; // 指定樹根為父節點
}

data = [ 0, 5, 6, 4, 8, 3, 2, 7, 1]; //
size = 9;
process.stdout.write('原始陣列 : ');
for ( i = 1; i < size; i++ ) {
	process.stdout.write('[' + data[i] + '] ');
}
heap(data, size);
process.stdout.write('排序結果 : ');
for ( i = 1; i < size; i++ ) {
	process.stdout.write('[' + data[i] + '] ');
}

