
// console.log(값)  콘솔창에 출력

// 1. 변수 

// 변수를 만드는 방법은 두가지 const, let 예를들어 변수를 업데이트 할꺼면 let 고정변수면 const
// let a = 5 ;
// const b = 1 ;
// const veryLongVariableName = "nico";

// console.log(a + b);
// console.log(a * b);
// console.log(a / b);
// console.log("hello " + veryLongVariableName);
// a = 3;
// b = 2;  // 이건 안됨  
// console.log(a);

//----------------------------------------------------------------------------

// 2. bool, undefind, null

// const amIFat_1 = true;
// const amIFat_2 = null;
// let amIFat_3;

// console.log(amIFat_1);
// console.log(amIFat_2);
// console.log(amIFat_3);

//----------------------------------------------------------------------------

// 3. Array

// const daysOfWeek = ["mon", "tue", "wed", "thu", "fri", "sat"];
// const nonsense = [1, 2, "hello", false, null, true, undefined, "nico"];

// console.log(daysOfWeek, nonsense);
// console.log(daysOfWeek[5]);

// // 배열 추가하기
// daysOfWeek.push("sun");

// console.log(daysOfWeek)

//----------------------------------------------------------------------------
// 4. object

// const player = {   

//     name: "nico",   // JS에선 객체안에 = 대신 :  파이썬의 딕셔너리 
//     points: 10,
//     fat: true,

// };

// console.log(player)
// console.log(player.name, player.points, player.fat)
// console.log(player["name"], player["points"], player["fat"])

// player.fat = false;   // const여도 객체는 동일하므로 그 안의 내용은 수정 가능
// console.log(player)
// //player = 123;         // 이런게 안됨

// player.lastName = "potato";
// console.log(player)

//----------------------------------------------------------------------------

// 5. function

// function plus(a, b){
//   console.log(a + b);
// }
// function divide(a, b){
//   console.log(a / b);
// }
// plus(8, 60);
// divide(6, 60);



// const player = {
//   name: "nico", 
//   sayHello: function sayHello(otherPersonsName){ // 객체 밖에서의 function sayHello() 이랑 같음
//   console.log("hello! " + otherPersonsName + " nice to meet you");  
//   }
// };

// console.log(player.name);
// player.sayHello("lynn");



// function plus(a, b){
//   console.log(a + b);
// }
// plus(5, 5);

// console.log(player ,console)

// const calculator = {
//   add:function(a, b){
//     console.log(a + b)
//   },
//   sub: function(a, b){
//     console.log(a - b)
//   },
//   div: function(a , b){
//     console.log(a / b)
//   },
//   powerof:function(a, b){
//     console.log(a ** b)
//   }
// };

// calculator.add(4, 2);
// calculator.sub(4, 2);
// calculator.div(4, 2);
// calculator.powerof(4, 2);




// const age = 96;
// function calculateKrAge(ageOfForeigner){
//   return ageOfForeigner + 2;
// }

// const krAge = calculateKrAge(age);

// console.log(krAge)

//----------------------------------------------------------------------------
// 6. type

// const age = prompt("How old are you?");  //  prompt() 사용자에게 창을 띄어줌

// console.log(typeof "15", typeof parseInt("15")); // parseInt() number로 타입 변경


// 7. 조건문

 const age = parseInt( prompt("How old are you") ); // number로 타입변경이 불가하면 NaN 반환
 console.log(isNaN(age)); // isNaN() NaN인가요 물어보는 함수 bool 반환

 if(isNaN(age) || age < 0){
  console.log("Please write a real positive number");
 }else if (age < 18) {
  console.log("You are too young."); 
 }else if(age >= 18 && age <= 50){
  console.log("you can drink");
 }else if(age > 50 && age <=80){
   console.log("You should exercise")
 }else if(age === 100){                 // not은 !==
   console.log("wow you are wise")
 }
 else if (age > 80){
  console.log("You can do whaterver you want.");
 }


//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
