/*
* 八皇后
*/

const EIGHT = 8; // 定義最大堆疊容量
queen = []; // 存放 8 個皇后之列位
number = 0; // 計算總共有幾組解的總數
// 決定皇后存放的位置
// 輸出所需要的結果
var print_table = () => {
	let x = y = 0;
	number += 1;
	process.stdout.write('\n');
	process.stdout.write('八皇后問題的第' + number + '組解\n\t');
	for ( x = 0; x < EIGHT; x++) {
		for ( y = 0; y < EIGHT; y++) {
			if ( x == queen[y]) {
				process.stdout.write('[Q]')
			} else {
				process.stdout.write('[ ]')
			}
		}
		process.stdout.write('\n\t');
	}
}

// 測試在 (row, col) 上的皇后是否要遭受攻擊
// 若遭受攻擊則回傳為 1，否則回傳為 0
var attack = (row, col) => {
	let i = 0;
	atk = false;
	offset_row = offset_col = 0;
	while ((atk != 1) && i < col) {
		offset_col = Math.abs(i - col);
		offset_row = Math.abs(queen[i] - row);
		// 判斷兩皇后是否在同一列在同一對角線上
		if ((queen[i] == row || offset_row == offset_col)) atk = true;
		i = i + 1;
	}
	return atk;
}

var decide_position = (value) => {
	let i = 0;
	while (i < 8) {
		/* 是否受到攻擊的判斷 */
		if (attack( i, value) != 1) {
			queen[value] = i;
			if (value == 7) {
				print_table();
			} else {
				decide_position(value + 1);
			}
		}
		i++;
	}
}

// Main
decide_position(0);