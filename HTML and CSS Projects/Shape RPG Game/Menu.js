function Menu(game){
    this.game = game;
    this.isOpen = false;
    this.menuType;
    this.pauseButtons = {
                            newGameBtn: {x: 200, y:235, w:350, h:50, color: "#aaaaaa", textArr:[{font: "20px Arial", x:325, y:265, color:"#000000", msg:"New Game"}], name: "newGameBtn"},
                            saveGameBtn:{x: 200, y:310, w:350, h:50, color: "#aaaaaa", textArr:[{font: "20px Arial", x:320, y:345, color:"#000000", msg:"Save Game"}], name: "saveGameBtn"},
                            loadGameBtn:{x: 200, y:385, w:350, h:50, color: "#aaaaaa", textArr:[{font: "20px Arial", x:320, y:420, color:"#000000", msg:"Load Game"}], name: "loadGameBtn"},
                            controlBtn: {x: 200, y:460, w:350, h:50, color: "#aaaaaa", textArr:[{font: "20px Arial", x:335, y:495, color:"#000000", msg:"Controls"}], name: "controlsBtn"},
                            closeBtn:   {x: 570, y:150, w:30,  h:30, color: "#ff0000", textArr:[{font: "25px Arial", x:577, y:175, color:"#000000", msg:"X"}], name: "closeBtn"}
                            
                        }
    
    
    this.createBtns = (buttonArr)=>{
        for(let j = 0; j < buttonArr.length; j++){
            let {x,y,w,h,color,textArr} = buttonArr[j]
            ctx.fillStyle = color
            ctx.fillRect(x, y, w, h)
            for(let i = 0; i < textArr.length; i++){
                ctx.fillStyle = textArr[i].color
                ctx.font = textArr[i].font
                ctx.fillText(textArr[i].msg, textArr[i].x, textArr[i].y)
            }
        }
    }

    this.pauseMenu = ()=>{
        ctx.save();
        ctx.fillStyle = "#888888"
        ctx.fillRect(125,125,500,500)
        ctx.fillStyle = "#000000"
        ctx.font = "30px Arial"
        ctx.fillText("Game Paused", 275, 190)
        this.createBtns(Object.values(this.pauseButtons))
        ctx.restore()
    }

    this.controlInfo = ()=>{
        ctx.save();

    }

    this.loseMenu = ()=>{

    }

    this.startMenu = ()=>{

    }

    this.render= ()=>{
        if(!this.game.notPaused){
            this.pauseMenu()
        }
    }
}