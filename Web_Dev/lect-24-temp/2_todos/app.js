// 
const express = require('express');
const app = express();
const path = require('path');
const PORT = 3000; //this can be any number above 1024
// --> Starting the server
app.listen(PORT, () => {
    console.log(`http://localhost:`+PORT);
});
app.set('view engine','hbs');
app.use(express.urlencoded({extended:true}));
app.use(express.static(path.join(__dirname,'public')));
app.get('/',(req,res)=>{
    res.render('index',{
        todos
    });
})
let todos=['Coding','Dance','Sing'];

app.post('/addtask',(req,res)=>{
    const{task}=req.body;
    todos.push(task);
    res.render('index',{
        todos
    });
})