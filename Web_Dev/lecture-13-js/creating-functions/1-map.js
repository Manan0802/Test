Array.prototype.mymap=function(fun){
    //fun=(e,i,a)=>{neeche se aaya hai yeh 
    //console.log("value:",e,"index:",i,"array",a);
    //return e*10

    //}


let arr=this;
//console.log(arr)
let newArr=[];
for(let i=0;i<arr.length;i++){
    newArr.push(fun(arr[i],i,arr));
}
return newArr;
}
let arr=[1,2,3,4,5];
let  newArr=arr.mymap((e,i,a)=>{
    console.log("value:",e,"index:",i,"array",a);
    return e*10
})
console.log(newArr);