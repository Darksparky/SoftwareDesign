#pragma once


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		bool keyDown[255]; //all keys
		
		Physics physics;
		GameObject item;
		Render ren;
		Map map;
		Player player;
		/*ofImage img;
		int x;
		int y;*/

		

		//ofRectangle rect;
		void keyPressed(int key);
		void keyReleased(int key);



		/*void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);*/
		
};
