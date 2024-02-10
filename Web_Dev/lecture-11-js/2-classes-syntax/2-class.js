class person{
    constructor(name,age,city,income){
        this.name=name;
        this.age=age;
        this.city=city;
        this.taxlagega=function(){
            return income>10 ? "tax dena hogaa" : "tax nhi lagega";
        }
    }
}
let aryan=new person("aryan",19,"delhi",-10)
console.log(aryan);
let aditiya=new person("aditiya",23,"gorakhpur",10000);
console.log(aditiya);
console.log(aryan.taxlagega());
console.log(aditiya.taxlagega());

console.log(aryan.__proto__ == person.prototype);
console.log(typeof person);

console.log(aryan.__proto__.__proto__  == Object.prototype);
console.log(aryan.__proto__.__proto__.__proto__);  