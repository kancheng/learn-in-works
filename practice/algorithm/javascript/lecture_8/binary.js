var bin_search = (data, val) => {
	low = 0;
	high = 49;
	while ( low <= high && val != -1) {
		mid = Math.floor((low + high)/2 );
		if ( val < data[mid]) {
			console.log ( val, '介於位置 ', low + 1,' [', data[low], '] 及中間值 ',
				high + 1, ' [', data[high], '] , 找左半邊');
			high = mid - 1;
		} else if (val > data[mid]) {
			console.log ( val, '介於中間值位置 ', mid + 1,' [', data[mid], '] 及 ',
				(high + 1) , ' [', data[high], '] , 找右半邊');
			low = mid + 1;
		} else {
			return mid;
		}
	}
	return -1;
}

val = 1;
var data = new Array ();
for ( i = 0; i < 50; i++ ) {
	data[i] = val;
	val = val + Math.floor(Math.random() * 5) + 1;
} 
while (true) {
	num = 0;
	// npm install prompt-sync
	const prompt = require ('prompt-sync')();
	val = prompt('請輸入搜尋鍵值 (1 - 150)，輸入 -1 離開');
	if (val == -1) {
		oppr = "";
		for ( i = 0; i < 50; i++ ) {
			oppr = data[i];
			process.stdout.write(oppr + ' ');
		} 
		console.log();
		break;
	}
	num = bin_search(data, val);
	if (num == -1) {
		console.log('======== 沒有找到 [', val ,']========');
	} else {
		console.log(' 在第 ', num + 1 ,' 個位置找到 [', data[num] , '] ');
	}
}
console.log('資料內容 : ');
for ( i = 0; i < 5; i++ ) {
	for ( j = 0; j < 10; j++ ) {
		process.stdout.write((i * 10 + j + 1) + ' - ' + data[ i * 10 + j ] + ' ');
	}
	console.log();
}


