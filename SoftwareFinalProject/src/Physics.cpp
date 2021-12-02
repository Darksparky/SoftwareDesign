#include "Main.h"


void Physics::Move(GameObject* obj, int targetX, int targetY)
{
	obj->xPos += targetX;
	obj->yPos += targetY;
}

bool Physics::collisionCheck(GameObject* obj1, GameObject* obj2)
{
	if (obj1->xPos + obj1->width >= obj2->xPos &&obj2->xPos + obj2->width >= obj1->xPos)
	{
		if (obj1->yPos + obj1->height >= obj2->yPos &&obj2->yPos + obj2->height >= obj1->yPos)
		{
			return true;
		}

	}
	return false;
}

bool Physics::collisionCheck(Player* obj1, GameObject* obj2)
{
	if (obj1->xPos + obj1->width >= obj2->xPos &&obj2->xPos + obj2->width >= obj1->xPos)
	{
		if (obj1->yPos + obj1->height >= obj2->yPos &&obj2->yPos + obj2->height >= obj1->yPos)
		{
			return true;
		}

	}
	return false;
}

