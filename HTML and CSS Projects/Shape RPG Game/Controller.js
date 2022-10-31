function Controller(player, menu, game){
    this.player = player
    this.menu = menu
    this.game = game
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
            this.player.createBullet()
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