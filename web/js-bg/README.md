# web

- https://www.casper.tw/javascript/2018/01/01/javascript-eslint/

## Details

## 1

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

[型別](https://developer.mozilla.org/zh-TW/docs/Web/JavaScript/Guide/Grammar_and_types#%E8%B3%87%E6%96%99%E5%9E%8B%E5%88%A5_data_types)

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

