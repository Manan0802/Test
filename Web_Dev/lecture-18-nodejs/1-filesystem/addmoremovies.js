const fs=require('fs');

let movies = {
    "hulk": "Shehulk",
    "ironman" : "heman"
}
fs.readFile(
    'movies.json',
    {
        encoding:'utf-8'
    },
    (err,data)=>{
        data=JSON.parse(data);
        data={
            ...data,
            ...movies
        }
        fs.writeFile(
            'movies.json',
            JSON.stringify(data),
            {
                flag:'w'
            },
            (err)=>{
                if(err) return console.error(err);
                console.log("sab done");
            }
        )
    }
)
