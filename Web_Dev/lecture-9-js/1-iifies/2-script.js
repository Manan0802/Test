//returning in iifis
let eliigiblefordriving = (function (){
    let age=20;
    console.log("hello world");
    function drivingeligible(){
        (age>=18) ?
        console.log("driving eligible"):
        console.log("driving not eligible");
    }
    return drivingeligible
})()

eliigiblefordriving();