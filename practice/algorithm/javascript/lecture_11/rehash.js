const INDEXBOX = 7; // 雜湊表元素
const MAXNUM = 13; // 資料個數

class Node {
	constructor (val) {
		this.val = val;
		this.next = null;
	}
}

indextable = []; // 宣告動態陣列

var create_table = (val) => { // 建立雜湊表副程式
	newnode = new Node(val);
	myhash = val % 7; // 雜湊函數除以 7 取餘數
	current = indextable[myhash];
	if (current.next == null) {
		indextable[myhash].next = newnode;
	} else {
		while (current.next != null) {
			current = current.next;
		}
		current.next = newnode; // 節點加在串列
	}
}

// 列進副程式
var print_data = (val) => {
	pos = 0;
	head = indextable[val].next; // 起始指標
	process.stdout.write('  ' + val + ' : \t'); // 索引位址

	while (head != null) {
		process.stdout.write('[' + head.val + ']-');
		pos += 1;
		if (pos % 8 == 7) {
			process.stdout.write('\t');
		}
		head = head.next;
	}
	process.stdout.write('\n');
}

// Main
index = [];
data = [];

for (let i = 0; i < INDEXBOX; i++) { // 清除雜湊表
	indextable[i] = new Node(-1);
}

process.stdout.write('Raw Data : \n');

for (let i = 0; i < MAXNUM; i++) { // 起始資料值
	data[i] = Math.floor( 1 + Math.random() * 29);
	process.stdout.write('[' + data[i] + '] ');
	if (i % 8 == 7) {
		process.stdout.write('\n');
	}
}

process.stdout.write('\n 雜湊表內容 : \n');
for (let i = 1; i < MAXNUM; i++) { // 建立雜湊表
	create_table(data[i]);
}
for (let i = 1; i < INDEXBOX; i++) { // Print
	print_data(i);
}
process.stdout.write('\n');
