# web

- https://www.casper.tw/javascript/2018/01/01/javascript-eslint/

## Details

```
Hex School JS 課程 2022 基礎
```

- JS 直播班最終關卡 : https://hackmd.io/tZIlr0HTRKmKitFwdooqIw

- F2E 2022 : https://2022.thef2e.com/

- 2022 TheF2E 攻略資源 : https://hackmd.io/ofJD4K7iSI65V19zxC7d0w

- JSON Server : https://github.com/typicode/json-server

- JSON Server 教學 : https://hackmd.io/gOVsRiomTHO-T0utYhOx2g

- https://weij0.github.io/Web/docs/tags/json-server

- jQuery 也可以做到的互動效果 : https://hackmd.io/@hexschool/SydNNNIri

- https://www.youtube.com/watch?v=-ViXWhy7FW0

- https://github.com/simeydotme/pokemon-cards-css

- https://github.com/kancheng/pokemon-cards-css


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

0. Package

- https://fullcalendar.io/

- https://c3js.org/

- 拖曳連結可排序元素 - jQuery UI draggable Options connect To Sortable : https://codepen.io/kancheng/pen/yLEbXOm

- JS 实现列表的拖拽排序 : https://codepen.io/kancheng/pen/ExRmXZy

- Sortable : https://shopify.github.io/draggable/examples/simple-list.html

- https://github.com/Shopify/draggable/tree/master/examples/src/content/Sortable/SimpleList

- Sortable 拖曳效果 : https://codepen.io/kancheng/pen/KKemqmO


1. C3.js基本教學

* 環境安裝 : https://c3js.org/gettingstarted.html

* 環境範例程式碼 : https://codepen.io/hexschool/pen/poRzRXW?editors=1010

- https://codepen.io/kancheng/pen/NWzjgZW

* 折線圖增加時間軸 : https://codepen.io/hexschool/pen/dyNbvOb

- https://codepen.io/kancheng/pen/XWYRgLR

* 變更圖表 type 圓餅圖 : https://codepen.io/hexschool/pen/bGgbgXB

- https://codepen.io/kancheng/pen/GRGmEbz

* 修改顏色與標題 : https://codepen.io/hexschool/pen/NWdKpXw

- https://codepen.io/kancheng/pen/MWXmoNb

2. 陣列、物件資料處理

* 用套件不難，**工程師的價值在整合**

* 需將原始資料改為套件要的格式，範例 : https://codepen.io/hexschool/pen/xxgGggO

- https://codepen.io/kancheng/pen/ZERKJzL?editors=0110


3. 觀念一：物件數據蒐集

* 計算陣列裡面各地區人數 : https://codepen.io/hexschool/pen/wvgwoBj

- https://codepen.io/kancheng/pen/YzvVxKJ

* 第五關小組任務最後一題 : https://codepen.io/hexschool/pen/yLgNVWZ

- https://codepen.io/kancheng/pen/wvXdqvw

* 原始資料 : https://cabu4.kcg.gov.tw/KcgRegion/OpenData/%E9%87%8C%E9%95%B7%E9%80%9A%E8%A8%8A%E9%8C%84.JSON

4. 觀念二：Object.key 做資料關聯陣列再處理

- Object.key 用途：將所有屬性撈出來，變成一個陣列


```javascript=
const totalObj = {高雄: 2, 台北: 1, 台中: 1};
const areaAry = Object.keys(totalObj);
// area output ["高雄","台北","台中"]
```

* 用途一：透過資料關聯，做物件取值 - https://codepen.io/hexschool/pen/PoWqWPQ

- https://codepen.io/kancheng/pen/eYKWEYv

* 用途二：重組陣列資料 I - https://codepen.io/liao/pen/GRvPQMZ

- https://codepen.io/kancheng/pen/MWXmvYb

* 用途三：重組陣列資料 II-為 C3.js 所用 - https://codepen.io/liao/pen/eYEbVGj

- https://codepen.io/kancheng/pen/LYryjEr


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

* 範例程式碼 : https://codepen.io/liao/pen/VwzqQrw

- https://codepen.io/kancheng/pen/KKemvpM

* AJAX LV1 JSON+C3 : https://codepen.io/hexschool/pen/VwPwRyd

- https://codepen.io/kancheng/pen/abKWyOE

* C3.js+LV1 AJAX+本地端新增資料 : https://codepen.io/hexschool/pen/ExZxMpv

- https://codepen.io/kancheng/pen/QWxvMjy

6. 其他範例

* 前後端男女性比例 : https://codepen.io/liao/pen/XWaoaxV

- https://codepen.io/kancheng/pen/zYawdvE

* BMI kata 投稿人數折線圖(時間序列折線圖) : https://codepen.io/liao/pen/LYjMjqX

- https://codepen.io/kancheng/pen/dyKWzGg


### Week 7 sub.

- https://quip.com/6wbCAvu5OTmJ/2021-JS-4

- vee-validate : https://vee-validate.logaretm.com/v4/

1. Validate.js

- CDN

```
<script src="https://cdnjs.cloudflare.com/ajax/libs/validate.js/0.13.1/validate.min.js"></script>
```

- Constraints （約束條件）

```
{
    <attribute>: {
    <validator name>: <validator options>
    }
}
```

- 官網範例：

```
var constraints = {
  username: {
    presence: true,
    exclusion: {
      within: ["nicklas"],
      message: "'%{value}' is not allowed"
    }
  },
  password: {
    presence: true,
    length: {
      minimum: 6,
      message: "must be at least 6 characters"
    }
  }
};

validate({password: "bad"}, constraints);
// => {
//   "username": ["Username can't be blank"],
//   "password": ["Password must be at least 6 characters"]
// }
```

- validate function

```
validate(attributes, constraints, [options])
```

- 練習：

```
<form id="myForm">
    <input type="text" class="username" name="username">
    <input type="password" name="password">
</form>
```

```
const form = document.querySelector("#myForm");

...

//{ 
// "username":["Username can't be blank"], 
// "password":["Password can't be blank"] 
//}
```


- 常使用的 Validators

* email 信箱
* length 長度（名稱最多幾個字、密碼最多或最少幾個字）
* numericality 數量（大於0 小於10)
* presence 必填
* url 網址 （連結、圖片）

- 實作 : https://codepen.io/AliceChiang/pen/MWbBzKo

- https://codepen.io/kancheng/pen/gOKWxKp


## Week 8 - API 開發流程

1. API 介紹

- API Wiki 介紹 : https://zh.wikipedia.org/wiki/%E5%BA%94%E7%94%A8%E7%A8%8B%E5%BA%8F%E6%8E%A5%E5%8F%A3

 **發出網路請求 web API ，獲得你要的資訊**，例：
    * JSON：
    我要用 2021 前端工程師薪資資料 : https://raw.githubusercontent.com/hexschool/2021-ui-frontend-job/master/frontend_data.json?token=AAQWFQDSNRRXC6FBW7PDSETBOESVW
    
    來源 : https://github.com/hexschool/2021-ui-frontend-job

    取得所有人的 薪資 練功資訊
    * JSON：我要用 TDX API 服務，取得景點資料: https://tdx.transportdata.tw/data-service/basic
    * JSON：我要**申請** ，獲得相關新聞資訊 - NEWS API: https://newsapi.org/
    * 介面服務：我要**申請** Google Map : https://developers.google.com/maps/documentation/javascript/get-api-key?authuser=2

    服務，取得地圖資訊 - 定價 : https://cloud.google.com/maps-platform/pricing?hl=zh-tw
    
    限制方式 : https://mile.cloud/zh/resources/blog/195/Google%20Maps%20Platform%20%E7%9A%84%E6%9C%80%E4%BD%B3%E5%81%9A%E6%B3%95%EF%BC%9A%E9%99%90%E5%88%B6%20API%20%E9%87%91%E9%91%B0%20
    
    * 前後端介接：我要介接後端 API，開發前端介面功能

2. API 服務申請流程

3. API 種類

- 可以在瀏覽器端(JS)讀取使用，

- 不需申請帳號：2021 前端工程師薪資資料 : https://raw.githubusercontent.com/hexschool/2021-ui-frontend-job/master/frontend_data.json?token=AAQWFQDSNRRXC6FBW7PDSETBOESVW

- 可以在瀏覽器端(JS)讀取使用，需要申請帳號獲得金鑰： Google Map : https://developers.google.com/maps/documentation/javascript/adding-a-google-map#key

- 只能在**後端伺服器**讀取，不需申請帳號：台南旅遊人數 : https://data.tainan.gov.tw/dataset/tourists-statis

- 只能在**後端伺服器**讀取，需要申請帳號獲得金鑰：NEWS API : https://newsapi.org/

> 1.用 text-cors 觀察是否能介接 : https://www.test-cors.org/ 
> 2.瀏覽器端讀取關鍵 header 參數：Access-Control-Allow-Origin: *

4. API Key TOKEN 夾帶送出種類

- 網址：例如：Google Map : https://developers.google.com/maps/documentation/javascript/adding-a-google-map#key

- NEWS API : https://newsapi.org/

- request header，例如 故宮 OPEN DATA API 、六角最終關卡管理者端 API: https://openapiweb.npm.gov.tw/APP_Prog/cht/overview_cht.aspx

5. API 複習

- 高雄市輕軌 : https://data.kcg.gov.tw/dataset/lightrail-trafficvolume/resource/30dfc2cf-17b5-4a40-8bb7-c511ea166bd3

- 2021 前端工程師薪資資料 : https://raw.githubusercontent.com/hexschool/2021-ui-frontend-job/master/frontend_data.json?token=AAQWFQDSNRRXC6FBW7PDSETBOESVW

- 台南旅遊人數](https://data.tainan.gov.tw/dataset/tourists-statis

- 故宮 OPEN DATA API : http://210.69.170.105/popendata/APP_Prog/cht/overview_cht.aspx

- 旅館訂房網 API : https://challenge.thef2e.com/news/17

> 六角最終關卡是屬於哪一種？

6. 為什麼上面有些 API 資料都會有 ID 資訊？TDX API : https://ptx.transportdata.tw/MOTC?t=Tourism&v=2#!/Tourism/TourismApi_ScenicSpot_0

* 避免資料撞名，以身份證為例子
```
* 最終關卡有三種 ID
    * 產品 ID
    * 購物車 ID
    * 訂單 ID
```

7.  詳細講解最終關卡 API 例子

* API 教學文件 : https://www.notion.so/API-8b5b74eb052b451faf28013d76811fac#7598a1040d4f4c4aab5dec30f621d2b8

* API 申請平台 : https://livejs-api.hexschool.io/

* API 線上測試文件 : https://hexschool.github.io/hexschoolliveswagger/

* 最終關卡 XD 設計稿 : https://xd.adobe.com/view/a48b8617-4588-4817-9062-b62130dce916-f1d8/

* Codepen 範例程式碼 : https://codepen.io/hexschool/pen/JjERgYq?editors=0010

8. API 介紹

* API 前台規則流程圖 : https://whimsical.com/Eg1f7MCzy9UcBJjkpq8TLP

9. axios 網路請求

* MDN HTTP 請求方法 : https://developer.mozilla.org/zh-TW/docs/Web/HTTP/Methods

* 同個網址可以擁有多個方法請求

10. axios 請求規則

```
axios.request(config)
axios.get(url[, config])
axios.delete(url[, config])
axios.head(url[, config])
axios.options(url[, config])
axios.post(url[, data[, config]])
axios.put(url[, data[, config]])
axios.patch(url[, data[, config]])
```

> request config 規則 : https://github.com/axios/axios#request-config


11. 最終關卡任務練習步驟 API 網址 : https://hexschool.github.io/hexschoolliveswagger/

> 前台一隻 app.js，後台為 admin.js，前後台拆開

- 步驟一：初始化，取得產品與購物車列表

- 取得產品列表(Get)：`/api/livejs/v1/customer/{api_path}/products`/get_api_livejs_v1_customer__api_path__products

- https://hexschool.github.io/hexschoolliveswagger/#/%E7%94%A2%E5%93%81%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

- 取得購物車列表(Get)：`/api/livejs/v1/customer/{api_path}/carts`/get_api_livejs_v1_customer__api_path__carts

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%B3%BC%E7%89%A9%E8%BB%8A%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

```
//取得產品列表(Get)：/api/livejs/v1/customer/{api_path}/products
{
  "status": true,
  "products": [
    {
      "category": "產品分類 (String)",
      "image": "產品圖片 (String)",
      "id": "產品ID  (String)",
      "title": "產品名稱  (String)",
      "origin_price": "產品原始價錢 (Number)",
      "price": "產品銷售價錢 (Number)"
    }
  ]
}
```

> 新帳號預設購物車會有一筆資料

- 步驟二：新增購物車品項，並再次初始化購物車列表

- 加入購物車(POST)：`/api/livejs/v1/customer/{api_path}/carts`/post_api_livejs_v1_customer__api_path__carts

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%B3%BC%E7%89%A9%E8%BB%8A%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6


- 步驟三：修改購物車狀態刪除全部、刪除單筆，並再次初始化購物車列表

- 清除購物車內全部產品(DELETE)：`/api/livejs/v1/customer/{api_path}/carts`/delete_api_livejs_v1_customer__api_path__carts

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%B3%BC%E7%89%A9%E8%BB%8A%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

- 刪除購物車內特定產品(DELETE)：`/api/livejs/v1/customer/{api_path}/carts/{id}`/delete_api_livejs_v1_customer__api_path__carts__id_

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%B3%BC%E7%89%A9%E8%BB%8A%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

- 步驟四：送出購買訂單，並再次初始化購物車列表

- 送出購買訂單(POST)：`/api/livejs/v1/customer/{api_path}/orders`/post_api_livejs_v1_customer__api_path__orders

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%A8%82%E5%96%AE%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

- 步驟五：觀看後台訂單

- 取得訂單列表(GET)： `/api/livejs/v1/admin/{api_path}/orders`

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%A8%82%E5%96%AE%E7%9B%B8%E9%97%9C(%E7%AE%A1%E7%90%86%E8%80%85)/get_api_livejs_v1_admin__api_path__orders

- Codepen 範例 : https://codepen.io/hexschool/pen/yLgaBWV?editors=1010


### Week 8 sub.

- https://quip.com/oo9MAb3DbQya

- API 文件網址：https://hexschool.github.io/hexschoolliveswagger/

- API 文件說明：https://www.notion.so/API-8b5b74eb052b451faf28013d76811fac#7598a1040d4f4c4aab5dec30f621d2b8

1. 文件部分

```
* Base URL
* GET PUT PATCH DELETE POST
* GET、DELETE 回傳格式 （請求時不需帶資料）
```

```
{
  "status": true,
  "products": [
    {
      "title": "Antony 床邊桌",
      "category": "收納",
      "description": "安東尼可調高度床邊桌。",
      "origin_price": 3200,
      "images": "<https://hexschool-api.s3.us-west-2.amazonaws.com/custom/XWnC8Of71WeSvCbkGy5MvZSyCrim50F9njuwHypcbiimd8tWscxGdecRAyaNheboQkqQAiCWK12GwuwMBvEtAarU2Y7mKTwKZIqhIExyQzbAbls7NTOdN2vX1OAyEaAN.png>",
      "price": 1890,
      "id": "HMUyW5KrTMLyMu6FBQJs"
    },
    {
      "description": "法式古典Louvre單人床架，經典百年手工浮雕工藝，床架宮廷式紡錘腳，與法式鄉村家具手工刷舊工藝，展現仿舊典雅質感～且床腳筆直設計，床架寬敞床底可收納儲物。",
      "title": "Louvre 單人床架",
      "images": "<https://hexschool-api.s3.us-west-2.amazonaws.com/custom/dp6gW6u5hkUxxCuNi8RjbfgufygamNzdVHWb15lHZTxqZQs0gdDunQBS7F6M3MdegcQmKfLLoxHGgV3kYunUF37DNn6coPH6NqzZwRfhbsmEblpJQLqXLg4yCqUwP3IE.png>",
      "origin_price": 5780,
      "id": "K09K6AHxi3w8DEo9c69T",
      "category": "床架",
      "price": 3780
    },
    {
      "category": "床架",
      "price": 9000,
      "id": "KAFSFLqkRFrRHuvjKPRm",
      "origin_price": 12000,
      "images": "<https://hexschool-api.s3.us-west-2.amazonaws.com/custom/Zr4h1Oqvc6NtAnpe5pNqJfGYyBJshAlKctfv0BTAZBqVAuvfSAWk4bcidBd8qBu1lRn5TWvib6O3UbmIAEt5w8SdB94GuFplZn6IM4SBvtxWJA2VnOqvQOsKungCPDXv.png>",
      "title": "Jordan 雙人床架／雙人加大",
      "description": "喬丹6尺雙人加大床頭片"
    },
    ]
}
```

EX : 前端取資料時：以 axios 為串接的方法，想要拿到 products

```
response.data.products
```

- POST、PUT、PATCH 帶入的資料格式 （需帶資料）

```
{
  "data": {
    "id": "產品 ID (String)",
    "paid": true
  }
}
```

- 實際寫的時候： 參數順序：axios.put(*url, 要帶的資料, 其他設定*)

```
axios.put('https://livejs-api.hexschool.io/api/livejs/v1/admin/yinmin/orders',
    {
      data: {
        id: e.target.dataset.id,
        paid: true
      },
    },
    {
      headers: {
        'Authorization': '637po6yzi2bXojmEob5TAMnaZk93'
      }
    })
    .then(() => {
      getOrder();

    })
    .catch(function (err) {
      console.log(err);
    })
```

```
const config = {
   headers: {'名稱'：'...'},
   methods: 'PUT',
   ...
}
```

回傳：status, orders(一整個訂單列表)

```
{
    "status": true,  
    "orders": [
        {      
        "updatedAt": 1615185656813,      
        "id": "6kMabBcg11u75Rx8Ochg",      
        "user": {        
            "email": "123@gmail.com",        
            "tel": "0912345678",        
            "payment": "Google Pay",        
            "name": "ray",        
            "address": "xxxx"      
        },      
        "total": 500,      
        "createdAt": 1615185204,      
        "paid": true,      
        "quantity": 10,      
        "orders": [        
            {          
                "category": "測試分類",          
                "price": 500,          
                "title": "測試商品",          
                "image": "https://images.unsplash.com/photo-1516550135131-fe3dcb0bedc7?ixlib=rb-0.3.5&ixid=eyJhcHBfaWQiOjEyMDd9&s=621e8231a4e714c2e85f5acbbcc6a730&auto=format&fit=crop&w=1352&q=80",          
                "id": "yhHU0M0Aad1bTiA7ITHm",          
                "origin_price": 1000        
            }
      ]
    }
  ]
}
```

```
當在寫程式的時候遇到錯誤，而測試可以通過的話，代表程式碼寫錯了
```

2. 基本錯誤

* customer & admin (404)

* API PATH

* HTTP method 不要打錯

* 需要帶 token 的不要忘記

* 傳入的格式

* 傳入的物件的屬性名稱、型別需與文件相同

```
若回傳錯誤碼，可以去文件中對照錯誤解釋
```

3. 分享自己在寫的時候會怎麼做

* 寫註解

```
// GET 後台取得訂單
```

* axios 一開始的架構都會留著，等確定 console.log 拿到東西才繼續寫賦予

```
let products = []

axios.get('https://livejs-api.hexschool.io/api/livejs/v1/customer/yinmin/products')
    .then(function (response) {
      //console.log(response.data.products);
      products = response.data.products;
    })
    .catch(function (error) {
      console.log(error);
    });
```

* 遇到錯誤的話可以看 console 確認，或是直接使用 Network 看錯誤訊息（篩選Fetch/XHR） 

* 不知道要怎麼拿 item. 的資料 可以先把 item 弄出來看或是比對文件看結構

* 命名很重要，例如：不要按鈕全部用 .btn 

* 善用 command f 快速移動位置

* 可以將 API PATH 、 UID 、回傳 data、headers 物件獨立

```
// 全域設定
const api_path = "yinmin";
const baseUrl = "https://livejs-api.hexschool.io";
const config = {
      headers: {
       'Authorization': '637po6yzi2bXojmEob5TAMnaZk93'
      }
    };


//串接後台某隻 put 的 API
function xxx(e){
    const url = `${baseUrl}/api/livejs/v1/customer/${api_path}/orders`;
    
    const data = {
      data: {
        id: e.target.dataset.id,
        paid: true
      }
    };
    
    

   axios.put(url, data, config)
   .then(()=>{
        ...
   })
   .catch(()=>{
        ...
   })
}
```

大家來找碴：

```
axios.put('https://hexschoollivejs.herokuapp.com/api/livejs/v1/admin/yinmin/orders',
    {
      data: {
        id: e.target.dataset.id,
        paid: true
      }
     },
     {
      headers: {
        Authorization: '637po6yzi2bXojmEob5TAMnaZk93'
      }
    })
    .then(function (response) {
      console.log(response.data);

    })
    .catch(function (err) {
      console.log(err);
    })
```

4. 後台

- *流程：*

(1) 建立訂單 → 查看訂單列表 → 編輯訂單狀態 → 刪除單一訂單 → 刪除全部訂單

(2) 從看設計稿也可以得知，有 GET, PUT, DELETE 三種請求方法

> 若先做後台，可以透過 API 文件去完成前台的購物流程

實作補充：

- `data-*`用法： https://courses.hexschool.com/courses/20201113/lectures/34094845

- 日期轉換 - 先換成毫秒 (13個數字)再轉為看得懂的日期格式 :

- 兩種方法 - 方法一 :

```
let date = new Date(*timestamp* * 1000); // 先換成毫秒

const year = date.getFullYear()      // 2021
const month = date.getMonth() + 1     // 11
const day = date.getDate()          // 30

date.getHours()
date.getMinutes()
date.getSeconds()

const dateFull = `${year}/${month}/${day}` // '2021/11/30'
```

- 方法二 :

```
let date = new Date(*timestamp* * 1000); 

date.toLocaleDateString(); // '2021/9/14'
```

- 三元運算 ： https://developer.mozilla.org/zh-TW/docs/Web/JavaScript/Reference/Operators/Conditional_Operator

```
${item.paid ? '已處理' : '未處理'}

if(item.paid){
    console.log('已處理');
} else {
    console.log('未處理');
}
```


## Week 9 - DOM + API 操控

1. DOM 範例

- todoList : https://codepen.io/hexschool/pen/OJWRqrN

2. 最終關卡 API 資訊

* API 教學文件 : https://www.notion.so/API-8b5b74eb052b451faf28013d76811fac#7598a1040d4f4c4aab5dec30f621d2b8

* API 申請平台 : https://livejs-api.hexschool.io/

* API 線上測試文件 : https://hexschool.github.io/hexschoolliveswagger/

* 最終關卡 XD 設計稿 : https://xd.adobe.com/view/a48b8617-4588-4817-9062-b62130dce916-f1d8/

* Codepen 範例程式碼 : https://codepen.io/hexschool/pen/JjERgYq?editors=0010

3. API 介紹

* 最終關卡流程圖 : https://whimsical.com/dom-api-ULyBu5TbMJG9v2tvnkgCFf

* API 前台規則流程圖 : https://whimsical.com/Eg1f7MCzy9UcBJjkpq8TLP

4. 最終關卡 kata - 請壓在 6hr 內，能用自己的邏輯寫出來

5. 最終關卡任務練習步驟 :

- API 網址 : https://hexschool.github.io/hexschoolliveswagger/#

> 前台一隻 app.js，後台為 admin.js，前後台拆開

6. 步驟一：初始化，取得產品與購物車列表

- 取得產品列表(Get)：/api/livejs/v1/customer/{api_path}/products/get_api_livejs_v1_customer__api_path__products

- https://hexschool.github.io/hexschoolliveswagger/#/%E7%94%A2%E5%93%81%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

- 取得購物車列表(Get)：/api/livejs/v1/customer/{api_path}/carts/get_api_livejs_v1_customer__api_path__carts

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%B3%BC%E7%89%A9%E8%BB%8A%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

```
//取得產品列表(Get)：/api/livejs/v1/customer/{api_path}/products
{
  "status": true,
  "products": [
    {
      "category": "產品分類 (String)",
      "image": "產品圖片 (String)",
      "id": "產品ID  (String)",
      "title": "產品名稱  (String)",
      "origin_price": "產品原始價錢 (Number)",
      "price": "產品銷售價錢 (Number)"
    }
  ]
}
```

> 新帳號預設購物車會有一筆資料

7. 步驟二：新增購物車品項，並再次初始化購物車列表

- 加入購物車(POST)：/api/livejs/v1/customer/{api_path}/carts/post_api_livejs_v1_customer__api_path__carts

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%B3%BC%E7%89%A9%E8%BB%8A%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

8. 步驟三：修改購物車狀態(刪除全部、刪除單筆)，並再次初始化購物車列表

- 清除購物車內全部產品(DELETE)：/api/livejs/v1/customer/{api_path}/carts/delete_api_livejs_v1_customer__api_path__carts

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%B3%BC%E7%89%A9%E8%BB%8A%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

- 刪除購物車內特定產品(DELETE)：/api/livejs/v1/customer/{api_path}/carts/{id}/delete_api_livejs_v1_customer__api_path__carts__id_

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%B3%BC%E7%89%A9%E8%BB%8A%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6


9. 步驟四：送出購買訂單，並再次初始化購物車列表

- 送出購買訂單(POST)：/api/livejs/v1/customer/{api_path}/orders/post_api_livejs_v1_customer__api_path__orders

- https://hexschoollivejs.herokuapp.com/api-docs/#/%E8%A8%82%E5%96%AE%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

10. 步驟五：觀看後台訂單

- 取得訂單列表(GET)：/api/livejs/v1/admin/{api_path}/orders/post_api_livejs_v1_customer__api_path__orders

- https://hexschool.github.io/hexschoolliveswagger/#/%E8%A8%82%E5%96%AE%E7%9B%B8%E9%97%9C(%E5%AE%A2%E6%88%B6

- Codepen 範例 : https://codepen.io/hexschool/pen/yLgaBWV?editors=1010

11. DOM 與 API 規劃

- 最終關卡前台 : https://codepen.io/hexschool/pen/qBRPByd

- 最終關卡後台 : https://codepen.io/hexschool/pen/PoWJoBK


12. 重新複習

```
1. **變數**：基礎型別
2. **流程判斷**：流程圖設計
3. **陣列與物件**：資料定義
4. **函式設計**：讓程式能重複呼叫執行、消除重複的程式碼
5. **資料處理**：陣列與物件資料處理，例如 ForEach 、Object.keys
6. **AJAX 取得資料**： Axios 取得網路請求
7. **套件整合**： C3 資料處理
8. **第三方線上服務串接**：API 服務
```

13. 下方服務有用到哪幾個編號？

- Swiper : https://swiperjs.com/

- SUANKAN - 算算看要上線多久 : https://superawei.github.io/SUANKAN/

- 六角學院 : https://www.hexschool.com/

- EX : 小明想做口罩地圖，他去查 OPEN DATA : https://data.gov.tw/dataset/116285

發現是 csv 格式，於是到網路查到有佛心工程師提供 CORS JSON API : 

- https://g0v.hackmd.io/@kiang/mask-info#%E9%96%8B%E7%99%BC%E8%B3%87%E6%BA%90%EF%BC%9A

- 小明很高興，於是他用 axios 接了他的口罩剩餘數量 API，並搭配 Google Map 顯示地圖資訊。

- 小華的老師出了個題目給他，他希望小華寫個「離線版的高雄停車場」網頁，於是小華到 高雄 OPEN DATA 下載 JSON 檔案，因為會用到圖表，所以他用了 C3.js 服務。方便老師能夠離線就能開啟小華的程式，看到高雄市停車場的網頁資訊。

- https://data.kcg.gov.tw/dataset/department-of-transportation30

![](https://i.imgur.com/x2Dk90B.png)

14. 下一步？

* 學 SPA 框架，整合 API 資訊 (Vue、React、Angular)

* 深入 JS 核心常見面試題目 : https://www.hexschool.com/courses/js-core.html

* 2021 轉職前端工程師之旅 面試篇：為自己選的路堅持下去 : https://ithelp.ithome.com.tw/articles/10256018?sc=rss.qu


## 前後端工程師協作方案 - Server Side Render、Client Side Render


> 前端與後端工程師(伺服器、資料庫)的協作方式
> 1.Client Side Render(瀏覽器端渲染)
>  a. 輸入網路請求(/),伺服器回傳JSON格式
>  b. SPA單式網應用前後端
>  c. ES6 、Vue 、 React 、 Angular
> 2. Server Side Render(伺服器端渲染)
>  a.輸入網路請求(/),伺服器回傳整個網頁內容
>  EX: <html><ul><li>a產品</li></html>


1. Server Side render、Client Side ender 差異 

* Server Side render：由後端渲染資料

* Client Side render：由前端渲染資料

* 懶人包判斷方式：按右鍵檢視原始碼

2. 範例程式碼 Live Demo

* 轉址：res.redirect

* 傳送文字：res.send

* 顯示網頁 EJS：res.render

3. Server Side Render 後端工程師合作方式

- 前端做好 HTML 頁面

- 提交給後端變成動態語言

4. Client Side Render 後端合作方式

- 後端提供給前端 API 列表

- 前端依照 API 列表設計網頁介面

5. 範例網站練習

* JS 核心篇 : https://www.hexschool.com/courses/js-core.html

* W3Hexschool 部落格 : https://w3c.hexschool.com/category/blog

* 帳號註冊登入 : https://codepen.io/HexSchool_yuko/pen/jONaWbN

* The F2E 第二屆 : https://challenge.thef2e.com/works

* layorder : https://lay-order.rocket-coding.com/index.html#/

* 始壯哥健身中心 :https://wen0720.github.io/vueShop/#/

* 挖栽 : https://chaoyuping.github.io/plantstore/#/

* Facebook : https://www.facebook.com/

* Pinkoi : https://www.pinkoi.com/

6. 延伸閱讀

* 前後端分離與 SPA : https://blog.techbridge.cc/2017/09/16/frontend-backend-mvc/

## json-server 環境教學

1. POSTMAN 官網 : https://www.postman.com/

2. json-server 官網 : https://github.com/typicode/json-server

3. json-server 篩選功能 :

```
{
    "products": [
      {
        "name": "A產品",
        "price":500,
        "language":{
          "zh-tw":"A產品",
          "en-us":"A product"
        },
        "id": 1
      },
      {
          "name": "B產品",
          "price":100,
          "language":{
            "zh-tw":"B產品",
            "en-us":"B product"
          },
          "id": 2
        }
        ,
        {
            "name": "C產品",
            "price":900,
            "language":{
              "zh-tw":"C產品",
              "en-us":"C product"
            },
            "id": 3
          }
    ]
  }
```

4. 本地端 Codepen 代辦事項練習 : https://codepen.io/hexschool/pen/OJWRqrN?editors=1010

5. APIcode

## json-server-auth-divide

- https://github.com/Aya-X/json-server-auth-divide

- https://github.com/kancheng/json-server-auth-divide

## json-server 資料關聯教學

1. json-server 官網 : https://github.com/typicode/json-server

## json-server vercel 部署流程

- https://github.com/gonsakon/json-server-vercel

- https://github.com/kancheng/json-server-vercel

- https://www.youtube.com/watch?v=UhxcJh5oIHo

## 版型平台

- dashboard : https://dribbble.com/tags/order_dashboard

- calendar : https://www.zabuto.com/dev/calendar/examples/show_data.html








