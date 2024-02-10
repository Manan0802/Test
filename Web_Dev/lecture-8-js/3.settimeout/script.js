let id=setTimeout(function(){
    console.log("hello");
},5000);

console.log(id);

setTimeout(function(){
    clearTimeout(id);
},3000);

