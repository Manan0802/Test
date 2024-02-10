function person(name,age){
    return function(){
        console.log("name:",name);
        if(age>18){
            console.log("balik hai ");

        }
        else{
            console.log("nabalik hai ");
        }
    }
}
let f=person("aditiya",23);
f();