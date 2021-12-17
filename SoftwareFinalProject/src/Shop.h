#pragma once
class Shop
{
public:
	struct Items
	{
		ofImage img;
		int price;
		int numItems;
	};

	Shop();
	
	Player player;
	Items crop;

	//void setupShop();
	bool Sell();
};

