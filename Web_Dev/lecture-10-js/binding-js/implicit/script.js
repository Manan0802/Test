let obj={
    fun: function(){
        console.log(this)
        console.log(this.x)
        console.log(this.y)
        this.z="new variable";

    },
    x: 10,
    y: "hello"
};
obj.fun();
console.log(obj);