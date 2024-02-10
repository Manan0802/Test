//returning multiple  values from iifes
let obj = (function () {
    let age =20;
    console.log("Inside Func");

    function DrivingEligible(){//ye func sirf bana hai isse call nahi kara hai 
        (age>18) ? console.log("Driving Eligible ") : console.log("Not Eligible for Driving ");
    }

    function DrinkingEligible(){//ye func sirf bana hai isse call nahi kara hai 
        (age>21) ? console.log("Drinking Eligible ") : console.log("Not Eligible for Drinking  ");
    }
    return {DrivingEligible , DrinkingEligible};
})();

console.log(obj);
obj.DrinkingEligible();
obj.DrivingEligible()
   