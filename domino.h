#ifndef DOMINO_H
#define DOMINO_H
#include<ostream>
using namespace std;
class domino
{
    public:
        domino();
        domino(int left1,int right1);
        void getLeftDots();
        void getRightDots();
        void toString();
        friend ostream& operator<< (ostream& out, domino dom);
    private:
        int right;
        int left;
};

#endif // DOMINO_H
