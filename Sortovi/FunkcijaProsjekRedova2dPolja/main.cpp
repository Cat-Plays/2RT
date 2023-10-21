#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
using namespace std;

double prosjek(int polje[][10],int i,int n)
{
    double zbroj=0;
    for(int a=0;a<n;a++){
        zbroj+=polje[i][a];
    }
    double k= round((zbroj/n) * 100.0) / 100.0;
    return k;
}
void poredak(int polje[][10],int n)
{
    int i;
    double prosjeki[10];
    for (i=0;i<10;i++){
        prosjeki[i]=prosjek(polje,i,n);
    }
    for(i=0;i<10;i++){
        for(int a=0;a<n;a++){
            cout << polje[i][a]<<'\t';
        }
        cout <<endl;
    }
    cout << endl;
    for(i=0;i<10;i++){
        cout << prosjeki[i]<<'\t';
    }
}
int main()
{
    int polje[10][10],n;
    cout << "upisi dimenziju duljinu redtka 2d polja: ";
    cin >> n;
    for(int i=0;i<10;i++){
        for(int a=0;a<n;a++){
            polje[i][a]=abs(rand())%100;
        }
    }
    poredak(polje,n);
}
