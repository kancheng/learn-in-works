# web - jquery & sublime text note

## Details

- https://oscarotero.com/jquery/

### jQuery 入門

1. JavaScript vs jQuery

- JavaScript

```
var house;
house = document.getElementByld("house");
house.搖動();

function 搖動() {
    // ...
}
```

- jQuery

```
$(document).ready(function()
    $("#house").搖動();
});
```

2. jQuery 官網 : https://jquery.com/

- 隱藏超連結

```
$('a').hide();
```

- 顯示超連結

```
$('a').show();
```

- 改屬性

```
$('a').attr('herf','https://www.google.com/');
```

- 動畫效果

```
$('a').slideUp();
$('a').slideUp(5500);
$('a').slideDown();
$('a').fadeOut();
$('a').fadeOut(8000);
$('a').fadeIn();
```

3. 1.x , 2.x , 3.x 的差別 : https://jquery.com/browser-support/

```
Download the compressed, production jQuery 3.6.1 slim build

Download the uncompressed, development jQuery 3.6.1 slim build

Download the map file for the jQuery 3.6.1 slim build

jQuery 3.6.1 blog post with release notes
```
- compressed : 代表程式碼已經有壓縮。

- uncompressed : 沒有壓縮。

```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <script src='https://cdnjs.cloudflare.com/ajax/libs/jquery/2.2.3/jquery.min.js'></script>
</head>
<body>
    
</body>
</html>
```

```
<script src='https://cdnjs.cloudflare.com/ajax/libs/jquery/2.2.3/jquery.min.js'></script>
```

- Sublime Text : https://www.sublimetext.com/


3. jQuery 環境建置範例程式碼

```
<h1>目標</h1>
```

```
$(document).ready(function() {
  $('h1').hide();
});
```

4. jQuery Codepen 環境建立

- Codepen : https://codepen.io/

註冊服務後，點擊左上角的 Pen 開出一個環境

在 JS 面板，關鍵字尋找 jQuery ，並點擊加入

將 HTML 寫在 HTML 面板，jQuery 程式碼寫在 JS 面板，並將範例程式碼貼上去，觀念程式碼是否有正常運行，若有則表示設置成功！

- https://codepen.io/kancheng/pen/ExLNrYe

```
$(document).ready(function () {
  $("h1").hide();
});
```

5. 使用 Sublime 插件提升寫 jQuery 效率

- https://www.sublimetext.com/docs/

```
Ctrl + Shift + P -> Install Package Control -> jquery
```

```
$(document).ready(function () {
  $('.button').click(function(event)) {
    $('h1').hide();
  }
});
```


### 選擇器與事件

1. 選擇器：設定 CSS 般指定要操控的網頁元素

- EX 1 :

```
<h1 class="title"></h1>
```

```
$(document).ready(function () {
    $('.title').hide();
});
```
- EX 2 :

```
<div class="header">
    <h1></h1>
</div>
```

```
$(document).ready(function () {
    $('.header h1').hide();
});
```

- EX 3:

```
$('h1').show();
```

- HTML標籤選擇

```
$('h1').hide();
```

- Class 選擇

```
$('.header').hide();
```

- ID 選擇

```
$('#box').hide();
```

2. 點擊事件範例程式碼 :

- index.html

```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <script src="jquery.js"></script>
    <script src="all.js"></script>
</head>
<body>
    <input type="button" class="button" value="隱藏標題">
    <h1 id="box" class="title">1234</h1>
</body>
</html>
```

- all.js

```
$(document).ready(function() {
  $('.button').click(function(event) {
    $('h1').hide();
  });
});
```

3. 使用 toggle 切換開啟或隱藏效果

```
<body>
  <input type="button" class="button" value="隱藏標題">
    <h1 id="box" class="title">1234</h1>
    <p style="display: none">
      Lorem ipsum dolor sit amet, consectetur adipisicing elit. Voluptatibus quidem vel pariatur laboriosam asperiores deserunt, distinctio? Totam unde eos, atque facilis reprehenderit provident quia beatae soluta suscipit, nemo quasi accusamus.
    </p>
</body>
```

```
$(document).ready(function() {
    $(".button").click(function(){
      $("h1").toggle();
      $("p").toggle();
    });
});
```

4. 如何除錯 jQuery : 跟 JS 一樣，查瀏覽器的 console

5. jQuery 辭典 : https://oscarotero.com/jquery/

6. event 全名叫做「event handlers」也就是事件處理器，而它會記錄使用者的所有行為，它會紀錄你點擊這個事件時的動作，例如在哪裡點，點了什麼元素等。

### 動畫效果

1. 使用 Slide 設計滑動效果 : `slideDown()`, `slideUp()`

- EX :

```
  $('.button').click(function(event) {
    $('.text').slideToggle(2000);
    //開啟
    //$('.text').slideDown(2000);

    //關閉
    //$('.text').slideUp(2000);
  });
```

- all.js

```
$(document).ready(function() {
  $('.button').click(function(event) {
    $('.text').slideToggle(2000);
    //開啟
    //$('.text').slideDown(2000);

    //關閉
    //$('.text').slideUp(2000);
  });
});
```

- index.html

```
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Document</title>
  <script src="js/jquery-2.2.3.min.js"></script>
  <script src="js/all.js"></script>
  <style>
    .text {
      display: none;
    }
  </style>
</head>
<body>
  <input type="button" class="button" value="留言">
  <div class="text">
    <textarea name="" id="" cols="30" rows="10"></textarea>
    <input type="submit" value="送出">
  </div>
</body>
</html>
```

2. 使用 Fade 設計淡入淡出效果

- all.js

```
$(document).ready(function() {
  $('.button').click(function(event) {
    $('.text').fadeToggle();
    // fadeIn 預設隱藏的東西給打開
    // fadeOut 預設開啟的東西給關閉
  });
});
```

3. 使用 toggleClass、搭配 CSS3 Transition 自訂 CSS

- all.js

```
$(document).ready(function() {
  $('.button').click(function(event) {
    $('.text').toggleClass('active');
    // $('.text').addClass('active');
    // $('.text').removeClass('active');
  });
});
```

- index.html

```
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Document</title>
  <script src="js/jquery-2.2.3.min.js"></script>
  <script src="js/all.js"></script>
  <style>
//    .text {
//      display: none;
//    }
//    .text.active {
//      display: block;
//    }
    .text {
      opacity:0;
      transition: all 3s;
    }
    .text.active {
      opacity:1;
    }
  </style>
</head>
<body>
  <input type="button" class="button" value="留言">
  <div class="text">
    <textarea name="" id="" cols="30" rows="10"></textarea>
    <input type="submit" value="送出">
  </div>
</body>
</html>
```

4. CSS - overflow、CSS3 transition

```
$(document).ready(function() {
  $('.button').click(function(event) {
    $('.text').fadeToggle(1000);
    // fadeIn 預設隱藏的東西給打開
    // fadeOut 預設開啟的東西給關閉
  });
});
```

```
<head>
  <meta charset="UTF-8">
  <title>Document</title>
  <script src="js/jquery-2.2.3.min.js"></script>
  <script src="js/all.js"></script>
  <style>
    .box{
      width: 200px;
      height: 160px;
      border: 1px solid blue;
      position: relative;
      overflow: hidden;
    }
    .box:hover .title{
      bottom: 0;
    }
    .title{
      transition: all 1s;
      background: #000;
      color: #fff;
      text-align: center;
      padding: 5px 0;
      width: 100%;
      position: absolute;
      bottom: -30px;
    }
  </style>
</head>
<body>
  <div class="box">
    <img src="images/feature-jquery.png" alt="">
    <div class="title">產品標題</div>
  </div>
</body>
</html>
```

5. jQuery 鏈式寫法

```
$(document).ready(function() {
  $('.start').click(function(event) {
    $('.box').slideUp(1500).slideDown(1500);
  });
});
```

```
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Document</title>
  <script src="js/jquery-2.2.3.min.js"></script>
  <script src="js/all.js"></script>
  <style>
    .box {
      height: 300px;
      width: 300px;
      background: #000;
    }
  </style>
</head>
<body>
  <input type="button" class="start" value="啟動">
  <div class="box"></div>
</body>
</html>
```

6.  Chrome 內建開發工具 : DEV -> Sources -> 指定的 JS

###  CSS + jQuery 的動畫效果

1. preventDefault() 取消默認行為

```
$(document).ready(function() {
 $('.close').click(function(event) {
   event.preventDefault();
   $('.box').slideUp();
 });
});

```
2. 動態載入 CSS style 設定

```
.box {
  width: 300px;
  height: 300px;
  background: #000;
}
```

```
$(document).ready(function() {
  $('.box').css('width','500px');
});
```

3. 設計下拉式收闔選單 :

```
$(document).ready(function() {
  $('.dropdown').click(function(event) {
    /* Act on the event */
    event.preventDefault();
    $('.dropdown').toggleClass('active');
    $('.dropdown-open').slideToggle();
  });
});
```

```
.wrap{
  width: 500px;
  margin: 0 auto;
}
.header{
  height: 80px;
  background: pink;
}
.menu{
  float: right;
}
.menu a{
  text-decoration: none;
  padding: .5em 0;
  background: #fff;
  border: 1px solid gray;
  display: block;
  text-align: center;
  transition: all .3s;
}
.menu a:hover,.menu a.active{
  background: blue;
  color: #fff
}
.menu > li{
  float: left;
  width: 100px;
}
.menu ul {
  display: none
}
/*.menu > li:hover ul{
  display: block
}*/
```

```
<body>
<div class="wrap">
  <div class="header">
      <ul class="menu">
        <li><a href="#">首頁</a></li>
        <li><a href="#">產品專區</a></li>
        <li>
          <a href="#" class="dropdown">訂單查詢</a>
          <ul class="dropdown-open">
            <li><a href="#">出貨進度</a></li>
            <li><a href="#">退貨申請</a></li>
            <li><a href="#">退換申請</a></li>
          </ul>
        </li>
      </ul>
  </div>
</div>
</body>
```

4. delay() - 延遲動畫效果

```
$(document).ready(function() {
  $('.open').click(function(event) {
    /* Act on the event */
    $('.box1').delay(0).fadeIn();
    $('.box2').delay(1000).slideDown();
    $('.box3').delay(2000).show(0);
  });
});
```

5. 即時放大縮小字型

```
$(document).ready(function() {
  // 字體放大
  $('.font-b').click(function(event) {
    /* Act on the event */
    event.preventDefault();
    $('.content p').css('font-size','20px');
  });
  // 字體放中
  $('.font-m').click(function(event) {
    /* Act on the event */
    event.preventDefault();
    $('.content p').css('font-size','16px');
  });
  // 字體放小
  $('.font-s').click(function(event) {
    /* Act on the event */
    event.preventDefault();
    $('.content p').css('font-size','13px');
  });
});
```

6.  fixed 固定網頁內容

```
$(document).ready(function() {
  // close效果
  $('.ad-close').click(function(event) {
    /* Act on the event */
    event.preventDefault();
    $(".ad").fadeOut();
  });
});
```

```
.ad{
  position: fixed;
  bottom: 0;
  left: 0;
  width: 250px;
  height: 100px;
  background: #000;
  color: #fff;
}
.ad p{
  padding: 30px;
}
.ad .ad-close{
  position: absolute;
  top: 0;
  right: 0;
  text-decoration: none;
  background: red;
  color: #fff;
  padding: .5em
}
.ad .ad-close:hover{
  background: blue;
}

```

```
  <div class="ad">
    <p>如果喜歡我們的網站， <br>
    歡迎把我們加到書籤</p>
    <a href="#" class="ad-close">關閉</a>
  </div>
```

7.  stop() 中斷目前的動畫效果

```
$(document).ready(function() {
  $('.start').click(function(event) {
    /* Act on the event */
    $('.box').stop().slideToggle(3000);
  });
});
```

8. 設定 offcanvas 左右選單切換

```
$(document).ready(function() {
  $('.header').click(function(event) {
    /* Act on the event */
    $('body').toggleClass('open');
  });
});
```

```
.container {
  position: relative;
  /* aside 打開時不會有 x 軸 */
  overflow: hidden;
}
.main {
  height: 300px;
  background: #000;
  transition: 0.3s ease;
}
.header {
  height: 50px;
  background: red;
}
.aside {
  position: absolute;
  top: 0;
  bottom: 0;
  width: 270px;
  height: 300px;
  background: yellow;
  transform: translateX(-270px);
  transition: 0.3s ease;
}
.open .main {
  transform: translateX(270px);
}
.open .aside {   
  transform: translateX(0px);
}
```

```
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>4-OffCans</title>
  <link rel="stylesheet" href="css/animate.css">
  <link rel="stylesheet" href="css/all.css">
  <script src="js/jquery-2.2.3.min.js"></script>
  <script src="js/all.js"></script>
</head>
<body>
  <div class="container">
    <div class="aside"></div>
    <div class="main">
      <div class="header"></div>
    </div>
  </div>
  </div>
</body>
</html>
```
9. Animate.css

- Demo : https://codepen.io/kancheng/pen/LYmWbKP

- Animate.css：https://animate.style/

- https://animate.style/#documentation

- GitHub：https://github.com/animate-css/animate.css

CDN：

```
<link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/animate.css/4.1.0/animate.min.css'/>
```

### 操控網頁元素

1. this - 操作本身元素

```
.menu{
  width: 500px;
  margin: 20px auto;
}
.menu li {
  padding: 5px;
  border:1px solid;
  margin-bottom: 1em;
}
.menu li:hover,.menu li.active{
  background: blue;
  color: #fff;
}
```

```
$(document).ready(function() {
  $('.menu li').click(function(event) {
    /* Act on the event */
    // $(this).addClass('active');
    $(this).toggleClass('active');
  });
});
```

```
  <ul class="menu">
    <li>選單1</li>
    <li>選單2</li>
    <li>選單3</li>
    <li>選單4</li>
    <li>選單5</li>
    <li>選單6</li>
  </ul>
```

2. parent() - 父階層元素

```
  <div class="cart">
    <h2>購物車</h2>
    <ul >
    <li><input type="button" class="addCart" value="加入購物車">吹風機</li>
    <li><input type="button" class="addCart" value="加入購物車">冷氣機</li>
    <li><input type="button" class="addCart" value="加入購物車">電視</li>
    <li><input type="button" class="addCart" value="加入購物車">電腦</li>
    <li><input type="button" class="addCart" value="加入購物車">平版電腦</li>
    <li><input type="button" class="addCart" value="加入購物車">智慧型手機</li>
  </ul>
  </div>
```

```
$(document).ready(function() {
  $('.addCart').click(function(event) {
    $(this).parent().toggleClass('active');
  });
});
```

```
.cart {
  width: 300px;
  margin: 20px auto;
}
.cart h2 {
  margin-bottom: 1em;
  font-size: 19.2px;
}
.cart li {
  border: 1px solid gray;
  padding: 5px;
  margin-bottom: 2em;
}
.cart li.active {
  background: #0095D4;
  color: #fff;
}
.addCart {
  background: blue;
  color: #fff;
  border:none;
  cursor: pointer;
  margin-right: 10px;
}
.addCart:hover {
  background:#008DD8;
}
```

3. siblings() - 同層元素

```
$(document).ready(function() {
  $('.menu li').click(function(event) {
    /* Act on the event */
    // $(this).addClass('active');
    $(this).addClass('active').siblings().removeClass('active');
  });
});
```

```
.menu {
  width: 500px;
  margin: 20px auto;
}
.menu li {
  padding: 5px;
  border:1px solid;
  margin-bottom: 1em;
}
.menu li:hover,.menu li.active {
  background: blue;
  color: #fff;
}
```

```
  <ul class="menu">
    <li>選單1</li>
    <li>選單2</li>
    <li>選單3</li>
    <li>選單4</li>
    <li>選單5</li>
    <li>選單6</li>
  </ul>
```

4. find () - 找子元素內容

```
$(document).ready(function() {
  $('.cart li').click(function(event) {
    $(this).find('h3').toggleClass('active');
  });
});
```

```
.cart {
  width: 500px;
  margin: 20px auto;
}
.cart li {
  width: 30%;
  float: left;
  height: 100px;
  margin: 1%;
  border: 1px solid #000;
  cursor: pointer;
}

.cart h3.active {
  background: blue;
  color:#fff;
}
```

```
  <div class="cart">
    <ul>
      <li>
        <h3>產品1</h3>
      </li>
      <li>
        <h3>產品2</h3>
      </li>
      <li>
        <h3>產品3</h3>
      </li>
      <li>
        <h3>產品4</h3>
      </li>
      <li>
        <h3>產品5</h3>
      </li>
      <li>
        <h3>產品6</h3>
      </li>
    </ul>
  </div>
```

5. QA 折疊選單

```
$(document).ready(function() {
  $('.question h3').click(function(event) {
    // 讓點擊到的 h3 亮起來，其他h3移除active樣式
    $(this).toggleClass('active');
    // 讓點擊到的 h3找到父元素 .question ，再找裡面的 P 判斷收闔
    $(this).parent().find('p').slideToggle();
    // 自己以外的 p 隱藏起來
    $(this).parent().siblings().find('p').slideUp();
    // 自己以外的 h3 移除u樣式
    $(this).parent().siblings().find('h3').removeClass('active');
  });
});
```

```
.question-list {
  margin: 0 auto;
  width: 500px
}
.question h3 {
  border: 1px solid gray;
  padding: 5px;
  font-size: 18px;
}
.question h3:hover,.question h3.active {
  background: blue;
  color:#fff;
}
.question p {
  display: none;
  padding: 5px;
}
```

```
<div class="question-list">
  <div class="question">
    <h3>1.請問1+1=多少</h3>
    <p>答案記得沒錯的話，應該是2吧！</p>
  </div>
  <div class="question">
    <h3>2.那假如是2+2的話呢</h3>
    <p>當然是4啊！</p>
  </div>
  <div class="question">
    <h3>3.ok，所以3+3就等於7嘍</h3>
    <p>...我看你還是重讀小學吧！</p>
  </div>
</div>
```

6. 二階層式折疊選單設計

```
$(document).ready(function() {
  $('.cart > li > a').click(function(event) {
    event.preventDefault();
    $(this).parent().siblings().find('ul').slideUp();
    $(this).parent().find('ul').slideToggle();
  });
});
```

```
.cart {
  width: 500px;
  margin: 20px auto;
}
.cart > li {
  margin-bottom: 1em;
}
.cart > li > a {
  color: blue;
  border: 1px solid gray;
  display: block;
  padding: 5px;
}
.cart > li > a:hover {
  background: blue;
  color: #fff;
}
.cart > li li {
  margin: 5px 0;
}
.cart ul {
  display: none;
}
```

```
    <ul class="cart">
      <li>
        <a href="#">選單1</a>
        <ul>
          <li><a href="#">選單1-1</a></li>
          <li><a href="#">選單1-2</a></li>
          <li><a href="#">選單1-3</a></li>
        </ul>
      </li>
      <li>
        <a href="#">選單2</a>
        <ul>
          <li><a href="#">選單2-1</a></li>
          <li><a href="#">選單2-2</a></li>
          <li><a href="#">選單2-3</a></li>
        </ul>
      </li>
      <li>
        <a href="#">選單3</a>
        <ul>
          <li><a href="#">選單3-1</a></li>
          <li><a href="#">選單3-2</a></li>
          <li><a href="#">選單3-3</a></li>
        </ul>
      </li>
    </ul>
```

7. 使用 html()、text() 載入內容

```
$(document).ready(function() {
  $('body').html('<h1>OWO</h1>');
  $('.box').html('<h1>OWO</h1>');
  $('.box h1').text('OWO');
});
```

8. click()、on() 的差別

```
$(document).ready(function() {
  // click範例
  $(".box").click(function(event) {
    event.preventDefault();
    //要執行的程式碼
  });

  // on 範例
  $('body').on('click', '.selector', function(event) {
    event.preventDefault();
    //要執行的程式碼
  });
});
```


### jQuery 常用小技巧

1. attr() - 動態增加 HTML 標籤屬性

```
$(document).ready(function() {
  $('img').attr('width','50');
});
```

```
.box {
  width: 300px;
  height: 300px;
  border: 1px solid;
  overflow: hidden;
}
```

```
<body>
  <img src="images/logo.png" width="250" alt="">
  <img src="images/logo.png" width="250" alt="">
  <img src="images/logo.png" width="250" alt="">
  <img src="images/logo.png" width="250" alt="">
  <br>
  <a href="#">link</a>
</body>
```

2. remove() - 移除網頁標籤

```
$(document).ready(function() {
  $('.remove').click(function(event) {
    /* Act on the event */
    $(this).parent().parent().hide();
  });
});
```

```
td, th {
  border: 1px solid #000;
}
```

```
<body>
<table>
  <tr>
    <td><input type="button" class="remove" value="刪除"></td>
    <td>內容1</td>
  </tr>
  <tr>
    <td><input type="button" class="remove" value="刪除"></td>
    <td>內容2</td>
  </tr>
  <tr>
    <td><input type="button" class="remove" value="刪除"></td>
    <td>內容3</td>
  </tr>
</table>
</body>
```

3. top 滑動效果

```
$(document).ready(function() {
 $('.top a').click(function(event) {
  event.preventDefault();
  $('html,body').animate({
    scrollTop: 0
  }, 1000);
 });
});
```

```
.top {
  position: fixed;
  bottom: 0;
  right: 0;
}
```

```
  <div class="top">
    <a href="#"><img src="images/1464891752_f-top_256.png" alt=""></a>
  </div>
```

4. FontAwesome :

- 版本 v5.15.4 CDN：

```
<link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.4/css/all.min.css'/>
```

- 版本 v6.1.1 CDN：

```
<link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.1.1/css/all.min.css'/>
```

```
$(document).ready(function() {
 $("a[href$='.doc']").addClass('fa fa-file-word-o');
 $("a[href$='.jpg']").addClass('fa fa-file-photo-o');
 $("a[href$='.zip']").addClass('fa fa-file-zip-o');
});
```

```
.list a {
  text-decoration: none;
  color: red;
}
.list a:hover {
  
  color: #434343;
}
.list a:before {
  margin-right: 15px;
  
}
.list li {
  margin-bottom: 20px;
  font-size: 99px;
}
```

```
  <ul class="list">
    <li>
      <a href="doc/word.jpg">圖片檔案</a>
    </li>
    <li><a href="doc/word2.jpg">圖片二檔案</a></li>
    <li>
      <a href="doc/word.doc">word 檔案</a>
    </li>
    <li>
      <a href="doc/word.zip">壓縮檔案</a>
    </li>
  </ul>
```

### 第三方 Plugin

1. 需要注意的細節

- Statcounter：https://gs.statcounter.com/

- 需要注意有沒有支援到目前主流的瀏覽器

- 該套件有沒有支援主流的更新

- 嘗試修改與整合多個套件

2. Lightbox 2 - 圖片燈箱效果

- http://lokeshdhakar.com/projects/lightbox2/

- CSS：

```
https://cdnjs.cloudflare.com/ajax/libs/lightbox2/2.11.3/css/lightbox.min.css
```

- JavaScript：

```
https://cdnjs.cloudflare.com/ajax/libs/lightbox2/2.11.3/js/lightbox.min.js
```

```
$(document).ready(function() {
  $('.button').click(function(event) {
    $('.text').fadeToggle(1000);
    // fadeIn 預設隱藏的東西給打開
    // fadeOut 預設開啟的東西給關閉
  });
  // lightbox 效果
  lightbox.option({
        'resizeDuration': 2000,
        'wrapAround': true
      });
  $(window).load(function() {
      $('#slider').nivoSlider(); 
  });
});
```

3. Swiper - 輪播效果

- https://swiperjs.com/get-started

- https://swiperjs.com/

- http://idangero.us/swiper/

- CSS：https://unpkg.com/swiper/swiper-bundle.min.css

- JavaScript：https://unpkg.com/swiper/swiper-bundle.min.js

```
<head>
  <meta charset="UTF-8">
  <title>Document</title>
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/Swiper/4.4.6/css/swiper.css">
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/Swiper/4.4.6/css/swiper.min.css">

  <style>
    .swiper-container {
    width: 800px;
    height: 400px;
    }
  </style>

</head>
<body>
  <!-- Slider main container -->
<div class="swiper-container">
    <!-- Additional required wrapper -->
    <div class="swiper-wrapper">
        <!-- Slides -->
        <div class="swiper-slide">Slide 1</div>
        <div class="swiper-slide">Slide 2</div>
        <div class="swiper-slide">Slide 3</div>
    </div>
    <!-- If we need pagination -->
    <div class="swiper-pagination"></div>

    <!-- If we need navigation buttons -->
    <div class="swiper-button-prev"></div>
    <div class="swiper-button-next"></div>

    <!-- If we need scrollbar -->
    <div class="swiper-scrollbar"></div>
</div>
  
  <script src="https://cdnjs.cloudflare.com/ajax/libs/Swiper/4.4.6/js/swiper.js"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/Swiper/4.4.6/js/swiper.min.js"></script>
  <script>
  var mySwiper = new Swiper ('.swiper-container', {
    // Optional parameters
    direction: 'vertical',
    loop: true,

    // If we need pagination
    pagination: {
      el: '.swiper-pagination',
    },

    // Navigation arrows
    navigation: {
      nextEl: '.swiper-button-next',
      prevEl: '.swiper-button-prev',
    },

    // And if we need scrollbar
    scrollbar: {
      el: '.swiper-scrollbar',
    },
  })
  </script>
</body>
```

```
<head>
  <meta charset="UTF-8">
  <title>Document</title>
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/Swiper/4.4.6/css/swiper.css">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/Swiper/4.4.6/css/swiper.min.css">
  <style>
    .swiper-container {
    width: 800px;
    height: 400px;
    }
  </style>
</head>
<body>
  <!-- Slider main container -->
<div class="swiper-container">
    <!-- Additional required wrapper -->
    <div class="swiper-wrapper">
        <!-- Slides -->
        <div class="swiper-slide">Slide 1</div>
        <div class="swiper-slide">Slide 2</div>
        <div class="swiper-slide">Slide 3</div>
    </div>
    <!-- If we need pagination -->
    <div class="swiper-pagination"></div>
    <!-- If we need navigation buttons -->
    <div class="swiper-button-prev"></div>
    <div class="swiper-button-next"></div>
</div>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/Swiper/4.4.6/js/swiper.js"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/Swiper/4.4.6/js/swiper.min.js"></script>
  <script>
  var mySwiper = new Swiper ('.swiper-container', {
    // Optional parameters
    direction: 'horizontal',
    speed: 3000,
    loop: true,
    autoplay: {
    delay: 1500,
    },
    effect: 'cube',
    // If we need pagination
    pagination: {
      el: '.swiper-pagination',
    },
    // Navigation arrows
    navigation: {
      nextEl: '.swiper-button-next',
      prevEl: '.swiper-button-prev',
    },
  })
  </script>
</body>
```


### 精進

1. 網頁插件關鍵字速記表

- JavaScript、 jQuery e.g. JavaScript carousel :

```
lightbox 燈箱效果
tab 頁籤
carousel 幻燈片
dialogs、 modal 對話框
marquee 馬跑燈
gallery 畫廊
tooltips 提示框
accordion 折疊選單
form validation 表單驗證
datepicker 日曆
parallax 滾動視差
scrollbars 滾動條
chart 圖表
masonry 瀑布流
scroll 滾動
navigation、 menu 導覽選單
text effect 文字效果
dropdown 下拉選單
progressbar 進度條
editor 線上網頁編輯器
video 影片播放器
counter 倒數計時
zoom 放大鏡
autocomplete 自動完成
```

- CSS e.g. CSS hover :

```
hover 滑動
grid 格線系統
menu 選單
table 表格
button 按鈕
transition 漸變
animation 動畫
typography 文字排版
pagination 分頁
card 卡片
star ratings 星等評價
web font 網頁字體
code 程式碼
```

- 其他熱門關鍵字 e.g. CSS template :

```
theme、 template 版型
framework 框架
responsive 響應式設計
icon 圖示
timeline 時間軸
breadcrumb 麵包屑
tag 標籤
cheatsheet 速記表
component 元件、組件
utility 輔助
```

2. 自學建議

- https://www.youtube.com/watch?v=DBjRl7IXNiQ

- https://quip.com/7waXAbSyH7mL

- 關鍵字搜尋技巧

- 找「自己看得懂」的教學文章

- 永遠抱持猜測態度，不要盡信

- Youtube 也是個很好的搜尋管道

- 圖片搜尋也是個管道

- 搜尋別人在 Github 寫的程式碼

Ex :

```
react todolist demo
```
以 「技術名稱+實作功能+範例」 來搜尋，用 sample、demo、example 都可以找到許多開發者寫的範例。

- 寫一份自學文件或資源連結區

* 線上程式辭典
* 所蒐集的 BLOG 文章
* 學習 Todolist，了解有哪些原理還要再多找資源補充


### Sublime Text 3 & 4

1. 改變介面設定 : Preference -> Color

2. 畫面切割 : View -> Layout

3. 檢視項目 : View -> Side Bar

4. 找檔案 : Goto -> Goto Anything

5. 找檔案特定行 : Goto -> Goto Anything ->[檔名]:[行]

6. 熱鍵 - 常用 : 儲存、複製、貼上、復原

```
Ctrl + Enter    插入下一行
Ctrl + Shift + Enter    插入前一行
Ctrl + Shift + ↑    往上移動一行
Ctrl + Shift + ↓    往下移動一行
```

7. 熱鍵 - 總表 :

```
編輯
Ctrl + X    刪除行
Ctrl + Enter    插入下一行
Ctrl + Shift + Enter    插入前一行
Ctrl + Shift + ↑    往上移動一行
Ctrl + Shift + ↓    往下移動一行
Ctrl + L    選取整行
Ctrl + D    選取單字（可重複選取相同的）
Alt + F3    選取所有已選取的單字
Ctrl + M    跳到最近的括弧
Ctrl + Shift + M    選取括弧內的所有文字
Ctrl + K + K    刪除游標後方所有文字
Ctrl + K + Backspace    刪除游標前方所有文字
Ctrl + ]    向內縮排(通常使用Tab)
Ctrl + [    向外縮排(通常使用Shift + Tab)
Ctrl + Shift + D    複製行
Ctrl + J    與下一行結合為同一行
Ctrl + /    註解與移除註解
Ctrl + Shift + /    區域註解
Ctrl + Y    回覆上一步，沒有上一步時重複上個動作
Ctrl + Shift + V    貼上並符合縮排
Ctrl + U    軟回覆(包括選取動作)
導覽/Goto Anything
Ctrl + P    快速開啟檔案
Ctrl + R    快速到達符號(function, class, etc...)
Ctrl + G    快速到達某一行
Ctrl + ;    快速到達變數
通用
Ctrl + Shift + P    命令提示符(包含所有命令)
Ctrl + K + B    切換側欄
Ctrl + Shift + Alt + P  切換狀態列
搜尋/取代
Ctrl + F    搜尋
Ctrl + H    取代
Ctrl + Shift + F    檔案間搜尋
分頁
Ctrl + Shift + T    還原最後關閉的分頁
Ctrl + PgUp 換到上一個分頁
Ctrl + PgDown   換到下一個分頁
Ctrl + Tab  切換上一個分頁
Alt + [NUM] 切換到第[NUM]個分頁
切割視窗
Alt + Shift + (2, 3, 4) 垂直分割(2, 3, 4)個視窗
Alt + Shift + 1 回覆到預設
Alt + Shift + 5 水平垂直分割
Alt + Shift + (8, 9)    水平分割(2, 3)個視窗
書籤
Ctrl + F2   切換書籤
F2  到下一個書籤
Shift + F2  到上一個書籤
Ctrl + Shift + F2   清除書籤
文字操作
Ctrl + K + U    轉換為大寫
Ctrl + K + L    轉換為小寫
```

8. 善用程式碼折疊的功能

9. Package Control : https://packagecontrol.io/

- https://packagecontrol.io/installation

- Open the command palette

> Win/Linux: ctrl+shift+p, Mac: cmd+shift+p
> Type Install Package Control, press enter

- Menu

> Open the Tools menu
> Select Install Package Control…

- 觀察 Show Console : View ->  Show Console

10. Package Control 、Emmet 安裝教學

```
Ctrl + Shift + P -> Install Package Control -> emmet
```
- Windows 安裝流程

```
1. 到 install package control，複製程式碼後，到編輯器按 CTRL+ ` ，將程式碼貼上去按 ENTER
2. 步驟有成功的話，按Ctrl+SHIFT+P 搜尋 install package 後按 enter
3. 找到 到 emmet 後按 enter
4. 在 html 檔案  按 html:5 後按 tab 展開就表示安裝成功
```

- Mac 安裝流程

```
1. 到 install package control，複製程式碼後，到編輯器按 Command+` ，將程式碼貼上去按ENTER
2. 步驟有成功的話，按 Command+SHIFT+P 搜尋 install package 後按 enter
3. 找到 emmet後按enter
4. 在html檔案  按  html:5 後按 tab 展開就表示安裝成功
```

11. emmet 文件 : https://docs.emmet.io/

12. emmet 熱鍵 :

- EX 1 :

```
ul>li*3>a[href=#]{$}
```

```
<ul>
    <li><a href="#">1</a></li>
    <li><a href="#">2</a></li>
    <li><a href="#">3</a></li>
</ul>
```

- EX 2 :

```
ul>li.menu$*6
```

```
<ul>
    <li class="menu1"></li>
    <li class="menu2"></li>
    <li class="menu3"></li>
    <li class="menu4"></li>
    <li class="menu5"></li>
    <li class="menu6"></li>
</ul>
```

- Emmet HTML :

```
- html:5 -> html5 文件模式

- link:css -> 插入CSS檔案

- div -> <div></div>

- .box -> <div class="box"></div>

- div*2 -> <div></div> <div></div>

- div>p -> <div><p></p></div>

- div+p -> <div></div><p></p>

- div{hello} -> <div>hello-/div>

- div[alt=hello] -> <div alt="hello"></div>

- div>lorem -> <div>Lorem ipsum dolor..</div>

- div>lorem1 -> <div>Lorem</div>

- (.box>h1)*3 -> <div class-"box"><h1></h1></div>*3

- p.box$*2 -> <p class="box1"></p> <p class="box2"></p>

```

- Emmet CSS :

```
- mo -> margin: 0 0 0 0

- ml10 -> margin-left: 10px

- Bg -> background

- c#000 -> color:#000

- fl -> float: left

- pos-r -> position:relative

- fz12 -> font-size: 12px

- h10 -> height: 10px

- w10 -> width: 10px

```


13. AutoFileName：下拉式自動提示檔案連結 : https://packagecontrol.io/packages/AutoFileName

14. Goto-CSS-Declaration：即時追蹤CSS程式碼位置 : https://packagecontrol.io/packages/Goto-CSS-Declaration

```
Win + Alt + .
```

15. SideBarEnhancements：增強側欄工具列功能 : https://packagecontrol.io/packages/SideBarEnhancements

```
目前只支援到 3 版
```

16. HTML-CSS-JS Prettify：自動縮排網頁程式碼 : https://packagecontrol.io/packages/HTML-CSS-JS%20Prettify

```
Ctrl + Shift + H
```