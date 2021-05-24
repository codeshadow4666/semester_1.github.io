let direction = {x: 0,y: 0};
const foodSound = new Audio('food.mp3');
const gameOverSound = new Audio('music/gameover.mp3');
let speed=2;
let snakearr =[
    {x: 13, y:15}
];
let food = {x: 6, y:7};
let lastPaintTime=0;
let score=0;
//functions starting


function main(ctime){

    window.requestAnimationFrame(main);
    // console.log(ctime);
    if((ctime-lastPaintTime)/1000<1/speed)
    {
        return;
    }
   
    lastPaintTime=ctime;
    gameEngine();
}
function isCollide(sarr){
    return false;
}
// funcitons ending    

function gameEngine(){
//part 1
if(isCollide(snakearr))
{
    gameOverSound.play();
    direction={
        x:0 ,y:0
    };

    alert('Game over press any key to play again !')
    snakearr =[
        {x: 13, y:15}
    ];
    score= 0;
}
//part 2 display snake
board.innerHTML="";

snakearr.forEach((e,index)=>{


    snakeElement = document.createElement('div');
    snakeElement.style.gridRowStart = e.y;
    snakeElement.style.gridColumnStart = e.x;
    if(index===0){
        
        snakeElement.classList.add('head');
    }
    else
    {
        
        snakeElement.classList.add('snake');
    }
    board.appendChild(snakeElement);
})
// displaying food
foodElement = document.createElement('div');
foodElement.style.gridRowStart = food.y;
foodElement.style.gridColumnStart = food.x;
foodElement.classList.add('food');
board.appendChild(foodElement);

}

//functions ending



// main logic starting here 

window.requestAnimationFrame(main);

window.addEventListener('keydown',e=>{
   foodSound.play();
   
    inputdir = {
        x: 0, y:1
    };

  switch (e.key) {
      case "ArrowUp":
          console.log("Arrow up");

          inputdir.x= 0;
          inputdir.y= -1;
          break;
      case "ArrowDown":
          console.log("Arrow Down");

            inputdir.x= 0;
          inputdir.y= 1;
          break;
      case "ArrowLeft":
          console.log("Arrow Left");
            inputdir.x= -1;
          inputdir.y= 0;
          break;
      case "ArrowRight":
          console.log("Arrow Right");
            inputdir.x= 1;
          inputdir.y= 0;
          break;
  
      default:
          break;
  }
})