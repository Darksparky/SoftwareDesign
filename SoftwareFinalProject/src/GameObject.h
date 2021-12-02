#pragma once
class GameObject
{

protected:
	ofImage sprite;
public:
	int xPos;
	int yPos;
	int speed;
	int width;
	int height;

	bool isInteractable;
	//ofRectangle rect;



	GameObject();
	~GameObject();
	ofImage* GetImage();
	void Interact();

	//temp function
	//void Draw();


};

