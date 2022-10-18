//let firstcard = getrandomcard() //even before the start of game we know the cards thats not right so we should declare that only under start function

let card =[]
let sum = 0
let hasblackjack = false
let isalive = true
let msg = " "
let messageel= document.getElementById("msg-el")
//let sumel= document.getElementById("ss")
let sumel = document.querySelector("#ss")
let cardsel= document.getElementById("cardel")
//let player={
    //pname: "anu", 
    //pchips:145
//}
let plel=document.getElementById("pl")
plel.textContent= player.pname + ": $" + player.pchips
function getrandomcard(){

    let rc= Math.floor(Math.random()*13) + 1
    if( rc===1){
        return 11
    }else if (rc>10){
        return 10
    } else{
        return rc
    }
     
 }
function start(){
    let firstcard= getrandomcard()
    let secondcard= getrandomcard()
    card = [firstcard,secondcard]
    sum = firstcard+secondcard

    render()
}

function render() {
    if(sum<=20){
        msg="Do you want to draw a new card?"
    
    }else if (sum===21){
        msg="Wohoo!! you have got blackjack ."
        hasblackjack= true
         
    }else{
        msg="You are out of the game ."
        isalive= false
    
    }
    messageel.textContent= msg
    sumel.textContent= "Sum :" + sum
    cardsel.textContent= "cards :"
    for (let index = 0; index < card.length; index++) {
        cardsel.textContent+= card[index]+ " "
        
    }

    
    

 }
 function newcard(){
    if( isalive==true&& hasblackjack==false){
        let ncard = getrandomcard()
        sum+= ncard
        card.push(ncard)

        render()

    
    
    }

 }

