let obj={
    a: 'hello',
    b: 5,
    c: true,//last pe comma lagao na ek barabar
}
console.log(obj.a)
console.log(obj.b)
console.log(obj.c)

console.log(obj["a"]);
console.log(obj["b"]);
console.log(obj["c"]);

let obj1={
    "coading blocks": 'c++,java,python',
    "a":true,
    "":'empty string',
    " ": "space"
}
console.log(obj1["coading blocks"]);
//console.log(obj1.coding blocks);//invalid
console.log(obj1[""]);
console.log(obj1[" "]);// jab key  mai gap hogaa  toh  bracket wlaa usee karngee 


//loop over object
for(let i in obj){
    console.log(i);
}



//Arrays:hetrogenous
let arr=["hello",1,2,true];

console.log(arr[0]);
console.log(arr[1]);
console.log(arr[2]);
console.log(arr[3]);


for(i=0;i<arr.length;i++){ // in place of arra.length we can also write arr["length "]
    console.log(arr[i])
}


//insert and delete in array,start and end 
arr.push('element')
console.log(arr);

arr.pop();
console.log(arr)

arr.unshift(1);// shuru mai ek ko insert krega 
console.log(arr);

arr.shift(); //delete hojayega pahle wla
console.log(arr)

arr[10]="chef";
console.log(arr);







