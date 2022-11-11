# web

- https://www.casper.tw/javascript/2018/01/01/javascript-eslint/

## Details

```
Hex School JS 課程 2022 基礎
```

JS 直播班最終關卡 : https://hackmd.io/tZIlr0HTRKmKitFwdooqIw

## Week 1 - JS

1. 建立環境

- 新增 index.html、all.js

- 輸出語法 `alert("Hello world!!")` 觀看是否有成功


2. 宣告變數流程，以 excel 為例

- 宣告一個變數為 a，並賦予值為數字型別 1`let a = 1`

- 可先命名中文名稱，再來簡寫為英文

3. 原始型別 (Primitive Type)

* *number*
* *string*
* *boolean*
* *undefined*
* null
* symbol

> 學變數，讓電腦幫您記錄資訊
> 可用 let、const、var 來宣告變數
> 除了原始型別 (Primitive Type)外，還有物件型別。

型別 : https://developer.mozilla.org/zh-TW/docs/Web/JavaScript/Guide/Grammar_and_types#%E8%B3%87%E6%96%99%E5%9E%8B%E5%88%A5_data_types

4. JS 變數命名觀念

* 使用[駝峰式命名](https://zh.wikipedia.org/wiki/%E9%A7%9D%E5%B3%B0%E5%BC%8F%E5%A4%A7%E5%B0%8F%E5%AF%AB)

* 初期練習請都用小駝峰命名，例如 `isClose`、`fatherName`

5. 字串與數字型別講解

* 數字：計算機功能、支援格式、變數帶變數

* 字串：字串相加

* 賦值運算子：+=、-=、a++、a--

* 輔助語法：console.log

6. 小組抽考一

* 1 - 5 題目 : https://codepen.io/Bingbingboom/pen/OJgebwx?editors=0010

* 6 - 10 題目: https://codepen.io/Bingbingboom/pen/VwWJPPz?editors=0010

* 11 - 15 題目 : https://codepen.io/Bingbingboom/pen/LYLKWQX?editors=0010



7. 常見編譯錯誤，不要害怕錯誤

```
不要害怕程式，只要你相信程式，程式就會幫你/妳
```
* 單字拼錯，導致語法解析錯誤： `lat a= 1` 

* 呼叫錯誤：`let b = 1;console.log(c)`

* 撞到關鍵字 : `let if = 3`

關鍵字 : https://developer.mozilla.org/zh-CN/docs/Web/JavaScript/Reference/Reserved_words


卡斯伯常見 JS 錯誤 : https://wcc723.github.io/development/2020/09/16/chrome-js-alert/

MDN 常見錯誤 : https://developer.mozilla.org/zh-TW/docs/Web/JavaScript/Reference/Errors

8. 變數資料存放記憶體觀念 *

* 變數重要三劍客：記憶體位置、變數、型別

* 記憶體位置介紹：

- 記憶體圖 : https://cacoo.com/diagrams/1NI6DIM02F0zwNkk/D3C8C

- 影片延伸介紹 : https://www.youtube.com/watch?v=QuCu4iDpPTU

* 查詢記憶體位置：

- 範例Code : https://codepen.io/hexschool/pen/rNWwOPo?editors=0010

- 觀察記憶體快照 : https://developers.google.com/web/tools/chrome-devtools/memory-problems/heap-snapshots?hl=zh-tw

9. 記憶體考題

```
有幾個變數、幾個型別、幾個記憶體空間
```

- 題目一

```
let a = 1;
let b = 1;
```
- 題目二

```
let a = 1;
a = 2;
a = 3;
a='hello';
```

- 題目三

```
let a = 1;
a = 4;
a = a + 8;
```

- 題目四

```
let a = 2;
a*3;
```

- 題目五

```
let a = 2;
let b = 3;
a+=3;
```

### 記憶體接龍

- 第 1 題

```
// 1. console.log 的值為？
// 2.出現幾個變數、型別、記憶體空間?
let a ;
a = 1;
a = "hello";
console.log(a)
```

- 第 2 題

```
// 1. console.log 值為？
// 2.出現幾個變數、型別、記憶體空間?
let b = 3 ;
b=5;
let c = 4;
b=8;
c=c+b;
let d = b+c;
console.log(e)
```

- 第 3 題

```
// 1. console.log 值為？
// 2. 出現幾個變數、型別、記憶體空間?
let e=0;
e = 5;
e = "hello";
e = true;
e = 3;
e+=1;
console.log(e)
```

## Week 2 - 邏輯判斷

1. 比較運算子、邏輯運算子

* 比較運算子： >、>=、<、<=

* 等於、不等於： ==、!=

* 兩個等於與三個等於的差異

* 邏輯運算子：&&、||

2. if、else if、else

- 範例情境

-  if：是否需要帶雨具

-  if、else if：是否滿 18 歲

- if+變數累積：好寶寶徽章+=1

- if、else if、else：想吃什麼東西？最後選擇到 else

3. 流程圖與 whimsical 介紹

* 流程圖 : https://zh.wikipedia.org/wiki/%E6%B5%81%E7%A8%8B%E5%9B%BE

* whimsical 繪圖服務: https://whimsical.com/4oYtsHWjADWsieeNrjY1Xa

4. 情境拆解

- 步驟一：定義程式目的

- 步驟二：設定初始資料狀態

- 步驟三：依照目的進行**任務拆解**

> 1. if 常用在 如果、假如、是否、判斷的情境上

- 情境一：小華分數

> 小華考了國英數，國文考 10 分、英文考 60 分、數學考 100 分，他想起父親告訴他，如果他總分有達 240 分，就帶他去遊樂園，快來幫忙算算他是否有達到門檻

- 情境二：小美快樂指數
> 小美為了讓自己快樂，內心有個快樂指數，範圍是 0~10，10 是最快樂。當小美指數在 8 (含)以上時，會選擇宅在家，指數在 5~7 時會選擇去血拼，在 4(含) 以下時，會選擇跟人去唱卡拉ok。小美今天的快樂指數為 6，那麼他會想做什麼事呢？

> 額外題目：做完事情後，請幫小美將快樂指數調整成滿分 10 分

- 情境三：小明參加歌手牽手會 if 裡面包 if

> 小明去參加歌手牽手會，到門口時，守衛問他說，有沒有帶入場券，小明亮出入場券後進入了會場，隨後想排隊跟歌手牽手時，又被第二個守衛擋住，問他說，他有沒有買 5000 張以上 DVD？但因為小明只有買 3000 張 DVD，小明只好忍痛離開，並下定決心要將這過程記錄下來，下次一定要握到手！


5. 題目練習 :

* 16 - 20 : https://chalk-freedom-ec6.notion.site/Part-1-16-20-3ce35cf01dbc4967820e49644a007960

* 21 - 25 : https://www.notion.so/Part-2-21-25-9955a71c4cdc4df5bc61d3e9b822a078

* 26 - 30 : https://www.notion.so/Part-3-26-30-d113f871cec34d08b97bedfbcdb96de0


## Week 3 - 物件跟陣列資料處理

```
定義資料結構得仰賴陣列與物件
```

1. 陣列

* 基本設定、讀取陣列、賦予新變數

* 抓取長度(length)、push、unshift、pop、splice

```
let colors = ["red","black","pink"];
let liaoLikeColor = colors[2];
let books = [5,30,400,100]
colors.splice(1,1); //起使位置,要往後刪除幾筆資料
```

2. 物件

* 為什麼要有物件？以房子為例子

* 物件寫法教學

* 如何讀取物件的值、+=

* 新增、修改方式

```
//讀取物件屬性方法
let home = {
    motherName: "mary1",
    "001":"hello"
}
let a = 'motherName';
console.log(home[a]);

// 使用時機 001
```
3. 題目區

前鎮區有兩戶人家，第一戶家庭爸爸叫 Tom、兒子叫 Mark、第二戶家庭爸爸叫 John、兒子叫 Jack

``` JavaScript
//選項 A
let data = [
  {
    fatherName:"Tom",
    sonName:"Mark"
  },{
    fatherName:"John",
    sonName: "Jack"
  }
]
// 選項 B
let data = {
  father1Name:"Tom",
  son1Name:"Mark",
  father2Name:"John",
  son2Name: "Jack"
}
```

**一個水果攤有2種水果，香蕉有8個，蘋果有10個**
``` JavaScript
// 選項 A
let fruitStandData =[
  {
    fruitName:'banana',
    num: 8
  },
  {
    fruitName: 'apple',
    num: 10
  }
]
// 選項 B 
let fruitStandData ={
  fruitType: [
    {
      fruitName: 'banana',
      num: 8
    },
    {
      fruitName: 'apple',
      num: 10
    }
  ]
}

```

**Mark 有間旅館，房型有單人房與雙人房，並提供游泳服務**

```
//選項A
let hotelData = {
  singleRoomNormalDayPrice: 1380,
  singleRoomHolidayPrice: 1500,
  singleRoomName: "單人房",
  doubleRoomHolidayPrice: 2380,
  doubleRoomHolidayPrice: 2500,
  doubleRoomName: "雙人房",
  swimming: true,
  boss: "Mark"
}

//選項B
let hotelData = {
  items: [
    {
      
      normalDayPrice: 1380,
      holidayPrice: 1500,
      name: "單人房"
    },
    {

      normalDayPrice: 1380,
      holidayPrice: 1500,
      name: "雙人房"
    }
  ],
  swimming: true,
  boss: "Mark"
}
```

4. 陣列與物件整合運用

* 安裝 JSON view : https://chrome.google.com/webstore/detail/jsonview/chklaanhfefbnpoihckbnefhakgolnmc?hl=zh-TW


5. 陣列與物件使用時機

* 陣列使用時機：當資料需要使用`大量`且`同性質`的資料

* 物件使用時機：要描述一個東西對應的特徵和行為。


6. 資料集

* 高雄 open data : https://data.kcg.gov.tw/dataset?res_format=JSON

* 國中各校人數統計 JSON : https://data.tainan.gov.tw/dataset/junior-number/resource/4f56ba22-0b13-4570-8be6-2d66483ffa5f

* TDX API : https://tdx.transportdata.tw/api-service/swagger

* 台南景點資料 : https://www.twtainan.net/data/attractions_zh-tw.json

* 輕軌 : https://api.kcg.gov.tw/api/service/get/4278fc6a-c3ea-4192-8ce0-40f00cdb40dd
- 總共有幾個車站？

* 2021 前端薪資調查，共 450 多份 : https://raw.githubusercontent.com/hexschool/2021-ui-frontend-job/master/frontend_data.json

- 摘要圖表 : https://docs.google.com/forms/d/e/1FAIpQLScJfMnHg27iDUG3aAecClJQMudzxiLpXsHfMXkhmDKTYKybcA/viewanalytics

* 高雄里長 : https://cabu4.kcg.gov.tw/KcgRegion/OpenData/%E9%87%8C%E9%95%B7%E9%80%9A%E8%A8%8A%E9%8C%84.JSON

- 顯示有幾個里長？ 顯示每個里的里長姓名


7. 搞懂 JSON 格式後，你可以看懂

* Imgur 圖片服務上傳工具 : https://apidocs.imgur.com/

* Imgur API : https://apidocs.imgur.com/#c94c8719-fe68-4854-b96d-70735dd8b2bc

* 公共運輸整合資訊 : https://ptx.transportdata.tw/PTX/Service

* 垃圾車追蹤 API : https://data.kcg.gov.tw/dataset/kcgoa-00000580-930/resource/99b51a03-7c0d-4b8f-a7f9-967872bc88ef

* 新聞 API : https://newsapi.org/


8. 題目 :

* 31 - 35 : https://chalk-freedom-ec6.notion.site/Part-1-31-35-040557b80c30419385242d27da5da443

* 36 - 40 : https://chalk-freedom-ec6.notion.site/Part-2-36-40-b24015aa677540f48a23be073fb37219

* 41 - 45 : https://chalk-freedom-ec6.notion.site/Part-3-41-45-8e15acb6090b412d896c844b7f6f7801

* 任務 : 請描述此段程式碼，哪裡用到物件 push 與取值概念

- https://codepen.io/hexschool/pen/VwmGZBd

- https://codepen.io/kancheng/pen/RwJVbwa


## Week 4 - 函式設計

1. function 寫法教學 - 設定指令

- 以一天會做的行為當作例子
- 參數寫法介紹
    - 加法器
- return 寫法介紹
    - let 宣告
    - return 多個範例

2. if 與 function 的差別

- 直接寫 if 的話，.js 裡只會執行一次

- 寫 function 的話，可以依照自己需求，執行多次執行指令

3. input output 練習

* 示意流程圖 : https://whimsical.com/RTJhrsaGwpZ8NbXvQjutB7

4. 題目列表

**字串相加**

``` javascript
//input
talk("早上好");
talk("晚上好");

// output
// "hi，早上好"
// "hi，晚上好"
```

**數字處理**

``` javascript
let data = 0;
//input
count(2);
count(3);
count(5);

// output
//2
//5
//10
```

**數字**

``` javascript
//input
count(2); 
count(3); 
count(5); 

// output
// 4
// 9
//25
```

**兩位數四舍五入**
``` javascript
twoFixed(1.8888) 
twoFixed(3.1234)

// output
// 1.89
// 3.13
```

**BMI** 

``` javascript
calcBmi(178,69) 

//output
//21.78

```

**檢查是否需要帶雨具+if**

``` JavaScript
checkWeater("雨天"); // 要帶雨具
checkWeater("晴天"); //不用帶雨具
```

**增加陣列資料**

``` JavaScript
let data = [];
add("hello"); 
add("你好嗎？"); 

// output 
// ["hello","你好嗎？"]

```

**增加陣列物件資料**

``` JavaScript
let data = [];
add("洧杰","男生"); 
add("葉子","女生"); 

// output 
//[
// {name:"洧杰",sex:"男生"},
// {name:"葉子",sex:"女生"}
//]

```

**取物件資料**

``` JavaScript
const bmiStatesData = {
  "overThin": {
    "state": "過輕",
    "color": "藍色"
  },
  "normal": {
    "state": "正常",
    "color": "紅色"
  }
}
checkBmiStates("overThin"); //你的體重過輕，指數為藍色
checkBmiStates("normal"); //你的體重正常，指數為紅色
```

5. function 裡面的 return 介紹

``` =javascript
function power(num){
 console.log(num*num);
}
 let numNum = power(5);
```

6. 題目 : 

* 46 - 50 : https://chalk-freedom-ec6.notion.site/Part-1-46-50-3b71ce9efb0d4f7c9803961e27a39264

* 51 - 55 : https://chalk-freedom-ec6.notion.site/Part-2-51-55-c6e273e42f314308872fc098267cade4

* 56 - 60 : https://chalk-freedom-ec6.notion.site/Part-3-56-60-5ee63fa6f38140228f91312ff2d8513a

- 週末任務

- 張貼 kata YouTube 影片 (15min內)，並提供 codepen

```
此為 BMI kata 分享區，請在討論串 上分享：
1.你今天 BMI kata 練習第幾遍？
2.覺得學習過程中，哪些細節可以優化？
3.下次練習，你想刻意練習哪些內容？
```

Example - 洧杰練 Vim 範例 : https://www.youtube.com/watch?v=eRLAKhi-6HE&list=PL3TsqJC8EmwTSlkFE7Zu-Bt6HqDG1fH_U


### Week 4 sub.

- https://quip.com/keMRASH6YVGb

1. 複習陣列

順序（序列）和值 → key value

```
const array = ['小新', 4, false];
```

- 陣列取值

```
array[0]; // '小新'
array[1]; // 4
array[2]; // false
```

- 賦值

push() → methods 方法

```
array.push({pet:'小白'})
```

2. 複習物件

key → 屬性 value ->值

```
const obj = { 
    name: '小新', 
    age: 4, 
    isStudent: false 
}
```

- 物件取值（點記號與中括號）

```
obj.name; //'小新'
obj.age;
obj.isStudent;

// or

obj['name'];
obj['age'];
obj['isStudent'];

// 1) 帶的是變數
// 2) 特殊符號
```

- 賦值

```
obj.pet = '小白';

obj.name = '小心'
```


3. 複習函式

- 宣告變數

```
const myName = '小新';
const array = [1,2,3];
const obj = {a:'a', b:'b', c:'c'}
```

- 使用變數

```
console.log(myName)
```

- 宣告函式

```
function greeting(){
    ...
}
```

- 執行函式

```
greeting()
```

4. 第四週作業

從 input 和 output 去判斷要做什麼事

- Level1

printBmi(178, 20) >> 印出 console.log 文字為「您的體重過輕」

題目有提供身高和體重 → 算出 BMI → 判斷狀態

BMI 算式＋區間xx~xx 代表的狀態 →  google或是老師的影片

- https://codepen.io/AliceChiang/pen/JjbVNKZ?editors=1010

- Level2

printBmi(178, 20) >> 印出 console.log 文字為「您的體重過輕，健康指數為藍色」

題目提供資訊：狀態＋顏色
需要多印出健康指數：顏色

要拿題目給的資訊來找出狀態和顏色

- https://codepen.io/AliceChiang/pen/GRNLmqb?editors=0011


```
function resultBmi(bmi) {
 
      let status = '';
      //跑第一次 if 判斷出區間，存了 status
      if (bmi < 18.5) {
        status = "overThin";
        // console.log("您的體重過輕，健康指數為藍色");
      } else if (18.5 <= bmi && bmi < 24) {
        status = "normal";
        // console.log("您的體重正常，健康指數為紅色");
      } else if (24 <= bmi && bmi < 27) {
        status = "overWeight";
        // console.log("您的體重過重，健康指數為澄色");
      } else if (27 <= bmi && bmi < 30) {
        status = "mildFat";
        // console.log("您的體重輕度肥胖，健康指數為黃色");
      } else if (30 <= bmi && bmi < 35) {
        status = "moderateFat";
        // console.log("您的體重中度肥胖，健康指數為黑色");
      } else if (bmi >= 35) {
        status = 'severeFat';
        // console.log("您的體重重度肥胖，健康指數為綠色");
      } else {
        console.log("輸入錯誤")
      }
      
      // 跑第二次 if ，將第一次 if 存的 status 帶入，拿到 state 和 color
      if (status !== "") {
        console.log(
          `您的體重 ${bmiStatesData[status].state}，健康指數為 ${bmiStatesData[status].color}`
        );
      }
      
    }
```

- Level3

printBmi(178, 20) >> 印出 console.log 文字為「您的體重過輕，健康指數為藍色」
printBmi(178, 70) >> 印出 console.log 文字為「您的體重正常，健康指數為紅色」
printBmi(178, 85)>> 印出 console.log 文字為「您的體重過重，健康指數為澄色」

> showHistoryData() >> 印出 console.log 文字為「您總共計算 3 次 BMI 紀錄，最後一次 BMI 指數為 26.83，體重過重！健康指數為澄色！」

要有紀錄，印出紀錄內的狀態和顏色
使用 bmiHistoryData 來儲存記錄
使用 showHistoryData 來跑全部的紀錄資料

需要把每次的執行的結果都存起來，只存需要的 data

```
bmiHistoryData = [
   { status:‘normal‘, bmi: 20 }
]
用 status 去判斷出 bmiStatesData 裡面的 color 和 state
```

> 步驟：空陣列存放資料(bmi+status) → 透過 satus 去資料集比對出 color 和 state → 最後組出題目要的資料內容

程式碼：

```
function printBmi(height, weight) {
      let bmi = (weight / ((height / 100) * (height / 100))).toFixed(2);
      resultBmi(bmi);
}
    
let bmiHistoryData = []; //新增空陣列存放每次bmi的紀錄

const bmiStatesData = {
      "overThin": {
        "state": "過輕",
        "color": "藍色"
      },
      "normal": {
        "state": "正常",
        "color": "紅色"
      },
      "overWeight": {
        "state": "過重",
        "color": "澄色"
      },
      "mildFat": {
        "state": "輕度肥胖",
        "color": "黃色"
      },
      "moderateFat": {
        "state": "中度肥胖",
        "color": "黑色"
      },
      "severeFat": {
        "state": "重度肥胖",
        "color": "綠色"
      },
    }

    function resultBmi(bmi) {
      let status = '';
      if (bmi < 18.5) {
        status = "overThin";
      } else if (18.5 <= bmi && bmi < 24) {
        status = "normal";
      } else if (24 <= bmi && bmi < 27) {
        status = "overWeight";
      } else if (27 <= bmi && bmi < 30) {
        status = "mildFat";
      } else if (30 <= bmi && bmi < 35) {
        status = "moderateFat";
      } else if (bmi >= 35) {
        status = 'severeFat';
      } else {
        console.log("輸入錯誤")
      }
      if (status !== "") {
        bmiHistoryData.push({bmi:bmi, status:status}) //因為最後的結果需要bmi值以及狀態和顏色，於是將 bmi 和 status 存到 bmiHistoryData 陣列
        // console.log(bmiHistoryData)
        console.log(
          `您的體重 ${bmiStatesData[status].state}，健康指數為 ${bmiStatesData[status].color}`
        );
      }
    }

   
function showHistoryData(){
    const totalNum = bmiHistoryData.length;
    const lastNum = totalNum - 1;
    const lastState = bmiHistoryData[lastNum].state; //overweight
    
    console.log(`您總共計算 ${totalNum} 次BMI紀錄，
                             最後一次BMI指數為 ${bmiHistoryData[lastNum].bmi}，
                             體重 ${bmiStatesData[lastState].state}！
                             健康指數為 ${bmiStatesData[lastState].color}！`)
}
showHistoryData();

printBmi(178, 20);
printBmi(178, 70);
printBmi(178, 85);
```


## Week 5 - DOM & forEach 語法

1. Note

- 先求有再求好

- 先熟悉程式語言，再熟悉熱鍵 : https://github.com/hexschool/VSCode_Hotkey_Translation

- 熟悉熱鍵，再熟悉英打 : https://www.youtube.com/playlist?list=PLYrA-SsMvTPOxjOi9BvWLJcbGLULH-uQF


2.  DOM 文件物件模型

* 取 DOM： `document.querySelector("CSS選擇器")`

* DOM 內新增文字節點：`document.querySelector("CSS選擇器").textContent = "hello world"`;

* DOM 內新增 HTML：`document.querySelector("CSS選擇器").innerHTML = "<h2>新增標題</h2>"`;

* 程式碼範例 : https://codepen.io/hexschool/pen/wvoRboe?editors=1010

- https://codepen.io/kancheng/pen/wvXdwep

![](https://i.imgur.com/mFFO0hR.jpg)

> textContent 是否能穿插 HTML tag？


3. forEach 語法教學

* 為什麼要學 forEach : https://www.hexschool.com/2017/09/01/2017-09-01-javascript-for/

> [2,3,5] 裡面的文字你會如何加總？

4.  forEach 語法講解

```javascript=
let data = [3,30,100]
data.forEach(function(item,index,ary){
    console.log(item,index,ary)
})
```

5. forEach 陣列數字累加

```javascript=
let data = [3,30,100];
let total=0;
data.forEach(function(item,index,ary){
    total+=item;
})
```

6. forEach 物件裡面的數字累加

```javascript=
let data = [
  {
    num: 10
  },
  {
    num: 30
  },
  {
    num: 100
  }
];
let total = 0;
data.forEach(function(item, array, ary){
  total+=item.num;
})
```

7. forEach + innerHTML

* 範例零 ： https://codepen.io/hexschool/pen/wvoRboe?editors=1010

* 範例一 - 字串累加 ： https://codepen.io/hexschool/pen/WNoLBjd?editors=1010

* 範例二 ： https://codepen.io/hexschool/pen/GRNParj?editors=1010

* 以第五關主線任務為例 ： https://github.com/hexschool/js-training/blob/main/travelApi.json

* CSS 現成模版 ： https://codepen.io/hexschool/pen/poNqmEL


8. forEach + if

* 男生共有幾位 : https://codepen.io/hexschool/pen/yLVGWpx?editors=1010

* 國中學校人數 : https://data.tainan.gov.tw/dataset/junior-number/resource/4f56ba22-0b13-4570-8be6-2d66483ffa5f

* 練習 : https://codepen.io/liao/pen/OJjzPWe?editors=0010

* 高雄里長資訊 : https://cabu4.kcg.gov.tw/KcgRegion/OpenData/%E9%87%8C%E9%95%B7%E9%80%9A%E8%A8%8A%E9%8C%84.JSON

* 練習 : https://codepen.io/liao/pen/XWaVJaa?editors=0010

9. 資料

* 2021 前端工程師薪資資料 : https://raw.githubusercontent.com/hexschool/2021-ui-frontend-job/master/frontend_data.json

* 欄位介紹 : https://github.com/hexschool/2021-ui-frontend-job

* 前端問卷資源 : https://docs.google.com/forms/d/e/1FAIpQLScJfMnHg27iDUG3aAecClJQMudzxiLpXsHfMXkhmDKTYKybcA/viewanalytics


### Week 5 sub.

- https://quip.com/ybH4AixtSrov/2021-JS-2

1. addEventListener

addEventListener() 事件監聽 : https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/addEventListener

```
target.addEventListener(type, listener [, options]); 
監聽的對象              事件類型, 監聽方法, 
                    event type
```

> event 事件？

- keyboard event 鍵盤事件:

> keydown 按下鍵盤觸發事件
> keypress 只會針對可以輸出文字符號的按鍵有效（ ESC、方向鍵、倒退鍵無效）
> keyup 放開鍵盤的那個剎那

- mouse event 滑鼠事件:

click /dblclick / mouseover

- 範例：

```
<input type="button" value="點我" class="btn">
```

```
const btn = document.querySelector(".btn");


// 寫法一
btn.addEventListener("click", function(){
    console.log("click!")
});

// 寫法二
btn.addEventListener("click", handleClick);

function handleClick(){
    console.log("click!")
}
```

addEventListener 小練習：https://hackmd.io/xIKzaf5kSXqj78BvAEB5vg

`addEventListener() 教學`



2. DOM Event 事件處理

使用者瀏覽網頁的行為會觸發許多「事件」，像是按下按鍵、移動滑鼠、點擊網頁元素。常見的事件型態包含 click, change, mousemove 等等，可以參考 MDN Event reference 了解更多事件型態。

- https://developer.mozilla.org/zh-TW/docs/Web/Events

許多 DOM 元素可透過設定去 **「監聽」** 事件，並在被觸發時執行處理事件的程式碼。

過去常見「on + 事件名稱」這樣的寫法，不過現在已經**不推薦使用**了。因為用這種寫法的 DOM 元素只能被綁定一個事件，且後面的宣告會覆蓋前面的觸發事件。

```htmlembedded=
<!-- HTML -->
<html>
<head>
  <title>「on + 事件名稱」 用法</title>
</head>
<body>
    <button onclick="triggerAlert(this);">行內寫法</button>
    <button id="btn">綁定元素寫法</button>
</body>
</html>
```

```js=
/* js */
function triggerAlert() {
    alert('點擊元素 1');
}
function triggerAlertSecond() {
    alert('點擊元素 2');
}

var el = document.querySelector('#btn');
el.onclick = triggerAlert;
/* 只會執行後面宣告的 triggerAlertSecond */
el.onclick = triggerAlertSecond;
```

3. addEventListener()

建議的作法是使用 addEventListener()，因為它可以對一個 DOM 元素同時綁定多個事件處理函數。以下介紹常用的三種參數:

`target.addEventListener("事件型態", 事件處理函數, 選項);`

* `事件型態`: 包含前述的  click, change, mousemove 等。
* `事件處理函數`: 觸發事件時所執行的函式。
* `選項`: 選擇性加入一些額外的事件監聽設定，在此先略過，之後的課堂會介紹。

以下為範例用法:

```htmlembedded=
<!-- HTML -->
<html>
<head>
  <title> addEventListener() 用法</title>
</head>
<body>
    <button id="btn">綁定元素寫法</button>
</body>
</html>
```
```js=
/* js */
function triggerAlert() {
    alert('點擊元素 1');
}
function triggerAlertSecond() {
    alert('點擊元素 2');
}

var el = document.querySelector('#btn');
/* 兩個事件處理函式都會執行 */
el.addEventListener('click', triggerAlert);
el.addEventListener('click', triggerAlertSecond);
```

問題 : 請 Fork 以下程式碼，修改 JS 的部分，使用 addEventListener() 在 `#box` 上綁定兩種事件型態:  `mouseenter` ,`click`。

* `mouseenter` 時會觸發 `triggerMouseenter()` 函式。

* `click` 時會觸發 `triggerClick()` 函式。

- https://codepen.io/znlcgmgk/pen/bGBroWz?editors=1111

- https://codepen.io/kancheng/pen/mdKmyWN?editors=1111

```
<!-- 解答
function triggerMouseenter(){
    console.log('滑入');
}
function triggerClick(){
    alert('點擊');
}
var el = document.querySelector('#box');
el.addEventListener('mouseenter', triggerMouseenter);
el.addEventListener('click', triggerClick);
-->
```

4. 第五週作業

- level1 將所有資料渲染在畫面上

資料格式 -> 陣列包物件 -> 陣列方法跑回圈 forEach

- level3 新增資料與篩選
新增資料 addEventListener

- filter 陣列方法
→ 對於陣列內的值做篩選
→ 會產生新陣列，所以可以用 變數接收 return 的結果

```
let array = [1, 2, 4, 6];
let newArray = array.filter(function(item){
    return item !== 6 // false
});
console.log(newArray); 

//[1,2,4]
```
- level3 篩選的部分

```
// filter
  const cacheData = data.filter(function(item) {
    if(location === item.area){
      return item;
    }
    // 全部地區
    if(!location) {
      return item;
    }
  })
```


## Week 6 - AJAX 操控伺服器

* 最終關卡任務 : https://hackmd.io/tZIlr0HTRKmKitFwdooqIw

1. AJAX 操作方式

* 為什麼要用 AJAX : https://zh.wikipedia.org/zh-tw/AJAX

![](rest-api.png)

2. 什麼是網路請求？

* 圖解發出請求的流程，以 Google 關鍵字為例子

```
https://www.google.com.tw/search?q=hello
```

* 用本地端電腦來講解 Chrome Network，並加入 all.js 與圖片

3. AJAX 撈取網路請求的方式

* XMLHttpRequest 介紹 : https://developer.mozilla.org/zh-TW/docs/Web/API/XMLHttpRequest/Using_XMLHttpRequest

* Fetch : https://developer.mozilla.org/zh-TW/docs/Web/API/Fetch_API/Using_Fetch#%E4%BD%BF%E7%94%A8_fetch_%E7%99%BC%E9%80%81%E8%AB%8B%E6%B1%82_request

* axios 套件 : https://github.com/axios/axios

- Web 操作底層是 XMLHttpRequest，get 範例 : https://github.com/axios/axios#example


4. axios

* axios 套件：https://github.com/axios/axios

* 環境安裝 CDN : https://github.com/axios/axios#installing

* axios 套件原理，哪些是原生，哪些是 axios 自己客製化的 : https://codepen.io/hexschool/pen/OJbqoeL?editors=0110

* 練習用的 JSON 連結：https://hexschool.github.io/ajaxHomework/data.json

* get 語法 : https://github.com/axios/axios#response-schema

* 非同步概念，錯誤範例程式碼 : https://codepen.io/hexschool/pen/xxRoWzB?editors=1010

* 結論：皆用函式傳遞

* 流程圖建議 : https://whimsical.com/WZEyuJGJUCLmw9rCEHhPp9

* 範例程式碼 : https://codepen.io/hexschool/pen/zYobJgp?editors=1010

``` JavaScipr

// https://hexschool.github.io/ajaxHomework/data.json
let ary =[];
axios.get('https://hexschool.github.io/ajaxHomework/data.json')
  .then(function (response) {
    console.log('資料有回傳了');  
    console.log(response.data);
    
    ary = response.data;
    // renderData();
  });

function renderData(){
  console.log(ary);  
  const title = document.querySelector('.title');
  title.textContent = ary[0].name;
}
console.log(ary); 
```

- 小試身手

```
https://ptx.transportdata.tw/MOTC/v2/Tourism/ScenicSpot?$top=30&$format=JSON
  <ul>
  <li>景點名稱一</li>
    <li>景點名稱二</li>
</ul>
```


5. 如何觀看該 API 是否提供介接，可使用 test-cors :

- https://www.test-cors.org/

- https://github.com/monsur/test-cors.org

6. 不行清單：

- 里長 : https://cabu4.kcg.gov.tw/KcgRegion/OpenData/%E9%87%8C%E9%95%B7%E9%80%9A%E8%A8%8A%E9%8C%84.JSON

- 台南公有停車場 : https://data.tainan.gov.tw/dataset/public_free_parking/resource/27234516-7820-4d86-8877-579151b2ce9c

7. 可以清單：

- BMI kata : https://raw.githubusercontent.com/hexschool/js-traninging-week6API/main/data.json

- 全國交通運輸 : https://ptx.transportdata.tw/MOTC?t=Tourism&v=2#!/Tourism/TourismApi_ScenicSpot

- 十分鐘雨量 - 用 open api : https://opendata.epa.gov.tw/Data/Contents/ATM00634/

- PM2.5 : https://opendata.epa.gov.tw/Data/Contents/ATM00766/

8. 網路請求種類

* MDN HTTP 請求方法 : https://developer.mozilla.org/zh-TW/docs/Web/HTTP/Methods

* ITHOME : https://www.ithome.com.tw/node/80062

* axios 皆有支援 : https://github.com/axios/axios#request-method-aliases

```
get, post, delete, put
```

9. ForEach+innerHTML

* 高雄私立幼稚園 : https://data.kcg.gov.tw/dataset/kaohsiung-private-baby-care-center


10. 切版，

- Bootstrap 切版 : https://hackmd.io/@YmcMgo-NSKOqgTGAjl_5tg/ryar-vGOd/%2FNdGKchTeRBqbkTMiQ2HSmw

- 洧杰老師 - 網頁切版練功手冊 : https://hackmd.io/eBRwdofjRVynA5aEEcIm7g?view


### Week 6 sub.

- https://quip.com/VjQrA81NsSHD

1. API  介面

資料：

https://raw.githubusercontent.com/hexschool/js-training/main/travelApi.json

串接 GET API 後拿回來的資料 (前端發送請求 → 伺服器接收後通知資料庫 → 資料庫給特定資料傳回伺服器 →伺服器再給前端)

```
console.log(res)
console.log(res.data)
```

- https://codepen.io/AliceChiang/pen/rNzqXWY

- https://codepen.io/kancheng/pen/MWXJPPW


2. HTTP 請求方法

常見的 請求方法：GET, POST, PUT, DELETE

- GET 取得資料

- POST 傳送資料 

3. 練習 POST

- API 文件：nodejs_ajax_tutorial : https://github.com/hexschool/nodejs_ajax_tutorial

- Method: POST → 請求方法為 POST

- URL → API 網址

- Data → Request Data 格式

- Success Response → 成功時的回應

有戳成功狀態碼就是 200。但不代表有這個帳號，所以又用 success 區分成功或失敗

- Error Response →  失敗時的回應

4. 實作小練習：https://codepen.io/hexschool/pen/jOVgyPr

- https://codepen.io/kancheng/pen/JjZNomx

* 註冊功能

* 登入功能



## Week 7 - 第三方 JS 套件整合

```
C3.js & 資料處理，以為小組任務例子
```

小組任務 : https://hackmd.io/LUaQGbDqTm2Wh8RoniSNVA

1. C3.js基本教學

* 環境安裝 : https://c3js.org/gettingstarted.html

* 環境範例程式碼 : https://codepen.io/hexschool/pen/poRzRXW?editors=1010

* 折線圖增加時間軸 : https://codepen.io/hexschool/pen/dyNbvOb?editors=1010

* 變更圖表 type 圓餅圖 : https://codepen.io/hexschool/pen/bGgbgXB?editors=1010

* 修改顏色與標題 : https://codepen.io/hexschool/pen/NWdKpXw

2. 陣列、物件資料處理

* 用套件不難，**工程師的價值在整合**

* 需將原始資料改為套件要的格式，範例 : https://codepen.io/hexschool/pen/xxgGggO?editors=0010

3. 觀念一：物件數據蒐集

* 計算陣列裡面各地區人數 : https://codepen.io/hexschool/pen/wvgwoBj

* 第五關小組任務最後一題 : https://codepen.io/hexschool/pen/yLgNVWZ

* 原始資料 : https://cabu4.kcg.gov.tw/KcgRegion/OpenData/%E9%87%8C%E9%95%B7%E9%80%9A%E8%A8%8A%E9%8C%84.JSON

4. 觀念二：Object.key 做資料關聯陣列再處理

- Object.key 用途：將所有屬性撈出來，變成一個陣列


```javascript=
const totalObj = {高雄: 2, 台北: 1, 台中: 1};
const areaAry = Object.keys(totalObj);
// area output ["高雄","台北","台中"]
```

* 用途一：透過資料關聯，做物件取值 - https://codepen.io/hexschool/pen/PoWqWPQ

* 用途二：重組陣列資料 I - https://codepen.io/liao/pen/GRvPQMZ?editors=1010

* 用途三：重組陣列資料 II-為 C3.js 所用 - https://codepen.io/liao/pen/eYEbVGj?editors=1011

```JavaScript=
const totalObj = {高雄: 2, 台北: 1, 台中: 1};
const areaAry = Object.keys(totalObj);
// area output ["高雄","台北","台中"]
let newData = [];
areaAry.forEach(function(item,index){
  let ary = [];
  ary.push(item);
  ary.push(totalObj[item]);
  newData.push(ary);
})
console.log(newData)
// c3 要的資料格式
//[["高雄", 2], ["台北",1], ["台中", 1]]
```

5. C3 套用

* 範例程式碼 : https://codepen.io/liao/pen/VwzqQrw?editors=0010

* AJAX LV1 JSON+C3 : https://codepen.io/hexschool/pen/VwPwRyd?editors=0010

* C3.js+LV1 AJAX+本地端新增資料 : https://codepen.io/hexschool/pen/ExZxMpv

6. 其他範例

* 前後端男女性比例 : https://codepen.io/liao/pen/XWaoaxV?editors=1010

* 上屆學長姐 BMI kata 投稿人數折線圖(時間序列折線圖) : https://codepen.io/liao/pen/LYjMjqX?editors=1010

