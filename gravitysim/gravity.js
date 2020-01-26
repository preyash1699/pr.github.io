var x = prompt("Enter X ");
var y = prompt("Enter Y ");

// module aliases
var Engine = Matter.Engine,
    //Render = Matter.Render,
    World = Matter.World,
    Bodies = Matter.Bodies;
    // create an engine
var engine;
var world;
var boxes = [];
var ground, ground2,ground3,ground4;
var circles = [];

function setup(){
	createCanvas(900,700);
	engine = Engine.create();
	world = engine.world;
	//boxA = Bodies.rectangle(200, 100, 80, 80);// create two boxes and a ground
	Engine.run(engine);
	//boxA = new Box(200,100,50,50);
	var options = {
		isStatic:true
	}
	ground = Bodies.rectangle(300, height, width, 50, options)
	ground2 = Bodies.rectangle(10, 400, 400, 50, options)
	fill(5);
	ground3 = Bodies.rectangle(200, 250, 200, 50, options)
	ground4 = Bodies.rectangle(200, 500, 200, 50, options)
	fill(0);
	World.add(world, ground);
	World.add(world, ground2);
	World.add(world, ground3);
	World.add(world, ground4);

	

}
function mouseDragged(){
	boxes.push(new Box(mouseX, mouseY,x,y));
	boxes.push(new Box(mouseX, mouseY,x,y));	
}
/*function mouseDragged{
	circles.push(new Ball(mouseX, mouseY,30));
}*/
function draw(){
	background(51);
	for (var i = 0; i < boxes.length; i++){
		boxes[i].show();
		boxes[i].show();
		
	}
	/*for (var j = 0; j <circles.length; j++) {
		circles[j].show();
	}*/
	strokeWeight(2);
	rectMode(CENTER);
	rect(300,height,width,50);
	rect(10,400,400,50);
	rect(200,250,200,50);
	rect(200, 500, 200, 50);
	//ground.show();
	//rect(boxA.position.x,boxA.position.y,80,80);
	//World.add(world, [boxA]);

}
//create an angine
/*var render = Render.create({
    element: document.body,
    engine: engine
});*/



//var boxB = Bodies.rectangle(450, 50, 80, 80);
//var ground = Bodies.rectangle(400, 610, 810, 60, { isStatic: true });


//Render.run(render);