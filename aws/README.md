# learn-in-works

## Details

## Serverless

1. https://www.serverless.com/

基本上就是使用 www.serverless.com

### 基礎概念

將所需要的程式碼放進 AWS Lambda 並使用 AWS Cloudformation 去建立所需要的 Infra resources，最後用 Jenkins 設計一個 Pipeline，去部署到 dev/stg/prod。其設計 Pipeline 的基本大概會是只有 Main Branch 會部署到 prod，而 stg branch 部署到 stg，dev branch 部署到 dev，剩下依照需求改成適合的狀態。