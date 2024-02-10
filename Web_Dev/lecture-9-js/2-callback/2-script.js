function download(cb){
    //sabse phale humne download pe  lagaya toh hum chate hai ke jaise download hoo toh humara comperssion start ho 
    //toh humne cb ko phale compress lia aur  comprees ke badd humne uplod chaiye isliye cb mai upload dalla hai 
    console.log("Download starts")
    setTimeout(()=>{
        console.log("Download complete")
        cb(upload)
    },3000);
}

function compress(cb){ //hume compress ke badd hi  upload  karnaa hai toh manne humne cb tbhi bulayaa toh wo uske badd hojayega 
    
    console.log("Compression starts")
    setTimeout(()=>{
        console.log("Compression complete")
        cb()
    },3000);
}

function upload(){
    console.log("Upload starts")
    setTimeout(()=>{
        console.log("Uplaod complete")
    },3000)
}

download(compress)