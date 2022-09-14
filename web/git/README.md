# web - git

## Details

1. Git 官網 : https://git-scm.com/

2. mac 推薦終端機 iTerm2 : https://www.iterm2.com/

3. 移動路徑：cd 路徑

4. 回上一層：cd ..

> PS：是兩個.. 不是一個 . 

5. 展開列表：ls 

6. 開新資料夾： mkdir 資料夾名稱 

7. 開新檔案： touch 檔案名稱

8. MAC 終端機高亮

- https://gist.github.com/kevin-smets/8568070

9. gitignore 大全 : https://github.com/github/gitignore

10. 指令大全 :

- https://www.ruanyifeng.com/blog/2015/12/git-cheat-sheet.html

- https://backlogtool.com/git-guide/tw/reference/

- 基礎設定

```
查詢版本
git version
查詢設定列表
git config --list
輸入姓名
git config --global user.name "你的名字"
輸入email
git config --global user.email "你的email"
```

- 新增本地/遠端數據庫

```
在本地資料夾新增數據庫
git init
複製遠端數據庫
git clone 遠端數據庫網址
```

- 增加/刪除檔案

```
增加檔案進入索引
git add 檔案名稱
增加全部檔案進入索引
git add .
查詢狀態
git status
顯示歷史紀錄
git log
將索引提交到數據庫
git commit -m '更新訊息'
```

- 還原指令

```
還原工作目錄與索引，會跟最後一次 commit 保持一樣
git reset --hard 
全部檔案取消索引
git reset HEAD 
單一檔案取消索引
git reset HEAD 檔案名稱 
恢復單一檔案到最新 commit 狀態
git checkout 檔案名稱 
刪除最近一次 commit 
git reset --hard HEAD^ 
上面語法如果刪除錯了可以再用此語法還原
git reset --hard ORIG_HEAD 
刪除最近一次 commit，但保留異動內容
git reset --soft HEAD^
commit 後發現有幾個檔案忘了加入進去，想要補內容進去時
git commit --amend
```

- 分支

```
顯示所有本地分支
git branch
新增分支
git branch 分支名稱
切換分支
git checkout 分支名稱
合併指定分支到目前的分支
git merge 分支名稱
刪除分支
git branch -d 分支名稱
```

- 遠端數據庫操作

```
複製遠端數據庫
git clone 遠端數據庫網址
查詢遠端數據庫
git remote
將本地分支推送到遠端分支
git push 遠端數據庫名稱 遠端分支名稱
將遠端分支拉下來與本地分支進行合併
git pull
```

- 標籤

```
查詢標籤
git tag
查詢詳細標籤
git tag -n
刪除標籤
git tag -d 標籤名稱
新增輕量標籤
git tag 標籤名稱
新增標示標籤
git tag -am "備註內容" 標籤名稱
```

- 暫存

```
暫時儲存當前目錄
git stash
瀏覽 stash 列表
git stash list 
還原暫存
git stash pop
清除最新暫存
git stash drop
清除全部暫存
git stash clear
```

11. 申請個人令牌頁面 : https://docs.github.com/cn/github/authenticating-to-github/keeping-your-account-and-data-secure/creating-a-personal-access-token

12. SSH Key 教學 : https://hsiangfeng.github.io/git/20210709/1381487661/

13. 範例分支圖網址 : http://nvie.com/posts/a-successful-git-branching-model/

14. 在未指定編輯器的情況下，會出現 vim 的編輯器 此時已會預設帶好 commit 的內容，只要依序輸入 `:wq!` 就可離開。

```
:wq!
```

15. 一個指令快速部署 Vue Cli 到 GitHub Pages : https://israynotarray.com/vue/20200214/1055437216/

16. git pull = git fetch + git merge

pull : 就是將遠端的分支將你的本地分支進行合併 merge 的動作，但有時候不希望 pull 下來導致自己的數據庫太亂又擔心有衝突時，可以先使用下面這個指令。

> git fetch origin(遠端數據庫) branch1(遠端分支)

此時的分支會多一個 FETCH_HEAD 的分支，這個就是遠端數據庫的分支，可以等到看過沒問題後，再合併 FETCH_HEAD 也行。

17. 延伸教學資源 :

- 連猴子都能懂得 Git 入門指南 : https://backlogtool.com/git-guide/tw/

- 保哥 30 天 Git 教學 : https://github.com/doggy8088/Learn-Git-in-30-days/blob/master/zh-tw/README.md

- Git 官方繁體教學 : https://git-scm.com/book/zh-tw/v1

