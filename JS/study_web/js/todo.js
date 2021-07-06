const toDoForm = document.getElementById("todo-form");
const toDoList = document.getElementById("todo-list");
const toDoInput = toDoForm.querySelector("input");

let toDos = [];

const TODOS_KEY = "todos";

function saveToDos(){
  localStorage.setItem("todos", JSON.stringify(toDos));
}

function deleteToDo(event){
  const li = event.target.parentElement;
  console.log(toDos, li.id);
  toDos = toDos.filter(item => String(item.id) !== li.id); // 타입 조심
  saveToDos()
  li.remove();
  
}

function paintToDo(newTodo){
  const li = document.createElement("li");
  const span = document.createElement("span");
  li.id = newTodo.id;
  span.innerText = newTodo.text;
  const button= document.createElement("button");
  button.innerText = "X";
  button.addEventListener("click",deleteToDo);
  li.appendChild(span);
  li.appendChild(button);
  toDoList.appendChild(li);

}

function handleToDoSubmit(event){
  event.preventDefault();
  const newTodo = toDoInput.value;
  toDoInput.value = "";
  const newTodoObj = {
    text:newTodo,
    id: Date.now()
  };
  toDos.push(newTodoObj);
  saveToDos();
  paintToDo(newTodoObj);
}

toDoForm.addEventListener("submit", handleToDoSubmit);


const savedToDos = localStorage.getItem(TODOS_KEY);

if(savedToDos){
  const parsedToDos = JSON.parse(savedToDos);
  toDos = parsedToDos;
  parsedToDos.forEach(paintToDo);    // Array에 대해 함수를 각각 실행 할 수 있다.
}