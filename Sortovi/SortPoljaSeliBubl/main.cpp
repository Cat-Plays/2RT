#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int polje[6][6],mini,poz;
    for(int i=0;i<6;i++){
        for(int a=0;a<6;a++){
            polje[i][a]=abs(rand())%100;
        }
    }
    for(int i=0;i<6;i++){
        for(int i1=0;i1<6;i1++){
            mini=polje[i][i1];
            for(int a=i1;a<6;a++){
                if(polje[i][a]<mini){
                    mini=polje[i][a];
                    poz=a;
                }
            }
            if(polje[i][i1]>mini){
                polje[i][poz]=polje[i][i1];
                polje[i][i1]=mini;
            }
        }
        i++;
        if(i>=6)break;
        for(int i1=0;i1<6;i1++){
            for(int a=1;a<6;a++){
                if(polje[i][a]>polje[i][a-1]){
                    mini=polje[i][a];
                    polje[i][a]=polje[i][a-1];
                    polje[i][a-1]=mini;
                }
            }
        }
    }
    for(int i=0;i<6;i++){
        for(int a=0;a<6;a++){
            cout << polje [i][a] <<'\t';
        }
        cout << endl;
    }
}
