// 1. JS에서 HTMI의 내용을 호출할 수 있다

// document.title = "JS"

// const title = document.getElementById("title");

// console.log(title);
// console.dir(title);  // 일단은 textContent의 "Grab me!" 가 중요하다 
//                      // 예시로 autofocus를 줘봄
// title.innerText="Got you!";
// console.log(title.id);
// console.log(title.className);


// 2. 태그 요소를 호출하는 여러가지 방법

// const hellos = document.getElementsByClassName("hello");
// console.log(hellos);

// const title = document.getElementsByTagName("h1")
// console.log(title)

// const title = document.querySelector(".hello h1");   // class hello 내부의 h1태그 호출
// console.log(title);                                  // 그리고 중복된게 많아도 첫 번째만 호출


// const title = document.querySelectorAll(".hello h1"); // 모든 태그 불러오려면 이거  id를 통해 호출하려면 hello앞에 #
// console.log(title); 

// document.getElementById("hello") = document.querSlector("#hello") 이 두개 같은 코드

//  const title = document.querySelector(".hello h1");
//  console.dir(title);
//  title.style.color="blue"

// 3. Event

// const h1 = document.querySelector(".hello h1");

// console.dir(h1);  // on붙은게 event listener 사용할 땐 on뒤 글자만 사용

// function handleTitleClick(){
  
//   h1.style.color = "blue"
//   console.log("title was clicked");
// }
// function handleMouseenter(){
//   h1.innerText = "Mouse is here";
// }
// function handleMouseLeave(){
//   h1.innerText = "Mouse is gone!";
// }
// function handleWindowResize(){
//   document.body.style.backgroundColor = "tomato";
// }
// function handleWindowCopy(){
//   alert("copier!");
// }
// function handleWindowOffline(){ 
//   alert("SOS no WIFI"); 
// } 
// function handleWindowOnline(){
//   alert("All good!");
// }
// (1)
// h1.addEventListener("click", handleTitleClick);  // 이벤트를 찾는 방법  구글에 h1 html element mdn 검색 -> web ApIs
// h1.addEventListener("mouseenter",handleMouseenter);
// h1.addEventListener("mouseleave",handleMouseLeave);
// window.addEventListener("resize", handleWindowResize);
// window.addEventListener("copy", handleWindowCopy);
// window.addEventListener("offline", handleWindowOffline);
// window.addEventListener("online", handleWindowOnline);
// (2)
// h1.onclick = handleTitleClick;  //addEventListener를 더 선호하는 이유는 removeEventListener을 사용할 수 있어서
// h1.onmouseenter = handleMouseenter;
// h1.onmouseleave = handleMouseLeave;


// 4.

// const h1 = document.querySelector(".hello h1");

// function handleTitleClick(){
//     const currentColor = h1.style.color;
//     let newColor;

//     if (currentColor === "blue"){
//       newColor = "tomato";
//     }
//     else{
//       newColor = "blue";
//     }
//     h1.style.color = newColor;
// }

// h1.addEventListener("click", handleTitleClick);

// 5 . css를 이용한 스타일 바꾸기

// const h1 = document.querySelector(".hello h1");

// function handleTitleClick(){
//   const clickedClass = "clicked"

//   if(h1.className === clickedClass){
//     h1.className = "";
//   }
//   else {
//     h1.className = clickedClass;
//   }
 
// }

// h1.addEventListener("click", handleTitleClick);

// 6. class List

// const h1 = document.querySelector(".hello h1");

// function handleTitleClick(){

//   const clickedClass = "clicked"

//   if(h1.classList.contains(clickedClass)){    // h1의 class에 포함되어있는지 알려줌
//     h1.classList.remove(clickedClass)         // h1의 classList에서 제거
//   }
//   else {
//     h1.classList.add(clickedClass)
//   }
 
// }

// h1.addEventListener("click", handleTitleClick);

// 7. toggle  6번을 쉽게해줌

const h1 = document.querySelector(".hello h1");

function handleTitleClick(){
  h1.classList.toggle("clicked");
}

h1.addEventListener("click", handleTitleClick);


