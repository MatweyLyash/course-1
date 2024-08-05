let minsk = document.getElementById("minsk");
let naliboki = document.getElementById("naliboki");
let starka = document.getElementById("starka");
let statut = document.getElementById("statut");

minsk.addEventListener("mouseover", ()=>{
    document.querySelector("#mzvv").style.display="block"
})
naliboki.addEventListener("click", ()=>{
    document.querySelector("#naliboki").style.border="10px solid red"
})
starka.addEventListener("mouseover", ()=>{
    document.querySelector("#starka").src='statut.png'
})
starka.addEventListener("mouseout", ()=>{
    document.querySelector("#starka").src='starka.jpeg'
})

document.querySelector('button').addEventListener('click',()=>{
    let write=document.querySelectorAll('.info')
    for(let i=0; i<write.length;i++)
    {
        if(write !='')
        {
            let list=document.createElement("li")
            list.innerHTML=write[i].value
            document.getElementById("footer").append(list)
        }
    }
})