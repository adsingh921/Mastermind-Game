#include "Code.h"

void code :: randomNumber()

{
    srand(time(0));

   

    for (int i = 0; i < 4; i++)

    {

         randCode.push_back(4);

         r= rand() % 6;

         randCode[i] = r;

         cout << randCode[i];     

    }

}

int code :: checkCorrect (code c)

{

    rightPos=0;

    for (int j=0; j <4; j++)

    {

         if (randCode[j] == c.inputVect[j])

         {       

             rightPos++;

         }

    }

    return rightPos;

}

int code :: checkIncorrect(code c)

{

    wrongPos=0;

    for (int i=0; i<4; i++)

    {

         if (randCode[i] != c.inputVect[i])

         {

             wrongPos++;

         }

    }

    return wrongPos;
}

