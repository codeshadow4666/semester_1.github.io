let obj1={
    name:"Awais",
    level:"A"
   

}
let obj={
    name:"Kai",
    level:"B+"
   

}
function display(){
    console.log(`My name is ${this.name} , I am '${this.level}' level programmer`);
}

let a=display.bind(obj);
let b=display.bind(obj1);
b();
a();