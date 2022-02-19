class tree {
	constructor () {
		this.data = 0;
		this.left = null;
		this.right = null;
	}
}

var inorder = (ptr) => { // 中序走訪副程式
	if (ptr != null) {
		inorder(ptr.left);
		process.stdout.write('[' + ptr.data + '] ');
		inorder(ptr.right);
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

data = [ 5, 6, 24, 8, 12, 3, 17, 1, 9]; // Raw Data
ptr = null;
root = null;
for ( i = 0; i < 9; i++ ) {
	ptr = create_tree(ptr, data[i]); // 建立二元樹
}
process.stdout.write('========================================\n');
process.stdout.write('排序完成結果 : \n');
inorder(ptr); // 中序走訪
process.stdout.write('\n');