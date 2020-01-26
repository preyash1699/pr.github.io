# 2D gravitysimulator
Gravity Simulator (How object will perform depending on the size)

## User will be asked for the dimensions of the object
```javascript
var x = prompt("Enter X ");
var y = prompt("Enter Y ");
```
## Canvas
```javascript
createCanvas(900,700);
```

## The Object Creation
```javascript
function mouseDragged(){
	boxes.push(new Box(mouseX, mouseY,x,y));
	boxes.push(new Box(mouseX, mouseY,x,y));	
}
```
## Object properties
```javascript
this.body = Bodies.rectangle(x,y,w,h,{restitution: 1 ,friction: 1});
```


