#include "Main.h"

void Player::Harvest()
{
	if (growthstate.GetCanBeHarvested() == true)
	{
		crops.getImage().clear;
	}
}
void Player::Water()
{
	if (growthstate.GetCanBeHarvested() == true && growthstate.GetTimeElapsed != 1) // time elasped is temp
	{
		growthstate.GetTimeElapsed() -= 5;
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

