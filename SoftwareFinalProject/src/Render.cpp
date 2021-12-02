#include "Main.h"

void Render::Draw(GameObject* obj)
{
	obj->GetImage()->draw(obj->xPos, obj->yPos);
}

void Render::Draw(AnimatedObject *obj)
{
	int currentFrame = obj->getCurrentFrame();
	if (currentFrame >= 0)
	{
		obj->frames[currentFrame].draw(obj->xPos, obj->yPos);
	}
	//cout << "render class in use"<<endl;

}