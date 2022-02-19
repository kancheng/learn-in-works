const MAX = 20;

var fib = (n) => {
	if ( n == 1 || n == 0 ) {
		return n;
	} else {
		return fib(n - 1) + fib( n - 2);
	}

}

var fib_search = (data, SearchKey) => {
	index = 2;
	// 費式數列的搜尋
	while (fib(index) <= MAX) {
		index += 1;
	}
	index -= 1;
	// index >= 2
	// 起始的費氏數
	RootNode = fib (index);
	// 上一個費式數
	diff1 = fib(index - 1);
	// 上兩個費式數即 diff2 = fib (index - 2)
	diff2 = RootNode - diff1;
	RootNode -= 1; // 這列運算式是配合陣列的索引是從 0 開始儲存資料
	while (true) {
		if (SearchKey == data[RootNode]) {
			return RootNode;
		} else {
			if (index == 2) {
				return MAX; // 沒有找到
			}
			if (SearchKey < data[RootNode]) {
				RootNode = RootNode - diff2; // 左子樹的新費氏數
				temp = diff1;
				diff1 = diff2; // 上一個費氏數
				diff2 = temp - diff2;  // 上二個費氏數
				index = index - 1;
			} else {
				if ( index == 3 ) {
					return MAX;
				}
				RootNode = RootNode + diff2; // 右子樹的新費氏數
				diff1 = diff1 - diff2; // 上一個費氏數
				diff2 = diff2 - diff1;  // 上二個費氏數
				index = index - 2;
			}
		}
	}

}
data = [ 5, 7, 12, 23, 25, 37, 48, 54,
	68, 77, 91, 99, 102, 110, 118, 120, 130, 135, 136, 150];
i = 0;
j = 0;
while (true) {
	// npm install prompt-sync
	const prompt = require ('prompt-sync')();
	val = prompt('請輸入搜尋鍵值 (1 - 150)，輸入 (-1) 離開 ');
	if (val == -1) { // 輸入值為 -1 就跳離迴圈
		oppr = "";
		for ( i = 0; i < data.length; i++ ) {
			oppr = data[i];
			process.stdout.write(oppr + ' ');
		} 
		console.log();
		break;
	}
	// 利用費氏搜尋法找尋資料
	RootNode = fib_search(data, val);
	if (RootNode == MAX) {
		console.log('======== 沒有找到 [', val ,']========');
	} else {
		console.log(' 在第 ', RootNode + 1 ,' 個位置找到 [', data[RootNode] , '] ');
	}
}
console.log('資料內容 : ');
for ( i = 0; i < 2; i++ ) {
	for ( j = 0; j < 10; j++ ) {
		process.stdout.write((i * 10 + j + 1) + ' - ' + data[ i * 10 + j ] + ' ');
	}
	console.log();
}
