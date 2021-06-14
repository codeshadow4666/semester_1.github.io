const date=new Date();
let start,end;
start=date.getTime();


console.log(start);
let totaltime=()=>{
 let total=   (end-start/1000); 
console.log(total);
}
setTimeout(()=>{
    console.log("ok here");
    enddate();
console.log(totaltime());

},5000)
function enddate(){
    const date=new Date();
    end=date.getTime();
}