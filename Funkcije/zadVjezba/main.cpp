#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

bool pravokutni(float a,float b, float c)
{
    if (pow(a,2)==pow(b,2)+pow(c,2)) {return true;}
    if (pow(b,2)==pow(a,2)+pow(c,2)) {return true;}
    if (pow(c,2)==pow(b,2)+pow(a,2)) {return true;}
    return false;
}

double povUKruga(double a, double b)
{
    double r;
    if (a<b) r=a/2; else r=b/2;
    return pow(r,2)*3.14;
}
double povOKruga(double a, double b)
{
    double r=sqrt((pow(a,2)+pow(b,2)))/2;
    return pow(r,2)*3.14;
}
float operacije(int a,int b, char c)
{
    if(c=='+') return a+b;
    if(c=='-') return a-b;
    if(c=='*') return a*b;
    if(c=='/') return a/b;
    return 0;
}
int main()
{
    int a,b;
    cin >> a;
    cout << binarni(a);
}
