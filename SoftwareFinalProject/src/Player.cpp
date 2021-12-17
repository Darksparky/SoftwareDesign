#include "Main.h"

void Player::Harvest()
{

}
void Player::Water()
{

}
void Player::Interaction(Player*play,GameObject*obj)
{
	Physics a;
	
	//check if player is near object
	if (a.collisionCheck(play,obj))
	{
		//check for what object is being interacted with
		cout << "hello" << endl;
	}


}