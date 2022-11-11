# web

- https://www.casper.tw/javascript/2018/01/01/javascript-eslint/

## Details

```
Hex School JS 課程 2022 核心
```

## Week 1

1.  為什麼要學核心知識

- 更熟 JavaScript 的運作

- 瞭解框架是怎麼運作的

- 面試中很常被問


2. 本週知識點：

- 作用域

- 提升

3. 習慣用的開發套件

- Live Server：https://marketplace.visualstudio.com/items?itemName=ritwickdey.LiveServer

4. 作用域

- 1. **沒有宣告變數會怎樣？變數及屬性的差異**

- window 下有什麼東西

- 宣告變數以及 window 的關係（var, let, const 均有所不同）

- 變數、屬性的差異（有沒有宣告變數會怎樣）

- 2. **變數作用域**

- 全域變數與區域變數

  - 全域變數：全國補助，EX:中央的補助，全台＋離島都可以申請。

  - 區域變數：縣市補助，EX:台北市的補助，新北市不能申請。

- var, let, const 作用域的差異

    - var 是屬於函式作用域

    - let, const 為 script, block
    
- 詞法作用域 → 變數作用域是什麼時候決定的？

![](core-1-1.png)


## 提升

為什麼需要把宣告放在前面

- 先定義與後定義的優缺點為何？
- 提升：為什麼函式陳述式宣告可以放在後面？
    - JavaScript 的記憶體運作概念 → 創造階段與執行階段
- let, const 的暫時性死區
- 補充：undefined 與 not defined 的差異

## 本週小結

- var 特徵
    - 可以重複宣告
    - 會建立一個新屬性在 window 下
    - 作用域為 function scope
    - 具有提升現象
- let, const 特徵
    - 無法重複宣告
    - 不會建立一個新屬性在 window 下
    - 作用域為 script, block
    - 提升現象改為了暫時性死區

## Week 2

## Week 3

## Week 4

## Week 5

## Week 6

## Week 7

