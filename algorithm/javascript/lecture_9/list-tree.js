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

data = [ 5, 6, 24, 8, 12, 3, 17, 1, 9]; // Raw Data
ptr = null;
root = null;
for ( i = 0; i < 9; i++ ) {
	ptr = create_tree(ptr, data[i]); // 建立二元樹
}
process.stdout.write('左子樹 : \n');
root = ptr.left;
while (root != null) {
	process.stdout.write(root.data + '\n');
	root = root.left;
}
process.stdout.write('========================================\n');
process.stdout.write('右子樹 : \n');
root = ptr.right;
while (root != null) {
	process.stdout.write(root.data + '\n');
	root = root.right;
}
process.stdout.write('\n');
