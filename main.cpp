//
//  main.cpp
//  Parking Project 2.0
//
//  Created by Christos on 16/04/16.
//
//#include "Parking_Creation.h"
#include <math.h>
#include <ctime>
#include <iostream>
#include <string>
//#include <graphics.h>




int main (){
    int random;
    srand(time(NULL));
    using namespace std;
    int parking[18][45][12];
    int i;
    int j;
    int k;
    string repeat = "yes";
    
    // *************************************************************************************************
    int random_value = 10; // *  INCREASE TO DECREASE FREE SPOTS, DECREASE TO INCREASE FREE SPOTS  *
    // *************************************************************************************************
    
    cout << " Figure 1.1 : B1 Parking Floor Plan" <<endl;
    cout << " 1s represent available parking spots" <<endl;
    cout << " 0s represent unavailable parking spots" <<endl;
    cout << " due to the parking's design." <<endl;
    cout <<endl;
    
    // *******************************
    // * PARKING B1 CREATION * START *
    // *******************************
    for (i = 0 ; i < 45; i++ ) {
        
        if (i == 0) { // Comment: parking[i][j][0] determines whether spot is a blank or not (Cars cannot be parked due to
            // parking design.
            
            parking[0][i][0] = 0;
            parking[1][i][0] = 0;
            parking[2][i][0] = 0;
            parking[3][i][0] = 0;
            parking[4][i][0] = 0;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 0;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 0;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 0;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 0;
            parking[17][i][0] = 1;
            
            
        } else if (i == 2) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[6][i][0] = 0;
            parking[15][i][0] = 0;
            parking[16][i][0] = 0;
            parking[17][i][0] = 0;
            
        } else if (i == 3) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[6][i][0] = 0;
            parking[7][i][0] = 0;
            parking[15][i][0] = 0;
            parking[16][i][0] = 0;
            parking[17][i][0] = 0;
            
        } else if (i == 4 || i == 5) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[15][i][0] = 0;
            parking[16][i][0] = 0;
            parking[17][i][0] = 0;
            
        } else if (i == 6) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[0][i][0] = 0;
            
            for (j = 6 ; j < 18; j++ ) {
                
                parking[j][i][0] = 0;
            }
            
        } else if (i == 7) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            
        } else if (i == 8) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[6][i][0] = 0;
            parking[7][i][0] = 0;
            
        } else if (i == 9) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[6][i][0] = 0;
            
        } else if (i == 10 || i == 11) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[2][i][0] = 0;
            parking[3][i][0] = 0;
            parking[4][i][0] = 0;
            parking[5][i][0] = 0;
            
        } else if (i == 12) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            for (j = 0 ; j < 6; j++ ) {
                
                parking[j][i][0] = 0;
            }
            
        } else if (i == 13) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            for (j = 0 ; j < 5; j++ ) {
                
                parking[j][i][0] = 0;
            }
            
        } else if (i == 14) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
        } else if (i == 15) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[11][i][0] = 0;
            parking[12][i][0] = 0;
            
        } else if (i == 16) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[10][i][0] = 0;
            parking[11][i][0] = 0;
        } else if (i == 17 || i == 18 || i == 19) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            
        } else if (i == 20) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[17][i][0] = 0;
            
        } else if (i == 21 || i == 22) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            
        } else if (i == 23) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[0][i][0] = 0;
            
        } else if (i == 24 || i == 25 || i == 26) {
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            
        } else if (i == 27) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[0][i][0] = 0;
            parking[1][i][0] = 0;
            parking[6][i][0] = 0;
            parking[7][i][0] = 0;
            
        } else if (i == 28) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[0][i][0] = 0;
            parking[5][i][0] = 0;
            
        } else if (i == 29 || i == 30 || i ==31) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            
        } else if (i == 32) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[2][i][0] = 0;
            
        } else if (i == 33) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[3][i][0] = 0;
            
        } else if (i == 34 || i == 35 || i == 36) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            
        } else if (i == 37) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            for (j = 6 ; j < 18; j++ ) {
                
                parking[j][i][0] = 0;
            }
            
        } else if (i == 38 || i == 39) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[5][i][0] = 0;
            parking[15][i][0] = 0;
            parking[16][i][0] = 0;
            parking[17][i][0] = 0;
            
            
        } else if (i == 40) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[0][i][0] = 0;
            parking[15][i][0] = 0;
            parking[16][i][0] = 0;
            parking[17][i][0] = 0;
            
        } else if (i == 41) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[0][i][0] = 0;
            parking[1][i][0] = 0;
            parking[15][i][0] = 0;
            parking[16][i][0] = 0;
            parking[17][i][0] = 0;
            
        } else if (i == 42) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[9][i][0] = 0;
            parking[10][i][0] = 0;
            
        } else if (i == 43) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[0][i][0] = 0;
            
            for (j = 6 ; j < 18; j++ ) {
                
                parking[j][i][0] = 0;
            }
            
        } else if (i == 44) {
            
            parking[0][i][0] = 1;
            parking[1][i][0] = 1;
            parking[2][i][0] = 1;
            parking[3][i][0] = 1;
            parking[4][i][0] = 1;
            parking[5][i][0] = 1;
            parking[6][i][0] = 1;
            parking[7][i][0] = 1;
            parking[8][i][0] = 1;
            parking[9][i][0] = 1;
            parking[10][i][0] = 1;
            parking[11][i][0] = 1;
            parking[12][i][0] = 1;
            parking[13][i][0] = 1;
            parking[14][i][0] = 1;
            parking[15][i][0] = 1;
            parking[16][i][0] = 1;
            parking[17][i][0] = 1;
            
            parking[9][i][0] = 0;
            
        }
        
    }
    // *******************************
    // * PARKING B1 CREATION * END   *
    // *******************************
    
    for (i = 0 ; i < 18; i++ ) {
        for (j = 0 ; j < 45; j++ ) {
            if (parking[i][j][0] != 0) {
                
                parking[i][j][0] = 1;
            }
            cout << parking[i][j][0];
            if (j == 0) {
                cout <<"| |";
            } else if ((j % 2) != 0 && (j <= 13) && (j > 0)) {
                cout << "| |";
            } else if (((j % 2) == 0) && (j <= 30) && (j > 13))  {
                cout << "| |";
            } else if (((j % 2) != 0) && (j <= 44) && (j > 30)) {
                cout << "| |";
            } else {
                cout << " ";
            }
        }
        cout <<endl;
    }
    
    cout <<endl;
    
    cout << " Figure 1.2 : B1 Parking Simulator" <<endl;
    cout << " 1s represent free parking spots" <<endl;
    cout << " 0s represent taken/unavailable" <<endl;
    cout << " parking spots" <<endl;
    cout <<endl;
    
    // PARKING SPOT RANDOMIZER *START*
    
    for (i = 0 ; i < 18; i++ ) {
        for (j = 0 ; j < 45; j++ ) {
            random = rand() % random_value;
            if (random == 1 && parking[i][j][0] == 1){
                parking[i][j][1] = 1;
            } else {
                parking[i][j][1] = 0;
            }
            cout << parking[i][j][1];
            if (j == 0) {
                cout <<"| |";
            } else if ((j % 2) != 0 && (j <= 13) && (j > 0)) {
                cout << "| |";
            } else if (((j % 2) == 0) && (j <= 30) && (j > 13))  {
                cout << "| |";
            } else if (((j % 2) != 0) && (j <= 44) && (j > 30)) {
                cout << "| |";
            } else {
                cout << " ";
            }
        }
        cout <<endl;
    }
    
    // PARKING SPOT RANDOMIZER *END*
    while (repeat == "yes") {
        
        string full = "true";
        if (repeat == "yes") {
            repeat = "no";
            for (i = 0 ; i < 18; i++ ) {
                for (j = 0 ; j < 45; j++ ) {
                    if (parking[i][j][1] == 1) {
                        full = "false";
                        repeat = "yes";
                    }
                }
            }
        }
        if (full == "true") {
            cout << "The parking full. Public Safety sends their regards" << endl;
            exit(0);
        }
        ///////// ELAVATOR TO D2 *START*
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                if ((j == 42) && (i > 6)) { // WALL DISTANCE D1
                    parking[i][j][2] = sqrt((42-j)*(42-j)+(7-(i))*(7-(i))) + sqrt((45-42)*(45-42)+(7-(5))*(7-(5)));
                } else if ((j == 36) && (i > 6)) {
                    parking[i][j][2] = sqrt((36-j)*(36-j)+(7-(i))*(7-(i))) + sqrt((45-36)*(45-36)+(7-(5))*(7-(5)));
                } else {
                    parking[i][j][2] = sqrt((45-j)*(45-j)+(5-i)*(5-i));
                }
            }
        }
        int minel1 = 99999;
        int minel1i;
        int minel1j;
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                if ((parking[i][j][2] < minel1) && (parking[i][j][0] == '1') && (parking[i][j][1] == '1') ) {
                    minel1 = parking[i][j][2];
                    minel1i = i;
                    minel1j = j;
                }
            }
        }
        //cout << endl;
        //cout << "The closest spot to D2 parking is: " << " Column: " << minel1j + 1 << " Row: " << minel1i + 1 << endl;
        //////// ELAVATOR TO D2 *END*
        
        //////// ELAVATOR TO A5 *START*
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                parking[i][j][3] = sqrt((25-j)*(25-j)+(0-(i))*(0-(i)));
            }
        }
        int minel2 = 99999;
        int minel2i;
        int minel2j;
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                if ((parking[i][j][3] < minel2) && (parking[i][j][0] == '1') && (parking[i][j][1] == '1') ) {
                    minel2 = parking[i][j][3];
                    minel2i = i;
                    minel2j = j;
                }
            }
        }
        //cout << endl;
        //cout << "The closest spot to A5 parking is: " << " Column: " << minel2j + 1 << " Row: " << minel2i + 1 << endl;
        //////// ELAVATOR TO A5 *END*
        
        //////// ELAVATOR TO A5 *START*
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                parking[i][j][4] = sqrt((16-j)*(16-j)+(0-(i))*(0-(i)));
            }
        }
        int minel3 = 99999;
        int minel3i;
        int minel3j;
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                if ((parking[i][j][4] < minel3) && (parking[i][j][0] == 1) && (parking[i][j][1] == 1) ) {
                    minel3 = parking[i][j][4];
                    minel3i = i;
                    minel3j = j;
                }
            }
        }
        //cout << endl;
        //cout << "The closest spot to C2 parking is: " << " Column: " << minel3j + 1 << " Row: " << minel3i + 1 << endl;
        ////////// ELAVATOR TO A5 *END*
        
        ////////// ELAVATOR TO A2 *START*
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                parking[i][j][5] = sqrt((10-j)*(10-j)+(4-(i))*(4-(i)));
            }
        }
        int minel4 = 99999;
        int minel4i;
        int minel4j;
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                if ((parking[i][j][5] < minel4) && (parking[i][j][0] == 1) && (parking[i][j][1] == 1) ) {
                    minel4 = parking[i][j][5];
                    minel4i = i;
                    minel4j = j;
                }
            }
        }
        //cout << endl;
        //cout << "The closest spot to A2 parking is: " << " Column: " << minel4j + 1 << " Row: " << minel4i + 1 << endl;
        ////////// ELAVATOR TO A2 *END*
        
        ////////// ELAVATOR TO ERB *START*
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                if ((j == 1) && (i > 6)) { // WALL DISTANCE D1
                    parking[i][j][7] = sqrt((7-j)*(7-j)+(7-(i))*(7-(i))) + sqrt((2-7)*(2-7)+(0-(7))*(0-(7)));
                } else {
                    parking[i][j][6] = sqrt((2-j)*(2-j)+(0-(i))*(0-(i)));
                }
            }
        }
        int minel5 = 99999;
        int minel5i;
        int minel5j;
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                if ((parking[i][j][6] < minel5) && (parking[i][j][0] == 1) && (parking[i][j][1] == 1) ) {
                    minel5 = parking[i][j][6];
                    minel5i = i;
                    minel5j = j;
                }
            }
        }
        //cout << endl;
        //cout << "The closest spot to ERB parking is: " << " Column: " << minel5j + 1 << " Row: " << minel5i + 1 << endl;
        ////////// ELAVATOR TO ERB *END*
        
        ////////// ELAVATOR TO D1 *START*
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                if ((j == 1) && (i > 6)) { // WALL DISTANCE D1
                    parking[i][j][7] = sqrt((1-j)*(1-j)+(7-(i))*(7-(i))) + sqrt((0-1)*(0-1)+(7-(4))*(7-(4)));
                } else if ((j == 1) && (i > 6)) {
                    parking[i][j][7] = sqrt((7-j)*(7-j)+(7-(i))*(7-(i))) + sqrt((0-7)*(0-7)+(7-(4))*(7-(4)));
                } else {
                    parking[i][j][7] = sqrt((0-j)*(0-j)+(4-(i))*(4-(i)));
                }
            }
        }
        int minel6 = 99999;
        int minel6i;
        int minel6j;
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                if ((parking[i][j][7] < minel6) && (parking[i][j][0] == 1) && (parking[i][j][1] == 1) ) {
                    minel6 = parking[i][j][7];
                    minel6i = i;
                    minel6j = j;
                }
            }
        }
        //cout << endl;
        //cout << "The closest spot to D1 parking is: " << " Column: " << minel6j + 1 << " Row: " << minel6i + 1 << endl;
        ////////// ELAVATOR TO D1 *END*
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                parking[i][j][8] = 9999999;
            }
        }
        // Closest parking for each spot *START*
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                for (k = 2; k < 8; k++ ) {
                    if ((parking[i][j][8] > parking[i][j][k]) && (parking[i][j][0] == 1) && (parking[i][j][1] == 1)) {
                        parking[i][j][8] = parking[i][j][k];
                        parking[i][j][9] = i;
                        parking[i][j][10] = j;
                    }
                }
            }
        }
        // Closest parking for each spot *END*
        
        // Closest spot to parking *START*
        int minel = 999999;
        int mineli;
        int minelj;
        
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                if ((parking[i][j][8] < minel) && (parking[i][j][0] == 1) && (parking[i][j][1] == 1) ) {
                    minel = parking[i][j][8];
                    mineli = i;
                    minelj = j;
                }
            }
        }
        //cout << endl;
        //cout << "The closest spot to an parking is: " << " Column: " << minelj + 1 << " Row: " << mineli + 1 << endl;
        cout << endl;
        // Closest spot to parking *END*
        for (i = 0 ; i < 18; i++ ) {
            for (j = 0 ; j < 45; j++ ) {
                cout << parking[i][j][1];
                if (j == 0) {
                    cout <<"| |";
                } else if ((j % 2) != 0 && (j <= 13) && (j > 0)) {
                    cout << "| |";
                } else if (((j % 2) == 0) && (j <= 30) && (j > 13))  {
                    cout << "| |";
                } else if (((j % 2) != 0) && (j <= 44) && (j > 30)) {
                    cout << "| |";
                } else {
                    cout << " ";
                }
            }
            cout <<endl;
        }
        string location;
        cout << endl;
        cout << "Please enter your prefered building of entrance" <<endl;
        cout << "(D2, A5, C2, A2, ERB, D1):" <<endl;
        cin >> location;
        if (location == "D2") {
            cout << endl;
            cout << "The closest spot to D2 elevator is: " << " Column: " << minel1j + 1 << " Row: " << minel1i + 1 << endl;
            parking[minel1i][minel1j][1] = 0;
            cout << endl;
        } else if (location == "A5") {
            cout << endl;
            cout << "The closest spot to A5 elevator is: " << " Column: " << minel2j + 1 << " Row: " << minel2i + 1 << endl;
            parking[minel2i][minel2j][1] = 0;
        } else if (location == "C2"){
            cout << endl;
            cout << "The closest spot to C2 elevator is: " << " Column: " << minel3j + 1 << " Row: " << minel3i + 1 << endl;
            parking[minel3i][minel3j][1] = 0;
            cout << endl;
        } else if (location == "A2"){
            cout << endl;
            cout << "The closest spot to A2 elevator is: " << " Column: " << minel4j + 1 << " Row: " << minel4i + 1 << endl;
            cout << endl;
            parking[minel4i][minel4j][1] = 0;
        } else if (location == "ERB"){
            cout << endl;
            cout << "The closest spot to ERB elevator is: " << " Column: " << minel5j + 1 << " Row: " << minel5i + 1 << endl;
            cout << endl;
            parking[minel5i][minel5j][1] = 0;
        } else if (location == "D1"){
            cout << endl;
            cout << "The closest spot to D1 elevator is: " << " Column: " << minel6j + 1 << " Row: " << minel6i + 1 << endl;
            parking[minel6i][minel6j][1] = 0;
            cout << endl;
        }
        cout << "Is another visitor coming?";
        cin >> repeat;
    }
    
    
    
}
