
# JS

## HTML

```
<script type="text/javascript">
document.write("Hi");
document.write("9 + 4 + 8 + 7 =" + (9 + 4 + 8 + 7) + "<br>");
</script>
```

## Node.js

使用環境

### 版本

```
node -v
```

### 進入

```
node
```

### 離開

```
.exit
```

## Hello

```
console.log("Hello World");
```

## For-in

```
let data = ["a", "b", "c"];   
for (let x in data) {
  console.log(data[x]);
}
```

## For-Each

```
let data = ["a", "b", "c"]; 
data.forEach(function(x) {
  console.log(x);
})
```


## For-Of

```
let data = ["a", "b", "c"];  
for (x of data) {
  console.log(x);
}
```


## For

```
for ( i = 1; i <= 5; i++) {
    console.log(i);
}
```


## Do-While

```
let i = 1;
do {
    console.log(i);
i++;
} while(i <= 10)

console.log("i);
```


## Break

```
for (let a = 0 ; a <= 8 ; a++) {
    if (a === 2){
		console.log(a);
		continue;
	}
    if (a === 4) {
		console.log(a);
         break;
	}
    console.log("a = " + a);
}

```


## Array

```
n = new Array('1','2','3');
for (i = 0; i < n.length ; i++) {
	console.log( `第 ${i+1} 個陣列元素是 ${n[i]}`);
}
```

## IF ELSE

```
let n = Math.floor(Math.random() * 100);

if (n >= 5)
{	
    console.log(n + " 大於等於 5");
} else {
    console.log(n + " 小於 5");
}

n >= 5 ? (
    console.log(n + " 大於等於 5")
) : (
    console.log(n + " 小於 5")
);
```
## Parameter &  Return

```
function Avg(stu_Name='', stu_Math = 0, stu_Eng = 0) {  
	let tem =( stu_Math + stu_Eng ) / 2;
	return tem;
}

let avg = Avg("Stu", 90, 100);
console.log("平均成績：" + avg);
```

## Fountion

```
var f1 = () =>{
	// ...
}
function f2(){
	// ...
}
```

## IF-ELSE-IF

```
m = 6;  
if (2 <= m && m <= 4)
    console.log('春');    
else if ( 5 <= m && m <= 7)
    console.log('夏');
else if (m >= 8 && m <= 10)
    console.log('秋');
else if (m == 1 || (m >= 11 && m <= 12))
    console.log('冬');
else
    console.log('OwO !!!');
```

## Switch

```
let day;
day = 5;
switch (day) {
  case 0:
    day = "星期日";
    break;
  case 1:
    day = "星期一";
    break;
  case 2:
    day = "星期二";
    break;
  case 3:
    day = "星期三";
    break;
  case 4:
    day = "星期四";
    break;
  case 5:
    day = "星期五";
    break;
  case 6:
    day = "星期六";
}
console.log('輸出結果: ', day);
```

## NPM Prompt-Sync

要安裝套件

```
const prompt = require('prompt-sync')();
const n = prompt('Enter : ');
console.log(`Show : ${n}`);
```


## While

```
product = 1;
i = 1;
while (i < 6) {
    product = i * product;
    console.log(' i = ', i, '\t Product = ', product);
    i += 1;
}
console.log('\n 連乘積的結果 = ', product);
console.log();
```


## Write

```
process.stdout.write ('OwO //');
```


## OOP

```
class man{
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

	info() {
        return '(' + this.name + ', ' + this.age + ')';
    }
}

var obj = new man('Kan', '28');
console.log('Name: ', obj.name);
console.log('Name: ', obj.age);
```
