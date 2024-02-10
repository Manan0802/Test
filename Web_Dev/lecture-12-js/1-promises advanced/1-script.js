function download(url){
    console.log("download starts");
    return new Promise((resolve,reject) => {
        setTimeout(()=>{
            let file=url.split('/').pop();
            if(file != 'file.mp4'){
                return reject("kya bhej diya yeh");
            }
            hussain(file);
        },3000);
        
    })
}
download("https://site.com/file.mp5").then((data)=>{
    console.log("Data", data);
}).catch((err)=>{
    console.log(err);
})