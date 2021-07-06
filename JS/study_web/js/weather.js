
function onGeoOk(position){
    const lat = position.coords.latitude ;
    const lng = position.coords.longitude ;
    console.log("you live in", lat, lng);
}
function onGeoError(){
    alert("Can't find you. No weather for you.");
}


navigator.geolocation.getCurrentPosition(onGeoOk, onGeoError)  // 위치를 반환해주고 성공 실패 실행 함수를 매개로 넣어줌