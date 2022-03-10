# Docker

## Dockerfile

```
# 基礎映像檔
FROM ubuntu:18.04

# 維護者
MAINTAINER Kan

# 操作指令
RUN apt-get update -y\
    && apt-get install nginx -y

# 設定運行時容器提供服務的通道
EXPOSE 80

# 最後就是當啟用指定容器時 (container) 預設執行的指令
# 格式 CMD[’’executable’’,”param1”,’’param2’’]。
CMD ["nginx","-g","daemon off;"]
```

FROM： 使用到的 Docker Image 名稱

MAINTAINER： 用來說明，撰寫和維護這個 Dockerfile 的人是誰，也可以給 E-mail的資訊

RUN： RUN 指令後面放 Linux 指令，用來執行安裝和設定這個 Image 需要的東西

ADD： 把 Local 的檔案複製到 Image 裡，如果是 tar.gz 檔複製進去 Image 時會順便自動解壓縮。Dockerfile 另外還有一個複製檔案的指令 

COPY:  複製檔案

ENV： 用來設定環境變數

CMD： 在指行 docker run 的指令時會直接呼叫執行

```
# 將 Dockerfile 用成 image
docker build -t init_image .

# 檢視 image
docker images

# 執行
docker run -d -p 80:80 --name test init_image

# 關閉
docker container stop test

# 檢視容器
docker ps -a
```

