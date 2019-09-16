/*
 * EightQueen.cpp
 *
 *  Created on: Sep 16, 2019
 *      Author: akshatkatoch
 */

#include "EightQueen.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

EightQueen::EightQueen(int n){
    vector<vector<int> > board;
    board.resize(n, vector<int>(n));
    num = n;
    vector<int> solution;

}

bool EightQueen::canBePlaced(vector<vector<int> > b, int row, int col) {
    int c1 = col;
    int c2 = col;

    for (unsigned int i = 0; i < col; i++) {

        if (b[row][i] == 1) {
        	cout << "hey" << endl;
            return false;
        }
    }
    for (unsigned int i = row; i > 0; i--) {

        if (b[i][col] == 1) {
        	cout << "heyy" << endl;
            return false;
        }
        c1 -= 1;
    }
    for (unsigned int i = row; i < num; i++) {

        if (b[i][col == 1]) {
        	cout << "heyyy" << endl;
            return false;
        }
        c2 -= 1;
    }
    cout << "heyyyy" << endl;
    return true;
}

int EightQueen::queenPositions(vector<vector<int> > b, int col) {
    if (col == num) {
        for (int j = 0; j < num; j++) {
            if (b[j][col] == 1) {
                return j;
            }
        }
    }
    for (int i = 0; i < num; i++) {
        if (canBePlaced(b, i, col)) {
            b[i][col] = 1;
            col += 1;
            if (queenPositions(board, col) != 0) {
                solution.push_back(queenPositions(b, col));
            }
            b[i][col] = 0;
        }
    }
    return 0;
}

void EightQueen::printSolution() {
    if (solution.empty()) {
        cout << "No Solution!" << endl;
    }
    else {
    for (int i = 0; i < solution.size(); i++) {
        cout << solution.at(i) << " ";
    	}
    }
}


