# web - react

## Details


## Note

1. JS

- 必須學的 ES6
    1. 陣列解構
    2. 物件解構
    3. 其餘跟展開運算子
    4. 陣列的 map
- JSX 
- Hooks 狀態的概念


2. 課前環境與小知識

* 安裝 React Developer 工具 : https://chrome.google.com/webstore/detail/react-developer-tools/fmkadmapgofadopljbjfkapdkoienihi?hl=zh-TW

* JS 執行[點擊事件 onclick](https://www.w3schools.com/jsref/event_onclick.asp)

3. JSX 介紹 (JavaScript and XML)

- 學 React 的最主要的好處是「將資料與 HTML 元素分離」
- 執行 JSX 會產生 React 元素
- JSX 其中一個目的是讓你不用直接指定 DOM 去做事情，可綁定元件資料
> JSX 需要一個根元素

4. JSX 範例

- [環境建立](https://codepen.io/liao/pen/zYWzvjP)，需要載入 React、ReactDOM
    * React：建置介面的資料結構
    * ReactDOM：將前者進行渲染 (Render) 

``` =JavaScript
<!-- React 環境 -->
<script src="https://unpkg.com/react@18/umd/react.development.js" crossorigin></script>
<script src="https://unpkg.com/react-dom@18/umd/react-dom.development.js" crossorigin></script>
<!-- 解析 JSX -->
<script src="https://unpkg.com/@babel/standalone/babel.min.js"></script>
<!-- 自己的 JS -->
<script src="all.js" type="text/babel"></script>
```
- [在 JSX 中嵌入 Expression](https://codepen.io/liao/pen/LYdLpqg)
- [JSX 函式表達](https://codepen.io/liao/pen/eYMRpwe?editors=1010)
- [JSX 屬性設計](https://codepen.io/liao/pen/YzaQwqm)
    
![](https://i.imgur.com/AVdcs4F.png)

- [Render 持續渲染(非實務)](https://codepen.io/liao/pen/OJvgMWX?editors=1010)
- [元件設計，開頭要大寫](https://codepen.io/liao/pen/xxWrZqM?editors=1010)
- [元件設計 - props](https://codepen.io/liao/pen/qBoxLeP?editors=0010)
- [元件設計 - 建立 App 模組，來組合 component](https://codepen.io/liao/pen/dymRGZb?editors=1010)
- [元件設計 - map 寫法 I](https://codepen.io/liao/pen/LYdLNNN?editors=1010)
- [元件設計 - map 寫法 I(加不加小刮號差別)](https://codepen.io/liao/pen/LYdLNNN?editors=1010)
- [元件設計 - map 寫法 II - 物件作法](https://codepen.io/liao/pen/KKoqzzr?editors=1010)
- [元件設計 - map 寫法 III](https://codepen.io/liao/pen/OJvgNMO?editors=1010)
- [元件設計 - 觀察變數有更新，但無法 render](https://codepen.io/liao/pen/KKoqVvy?editors=1010)

5. React Hook

輸入內容>  觸發 JSX 監聽事件 > setValue 更新值 > 變更 value 狀態>畫面編譯渲染 

- [元件設計 - 觀察變數有更新，Hook 版本](https://codepen.io/liao/pen/YzaQqYQ?editors=1010)
- [表單取值](https://codepen.io/liao/pen/gOeRrze?editors=1010)
- [簡易 todo hooks](https://codepen.io/liao/pen/gOeRryj?editors=1010)


6. HW 匯率產生器

- LV1：輸入台幣，即時換算各種幣種([codepen](https://codepen.io/liao/pen/xxWXPgO?editors=1000))
- LV2：可新增幣種，並同時擁有 LV1 功能([codepen](https://codepen.io/liao/pen/qBoxQyB?editors=1000))
- LV3：錢包有 5000 元，可即時兌換，兌換會有交易紀錄([codepen](https://codepen.io/liao/pen/oNqGoBZ?editors=1000))

7. 什麼叫做 components

- 主機板([連結](https://www.google.com/imgres?imgurl=https%3A%2F%2Fupload.wikimedia.org%2Fwikipedia%2Fcommons%2Fthumb%2Fa%2Fa6%2FIntel_D945GCCR_Socket_775.png%2F640px-Intel_D945GCCR_Socket_775.png&imgrefurl=https%3A%2F%2Fzh.wikipedia.org%2Fwiki%2F%25E4%25B8%25BB%25E6%259D%25BF&tbnid=sMD0XnkN6OXUdM&vet=12ahUKEwjPjIKeg7b5AhX6RvUHHa-cA_gQMygCegUIARDGAg..i&docid=CPsuddLJgbZ08M&w=640&h=480&q=motherboard&hl=zh-TW&ved=2ahUKEwjPjIKeg7b5AhX6RvUHHa-cA_gQMygCegUIARDGAg))

* 一張主機板上，可以插入各種硬體設備(CPU、記憶體)

* 一個網頁 App 裡，可以插入各種網頁元件(表頭表尾、產品列表)
![](https://i.imgur.com/5lnhPCB.png)



8. 網頁元件化
![](https://i.imgur.com/YCqdYCA.png)
> 出處： [Kuro：重新認識 Vue.js](https://book.vue.tw/CH2/2-1-components.html)

9. 元件大綱([Component 文件](https://zh-hant.reactjs.org/docs/components-and-props.html))

> 第一週複習

* [元件設計 - 表單 App 作法](https://codepen.io/liao/pen/VwXdaGQ?editors=1010)
  * 在 React 世界，一個函式就可作為一個元件
  * [記得元件函式命名開頭要大寫](https://zh-hant.reactjs.org/docs/components-and-props.html#rendering-a-component)
* [元件設計 - 多個元件](https://codepen.io/liao/pen/jOzKqdO?editors=0010)
    * 元件最外面需要有一個外層，也可以用 `<></>` 來包裹
    * [Props 是唯讀的](https://zh-hant.reactjs.org/docs/components-and-props.html#props-are-read-only)
    * App 父元件的資料，傳入子元件 Welcome(附圖)

10. 用黑熊市情境來認識元件

- [一個資料>單一元件(黑板)](https://codepen.io/liao/pen/xxWzOYJ)：餐廳店長需要吸引客人，買立式黑板放門口，每天寫每日特餐吸引小資族
- [多個資料>單一元件(黑板)](https://codepen.io/liao/pen/VwXdjXR?editors=1010)：咖啡廳店長，發現餐廳店長這樣做很是心動，於是他也有樣學樣
- [單一資料>多個元件(桌面、門口)](https://codepen.io/liao/pen/vYRrKjw?editors=1010)：黑熊市長喝令各餐廳要寫警告標語：「出門前要記得刷牙，避免口臭影響市容」

11. 小考題(試著自己畫圖)

- [小題目](https://codepen.io/liao/pen/KKoyyQE?editors=1010)

- 購物車資料、產品資料倒入分頁元件？([重構前](https://codepen.io/liao/pen/qBoKNwg?editors=0010)、[重構後](https://codepen.io/liao/pen/vYRrKQo?editors=1010))

- 多個彈跳訊息倒入 Modal 元件？([重構前](https://codepen.io/liao/pen/PoRaGYN?editors=1010)、[重構後](https://codepen.io/liao/pen/abYKmbP?editors=1010))

12. useEffect 載入外部 API

* [參考：使用 Effect Hook](https://zh-hant.reactjs.org/docs/hooks-effect.html#tip-optimizing-performance-by-skipping-effects)
* [計數器](https://codepen.io/riecball/pen/Yzaxjea?editors=1011)
    * 預設會載入一次
    * 可監控變數
* [寶可夢卡片 AJAX API 載入 ](https://codepen.io/liao/pen/NWYzRxg?editors=0010)、[進階自訂 useFetch Hooks](https://codepen.io/liao/pen/MWVXjvq?editors=0010)
    * [條件 render](https://zh-hant.reactjs.org/docs/conditional-rendering.html)
    * 只打算跑一次，可寫 `[]`

13. spoiler
![](https://i.imgur.com/EyTwT5N.png)

14. 子傳父案例

* [相乘產生器 - 同元件處理](https://codepen.io/liao/pen/MWVXQgR?editors=1010)、[子元件傳父元件](https://codepen.io/liao/pen/OJvEXWL?editors=1010)
* 新增單筆咖啡廳的菜單([重構前](https://codepen.io/liao/pen/RwMJpvp?editors=1010)、[重構後](https://codepen.io/liao/pen/dymKvrX?editors=0010))
* 新增咖啡廳、餐廳的菜單([重構前](https://codepen.io/liao/pen/xxWzqzK?editors=1010)、[重構後](https://codepen.io/liao/pen/jOzKBep?editors=1010))
* [大樓關燈案例](https://codepen.io/liao/pen/QWmxvpo)、[共用開關元件](https://codepen.io/liao/pen/rNdKpEE?editors=1010)

15. 元件常會遇到的事情

- 拆元件的問題，拆過頭
    a. 解決辦法：觀察是否有重複性
- 傳遞資料(要多練)：
    a. 父傳子
    b. 子傳父

16. export、import

* [export、import 模組化影片](https://courses.hexschool.com/courses/202011122/lectures/34024875?preview=logged_in)
17. 作業 todolist
fork 此 [Codepen](https://codepen.io/liao/pen/MWVBGxq?editors=1010) 版型，做完請提交到此 [discord](https://discord.com/channels/801807326054055996/999482545567707136/1006581178100351067) 討論串

18. 嘗試自己做元件

* 依照上方各種不同的情境，來規劃一個生活化的元件設計

* [分頁設計](https://learn-at-rocketcamp.github.io/play-react-pagination/)、[GitHub](https://github.com/Learn-At-RocketCamp/play-react-pagination/tree/draft/try-pagination/src/components)

* [Modal 設計](https://codepen.io/DoLucky/pen/bGvjaaq?editors=0010)


19. 額外補充

- [評價星星](https://codepen.io/liao/pen/VwXrrqz?editors=1011)

- React Hooks Form Codepen 上不錯的寫法(第四週會提)：https://codepen.io/BaylorRae/pen/oNxeBQJ?editors=0010

20. 學習資源

- Git、GitHub 教學手冊(學到 分支) : https://w3c.hexschool.com/git/cfdbd310

- NPM 教學 : https://courses.hexschool.com/courses/202011122/lectures/33636919?preview=logged_in


21. create-react-app : https://github.com/facebook/create-react-app) 安裝流程

- 安裝 [Node](https://nodejs.org/en/) 
    * Node >= 14.0.0npm >= 5.6

- 新增資料夾，並透過終端機移動過去

- 專案名稱：`<my-react-app>`

```
// react 環境
npx create-react-app my-app




cd my-app


// react router
npm install react-router-dom@6


npm start
```

> npm 永久安裝，npx 安裝後即移除
> npx 指令必須在 npm 5.2+ 才有
> 用 npm -v 測試是否有在 npm 5.6+ 安裝門檻

22. 操作步驟

- 安裝環境
- 安裝 react-router-dom@6
- index.js、App.js [環境設置](https://reactrouter.com/docs/en/v6/getting-started/installation)
- 嘗試 import 拉出來成獨立檔案，放在 components 資料夾
- 設置 404 找不到
- 調整成 [hashRouter](https://reactrouter.com/docs/en/v6/routers/hash-router)，GitHub 專用
- 部署到 GitHub pages

:::spoiler [部署流程](https://create-react-app.dev/docs/deployment/#github-pages)

23.

- 安裝 gh-pages 套件，`npm install --save gh-pages`
- 開 GitHub Repo
- 在資料夾連接你本地 repo，`git remote add origin https://github.com/{你的帳號名稱}/repo 名稱}.git`
- 在 package.json 加上以下內容

```JSON
{

"homepage": "https://{你的帳號名稱}.github.io/{repo 名稱}"

"scripts": {
    "start": "react-scripts start",
    "build": "react-scripts build",
    "predeploy": "npm run build",
   "deploy": "gh-pages -d build"
  }
}
```
- 執行 `npm run deploy`
:::


25. 路由表詳細設定


- `useNavigate`([連結](https://reactrouter.com/docs/en/v6/hooks/use-navigate)) 與 `Link`([連結](https://reactrouter.com/docs/en/v6/components/link)) 轉址差異

- 巢狀路由(變更局部元件)：[Layout 設計](https://reactrouter.com/docs/en/v6/getting-started/overview#index-routes)，`<outlet />`
    * [前後台 Layout 拆開](https://stackoverflow.com/questions/71420106/how-to-separate-header-and-footer-of-homepage-from-displaying-in-admin-page-in-r)

26. 範例 Code

* [旅遊網資訊](https://github.com/gonsakon/reactrouter2/tree/main)
* [React Router 範例結構](https://reactrouter.com/docs/en/v6/getting-started/concepts#review)

![](https://i.imgur.com/tVYzRzL.png)


27. React Hook form


- [官網文件](https://react-hook-form.com/)

- [基本範例](https://codepen.io/hexschool/pen/bGvWgqN)

- [表單驗證 yunyun](https://codepen.io/liao/pen/BarbbbR?editors=1010)

- [可選串連](https://developer.mozilla.org/zh-TW/docs/Web/JavaScript/Reference/Operators/Optional_chaining)

28. [submit 整合 todolist API](https://codepen.io/liao/pen/ExEMMoO?editors=0010)

> 補充觀念：

在 React Hook Form 中有提供各種驗證屬性，如下：

- required: 必填

- min: 輸入的最小值，例如：年齡必須輸入 0 以上。

- max: 輸入的最大值，例如：年齡必須輸入 120 以下。

- minLength: 輸入的字串長度最小值，例如：密碼需大於 8 碼。

- maxLength: 輸入的字串長度最大值，例如：標題需小於 12 字。

- pattern：可以使用 regex 正規表達式來客製化自己的輸入限制。

- validate：加入 callback function 執行自訂的驗證函式。

29. todolist API 介紹

* [API 文件](https://todoo.5xcamp.us/api-docs/index.html)

30. [useContext](https://zh-hant.reactjs.org/docs/hooks-reference.html#usecontext)

* [顏色變換範例](https://codepen.io/hexschool/pen/NWYvbrX?editors=0010)

* [todolist 權限設計](https://github.com/gonsakon/reactrouter2/tree/feature/auth)

    * [新增登入、註冊路由](https://github.com/gonsakon/reactrouter2/blob/feature/auth/src/App.js#L77-L78)

    * [註冊欄位搭配表單套件](https://github.com/gonsakon/reactrouter2/blob/feature/auth/src/components/
    SignUp.js#L7-L94)

    * [設計 AuthContext](https://github.com/gonsakon/reactrouter2/blob/feature/auth/src/App.js#L62-L65)、[獨立出 context](https://github.com/gonsakon/reactrouter2/blob/feature/auth/src/App.js#L13)

    * [註冊成功：變更 authContext 裡面的 token](https://github.com/gonsakon/reactrouter2/blob/feature/auth/src/components/SignUp.js#L5-L25)

    * [登入成功：變更 authContext 裡面的 token](https://github.com/gonsakon/reactrouter2/blob/feature/auth/src/components/Login.js#L8-L30)

    * [登入失敗：整合 sweetalert](https://github.com/gonsakon/reactrouter2/blob/feature/auth/src/components/Login.js#L37-L39)

    * [確認是否登入機制：ProtectedRoute](https://github.com/gonsakon/reactrouter2/blob/feature/auth/src/App.js#L74-L76)

    * [透過 token 取得個人 todo 資料：](https://github.com/gonsakon/reactrouter2/blob/feature/auth/src/components/Todo.js#L5-L13)

    * [Layout 判斷是否登入，顯示對應資訊](https://github.com/gonsakon/reactrouter2/blob/feature/auth/src/App.js#L47-L51)

![](https://i.imgur.com/IlrDf9L.png)


31. 接下來還可以精進的地方

* 樣式設計：[styled component](https://styled-components.com/)、[Tailwind](https://tailwindcss.com/)

* 狀態設計：[Redux](https://redux.js.org/)
