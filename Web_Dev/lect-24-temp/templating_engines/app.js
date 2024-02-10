const express= require('express');
const app=express();
const PORT=4444;


app.set('view engine','hbs');
app.use(express.urlencoded({extended :true}));
let todos= ['hockey' ,'Cricket' ,'Singing'];

let personDetails={
    fname:' Coding ',
    lname :'blocks'
};

app.get('/',(req,res)=>{
    //res.render('todo',personDetails);
    res.render('todos',{
        todos
    });
})

app.listen(PORT,()=>{
    console.log(`http://localhost:` +PORT);
})
// app.get('/',(req,res)=>{
//     res.send
// })