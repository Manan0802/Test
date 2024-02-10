// setInterval(function(){
//     console.log("hello");
// },2000);

// setTimeout(function(){
//     clearInterval(id);
// },5000);
//in single line 
let id=setInterval(function(){
    console.log("hello");
},100,setTimeout(function(){
    clearInterval(id);
},5000));

