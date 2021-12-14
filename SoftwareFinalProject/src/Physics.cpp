#include "Main.h"


void Physics::Move(GameObject* obj, int targetX, int targetY)
{
	obj->xPos += targetX;
	obj->yPos += targetY;
}

bool Physics::collisionCheck(GameObject* obj1, GameObject* obj2)
{

	if (obj1->xPos >= obj2->xPos && obj1->xPos <= obj2->xPos + obj2->GetImage()->getWidth() &&
		obj1->yPos >= obj2->yPos && obj1->yPos <= obj2->yPos + obj2->GetImage()->getHeight())
	{
		return true;
	}
	return false;

}

bool Physics::collisionCheck(Player* obj1, GameObject* obj2)
{

	if (obj1->xPos >= obj2->xPos && obj1->xPos <= obj2->xPos + obj2->GetImage()->getWidth() &&
		obj1->yPos >= obj2->yPos && obj1->yPos <= obj2->yPos + obj2->GetImage()->getHeight())
	{
		return true;
	}
	return false;


}

