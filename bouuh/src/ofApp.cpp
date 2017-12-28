#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	font.load("bouuuuuh_regular.otf", 150, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	ofPath p0 = font.getCharacterAsPoints('B');
	ofPath p1 = font.getCharacterAsPoints('O');
	ofPath p2 = font.getCharacterAsPoints('U');
	ofPath p3 = font.getCharacterAsPoints('H');


	// B
	for (int z = 0; z < 5; z++) {
		vector < ofPolyline > lines = p0.getOutline();


		// resample the lines:
		for (int i = 0; i < lines.size(); i++) {
			lines[i] = lines[i].getResampledBySpacing(1);
		}

		// add something to move them closer to the center of the screen
		for (int i = 0; i < lines.size(); i++) {
			for (int j = 0; j < lines[i].size(); j++) {
				lines[i][j] += ofPoint(500, 600);
			}
		}

		// push based on mouse:
		for (int i = 0; i < lines.size(); i++) {
			for (int j = 0; j < lines[i].size(); j++) {

				// calc the diff between point and mouse
				ofPoint diff = lines[i][j] - ofPoint(mouseX, mouseY);

				// get length:
				float length = diff.length();

				// convert length to pct, 0 is far away 1 is close
				float lengthpct = ofMap(length, 200 + z * 150, 0, 1, 0, true);

				lines[i][j] += powf(lengthpct, 3) * diff.getNormalized() * (100 + 100 * z);
			}
		}

		for (int i = 0; i < lines.size(); i++) {
			lines[i].draw();
		}
	}

	// O
	for (int z = 0; z < 5; z++) {
		vector < ofPolyline > lines = p1.getOutline();


		// resample the lines:
		for (int i = 0; i < lines.size(); i++) {
			lines[i] = lines[i].getResampledBySpacing(1);
		}

		// add something to move them closer to the center of the screen
		for (int i = 0; i < lines.size(); i++) {
			for (int j = 0; j < lines[i].size(); j++) {
				lines[i][j] += ofPoint(600, 600);
			}
		}

		// push based on mouse:
		for (int i = 0; i < lines.size(); i++) {
			for (int j = 0; j < lines[i].size(); j++) {

				// calc the diff between point and mouse
				ofPoint diff = lines[i][j] - ofPoint(mouseX, mouseY);

				// get length:
				float length = diff.length();

				// convert length to pct, 0 is far away 1 is close
				float lengthpct = ofMap(length, 200 + z * 150, 0, 0, 1, true);

				lines[i][j] += powf(lengthpct, 3) * diff.getNormalized() * (100 + 100 * z);
			}
		}

		for (int i = 0; i < lines.size(); i++) {
			lines[i].draw();
		}
	}

	// O
	for (int z = 0; z < 5; z++) {
		vector < ofPolyline > lines = p1.getOutline();


		// resample the lines:
		for (int i = 0; i < lines.size(); i++) {
			lines[i] = lines[i].getResampledBySpacing(1);
		}

		// add something to move them closer to the center of the screen
		for (int i = 0; i < lines.size(); i++) {
			for (int j = 0; j < lines[i].size(); j++) {
				lines[i][j] += ofPoint(700, 600);
			}
		}

		// push based on mouse:
		for (int i = 0; i < lines.size(); i++) {
			for (int j = 0; j < lines[i].size(); j++) {

				// calc the diff between point and mouse
				ofPoint diff = lines[i][j] - ofPoint(mouseX, mouseY);

				// get length:
				float length = diff.length();

				// convert length to pct, 0 is far away 1 is close
				float lengthpct = ofMap(length, 200 + z * 150, 0, 1, 0, true);

				lines[i][j] += powf(lengthpct, 3) * diff.getNormalized() * (100 + 100 * z);
			}
		}

		for (int i = 0; i < lines.size(); i++) {
			lines[i].draw();
		}
	}

	// U
	for (int z = 0; z < 5; z++) {
		vector < ofPolyline > lines = p2.getOutline();


		// resample the lines:
		for (int i = 0; i < lines.size(); i++) {
			lines[i] = lines[i].getResampledBySpacing(1);
		}

		// add something to move them closer to the center of the screen
		for (int i = 0; i < lines.size(); i++) {
			for (int j = 0; j < lines[i].size(); j++) {
				lines[i][j] += ofPoint(800, 600);
			}
		}

		// push based on mouse:
		for (int i = 0; i < lines.size(); i++) {
			for (int j = 0; j < lines[i].size(); j++) {

				// calc the diff between point and mouse
				ofPoint diff = lines[i][j] - ofPoint(mouseX, mouseY);

				// get length:
				float length = diff.length();

				// convert length to pct, 0 is far away 1 is close
				float lengthpct = ofMap(length, 200 + z * 150, 0, 0, 1, true);

				lines[i][j] += powf(lengthpct, 3) * diff.getNormalized() * (100 + 100 * z);
			}
		}

		for (int i = 0; i < lines.size(); i++) {
			lines[i].draw();
		}
	}

	// H
	for (int z = 0; z < 5; z++) {
		vector < ofPolyline > lines = p3.getOutline();


		// resample the lines:
		for (int i = 0; i < lines.size(); i++) {
			lines[i] = lines[i].getResampledBySpacing(1);
		}

		// add something to move them closer to the center of the screen
		for (int i = 0; i < lines.size(); i++) {
			for (int j = 0; j < lines[i].size(); j++) {
				lines[i][j] += ofPoint(890, 600);
			}
		}

		// push based on mouse:
		for (int i = 0; i < lines.size(); i++) {
			for (int j = 0; j < lines[i].size(); j++) {

				// calc the diff between point and mouse
				ofPoint diff = lines[i][j] - ofPoint(mouseX, mouseY);

				// get length:
				float length = diff.length();

				// convert length to pct, 0 is far away 1 is close
				float lengthpct = ofMap(length, 200 + z * 150, 0, 1, 0, true);

				lines[i][j] += powf(lengthpct, 3) * diff.getNormalized() * (100 + 100 * z);
			}
		}

		for (int i = 0; i < lines.size(); i++) {
			lines[i].draw();
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
