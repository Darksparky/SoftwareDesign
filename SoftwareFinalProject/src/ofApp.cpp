#include "Main.h"

//--------------------------------------------------------------
void ofApp::setup(){
	player.setNumFrames(12);

	//walkcycle
	player.frames[0].load("FarmerWalking/FarmerWalkDown1.png");
	player.frames[1].load("FarmerWalking/FarmerWalkDown2.png");
	player.frames[2].load("FarmerWalking/FarmerWalkDown3.png");
	player.frames[3].load("FarmerWalking/FarmerWalkLeft1.png");
	player.frames[4].load("FarmerWalking/FarmerWalkLeft2.png");
	player.frames[5].load("FarmerWalking/FarmerWalkLeft3.png");
	player.frames[6].load("FarmerWalking/FarmerWalkRight1.png");
	player.frames[7].load("FarmerWalking/FarmerWalkRight2.png");
	player.frames[8].load("FarmerWalking/FarmerWalkRight3.png");
	player.frames[9].load("FarmerWalking/FarmerWalkUp1.png");
	player.frames[10].load("FarmerWalking/FarmerWalkUp2.png");
	player.frames[11].load("FarmerWalking/FarmerWalkUp3.png");

	//actions
	ofSetFrameRate(40);
	myFont.load("Arial.ttf", 16);
	item.GetImage()->load("gold.png");
	cout << item.width << endl;
	cout << item.height << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

	if (keyDown['s'] == true)
	{
		//player.Advance();
		player.Advance(0, 2);
		physics.Move(&player, 0, player.speed);
	}
	if (keyDown['a'] == true)
	{
		player.Advance(3, 5);
		physics.Move(&player, -player.speed, 0);
	}
	if (keyDown['d'] == true)
	{
		player.Advance(6, 8);
		physics.Move(&player, player.speed, 0);
	}
	if (keyDown['w'] == true)
	{
		player.Advance(9, 11);
		physics.Move(&player, 0, -player.speed);
	}
	if (keyDown['e'] == true)
	{
		player.ObjectInteraction(&player,&item);
	}
	if (keyDown['t'] == true)
	{
		timeCycle.AddTime(5);
	}
	timeCycle.UpdateTimeCycle();

}
//void ofApp::Move(ofImage img)
//{
//	
//	if (keyDown[OF_KEY_UP] == true)
//	{
//		
//		x += 0;
//		y -= 10;
//
//	}
//	if (keyDown[OF_KEY_DOWN] == true)
//	{
//		x += 0;
//		y += 10;
//
//	}
//	if (keyDown[OF_KEY_LEFT] == true)
//	{
//		x -= 10;
//		y += 0;
//	}
//	if (keyDown[OF_KEY_RIGHT] == true)
//	{
//		x += 10;
//		y += 0;
//	}
//
//}
//--------------------------------------------------------------

void ofApp::draw(){

	//obj.Draw();
	ren.Draw(&item);
	ren.Draw(&player);
	myFont.drawString("YR: " + to_string(static_cast<int>(timeCycle.GetYear())) +" MON: "+
		to_string(static_cast<int>(timeCycle.GetMonth())) +" DAY: " + to_string(static_cast<int>(timeCycle.GetDay())) + " HR: " + 
		to_string(static_cast<int>(timeCycle.GetHour()))+ " MIN: " + to_string(static_cast<int>(timeCycle.GetMinute())), 400, 30);
	//map.drawMap();
	map.drawMap();
 }

void ofApp::keyPressed(int key) {
	keyDown[key] = true;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	keyDown[key] = false;
}