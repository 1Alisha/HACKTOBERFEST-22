function Controller(player, menu, game){
    this.player = player
    this.menu = menu
    this.game = game

    this.boundaryTest = (e,{x, y, w, h})=>{
        if(e.offsetX > x && e.offsetX < x + w && e.offsetY > y && e.offsetY < y + h){
            return true
        }else{
            return false
        }
    }

    this.closeMenu = ()=>{
        
    }

    this.addKeyControls = ()=>{
        
        addEventListener('keydown', (e)=>{
            
            if(e.keyCode===40||e.code==='KeyS'){
                console.log("Guy go backwards")

            }else if(e.keyCode===38||e.code==='KeyW'){
                console.log("Guy go fowards") 

                this.player.keystate.w = true
            }

            if(e.code=== 'Escape'){
                console.log('escaped')
                if(!this.menu.isOpen){
                    this.game.notPaused = false
                    this.menu.isOpen = true;
                    this.menu.menuType = "pause"
                }else{
                    this.game.notPaused = true;
                    this.menu.isOpen = false;
                }
            }
            
        })
        
        addEventListener('keyup', (e)=>{
            //console.log(e.keyCode)
            if(e.code==='KeyW'){//UP
                this.player.keystate.w = false

            }
            if(e.keyCode===40){//DOWN
            }
            // if(e.keyCode===39){//Right
            //     diamond.x += 50
            // }
            // if(e.keyCode===37){//Left
            //     diamond.x -= 50
            // }
                // this.vectorPhysics()
        })
        addEventListener('mousedown', (e)=>{
            let {offsetX, offsetY} = e
            if(this.game.notPaused){
                this.player.createBullet()
            }
            if(this.menu.isOpen){
                if(this.menu.menuType === "pause"){
                    if(this.boundaryTest({offsetX,offsetY}, this.menu.pauseButtons.closeBtn)){
                        console.log('escaped')
                            this.game.notPaused = true;
                            this.menu.isOpen = false;
                    }
                    if(this.boundaryTest({offsetX,offsetY}, this.menu.pauseButtons.newGameBtn)){
                        this.game.notPaused = true;
                        this.menu.isOpen = false;
                        this.game.newGame()
                    }
                }
            }
        })
    }
    this.addMouseControls = ()=>{
        var mouse = (e)=> {
            this.player.mouse.position = {x:e.offsetX, y:e.offsetY}
            this.player.updateAngle()
        }
        canvas.onmousemove = mouse
    }

    this.start = ()=>{
        this.addKeyControls()
        this.addMouseControls()
    }
}