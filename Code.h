#ifndef CODE_H
#define CODE_H


#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

class code

{

public:

    int rightPos;

    int wrongPos;

    int r;

    void randomNumber();

    int checkCorrect(code c);

    int checkIncorrect(code c);

    vector<int> randCode;

    vector<int> inputVect;

};

#endif 