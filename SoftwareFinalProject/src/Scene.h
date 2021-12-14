#pragma once
class Scene
{
public:
	AnimatedObject Actors;
	//TileMap Maps;
	string sceneName;

	void getActors();
	void getTileMaps();
	bool sceneActive();
	

};

