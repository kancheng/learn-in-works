class tree {
	constructor () {
		this.data = 0;
		this.left = null;
		this.right = null;
	}
}

var create_tree = (root, val) => { // 建立二元樹函數
	newnode = new tree();
	newnode.data = val;
	newnode.left = null;
	newnode.right = null;
	if (root == null) {
		root = newnode;
		return root; 
	} else {
		current = root;
		while (current != null) {
			backup = current;
			if (current.data > val) {
				current = current.left;
			} else {
				current = current.right;
			}
		}
		if (backup.data > val) {
			backup.left = newnode;
		} else {
			backup.right = newnode;
		}
	}
	return root;
}

var search = (ptr, val) => { // 搜尋二元樹副程式
	i = 1;
	while (true) { // 沒有找到就傳回 null
		if (ptr == null) {
			return null;
		} 
		if (ptr.data == val) { // 節點值等於搜尋值
			process.stdout.write('共搜尋 ' + i + ' 次' + '\n');
			return ptr;
		} else if (ptr.data > val) { // 節點值大於搜尋值
			ptr = ptr.left;
		} else {
			ptr = ptr.right;
		}
		i += 1;
	}
}

// Main
arr = [ 7, 1, 4, 2, 8, 13, 12, 11, 15, 9, 5];
ptr = null;
process.stdout.write('[原始陣列內容] \n');
for ( i = 0; i < 11; i++ ) {
	ptr = create_tree(ptr, arr[i]); // 建立二元樹
	process.stdout.write('[' + arr[i] + '] ');
}
process.stdout.write('\n');
// npm install prompt-sync
const prompt = require ('prompt-sync')();
const data = parseInt(prompt('請輸入搜尋值 : '));
if (search(ptr, data) != null) { // 搜尋二元樹
	process.stdout.write('您要找的值 [' + data + '] 有找到 !! \n');
} else {
	process.stdout.write('您要找的值沒有找到 !! \n');
}

