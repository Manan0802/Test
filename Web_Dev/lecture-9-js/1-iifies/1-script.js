// function ko container mai daldiya fir define kara aur() isse call karaa 

( function hello(){
    console.log("hello world");
}

)();//iifie ke akhri mai semicoloun laggna hai 

(function(a,b){
    console.log("sum: ", a+b)
    console.log("difference", a-b);

})(20,10)
