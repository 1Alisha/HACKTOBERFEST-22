function controls(player){
    addEventListener('keypress', (e)=>{
        console.log(e)
    
        if(e.keyCode===40||e.code==='KeyS'){
            console.log("Guy go backwards")
            player.x -=  player.speed * Math.cos(player.angle)
            player.y -=  player.speed * Math.sin(player.angle)
        }else if(e.keyCode===38||e.code==='KeyW'){
            console.log("Guy go fowards") 
            player.x +=  player.speed * Math.cos(player.angle)
            player.y +=  player.speed * Math.sin(player.angle)
        }if(e.keyCode===37||e.code==='KeyA'){
            player.x -=  player.speed/2 * Math.cos(player.angle+Math.PI/2)
            player.y -=  player.speed/2 * Math.sin(player.angle+Math.PI/2)
        }else if(e.keyCode===39||e.code==='KeyD'){
            player.x +=  player.speed/2 * Math.cos(player.angle+Math.PI/2)
            player.y +=  player.speed/2 * Math.sin(player.angle+Math.PI/2)
        }
    })
    
    addEventListener('keydown', (e)=>{
        //console.log(e.keyCode)
        if(e.keyCode===38){//UP
            diamond.y -= 50
        }
        if(e.keyCode===40){//DOWN
            diamond.y += 50
        }
        if(e.keyCode===39){//Right
            diamond.x += 50
        }
        if(e.keyCode===37){//Left
            diamond.x -= 50
        }
            
    })
}