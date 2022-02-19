/*
* 單向串列連結
*/

var concatlist = (ptr1, ptr2) => {
	ptr = ptr1;
	while (ptr.next != null) ptr = ptr.next;
	ptr.next = ptr2;
	return ptr1;
}

class employee {
	constructor () {
		this.num = 0;
		this.salary = 0;
		this.name = '';
		this.next = null;
	}
}
findword = 0;
data = [];
namedata1 = ['Allen','Scott','Marry','Jon',
	'Mark','Ricky','Lisa',' Jasica',
	'Hanson','Amy','Bob','Jack'];

namedata2 = ['May','John','Michael','Andy',
	'Tom','Jane','Yoko','Axel',
	'Alex','Judy','Kelly','Lucy'];

for ( i = 0; i < 12; i++) {
	data[i] = [];
	data[i][0] = i + 1;
	data[i][1] = Math.floor(51 + Math.random()*50);
}
const head1 = new employee();
if (!head1) {
	console.log('ERROR !! 記憶體配置失效 !!');
	return;
}
head1.num = data[0][0];
head1.name = namedata1[0];
head1.salary = data[0][1];
head1.next = null;
ptr = head1;

for (i = 1; i < 12; i++) {
	newnode = new employee();
	newnode.num = data[i][0];
	newnode.name = namedata1[i];
	newnode.salary = data[i][1];
	newnode.next = null;
	ptr.next = newnode;
	ptr = ptr.next;
}

for (i = 0; i < 12; i++) {
	data[i][0] = i + 13;
	data[i][1] = Math.floor( 51 + Math.random() * 50);
}

const head2 = new employee();
if (!head2) {
	console.log('ERROR! 記憶體配置失效 !!');
	return;
}

head2.num = data[0][0];
head2.name = namedata2[0];
head2.salary = data[0][1];
head2.next = null;
ptr = head2;

for (i = 1; i < 12; i++) {
	newnode = new employee();
	newnode.num = data[i][0];
	newnode.name = namedata2[i];
	newnode.salary = data[i][1];
	newnode.next = null;
	ptr.next = newnode;
	ptr = ptr.next;
}

i = 0;

ptr = concatlist(head1,head2);
console.log('兩個鏈結相加的結果 :');

while (ptr != null) {
	process.stdout.write('[' + ptr.num + ' ' + ptr.name + ' ' + ptr.salary + '] =>');
	i = i + 1;
	if ( i >= 3 ) {
		console.log();
		i = 0;
	}
	ptr = ptr.next;
}




