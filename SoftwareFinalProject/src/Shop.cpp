#include "Main.h"


Shop::Shop()
{
	
	
	crop.price = 10;
	crop.numItems = 10;
}


bool Shop::Sell()
{
	//check if item is in player inventory
	//if it is, removes item and adds value of item to player money
	if (player.inventory != 0)
	{
		player.money += crop.price;
		crop.numItems--;
	}
	else 
	{
		return false;
	}
	
}

