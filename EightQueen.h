/*
 * EightQueen.h
 *
 *  Created on: Sep 16, 2019
 *      Author: akshatkatoch
 */

#ifndef EIGHTQUEEN_H_
#define EIGHTQUEEN_H_





#endif /* EIGHTQUEEN_H_ */
#include <vector>
#include <iostream>
using namespace std;

class EightQueen {
        private:
                vector<vector<int> > board;
                int num;
                vector<int> solution;
        public:
            EightQueen(int n);
            bool canBePlaced(vector<vector<int> > b, int row, int col);
            int queenPositions(vector<vector<int> > b, int c = 0);
            void printSolution();
};
