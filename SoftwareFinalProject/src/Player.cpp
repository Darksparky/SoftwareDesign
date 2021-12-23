#include "Main.h"


Player::Player()
{
	money = 0;
}

void Player::Harvest()
{
	if (growthstate.GetCanBeHarvested() == true)
	{
		crops.RemovePlant();
		money += 5;
	}
}
void Player::Water()
{
	if (growthstate.GetCanBeHarvested() == true/* && crops.GetCurrentGrowthState()*/) // time elasped is temp
	{
		
	}
}
void Player::ObjectInteraction(Player*play, GameObject*obj)
{
	Physics a;
	
	//check if player is near object
	if (a.collisionCheck(play,obj))
	{
		//check for what object is being interacted with
		cout << "hello" << endl;
	}
}

