/*
 * main.cpp
 *
 *  Created on: Sep 16, 2019
 *      Author: akshatkatoch
 */
#include <iostream>
#include "EightQueen.h"
using namespace std;

int main() {
    int n;
    cout << "Input number of queens: " << endl;
    cin >> n;
    EightQueen board(n);
    board.printSolution();
    return 0;
}



