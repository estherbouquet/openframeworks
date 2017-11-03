#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//second step for font
	font.load("ace_lift_bold.otf", 50);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	string mystring = "hi!";
	ofRectangle rect2 = font.getStringBoundingBox(mystring, 200, 200);

	//(jolie) boucle qui crée des mots qui tournent autour d'un axe. Penser à changer les valeurs pour varier
	for (int i = 0; i < 20; i++) {
		ofPushMatrix(); 

		//choupi avec ces valeurs:
		ofTranslate(50, 0);
		ofRotateY(-ofGetElapsedTimef() * 60 + i * 20);
		font.drawString(mystring, 450, 500); //third step for font

		//ofTranslate(350, 350); 
		//+ ou - vite pour le *60 et + ou - resserré suivant si i*10 ou i*20 je dirais. - devant ofGetElapsed = change le sens.
		//ofRotateY(-ofGetElapsedTimef() * 60 + i * 10);
		//font.drawString(mystring, 150, 150);

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
