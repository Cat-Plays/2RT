#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int polje[10][10],mi,poz;
    for(int i=0;i<10;i++){
        for(int a=0;a<10;a++){
            polje[a][i]=abs(rand())%100;
        }
    }
    for(int i=0;i<10;i++){
        mi=polje[i][i];
        for(int a=i;a<10;a++){
            if(mi>polje[a][a]){
                mi=polje[a][a];
                poz=a;
            }
        }
        if(mi<polje[i][i]){
            polje[poz][poz]=polje[i][i];
            polje[i][i]=mi;
        }
    }

    for(int i=0;i<10;i++){
        for(int a=0;a<10;a++){
            cout << polje[a][i]<<'\t';
    }
    cout <<endl;
    }

    /*
    for(int i=0;i<10;i++){
        cout <<polje[i][i]<<'\t';
    }
    */
}
