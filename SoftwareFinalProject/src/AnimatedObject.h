#pragma once

#define MAX_FRAMES 20

class AnimatedObject : public GameObject
{
private:
	int currentFrame;
	int numFrames;

public:
	ofImage frames[MAX_FRAMES];

	AnimatedObject();
	~AnimatedObject();

	void Advance();
	void Advance(int firstFrame, int lastFrame);
	void setNumFrames(int frameNum);
	int getCurrentFrame();


};