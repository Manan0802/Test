let parents={
    money:100,
    house: true,
    car: "bmw",
    bike: "harley",
    coadingskills: "c++"


}
let aryan=Object.create(parents);
let aryan_junior=Object.create(aryan);
// console.log(aryan)
// console.log(aryan.car)
// console.log(aryan.house)

aryan.coadingskills='web';
// console.log(aryan);
// console.log(aryan.coadingskills);
// console.log(aryan.__proto__);

// console.log(aryan_junior.car);
console.log(aryan_junior.__proto__.__proto__.__proto__.__proto__)

