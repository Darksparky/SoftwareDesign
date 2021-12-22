#include "Main.h"

void Player::Harvest()
{
	if(growthstate.GetCanBeHarvested() == true)
}
void Player::Water()
{
	if (growthstate.GetCanBeHarvested() == true && crop.growth != 1 )
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

void Player::DoorInteraction(Player*play, GameObject*obj, Door doorName)
{
switch ()
{
default:
	break;
	//ssss
}
}