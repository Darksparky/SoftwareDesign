#include "Main.h"

GameObject::GameObject()
{
	xPos = yPos = 0;
	speed = 10;
	width = sprite.getWidth();
	height = sprite.getHeight();
}


GameObject::~GameObject()
{

}

ofImage* GameObject::GetImage()
{
	return &sprite;
}

//void GameObject::Draw()
//{
//	sprite.draw(xPos, yPos);
//}

void GameObject::Interact()
{

}