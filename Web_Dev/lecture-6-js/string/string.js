let str="hello world learning strings";
let newstr="";

for(let i=0;i<str.length;i++){
    // console.log(str[i])
    newstr += str[i]+'-';
}
console.log(newstr);
console.log(str.indexOf("learnings"));
let newarr= str.split(" ");
console.log(newarr)
console.log(newarr.pop());

