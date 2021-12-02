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
		cout << "hello" << endl;
	}
}