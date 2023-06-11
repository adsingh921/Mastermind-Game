#include <iostream>
using namespace std;
#include "Code.h"

int main()

{

    code mm;
    code cc;
    
    cc.randomNumber();

    cout<<endl;

    cout<<"Enter a 4 single digit guess number: "<<endl;

    for (int i = 0; i < 4; i++)

    {

         cout<<"Enter a single digit: ";

         mm.inputVect.push_back(4);

         cin>>mm.inputVect[i];    

    }

    cout<<"The random numbers are: ";

    for (int i = 0; i < 4; i++)

    {  

         cout << cc.randCode[i];       

    }

    cout<<endl;

    cout<<"The user numbers are: ";

    for (int i = 0; i < 4; i++)

    {  

         cout << mm.inputVect[i];      

    }

    cout<<endl;

    cout<<"Number of position values is correct: "<<cc.checkCorrect(mm)<<endl;

    cout<<"Number of position values is incorrect: "<<cc.checkIncorrect(mm)<<endl;

    cout<<endl;

    system("pause");

    return 0;

}