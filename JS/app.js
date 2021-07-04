// 1. step
// const loginForm = document.getElementById("login-form");
// const loginInput = loginForm.querySelector("input");
// const loginInput = loginForm.querySelector("button");

// const loginInput = document.querySelector("#login-form input");
// const loginButton = document.querySelector("#login-form button");

// function handleLoginBtnClick(){
//   const username = loginInput.value;
//   if(username === ""){
//     alert("Please write your name")
//   }
//   else if(){
//     alert("Your name is long")
//   }
// }

// loginButton.addEventListener("click", handleLoginBtnClick);


// 2. step (form을 submit할 때 입력값을 받아내기)

// const loginForm = document.querySelector("#login-form");
// const loginInput = document.querySelector("#login-form input");   // 이제 필요한건 login-form 그자체


// function onLoginSubmit(event){    // 보통 매개변수 명으로 event가 관행
//   event.preventDefault();  // 어떤 event의 기본행동이 발생하지 않도록 막아줌 예를들어 form의 submit하면 새로고침하는거
//   console.log(loginInput.value);       
// }

// // 모든 EventListener function의 첫번째 argument는 항상 어떠한 정보를 넘겨줌
// // 클릭이 아닌 submit를 감지해야함 1.step의 조건을 html에서 하므로
// loginForm.addEventListener("submit", onLoginSubmit)

// 3. 링크 기본동작 막기

const loginForm = document.querySelector("#login-form");
const loginInput = document.querySelector("#login-form input");   

const link = document.querySelector("a");

function onLoginSubmit(event){    
  event.preventDefault();  
  console.log(loginInput.value);       
}

function handleLinkClick(event){
  event.preventDefault();
  console.log(event);
}

loginForm.addEventListener("submit", onLoginSubmit) // -> 자바에서 함수를 실행시키는게 브라우저가 정보를 담고 실행해줌
link.addEventListener("click",handleLinkClick)




