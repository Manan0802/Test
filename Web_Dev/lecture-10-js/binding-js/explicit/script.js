function fun(str,x,y,z){
    console.log(this);
}

let obj={
    x: 1,
    y: true
}
 let obj1={
    a: "hello",
    b: "coding"
 }
 // fun();
//by using call to change this
//fun.call(obj);//obj will become "this " inside fun function
//fun.call(obj1,"hello world",1,2,3);//obj1 will become "this" inside fun function

//using apply to change this
//obj1 will become "this" inside fun function 
//fun.apply(obj1,["hello world",1,2,3]);

//using bind to change this: this will not call function immeditely
let f= fun.bind(obj,"hello world",1,2,3);
f();//function calling 

