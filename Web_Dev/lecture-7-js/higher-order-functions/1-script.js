function getfun(){
    function hello(){
        console.log("hi!")

    }
    return hello;
}
let x=getfun();
x();


function printfun(f){
    console.log(f);//abb isme function ka nam aajyega

    f();// joo function argument mai aayaa usko call kiyaa 
        // humne argument maias a function hi pass karaa hai 
        

}

function hello(){
    console.log("hello world");
}
//hello()
printfun(hello);//printfun mai hello ko as a argument bhej dia 
//printfun(hello());// in this function a error will come reason beacuse hello() will call function which have clg and doesnt return so undefined error will come \
