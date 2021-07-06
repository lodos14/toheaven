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

// const loginForm = document.querySelector("#login-form");
// const loginInput = document.querySelector("#login-form input");   


// const link = document.querySelector("a");

// function onLoginSubmit(event){    
//   event.preventDefault();
// }

// function handleLinkClick(event){
//   event.preventDefault();
//   console.log(event);
// }

// loginForm.addEventListener("submit", onLoginSubmit) // -> 자바에서 함수를 실행시키는게 브라우저가 정보를 담고 실행해줌
// link.addEventListener("click",handleLinkClick)

// 4. user 이름 저장하고 보이기

// const loginForm = document.querySelector("#login-form");
// const loginInput = document.querySelector("#login-form input");   
// const greeting = document.querySelector("#greeting");

// const HIDDEN_CLASSNAME = "hidden";

// function onLoginSubmit(event){    
//   event.preventDefault();
//   const username = loginInput.value;
//   loginForm.classList.add(HIDDEN_CLASSNAME);
//   console.log(loginInput.value);
// //greeting.innerText = "Hello " + username;
//   greeting.innerText = `Hello ${username}` ;
//   greeting.classList.remove(HIDDEN_CLASSNAME);
// }

// loginForm.addEventListener("submit", onLoginSubmit) 

// 5. 새로고침해도 user이름 기억하기 ex) 유투브를 새로고침 해도 볼륨 조절 저장
// (localStorage.setItem() : localStorage에 정보 저장 localStorage.getItem(), localStorage.removeItem())

// const loginForm = document.querySelector("#login-form");
// const loginInput = document.querySelector("#login-form input");   
// const greeting = document.querySelector("#greeting");

// const HIDDEN_CLASSNAME = "hidden";
// const USERNAME_KEY = "username";

// function onLoginSubmit(event){    
//   event.preventDefault();
//   const username = loginInput.value;
//   localStorage.setItem(USERNAME_KEY, username);
//   loginForm.classList.add(HIDDEN_CLASSNAME);
//   console.log(loginInput.value);
// //greeting.innerText = "Hello " + username;
//   greeting.innerText = `Hello ${username}` ;
//   greeting.classList.remove(HIDDEN_CLASSNAME);
// }

// 6. 유저정보 저장 유무에 따라 출력화면 정하기

// const loginForm = document.querySelector("#login-form");
// const loginInput = document.querySelector("#login-form input");   
// const greeting = document.querySelector("#greeting");

// const HIDDEN_CLASSNAME = "hidden";
// const USERNAME_KEY = "username";

// const savedUsername = localStorage.getItem(USERNAME_KEY)

// function onLoginSubmit(event){    
//   event.preventDefault();
//   const username = loginInput.value;
//   localStorage.setItem(USERNAME_KEY, username);
//   loginForm.classList.add(HIDDEN_CLASSNAME);
//   console.log(loginInput.value);
//   paintGreetings(username);
// }

// function paintGreetings(username){
//   greeting.innerText = `Hello ${username}` ;
//   greeting.classList.remove(HIDDEN_CLASSNAME);
// }

// if(savedUsername === null){
//   loginForm.classList.remove(HIDDEN_CLASSNAME);
//   loginForm.addEventListener("submit", onLoginSubmit);
// }
// else{
//   paintGreetings(savedUsername);
// }

// 7. intervals, timeout

// const clock = document.querySelector("h2#clock");

// // intervals(매번 일어나느것 예를 들어 매 2초) timeout(일정시간이 지나고 한 번만 실행)

// function sayHello(){
//     console.log("hello");
// }

// setInterval(sayHello, 5000);
// setTimeout(sayHello,5000);

// 8. clock

// const clock = document.querySelector("h2#clock");

// function getClock(){
//     const date = new Date();
//     clock.innerText = (`${date.getHours()}:${date.getMinutes()}:${date.getSeconds()}`)
// }
// getClock() // 1초후에 실행되므로 바로 실행할 수 있도록 함수 호출
// setInterval(getClock, 1000);

// // "1".padStart(2, "0") string 함수(자릿수에 못미치면 주어진 매개변수로 채움)
// // -> "01"
// // "1".padEnd(2,"0")
// // -> "10"


// 9. clock 자리수

// const clock = document.querySelector("h2#clock");

// function getClock(){
//     const date = new Date();
//     const hours = String(date.getHours()).padStart(2,"0");
//     const minutes = String(date.getMinutes()).padStart(2,"0");
//     const seconds = String(date.getSeconds()).padStart(2,"0");

//     clock.innerText = (`${hours}:${minutes}:${seconds}`)
// }

// setInterval(getClock, 1000);



// 10. random
//math.random() 0부터 1까지 랜덤 수 반환
//math.round() 반올림해서 정수를 반환
//math.ceil() 올림해서 정수를 반환
//math.floor() 내림해서 정수를 반환

// 11. forEach()
// Array요소를 각각 실행 해줌

// function sayHello(item){
//   console.log(item);
// }

// const savedToDos = localStorage.getItem(TODOS_KEY);

// if(savedToDos){
//   const parsedToDos = JSON.parse(savedToDos);
//   parsedToDos.forEach(sayHello);    // parsedToDos.forEach((item) => console.log(item)) 랑 동일
// }

// 12. filter() 특정한 요소를 제와하고 Array를 다시 만듬
      // true를 반환하면 남겨짐
// function sexyFilter(item){return item !==3}
// [1,2,3,4,5].filter(sexyFilter) // [1,2,3,4,5].filter(item =>item !==3);
// -> [1,2,4,5]
// 13. element가 만들어질 때 랜덤한 아이디 부여

// Date.now()