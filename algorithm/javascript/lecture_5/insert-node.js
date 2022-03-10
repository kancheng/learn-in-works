
class employee {
	constructor () {
		this.num = 0;
		this.salary = 0;
		this.name = ' ';
		this.next = null;
	}
}

var findnode = (head,num) => {
	ptr = head;
	while (ptr != null) {
		if (ptr.num == num) return ptr;
		ptr = ptr.next;
	}
	return ptr;
}

var insertnode = (head, ptr, num, salary, name) => {
	InsertNode = new employee();
	if (!InsertNode) return null;
	InsertNode.num = num;
	InsertNode.salary = salary;
	InsertNode.name = name;
	InsertNode.next = null;
	if (ptr == null) {
		InsertNode.next = head;
		return InsertNode;
	} else {
		if (ptr.next == null) {
			ptr.next = InsertNode;
		} else {
			InsertNode.next = ptr.next;
			ptr.next = InsertNode;
		}
	}
	return head;
}

position = '';

data=[[1001,820929],[1002,810202],[1003,880730],[1004,910605], 
      [1012,940216],[1014,920616],[1018,940315],[1043,951218], 
      [1031,931219],[1037,921101],[1041,931126],[1046,921116]];
namedata=['Kan', 'Jun', 'Wang', 'Hu','Mark','Ricky', 
		'Lisa','Jasica','Hanson','Daniel','Axel','Jack'];
process.stdout.write('員工編號 薪水 \t員工編號 薪水 \t員工編號 薪水 \t員工編號 薪水\n');
process.stdout.write('==========================================================\n');
for ( i = 0; i < 3; i++) {
	for (j = 0; j < 4; j++) {
		process.stdout.write(data[j*3+i][0] + '\t' + data[j*3+i][1] + '\t');	
	}
	console.log();
}
process.stdout.write('==========================================================\n');
console.log();

// 建立串首
head = new employee();
head.next = null;

if (!head) {
	console.log('ERROR !! 記憶體配置失敗');
	return;
}

head.num = data [0][0];
head.name = namedata [0];
head.salary = data [0][1];
head.next = null;
ptr = head;

for (i = 1; i < 12; i++) {
	newnode = new employee();
	newnode.next = null;
	newnode.num = data[i][0];
	newnode.name = namedata[i];
	newnode.salary = data [i][1];
	newnode.next = null;
	ptr.next = newnode;
	ptr = ptr.next;
}

// npm install prompt-sync

while (true) {
	process.stdout.write('請輸入要插入的員工編號，若原無此資料 \n');
	const prompt = require ('prompt-sync')();
	const position = prompt("新增資料請輸入(Y)，若要結束請輸入(E) ，若要檢視請輸入(S):");
	if (position == "E") {
		break;
	} else if (position == "Y"){
		ptr = findnode (head, position);
		new_num = parseInt(prompt('請輸入編號 :'));
		new_salary = parseInt(prompt('請輸入薪水 :'));
		new_name = prompt('請輸入姓名 :');
		head = insertnode( head, ptr, new_num, new_salary, new_name);
	} else if (position == "S") {
		ptr = head;
		console.log('\t 員工編號 \t 姓名 \t\t 薪水');
		console.log('\t==============================================');
		while (ptr != null) {
			process.stdout.write('\t [' + ptr.num + ' ]\t [' + ptr.name + ' ]\t [' + ptr.salary +']\n');
			ptr = ptr.next;
		}
	}
	console.log();
}
ptr = head;
console.log('\t 員工編號 \t 姓名 \t\t 薪水');
console.log('\t==============================================');
while (ptr != null) {
	process.stdout.write('\t [' + ptr.num + ' ]\t [' + ptr.name + ' ]\t [' + ptr.salary +']\n');
	ptr = ptr.next;
}