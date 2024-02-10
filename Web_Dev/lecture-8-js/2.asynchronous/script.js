
// setTimeout(function(){
//     console.log("hello world");

// },5000);

function delayasec(){
    let t=new Date().getTime();
    while(new Date().getTime()-t<1000){}
}
function delaynsec(n){
    for(let i=0;i<n;i++){
        delayasec();
    }
}
delaynsec(5)

console.log("after set timeout mei hoo");
let x=10;
console.log(x);