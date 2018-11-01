#include "domino.h"
#include<cstring>
#include<iostream>
using namespace std;
string left_side;
string right_side;
string left_and_right;
domino::domino()//to put inetial value if user didn't put left or right side
{
    right=0;
    left=0;
}
domino ::domino(int left1,int right1)//to take the left and right side
{
    left=left1;//left (upper)
    right=right1;//right (down)
}
void domino::getLeftDots()//left side
{
    //for every condition the shape of the left side

    if(left==0)
        left_side="\n \n";
    if (left==1)
        left_side="\n .\n";
    if (left==2)
        left_side=".\n\n .";
    if (left==3)
        left_side=".\n .\n  .";
    if(left==4)
        left_side=". .\n. .";
    if(left==5)
        left_side=". .\n .\n. .";
    if (left==6)
        left_side=". .\n. .\n. .";

}
void domino::getRightDots()
{
        //for every condition the shape of the right side
    if(right==0)
        right_side="\n \n";
    if (right==1)
        right_side="\n .\n";
    if (right==2)
        right_side=".\n\n .\n";
    if (right==3)
        right_side=".\n .\n  .\n";
    if(right==4)
        right_side=". .\n. .\n";
    if(right==5)
        right_side=". .\n .\n. .\n";
    if (right==6)
        right_side=". .\n. .\n. .";
}
void domino::toString()//to add left and right together
{
    left_and_right=left_side+"\n---\n"+right_side;

}
ostream& operator<< (ostream& out, domino dom){
    out<<left_and_right;
    return out;
}
