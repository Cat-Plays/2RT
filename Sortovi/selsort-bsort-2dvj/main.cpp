#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
/*
{
    int a[10],c,mini=0,ma=1000,e,f,intv;
    for(int i=0;i<10;i++){
        a[i]=abs(rand()) % 100;
    }
    */
    /*
    for(mini=0;mini<10;mini++){
        for(c=mini;c<10;c++){
            if(a[c]<ma){
                ma=a[c];
                f=c;
            }
        }
        e=a[mini];
        a[mini]=ma;
        a[f]=e;
        ma=1000;
    }
    */
    /*
        for(c=0;c<10;c++){
        mini =a[c];
        for(int i=c;i<10;i++){
            if(a[c]>a[i] && a[i]<mini){
                mini=a[i];
                intv=i;
            }
        }
        if(a[c]>mini){
            a[intv]=a[c];
            a[c]=mini;
        }
    }
    */
    /*
    for(int i=0;i<10;i++){
        cout << a[i]<<'\t';
    }
}
*/
{
    int a[10][10],stupac,priv;
    for(int i=0;i<10;i++){
            for(int b=0;b<10;b++){
                a[i][b]=abs(rand()) % 100;
            }
    }
    for(stupac=0;stupac<10;stupac++){
        for (int i=0;i<10;i++){
            for(int b=1;b<10;b++){
                if(a[stupac][b]<a[stupac][b-1]){
                    priv=a[stupac][b];
                    a[stupac][b]=a[stupac][b-1];
                    a[stupac][b-1]=priv;
                }
            }
        }
    }
    for (int i=0;i<10;i++){
        for(int d=0;d<10;d++){
            cout << a[d][i]<<'\t';
        }
        cout <<endl;
    }
}
