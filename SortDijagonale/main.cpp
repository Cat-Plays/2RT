#include <iostream>
#include <stdlib.h>
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
        for(int a=0;a<6;a++){
            cout << polje [i][a] <<'\t';
        }
        cout << endl;
    }
    cout <<endl;
    for(int i=0;i<6;i++){
        mini=polje[i][i];
        for(int a=i;a<6;a++){
            if (polje[a][a]<mini){
                poz =a;
                mini=polje[a][a];
            }
        }
        if(mini<polje[i][i]){
            polje [poz][poz]=polje[i][i];
            polje [i][i]=mini;
        }
    }
    int vis;
    for(int i=0;i<6;i++){
        vis=4;
        for(int a=1;a<6;a++){
            if(polje[vis][a]<polje[vis+1][a-1]){
                mini=polje[vis][a];
                polje[vis][a]=polje[vis+1][a-1];
                polje[vis+1][a-1]=mini;
            }
            vis--;
        }
    }
    for(int i=0;i<6;i++){
        for(int a=0;a<6;a++){
            cout << polje [i][a] <<'\t';
        }
        cout << endl;
    }
}
