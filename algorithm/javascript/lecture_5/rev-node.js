
class employee {
	constructor () {
		this.num = 0;
		this.salary = 0;
		this.name = ' ';
		this.next = null;
	}
}

data=[[1001,820929],[1002,810202],[1003,880730],[1004,910605], 
      [1012,940216],[1014,920616],[1018,940315],[1043,951218], 
      [1031,931219],[1037,921101],[1041,931126],[1046,921116]];
namedata=['Kan', 'Jun', 'Wang', 'Hu','Mark','Ricky', 
		'Lisa','Jasica','Hanson','Daniel','Axel','Jack'];
// 建立串首
head = new employee();

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
ptr = head;
i = 0;
process.stdout.write('原始員工串列節點資料 : \n');
while (ptr != null) { // Print
	process.stdout.write('[' + ptr.num + ' ] [' + ptr.name + ' ] [' + ptr.salary +'] -> ');
	i = i + 1;
	if (i >= 3) {
		console.log();
		i = 0;
	}
	ptr = ptr.next;
}
ptr = head;
before = null;
process.stdout.write('\n 反轉後的資料 : \n');

while (ptr != null) {
	process.stdout.write('[' + ptr.num + ' ] [' + ptr.name + ' ] [' + ptr.salary +'] -> ');
	i = i + 1;
	if (i >= 3) {
		console.log();
		i = 0;
	}
	ptr = ptr.next;
}
