Array.prototype.myfilter=function(fun){
    

let arr=this;

let newArr=[];
for(let i=0;i<arr.length;i++){
    if (fun(arr[i],i,arr)) newArr.push(arr[i]);
}
return newArr;
}
let arr=[1,2,3,4,5,6,7,8];
let  newArr=arr.myfilter((e,i,a)=>{
    console.log("value:",e,"index:",i,"array",a);
    return (e%2) ? false:true;
});
console.log(newArr);