function vechiclemaker(type){
    let counter=0;
    return function(name,model){
        counter++
        // console.log("name:",name);
        // console.log("model:",model);
        this.name=name;
        this.model=model;
        console.log(`count of ${type}:`,counter);//isse hume kis type mai kitna count hai uskaa  pata lagegaa 
    }
}
let car=vechiclemaker("car");
let car_a=new car("audi",2020);
let car_b=new car("bmw",2021)
console.log(car_a)
console.log(car_b)

let rickshaw=vechiclemaker("rickshaw");//humne same function same barr use karlia 
let rickshaw_a=new rickshaw("tata",2020)
let rickshaw_b=new rickshaw("bajaj",2020)
console.log(rickshaw_a)
console.log(rickshaw_b)