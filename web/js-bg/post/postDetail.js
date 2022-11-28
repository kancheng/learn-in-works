const id = location.href.split("=")[1];

function init(){
    if(id==undefined){
        alert("您的操作錯誤，將移轉到首頁");
        location.href = "./posts.html";
    }
    getPost(id);
    getComments(id);
}
// 預設載入初始化環境
init();
function getPost(id){
    axios.get(`${_url}/posts/${id}?_expand=user`)
    .then(function(response){
        document.querySelector("h1").textContent =  JSON.stringify(response.data);
    })
}
function getComments(id){
    axios.get(`${_url}/posts/${id}/comments?_expand=user`)
    .then(function(response){
        console.log(response);
        document.querySelector(".content").textContent = JSON.stringify(response.data);
    })
}
