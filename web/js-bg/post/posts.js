const list = document.querySelector('.list');

let data = [];
function init(){
    axios.get(`${_url}/posts`)
    .then(function(response){
        data=response.data;
        renderData()
    })
}
// 預設載入初始化環境
init();

function renderData(){
  let str = '';
  data.forEach(function (item,index) {
    str+=`<li>${item.body}<a href="postDetail.html?id=${item.id}">觀看全部留言</a></li>`
  })
  list.innerHTML = str;
}