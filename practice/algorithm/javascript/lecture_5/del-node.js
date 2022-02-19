
class employee {
	constructor () {
		this.num = 0;
		this.salary = 0;
		this.name = ' ';
		this.next = null;
	}
}

var del_ptr = (head, ptr) => {
	top = head;
	if (ptr.num == head.num) {
		head = head.next;
		process.stdout.write('已刪除第'+ ptr.num + 
			'的員工；姓名 :' + ptr.name + '薪資 : ' + ptr.salary);
	} else {
		while (top.next != ptr) {
			top = top.next;
		}
		if (ptr.next == null) {
			top.next = null;
			process.stdout.write('已刪除第'+ ptr.num + 
				'的員工；姓名 :' + ptr.name + '薪資 : ' + ptr.salary + '\n');			
		} else {
			top.next = ptr.next;
			process.stdout.write('已刪除第'+ ptr.num + 
				'的員工；姓名 :' + ptr.name + '薪資 : ' + ptr.salary + '\n');	
		}
	}
	return head;
}

findword = "";

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

//  npm install prompt-sync
const prompt = require ('prompt-sync')();

while (true) {
	const prompt = require ('prompt-sync')();
	const findword = prompt("請輸入要刪除的編號，若要結束請輸入(E) ，若要檢視請輸入(S):"); 
	if (findword == "E") {
		break;
	} else if (findword == "S"){
		ptr = head;
		console.log('\t 員工編號 \t 姓名 \t\t 薪水');
		console.log('\t==============================================');
		while (ptr != null) {
			process.stdout.write('\t [' + ptr.num + ' ]\t [' + ptr.name + ' ]\t [' + ptr.salary +']\n');
			ptr = ptr.next;
		}
	} else {
		ptr = head;
		find = 0;
		while (ptr != null) {
			if (ptr.num == findword) {
				ptr = del_ptr(head, ptr);
				find = find + 1;
				head = ptr;
			}
			ptr = ptr.next;
		}
		if (find == 0) {
			process.stdout.write("==== || 無此資料 || ====\n");
		} 	
	}

}
ptr = head;
console.log('\t 員工編號 \t 姓名 \t\t 薪水');
console.log('\t==============================================');
while (ptr != null) {
	process.stdout.write('\t [' + ptr.num + ' ]\t [' + ptr.name + ' ]\t [' + ptr.salary +']\n');
	ptr = ptr.next;
}