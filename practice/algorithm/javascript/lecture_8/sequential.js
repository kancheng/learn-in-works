val = 0;
var data = new Array ();
for ( i = 0; i < 80; i++ ) {
	data[i] = 0;
}
for ( i = 0; i < 80; i++ ) {
	data[i] = Math.floor(Math.random() * 150) + 1;
}
while ( val != -1 ) {
	find = 0;
	// npm install prompt-sync
	const prompt = require ('prompt-sync')();
	val = prompt('請輸入搜尋鍵值 (1 - 150)，輸入 (-1) 離開');

	for ( i = 0; i < 80; i++ ) {
		if (data[i] == val) {
			process.stdout.write(' 在第 ' + i + 1 + ' 個位置找到鍵值 [', data[i] , '] ');
			find += 1;
		}
	}
	if ( find == 0 && val != -1 ) {
		process.stdout.write('======== 沒有找到 [' + val + ']========');
	}
	console.log();
}
console.log('資料內容 : ');
for ( i = 0; i < 10; i++ ) {
	for ( j = 0; j < 8; j++ ) {
		process.stdout.write((i * 8 + j + 1) + ' [ ' + data[ i * 8 + j ] + ' ] ');
	}
	console.log();
}


