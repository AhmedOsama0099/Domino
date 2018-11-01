#include <iostream>
#include "domino.h"
#include<bits/stdc++.h>
using namespace std;

int main()
{

    domino test(4,3);//to test code
    test.getLeftDots();//to get the left side(upper side)
    test.getRightDots();//to get the right side(down side)
    test.toString();//to add the left side(upper side) with the right side(down side)
    cout<<test<<"\n"<<"-------------------------\n";//to print full domino
    int jump=0;//for not taking repeat
    for (int i=0; i<=6; i++)
    {
        for (int j=jump; j<=6; j++)
        {
            domino No_repeat(i,j);
            No_repeat.getLeftDots();
            No_repeat.getRightDots();
            No_repeat.toString();
            cout<< No_repeat<<"\n"<<"-------------------------"<<endl;
        }
        jump++;
    }


}
