#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    iteration = 3.3; //un pixel selectionné tous les 5 pixels
    
    img.load("N00004875.jpg");
	// with lines: N00023789 N00000061 N00004798 N00004827 N00004875 N00023789 -> iteration = 3
	// with rect: N00004833 N00004798 N00004827 -> iteration = 5 ou 7
	// with mousex: iteration 7 ou 10
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofBackground(0);

    //grille width + height
    for (int i = 0; i < img.getWidth(); i+=iteration){
        for (int j = 0; j < img.getHeight(); j+=iteration){
            
			// on récupère la couleur pour pouvoir en extraire la luminosité/brightness
            ofColor c = img.getColor(i,j);
            float brightness = c.getBrightness();
			//on donne la valeur de brigthness récupérée à setcolor pour la couleur des rect.
            ofSetColor(brightness);

			ofPushMatrix();
			//on récupère la position en i et j de chaque pixel sélectionné
            ofTranslate(i, j);
			//partie fun: 

			//waves movements; rect
			//ofRotateX(ofGetElapsedTimef()*2);
			//ofRotateY(sin(ofGetElapsedTimef()) * 30);
			//ofRotateZ(ofMap(brightness, 0, 255, 0, sin(ofGetElapsedTimef()) * 280));
			//ofDrawRectangle(i, j, (255 - brightness)*0.02, (255 - brightness)*0.02);

			//mouseX movements; rect
			//ofRotateY(sin(ofGetElapsedTimef()) * 0.5);
			//ofRotateZ(ofMap(brightness, 0, 255, 0, mouseX));
			//ofDrawRectangle( i, j, (255-brightness)*0.02,(255-brightness)*0.02);
			
			//small movements; lines
			ofRotateY(sin(ofGetElapsedTimef()) * 0.1);
			ofRotateZ(ofMap(brightness, 0, 255, 0, sin(ofGetElapsedTimef()) * 30));
			ofLine(-.05*(255 - brightness), 0, .05*(255 - brightness), 0);

			//ofDrawLine(-.05*(100 + 255 - brightness), 0, .08*(255 - brightness), 0);


            ofPopMatrix();
			
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
