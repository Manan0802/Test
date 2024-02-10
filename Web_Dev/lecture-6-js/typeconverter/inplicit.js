// Comparison Operator

// 1. Loose Equality ==

// 2. Strict Equality ===

console.log("'1'==1:","1"==1); // True
console.log("'1'===1:","1"===1); // False

console.log("\\t==0:","\t"==0); // true
console.log("\\n==0:","\n"===0);  // false
console.log("\\t==\\n:","\n"=="\t");  // false 

console.log('[]==0:',[]==0); // true
console.log('""==0:',""==0); // true
console.log('""==[]:',""==[]); // true

console.log("[1,2,3]==[1,2,3] :",[1,2,3]==[1,2,3]); // false

let arr=[1,2,3];
let x=arr;
console.log("arr==x :",arr==x);  // true

console.log("+[] :",+[]);
console.log("+[[[[[[]]]]]] :",+[[[[[[]]]]]]);
console.log("+[1] :",+[1])

console.log("String(1)+'3'",String(x)+'3');
console.log("3+'3'",3+'3');
console.log("'3'+3",'3'+3);
console.log("3+ +'3'",3+ +'3');
console.log(0.1+0.2);
console.log(0.3-0.1);