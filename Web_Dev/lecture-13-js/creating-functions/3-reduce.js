// let arr=[1,2,3,4,5];

// let ans=arr.reduce((acc,val,i,a)=>{
//     console.log("value:",val,"index:",i,"array",a);
//     return acc+val;
// },0)//0 jo hai acc ki value 
// console.log(ans);
Array.prototype.myreduce = function(fun,initialValue){

    let arr = this;
    let acc,start;
    if(initialValue != undefined) start = 0, acc = initialValue;
    else start = 1, acc = arr[0];

    for(let i = start; i < arr.length; i++){
        acc = fun(acc, arr[i], i, arr);
    }

    return acc;
}

let arr = [1,2,3,4,5];

let ans = arr.myreduce((acc,val,i,a)=>{  // if we don't send accum then bydefault it will take the first value....
    console.log("Value:", val,"Index: ",i, "Array:" ,a);
    return acc+val;
});  // ismein vo apne aap initial value ko array ki first value le lega...
// },0);  // isne do value bheji hein ek toh function and ek initial value....

console.log(ans);