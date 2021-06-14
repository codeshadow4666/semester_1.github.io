let main=document.querySelector('.main');
let addbtn=document.querySelector('#addbtn');

let outer=document.querySelector('#outer');

let mynotes=outer.querySelector('.note');


function updatedata(){
    const data=document.querySelectorAll('textarea');
    let notedata=[];
    data.forEach((dataval)=>{
        return notedata.push(dataval.value);
    })
    console.log(notedata);
    localStorage.setItem('notedata',JSON.stringify(notedata));
}

// ............................add note  function s .................... 
let addnote=(text="")=>{
    
    const note =document.createElement('div');
    
   
    note.className="note";
    let innerdata=` <div class="operation">
    <span class="edit fa">&#xf044;</span>
    <span class="delete fa">&#xf00d;</span>
    </div>
<div class="main ${text?"":"hidden"}"></div>
<div class="textarea ${text?"hidden":""}">
<textarea name="textarea" id="textarea" placeholder="Add Your Ideas..." class="textareareal" cols="34" rows="10"></textarea>
</div>
`;
note.insertAdjacentHTML("beforeend",innerdata);
// adding Reference
let edit=note.querySelector('.edit');
let del=note.querySelector('.delete');
let textarea=note.querySelector('.textarea');
let areatext=note.querySelector('textarea');
let maindiv=note.querySelector('.main');
// adding Reference
// function starting  
del.addEventListener('click',()=>{
    note.remove();
    updatedata();
});

edit.addEventListener('click',()=>{
    maindiv.classList.toggle("hidden");
    textarea.classList.toggle("hidden");
});

// text = to main div 
areatext.addEventListener("change",(event)=>{
    const value=event.target.value;

    console.log(value);
maindiv.innerHTML=value;
areatext.value=value;

updatedata();
});



function re(value)
{
    console.log(value);
    if(value=="[object MouseEvent]"){
        value="Great Idea....";
        console.log("great "+value);
    }
    maindiv.innerHTML=value;
areatext.value=value;
}
if(text!="")
{
    re(text);
}

// function ending 
// function ending 

outer.appendChild(note);

}

// local to browser 


// local to browser 

    const noteddata=JSON.parse(localStorage.getItem('notedata'));
    if(noteddata)
    {
        console.log(noteddata);
        noteddata.forEach((data)=>{
           
            addnote(data)
            
        });
    }

   


// text = to main div 

// add button 
addbtn.addEventListener("click",addnote);
// add button 
