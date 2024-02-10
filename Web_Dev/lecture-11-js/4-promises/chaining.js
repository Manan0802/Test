console.log()
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
        return 'charger bhi lelo';//promise se kuch return kate hai to wo bhi promise banta haih resolve call hota h afor 
    }//ye func resolve ke andar hai 
)
.then((secondMsg)=>{
    console.log(secondMsg);
    return 'cover bhi lelo';
})
.then((thirdMsg)=>{
    console.log(thirdMsg);
})
.catch((errorMsg)=>{
    console.log(errorMsg);
})

.finally(()=>{
    console.log("Saara kaam khatam ");
})