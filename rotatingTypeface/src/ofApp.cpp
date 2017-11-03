#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	font.load("ace_lift_bold.otf", 300);
	ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
/*	
	//EXEMPLE 1
	string str = "A";
	
	ofRectangle rect = font.getStringBoundingBox(str, 0, 0);
	for (int i = 1; i < 5; i++) {
		ofPushMatrix();
		ofTranslate(ofGetWidth()/2, (ofGetHeight()/2)-(rect.height/2));
		ofRotateZ(sin(ofGetElapsedTimef())* 100/(i*3));
		ofTranslate((-rect.width-17) / 2, rect.height);

		//ofTranslate(0, -rect.height);
		ofNoFill();
		//ofDrawRectangle(rect);
		font.drawStringAsShapes(str, 0, 0);
	

		ofPopMatrix();
	}
*/
/*	
	//EXEMPLE 2
	string str = "un";

	ofRectangle rect = font.getStringBoundingBox(str, 0, 0);
	for (int i = 1; i < 15; i++) {
		ofPushMatrix();
		ofTranslate((ofGetWidth()-50) / 2, (ofGetHeight() / 2) - (rect.height / 2));
		//ofRotateZ(-45);
		ofRotateX(sin(ofGetElapsedTimef()) * 350 / (i));
		//ofRotateX(sin(ofGetElapsedTimef()) * 50 / (i/5));
		ofTranslate((-rect.width) / 2, rect.height);

		//ofTranslate(0, -rect.height);
		ofNoFill();
		ofSetLineWidth(200);
		//ofDrawRectangle(rect);
		font.drawStringAsShapes(str, 0, 0);


		ofPopMatrix();
	}
*/

	//EXEMPLE 3
	string str = "?!";

	ofRectangle rect = font.getStringBoundingBox(str, 0, 0);
	for (int i = 1; i < 10; i++) {
		ofPushMatrix();
		ofTranslate((ofGetWidth() - 50) / 2, (ofGetHeight() / 2) - (rect.height / 2), i * 10);
		//ofRotateZ(-45);
		ofRotateZ(ofGetElapsedTimef() * 100 / i);
		//ofRotateX(ofGetElapsedTimef() * mouseX);
		//ofRotateX(sin(ofGetElapsedTimef()) * 50 / (i/5));
		ofTranslate((-rect.width) / 2, rect.height);
		for (int j = 0; j < 10; j++) {
			//ofTranslate(0, -rect.height);
			ofRotateZ(ofGetElapsedTimef() * 10);
			ofNoFill();
			//ofSetColor(0 + (i * 10));
			//ofDrawRectangle(rect);
			font.drawStringAsShapes(str, 0, 0);
		}

		ofPopMatrix();
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
