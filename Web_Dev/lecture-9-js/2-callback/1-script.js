function goaChalega(checkResult) { //isko callback mai bula liyaa as a anargumnet 
    console.log("Goa Chale?");
    checkResult();//yeh call back agayi 
}

function result() {
    console.log("Nahi");
}

goaChalega(result);