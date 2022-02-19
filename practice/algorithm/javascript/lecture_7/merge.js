/*
* Merge Sort
*/
// 99999 為串列 1, 2 的結束數字不列入排序
list1 = [ 20, 45, 51, 88, 99999];
list2 = [ 98, 10, 23, 15, 99999];
list3 = [];

for ( i = 0; i < list1.length - 1; i++ ) {
	process.stdout.write(list1[i] + ' ');
}
console.log();
for ( i = 0; i < list2.length - 1; i++ ) {
	process.stdout.write(list2[i] + ' ');
}
console.log();

var merge_sort = () => {
	// 先使用選擇排序，再做合併
	select_sort(list1, list1.length - 1);
	select_sort(list2, list2.length - 1);
	console.log();
	process.stdout.write('第一組資料的排序結果 : ');
	console.log();
	for ( i = 0; i < list1.length - 1; i++ ) {
		process.stdout.write(list1[i] + ' ');
	}
	console.log();
	process.stdout.write('第一組資料的排序結果 : ');
	console.log();
	for ( i = 0; i < list2.length - 1; i++ ) {
		process.stdout.write(list2[i] + ' ');
	}
	console.log();

	for ( i = 0; i < 60; i++ ) {
		process.stdout.write('=');
	}
	console.log();

	My_Merge(list1.length - 1, list2.length -1 );

	for ( i = 0; i < 60; i++ ) {
		process.stdout.write('=');
	}
	console.log();

	process.stdout.write('合併排序法的最終結果 : ');

	for ( i = 0; i < list1.length + list2.length - 2; i++ ) {
		process.stdout.write(list3[i] + ' ');
	}
}

var select_sort = (data, size) => {
	for (base = 0; base < size - 1; base++) {
		small = base;
		for ( j = base + 1; j < size; j++) {
			if (data[j] < data[small]) {
				small = j;
			}
		}
		temp = data[small];
		data[small] = data[base];
		data[base] = temp;
	}
}

var My_Merge = (size1, size2) => {
	index1 = 0;
	index2 = 0;
	for ( index3 = 0; index3 < list1.length + list2.length - 2 ; index3++) {
		if (list1[index1] < list2[index2]) { // 比較兩數列，資料小的先存於合併後的數列
			list3.push(list1[index1]);
			index1 += 1;
			process.stdout.write('該數字' + list3[index3] + '取自第一組資料');
		} else {
			list3.push(list2[index2]);
			index2 += 1;
			process.stdout.write('該數字' + list3[index3] + '取自第二組資料');
		}
		console.log();
		process.stdout.write('目前的合併排序結果 : ');
		for ( i = 0; i < index3 + 1; i++ ) {
			process.stdout.write( list3[i] + ' ');
		}
		console.log();
	}
}

// Main
merge_sort();