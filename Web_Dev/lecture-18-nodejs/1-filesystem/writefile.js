const  fs= require('fs');//nodejs se fs ke object
//ko utha laao 
let newMovies={
    "avengers": "spiderman",
    "spiderman":"avengers",
    "marvel":"dragon",
    "dragon":"marvel" 
};
fs.writeFile(
    'movies.json',
    JSON.stringify(newMovies),
    (err)=>{
        if(err) return console.error(err);
        console.log("movies written sucessfully");
    }
)

