let gf='Aryan';
let p =new Promise((fulfil,reject)=>{
    if(gf!='Aryan')  return reject('Iphone Nahi Milega ');

    //else return fulfil('Iphone Mil Jaega');
    setTimeout(()=>{
        fulfil('Iphone Mil Jaega');
    },3000);
})

p.then(
    (msg)=>{
        console.log(msg);
    },
    (errorMsg)=>{
        console.log(errorMsg);
    }
    )//ye func resolve ke andar hai 

.finally(()=>{
    console.log("Saara kaam khatam ");
})