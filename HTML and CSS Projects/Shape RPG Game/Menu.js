function Menu(game){
    this.game = game;
    this.isOpen = false;

    this.pauseMenu = ()=>{
        ctx.save();
        ctx.fillStyle = "#888888"
        ctx.fillRect(125,125,500,500)
        ctx.fillStyle = "#000000"
        ctx.font = "30px Arial"
        ctx.fillText("Game Paused", 275, 175)
        ctx.restore()
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