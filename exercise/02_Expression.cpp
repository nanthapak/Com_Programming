#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    // float pi=M_PI;
    long fac=1;
    // float Sin=sin(40*pi/180);
    float res;
    for(int i=1;i<=10;i++)
    {
        fac*=i;
    }
    float Log=log(9.7);
    // res=((pi-(fac/pow(8,8)))+(pow(Log,7/(sqrt(71))-Sin)))/pow(1.2,cbrt(2.3));
    cout<<res;

}