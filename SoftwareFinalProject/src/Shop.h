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


	bool Sell();
};

