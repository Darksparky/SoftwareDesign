#include "Main.h"
AnimatedObject::AnimatedObject()
{
	numFrames = 0;
	currentFrame = -1; //no valid frame
}


AnimatedObject::~AnimatedObject()
{
}

void AnimatedObject::Advance()
{
	
	if (numFrames > 0)
	{
		currentFrame++;
		if (currentFrame >= numFrames)
			currentFrame = 0;
	}
}

void AnimatedObject::Advance(int firstFrame, int lastFrame)
{

	if (numFrames > 0)
	{
		currentFrame++;

		if (currentFrame >= numFrames)
		{
			currentFrame = 0;
		}
			
	}
}

void AnimatedObject::setNumFrames(int frameNum)
{
	if (frameNum >= 0)
	{
		numFrames = frameNum;
		if (frameNum > 0)
			currentFrame = 0;
		else
			currentFrame = -1;
	}
}

int AnimatedObject::getCurrentFrame()
{
	return currentFrame;
}