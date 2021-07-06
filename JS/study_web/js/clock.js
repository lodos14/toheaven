const clock = document.querySelector("h2#clock");

// intervals(매번 일어나느것 예를 들어 매 2초) timeout

function getClock(){
    const date = new Date();
    const hours = String(date.getHours()).padStart(2,"0");
    const minutes = String(date.getMinutes()).padStart(2,"0");
    const seconds = String(date.getSeconds()).padStart(2,"0");

    clock.innerText = (`${hours}:${minutes}:${seconds}`)
}
getClock() // 1초후에 실행되므로 바로 실행할 수 있도록 함수 호출
setInterval(getClock, 1000);