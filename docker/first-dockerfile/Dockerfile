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
