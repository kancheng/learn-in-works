# web - gulp

## Details

0. Gulp 範例 : https://github.com/hexschool/web-layout-training-gulp

1. 在自己作業系統上裝 Node.js (Windows & Mac)

```
node -v
```

```
npm -v
```

2. Gulp install

- gulp 3.9

```
npm install gulp -g
```

- gulp 4.0

```
npm install gulp-cli -g
```

> 若無 -g 則會安裝在區域

3. iterm 安裝 : https://pjchender.blogspot.com/2017/02/mac-terminal-iterm-2-oh-my-zsh.html

4. gulp

```
gulp -v
```

5. npm 資訊存入 package.json

```
npm install [Package Name] --save
```

6. gulp setting

- gulpfiles.js

```
var gulp = require('gulp');

gulp.task('copyHTML',function(){
    return gulp.src('./source/**/*.html')
        .pipe(gulp.dest('./public/'))
)}
```

> 會將 source 目錄下的檔案複製到 public

```
gulp copyHTML
```

7. 有沒有加入 -g 差異在哪裡呢？

- 有加入 `-g`：這是安裝全域的套件

也就是安裝在目前的電腦上，其目的是啟用 `gulp` 這個指令

- 沒有加入：這是 local 套件安裝的指令

是裝在目前的專案資料夾內，其目的是執行 gulp 時可以取用的套件

- 總結：只有 npm install gulp -g  才會使用到全域的指令

在教學中， -g 也只會出現一次，其餘 gulp 套件只會用到 "npm install --save"，像是

```
npm install gulp --save # gulp 這個套件在專案資料夾也需要載入一次
npm install gulp-jade --save # 其它套件都不會用到 -g
```

8. 功能

- 指定任務 gulp.task

```
gulp.task('{name}', function(){

})
```


- 來源檔案 gulp.src

```
gulp.task('{name}', function(){
    gulp.src('{./xxx/xxx.file}')
})
```


- 指定事件 `.pipe(/* Do Something. */)`

```
gulp.task('{name}', function(){
    gulp.src('{./xxx/xxx.file}')
        .pipe(/* Do Something. */)
})
```

- 輸出

```
gulp.task('{name}', function(){
    gulp.src('{./xxx/xxx.file}')
        .pipe(/* Do Something. */)
        .pipe(gulp.dest('{...path}'))
})
```

- 監控

```
gulp.task('{name}', function(){
    gulp.watch(['{...}'], [{task}]);
})
```

9. npm install 中的 --save 與 --save-dev 之差異，其會再 package.json 中不同的地方

- `--save` : 正式環境 

- `--save-dev` : 開發環境

EX :

```
npm install gulp-sass --save
```

10. 安裝區域的套件時，可以使用以下指令確保安裝到 3.9 版本

```
npm install gulp@3.9.1 --save
```

11. 使用到的套件列表

- HTML 樣板語言 - gulp-jade : https://www.npmjs.com/package/gulp-jade

- 強大的 CSS 預處理器 - gulp-sass : https://www.npmjs.com/package/gulp-sass

- 讓 Gulp 在運行的過程中遇錯不會中斷 - gulp-plumber : https://www.npmjs.com/package/gulp-plumber

- 強大的 CSS 後處理器 - gulp-postcss : https://www.npmjs.com/package/gulp-postcss

- 自動為你的 CSS 補上前綴詞 - autoprefixer : https://www.npmjs.com/package/autoprefixer

- 簡化 gulp 載入流程 - gulp-load-plugins : https://www.npmjs.com/package/gulp-load-plugins

- JavaScript ES6 編譯工具 - gulp-babel : https://www.npmjs.com/package/gulp-babel

- JavaScript ES6 編譯工具 - babel-preset-es2015 : https://www.npmjs.com/package/babel-preset-es2015

- 標示壓縮、合併程式碼的原始位置 - gulp-sourcemaps : https://www.npmjs.com/package/gulp-sourcemaps

- 合併串接程式碼 - gulp-concat : https://www.npmjs.com/package/gulp-concat

- 前端愛用的 Web Server : Browser Sync

- 包含 Livereload

- https://www.npmjs.com/package/browser-sync

- https://browsersync.io/docs

- Bower 工具 - main-bower-files : https://www.npmjs.com/package/main-bower-files

- CSS 壓縮工具 - gulp-minify-css : https://www.npmjs.com/package/gulp-minify-css

- JavaScript 壓縮工具 - gulp-uglify : https://www.npmjs.com/package/gulp-uglify

- 將指令碼匯入 gulp 流程 - minimist : https://www.npmjs.com/package/minimist

- 將 gulp 加入判斷式 - gulp-if : https://www.npmjs.com/package/gulp-if

12. Jade src 路徑修改說明 :

在範例中路徑是用範例網站提供的 `gulp.src('./source/*.jade') `，建議可以修改成 `gulp.src('./source/**/*.jade') `，這樣的寫法會針對所有子資料夾做編譯。

13. Share target browsers between different front-end tools, like Autoprefixer, Stylelint and babel-preset-env :

- https://github.com/browserslist/browserslist

- https://browsersl.ist/

14. AutoPrefixer 版本更新說明

近期 autoprefixer 更新後，設定瀏覽器的規則改到了 package.json 內，以下附上更新的說明：

- 原有的在 gulp 內設定瀏覽器相容性的地方移除

```
// 這段移除
var plugins = [
  autoprefixer({ ... }),
];
```

- 將瀏覽器列表的內容改寫至 package.json 內，加入以下這段

```
"browserslist": [
  "last 1 version",
  "> 5%"
]
```

- 運行 PostCSS 的地方稍作調整，參考如下：

```
return gulp.src('./source/scss/**/*.scss')
  // ...
  .pipe($.postcss([autoprefixer()])) // 直接
```

15. babel 套件補充說明 :

gulp-babel 套件可能在更新時沒有加入核心套件，導致在加入 babel 時可能會出現 `cannot find module 'bable-core'` ，但不是所有環境都會遇到這樣的狀況，若發生此問題則可手動加入此套件：

```
npm install babel-core --save 
```
或參考以下文件，官方會不定期更新使用方法 : https://www.npmjs.com/package/gulp-babel

16. 前端套件管理，Bower 的運用 : https://www.youtube.com/watch?v=-rwbj--r1iw

17. Bower : https://bower.io/

```
npm install -g bower
```

```
bower -v
```

- Install packages

Install packages with bower install. Bower installs packages to bower_components/.

```
bower install <package>
```

A package can be a GitHub shorthand, a Git endpoint, a URL, and more. Read more about bower install.

```
# installs the project dependencies listed in bower.json
bower install
# registered package
bower install jquery
# GitHub shorthand
bower install desandro/masonry
# Git endpoint
bower install git://github.com/user/package.git
# URL
bower install http://example.com/script.js
```

- 第一次使用

```
bower init
```

- EX : install JQuery

有無 --save 會影響加不加得入 bower.json 的檔案裡面。

```
bower install jquery --save
```

18. .browerrc

Reference : https://github.com/bower/spec

- https://bower.io/docs/config/

```
{
  "directory": "vendors/"
}
```

19. Bower 額外補充說明 :

並非所有套件對於 bower 的取用都那麼的友善，以 Vue.js 來說，他就不會正確取得 dist 資料夾內的 vue.js。此時可以透過自訂 mainBowerFiles 方式來作調整。

- 先安裝 vuejs 的套件

```
$ bower install vue --save
```
- gulp 加入以下 overrides

```
gulp.task('bower', function() {
  return gulp.src(mainBowerFiles({
    "overrides": {
        "vue": {                       // 套件名稱
            "main": "dist/vue.js"      // 取用的資料夾路徑
        }
    }
  }))
    .pipe(gulp.dest('./.tmp/vendors'));
    cb(err);
});
```

另外，如果外部載入的套件如果需要排序，可以透過另一個套件 gulp-order https://www.npmjs.com/package/gulp-order ，像是 Bootstrap 與 jQuery 會有前後相依的需求，gulp-order 可以透過陣列排列自己所需要的順序。

```
gulp.task('vendorJs', ['bower'], function(){
  return gulp.src(['./.tmp/vendors/**/**.js'])
    .pipe($.order([
      'jquery.js',
      'bootstrap.js'
    ]))
    .pipe($.concat('vendor.js'))
    .pipe(gulp.dest('./public/javascripts'))
})
```

20. Gulp & Bower

```
gulp.task('bower', function() {
    return gulp.src(mainBowerFiles())
        .pipe(gulp.dest('./.tmp/vendors'))
});

gulp.task('vendorJs', ['bower'], function() {
    return gulp.src('./.tmp/vendors/**/**.js')
        .pipe($.concat('vendors.js'))
        .pipe(gulp.dest('./public/js'))
});
```

21.  gulp minify CSS 與 Webservice 補充 :

gulp-minify-css 作者不再維護了，改而推薦使用 gulp-clean-css : https://github.com/scniro/gulp-clean-css

所以在安裝 gulp-minify-css，會出現提示 This package has been deprecated. Please use gulp-clean-css instead.

兩者目前 CSS 開發上影響不大，但使用在專案上推薦改用 gulp-clean-css

browser-sync 效能調整，如果稍微大一點的專案，會發現瀏覽器重新整理次數有點多，此時可以調整參數減少重新整理次數。

```
browserSync.init({
 server: { baseDir: './public' },
 reloadDebounce: 2000
 })
```

此段加入以後，重新整理的間隔必須超過 2 秒，可以依據需求調整使用。


22. 依據開發環境調整你的輸出內容 - minimist :

- develop

>     - JS
>         - console 保留
>         - 不壓縮
>     - CSS
>         - 不壓縮

- production

>     - JS
>        - 放棄 console.log(), 壓縮
>     - CSS, HTML, 壓縮

23. minimist

```
var minimist = require('minimist');
var envOptions = {
    string: 'env',
    default: { env: 'develop' }
}    
var options = minimist 
```
24. 釋出你的開發成品

- gulp-clean : https://www.npmjs.com/package/gulp-clean

- gulp-sequence : https://www.npmjs.com/package/gulp-sequence

> 依序處理的流程

25. gulp 圖片壓縮技巧 :

- gulp-imagemin : https://www.npmjs.com/package/gulp-imagemin

```
gulp.task('image-min', () =>
    gulp.src('./source/images/*')
        .pipe($.imagemin())
        .pipe(gulp.dest('./public/images' ))
);
```

- 由環境決定是否壓縮

```
gulp.task('image-min', () =>
    gulp.src('./source/images/*')
        .pipe($.if(options.env === 'production', $.imagemin()))
        .pipe(gulp.dest('./public/images' ))
);
```

v7.1.0版的 basic 範例寫法：

```
exports.imgMin = () => (

 gulp.src('./source/img/*')

   .pipe($.imagemin())

   .pipe(gulp.dest('./public/img'))

);
```

打 gulp imgMin 就可以運作了，其最後輸出這樣寫可以執行。

```
gulp.task('default', gulp.parallel('pug', 'sass', 'babel', gulp.series('bower', 'vendorJs'), 'browser-sync',gulp.series(exports.imgMin) , 'watch'));
```

此寫法依然可以改成像這樣子

```
gulp.task('image',() => {
 return gulp.src('./src/img/**/*')
 .pipe($.if(options.env ==='prod', $.imagemin()))
 .pipe(gulp.dest('./public/img/'));
});
```

又或者是 Gulp4 的寫法


```
function image() {
  return gulp.src('./src/img/**/*')
    .pipe($.if(options.env === 'prod', $.imagemin()))
    .pipe(gulp.dest('./public/img/'));
}
```

在此關於 parallel 與 series 使用上，會建議 'pug', 'sass', 'babel' 使用 series 即可，主要是確保當某一個 Gulp 編譯錯誤時先不要往下執行，而若全部都包 parallel 的話，會變成全部一次執行而導致比較難抓錯誤。因此通常建議改成以下會較好

```
exports.default=gulp.series(clean,ejs,sass,babel,vendorsJs,gulp.parallel(browser,watch));
```

其主要原因是因為我們有時候並不會一安裝套件就立刻修改成自己想要的，可能會先做一些測試，所以官方的基礎程式碼才會這樣子寫


```
const gulp = require('gulp');
const imagemin = require('gulp-imagemin');
 
exports.default = () => (
    gulp.src('src/images/*')
        .pipe(imagemin())
        .pipe(gulp.dest('dist/images'))
);
```

意旨你直接貼上這一段程式碼並輸入 gulp 就可以直接壓縮圖片而不用調整任何需求，當然這也可能是應應 Gulp4 的寫法，但是實際搭上其他功能是，則不會這樣寫。

26. gulp gh-pages

```
gulp.task('deploy', function () {
    return gulp.src('./public/**/*')
        .pipe($.ghPages());
});
```

- https://github.com/hexschool/gulp-demo

- https://github.com/kancheng/gulp-demo

- https://hexschool.github.io/gulp-demo/

本範例是使用 gulp 3.9.1，另有使用 Bower 載入前端套件。

27. npm install 中的 --save 與 --save-dev 之差異

- 只安裝 production 的指令

```
npm install --only=prod
```

- 只安裝 develop 的指令

```
npm install --only=dev
```

- 只留 production ，develop 刪除。

```
npm prune --prod
```


```
{
  "name": "gulp",
  "version": "1.0.0",
  "description": "",
  "main": "index.js",
  "scripts": {
    "test": "echo \"Error: no test specified\" && exit 1"
  },
  "author": "",
  "license": "ISC",
  // production
  "dependencies": {
    "autoprefixer": "^6.7.7",
    "babel-preset-es2015": "^6.24.1",
    "babelify": "^7.3.0"
  }
  // develop
  "devDependencies": {
    "autoprefixer": "^6.7.7",
    "babel-preset-es2015": "^6.24.1",
    "babelify": "^7.3.0"
  }

}
```


- 開發環境 : 主要是 開發時 使用的套件，像是 gulp、sass、babel 等等

- 產品化環境 : 主要是 產品化後，該產品需要使用的套件，像是 bootstrap、jQuery、moment.js

不過實際運作時還是要看伺服器端是如何運作。舉個例子來說，如果在部署正式網站前，希望每次都能夠透過 gulp 先編譯過一次所有檔案，那麼 gulp 也是屬於正式網站所需要的套件，因此 gulp 也就算產品化的環境。這兩者的環境就並非絕對，還是要看需求來改變。

28. Template Language 可以做什麼 : 減少重工。

```
 jade 改用 pug（改名而已）
```

29. 快速入門 Jade

- https://pugjs.org/api/getting-started.html

- https://www.pugjs.cn/api/getting-started.html

- EX : https://gist.github.com/malakhovks/09ab7f0156f3fb47126cada40d4a30e3

- https://gist.github.com/kancheng/25abeef06869a8e4407de69a3da6cf08

- 工具 : https://html2jade.org/

- `|` : 代表同層級

```
html
  head
    meta(charset='utf-8')
    style(type='text/css')
      h1 {color: red;}
    link(rel='stylesheet', type='text/css', href='styles.css')
  script(src='')
  script(type='text/javascript')
  body
    h1  Headers 
    h2  hello 
    h3  hello 
    h4  hello 
    h5  hello 
    h6  hello 
```
- `input#email(type="text" class="form-control")` 的 `form-control` 是 Class Name。

```
.container
  form(action="")
    label(for="email") 請輸入 Email
    input#email(type="text" class="")
```

- `input#email.form-control(type="text" class="")` 的 `.form-control` 是 Class Name。

```
.container
  form(action="")
    label(for="email") 請輸入 Email
    input#email.form-control(type="text")
```

- 多個 Class Name。

```
.container
  form(action="")
    label(for="email") 請輸入 Email
    input#email.class-name-1.class-name-2..class-name-3(type="text")
```

30. pug 怎麼選擇要用 include 還是 extend

通常如果頁面切版太長的時候，我們就會將該區塊獨立出來，然後用 include 插入回來，舉例來講就像是 <header> 區塊我們發現太長了，導致檔案行數過程，所以就會拆出來。

但是 extend 是比較常常使用於 layout，因此與 include 的方式還是有差異的，include 概念在於我們可以將較長的 pug 切出來然後在引入，但是 extend 通常是搭配 layout 每一頁都要使用時使用的。

31. 製作 HTML 樣板

- include : 載入外部區塊

- block : 作為其他頁面的內容顯示區域，與 Extend 一起使用。

- extend : 將其他頁面作為延伸，內容會在 block 內出現

- layout.jade

```
<!DOCTYPE html>
html(lang="en")
  head
    include partials/head.jade
  body
    include partials/navbar.jade
    block content
```

- index.jade

```
extend layout.jade

block content
```

32. Jade 匯入外部 JSON 資料內容

- https://jsoneditoronline.org/

- gulp-data : https://www.npmjs.com/package/gulp-data

```
npm install --save gulp-data
```

```
/*
  Get data via JSON file, keyed on filename.
*/
gulp.task('json-test', function() {
  return gulp.src('./examples/test1.html')
    .pipe(data(function(file) {
      return JSON.parse(fs.readFileSync('./examples/' + path.basename(file.path) + '.json'));
    }))
    .pipe(swig())
    .pipe(gulp.dest('build'));
});
```

- https://github.com/kancheng/gulp-demo/blob/master/gulpfile.js

```
gulp.task('jade', () => {
  return gulp.src(['./source/**/!(_)*.jade'])
    .pipe($.plumber())
    .pipe($.data(function (file) {
      var json = require('./source/data/data.json');
      var menus = require('./source/data/menu.json');
      var source = {
        data: json,
        menus: menus
      }
      return source;
    }))
    .pipe($.jade({ pretty: true }))
    .pipe(gulp.dest('./public'))
    .pipe(browserSync.reload({
      stream: true,
    }));
});
```

- EX :

```
h1 #{menu.list[1].name}
```


33. 使用 Each 處理資料並產生選單

- https://hexschool.github.io/gulp-demo/kh.html

- https://www.pugjs.cn/language/iteration.html

- https://pugjs.org/language/iteration.html

- each

```
ul
  each val in [1, 2, 3, 4, 5]
    li= val
```

```
<ul>
  <li>1</li>
  <li>2</li>
  <li>3</li>
  <li>4</li>
  <li>5</li>
</ul>
```

34. 使用 Mixin 來製作 HTML 模組

- https://github.com/kancheng/gulp-demo/blob/master/source/kh.jade

- https://pugjs.org/language/mixins.html

- https://www.pugjs.cn/language/mixins.html

```
mixin pet(name)
  li.pet= name
ul
  +pet('猫')
  +pet('狗')
  +pet('猪')
```

```
<ul>
  <li class="pet">猫</li>
  <li class="pet">狗</li>
  <li class="pet">猪</li>
</ul>
```

```
mixin link(url, name)
  if (path === url)
    li.nav-item.active
      a.nav-link(href='#{url}')
        | #{ name }
  else
    li.nav-item
      a.nav-link(href='#{ url }')
   I    | #{ name }
```

35. bootstrap & Sass :

- https://github.com/kancheng/gulp-demo/blob/master/package.json

- https://github.com/kancheng/gulp-demo/blob/master/gulpfile.js


36. 使用 includePaths 載入外部 Sass 資源

- `includePaths: ['./node_modules/bootstrap/scss']` 使外部 Sass 當函式庫一樣載入。

- https://getbootstrap.com/docs/4.0/getting-started/theming/

```
gulp.task('sass', function () {
  // PostCSS AutoPrefixer
  var processors = [
    autoprefixer({
      browsers: ['last 5 version'],
    })
  ];

  return gulp.src(['./source/stylesheets/**/*.sass', './source/stylesheets/**/*.scss'])
    .pipe($.plumber())
    .pipe($.sourcemaps.init())
    .pipe($.sass({ 
      outputStyle: 'nested',
      includePaths: ['./node_modules/bootstrap/scss']
    })
      .on('error', $.sass.logError))
    .pipe($.postcss(processors))
    .pipe($.if(options.env === 'production', $.minifyCss())) // 假設開發環境則壓縮 CSS
    .pipe($.sourcemaps.write('.'))
    .pipe(gulp.dest('./public/stylesheets'))
    .pipe(browserSync.reload({
      stream: true
    }));
});
```

- Bootstrap `_variables.scss`

```
// scss-docs-start theme-color-variables
$primary:       #00cc99; // $blue !default;
$secondary:     $gray-600 !default;
$success:       $green !default;
$info:          $cyan !default;
$warning:       $yellow !default;
$danger:        $red !default;
$light:         $gray-100 !default;
$dark:          $gray-900 !default;
// scss-docs-end theme-color-variables
```

37. 合併來自於 NPM 的 JavaScript 資源

- https://getbootstrap.com/docs/4.0/getting-started/introduction/

```
bower uninstall bootstrap --save
```
- bootstrap4.0.0 以後提供 bundle 版本，包含了 popper.js & bootstrap.js

- https://github.com/hexschool/gulp-demo/blob/master/gulpfile.js

```
gulp.task('vendorJs', ['bower'], function () {
  return gulp.src([
    './.tmp/vendors/**/**.js',
    './node_modules/bootstrap/dist/js/bootstrap.bundle.min.js'
  ])
  .pipe($.order([
    'jquery.js'
  ]))
  .pipe($.concat('vendor.js'))
  .pipe($.if(options.env === 'production', $.uglify()))
  .pipe(gulp.dest('./public/javascripts'))
})
```

```
browserSync.init({
 server: { baseDir: './public' },
 reloadDebounce: 2000
 })
```

此段加入以後，重新整理的間隔必須超過 2 秒，可以依據需求調整使用。

- 只有 Sass & JS 合併的版本 : https://github.com/hexschool/gulp-demo/tree/gulp-simple

38. Gulp 3.9 to 4.0

```
npm uninstall gulp --save
```

- https://github.com/hexschool/gulp-demo/blob/feature/v4/gulpfile.js/index.js

- Gulp 4.0 : 多了 parallel and series

- parallel : 同時執行

- series : 依序執行

```
gulp.task(
  'build',
  gulp.series(
    'clean',
    gulp.parallel('jade', 'sass', 'babel'),
    gulp.series(bowerTask, vendorJs, 'imageMin')
  )
);
```

39. 確認任務完成的方法

錯誤說明：Did you forget to signal async completion

由於這個任務沒有辦法明確知道什麼時候全部完成，因此解法有以下幾種

- 1. 加入 callback function

- 2. 轉為 async function

- 3. 加入 return

- 加入 callback function

```
gulp.task('imageMin', function(done) {
  gulp
    .src('./source/images/*')
    // ...
  done(); // 在函式參數傳入一個 callback function，並在最後方調用
});
```

- 轉為 async function，讓 gulp 以同步方式處理

```
gulp.task('imageMin', async function() {
  gulp
    .src('./source/images/*')
    // ...
});
```

- gulp 任務補上 return

```
gulp.task('imageMin', function() {
  return gulp
    .src('./source/images/*')
    // ...
});
```

- 範例連結：https://github.com/hexschool/gulp-demo/tree/feature/v4

- async 是 ES6 的新語法，與其搭配的是 await，用途是透過此函式，可將非同步行為(Promise)變得更容易撰寫

最終，寫起來會很像同步的方式，所以在此，才會寫 "用同步的方式處理"

可以參考：https://hackernoon.com/understanding-async-await-in-javascript-1d81bb079b2c

your code using async functions is much more like using standard synchronous functions.

gulp.series 也是同步的概念，它會依序地執行程式碼


40. 直接將 watch, browserSync 加入任務函式中 :

- https://github.com/hexschool/gulp-demo/blob/feature/v4/gulpfile.js/index.js

```
gulp.task(
  'default',
  gulp.parallel(
    'jade',
    'sass',
    'babel',
    'imageMin',
    gulp.series(bowerTask, vendorJs),

    // 上述任務都完成後，執行函式
    function(done) {
      // 瀏覽器
      browserSync.init({
        server: { baseDir: './public' },
        reloadDebounce: 2000 // 加入 Debounce 可以避免短時間大量編譯，造成瀏覽器不斷重新 Refresh 的問題
      });

      // 和先前相同的 watch，只不過現在也能使用 series 及 parallel
      gulp.watch(
        ['./source/stylesheets/**/*.sass', './source/stylesheets/**/*.scss'],
        gulp.series('sass')
      );
      gulp.watch(['./source/**/*.jade'], gulp.series('jade'));
      gulp.watch(['./source/javascripts/**/*.js'], gulp.series('babel'));

      // 事件完成後的 callback
      done();
    }
  )
);
```

41. Gulp 4.0 的模組化手法

- https://github.com/hexschool/gulp-demo/tree/feature/v4/gulpfile.js

```
index.js
options.js
vendor.js
```

- index.js

```
const gulp = require('gulp');
const $ = require('gulp-load-plugins')();
const browserSync = require('browser-sync');
const autoprefixer = require('autoprefixer');

const { options } = require('./options');
const { bowerTask, vendorJs } = require('./vendor.js');
console.log(bowerTask, vendorJs);

console.log(options);
// production || development
// # gulp --env production

gulp.task('clean', () => {
  return gulp
    .src(['./.tmp', './public/**/*'], { read: false, allowEmpty: true }) // 選項讀取：false 阻止 gulp 讀取文件的內容，使此任務更快。
    .pipe($.clean());
});
// 當從 ['./public/**/*', './.tmp']陣列 換成 ['./.tmp', './public/**/*']
// 就可以重覆一直刷 gulp build 不跳錯誤

gulp.task('jade', () => {
  return gulp
    .src(['./source/**/!(_)*.jade'])
    .pipe($.plumber())
    .pipe(
      $.data(function() {
        var json = require('../source/data/data.json');
        var menus = require('../source/data/menu.json');
        var source = {
          data: json,
          menus: menus
        };
        return source;
      })
    )
    .pipe($.jade({ pretty: true }))
    .pipe(gulp.dest('./public'))
    .pipe(
      browserSync.reload({
        stream: true
      })
    );
});

gulp.task('babel', () => {
  return gulp
    .src(['./source/javascripts/**/*.js'])
    .pipe($.plumber())
    .pipe($.sourcemaps.init())
    .pipe($.concat('all.js'))
    .pipe(
      $.babel({
        presets: ['es2015']
      })
    )
    .pipe(
      $.if(
        options.env === 'production',
        $.uglify({
          compress: {
            drop_console: true
          }
        })
      )
    )
    .pipe($.sourcemaps.write('.'))
    .pipe(gulp.dest('./public/javascripts'))
    .pipe(
      browserSync.reload({
        stream: true
      })
    );
});

gulp.task('sass', function() {
  // PostCSS AutoPrefixer
  var processors = [
    autoprefixer({
      browsers: ['last 5 version']
    })
  ];

  return gulp
    .src(['./source/stylesheets/**/*.sass', './source/stylesheets/**/*.scss'])
    .pipe($.plumber())
    .pipe($.sourcemaps.init())
    .pipe(
      $.sass({
        outputStyle: 'nested',
        includePaths: ['./node_modules/bootstrap/scss']
      }).on('error', $.sass.logError)
    )
    .pipe($.postcss(processors))
    .pipe($.if(options.env === 'production', $.minifyCss())) // 假設開發環境則壓縮 CSS
    .pipe($.sourcemaps.write('.'))
    .pipe(gulp.dest('./public/stylesheets'))
    .pipe(
      browserSync.reload({
        stream: true
      })
    );
});

// 錯誤：Did you forget to signal async completion
// 由於這個任務沒有辦法明確知道什麼時候全部完成，因此解法有以下幾種
// 1. 加入 callback function
// 2. 轉為 async function
// 3. 加入 return
// 4. 使用 promise

// 列出其中兩種簡單的方式
// 1. 加入 callback function
// gulp.task('imageMin', function(done) {
//   gulp
//     .src('./source/images/*')
//     .pipe($.if(options.env === 'production', $.imagemin()))
//     .pipe(gulp.dest('./public/images'));
//   done();
// });

// 2. 轉為 async function，讓 gulp 以同步方式處理
gulp.task('imageMin', async function() {
  gulp
    .src('./source/images/*')
    .pipe($.if(options.env === 'production', $.imagemin()))
    .pipe(gulp.dest('./public/images'));
});

gulp.task('deploy', function() {
  return gulp.src('./public/**/*').pipe($.ghPages());
});

// gulp.task('sequence', gulpSequence('clean', 'jade', 'sass', 'babel', 'vendorJs', 'imageMin'));

// series() and parallel()
// series() 依序執行，必須一個執行完才能執行下一個
// parallel() 平行執行，可同時多個任務

gulp.task(
  'default',
  gulp.parallel(
    'jade',
    'sass',
    'babel',
    'imageMin',
    gulp.series(bowerTask, vendorJs),

    // 上述任務都完成後，執行函式
    function(done) {
      // 瀏覽器
      browserSync.init({
        server: { baseDir: './public' },
        reloadDebounce: 2000 // 加入 Debounce 可以避免短時間大量編譯，造成瀏覽器不斷重新 Refresh 的問題
      });

      // 和先前相同的 watch，只不過現在也能使用 series 及 parallel
      gulp.watch(
        ['./source/stylesheets/**/*.sass', './source/stylesheets/**/*.scss'],
        gulp.series('sass')
      );
      gulp.watch(['./source/**/*.jade'], gulp.series('jade'));
      gulp.watch(['./source/javascripts/**/*.js'], gulp.series('babel'));

      // 事件完成後的 callback
      done();
    }
  )
);

gulp.task(
  'build',
  gulp.series(
    'clean',
    gulp.parallel('jade', 'sass', 'babel'),
    gulp.series(bowerTask, vendorJs, 'imageMin')
  )
);
```

- options.js

```
const minimist = require('minimist'); // 用來讀取指令轉成變數
const envOptions = {
  string: 'env',
  default: { env: 'development' }
};
const options = minimist(process.argv.slice(2), envOptions);

exports.options = options;
```

- vendor.js

```
const gulp = require('gulp');
const mainBowerFiles = require('main-bower-files');
const $ = require('gulp-load-plugins')();

const { options } = require('./options');

// 模組的製作
// task 改成一般的函式寫法，內容與原本的 gulp task 無異
// 用意只在於可以被匯出

const bowerTask = function(cb) {
  gulp.src(mainBowerFiles()).pipe(gulp.dest('./.tmp/vendors'));
  cb();
};

const vendorJs = function(cb) {
  gulp
    .src([
      './.tmp/vendors/**/**.js',
      './node_modules/bootstrap/dist/js/bootstrap.bundle.min.js'
    ])
    .pipe($.order(['jquery.js']))
    .pipe($.concat('vendor.js'))
    .pipe($.if(options.env === 'production', $.uglify()))
    .pipe(gulp.dest('./public/javascripts'));
  cb();
};

// 注意：這是 Node.js 的 module.exports
// 並非 ES6 的方法
exports.bowerTask = bowerTask;
exports.vendorJs = vendorJs;
```



