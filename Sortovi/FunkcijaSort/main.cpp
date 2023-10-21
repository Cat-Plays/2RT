#include <iostream>
#include <stdlib.h>
using namespace std;

void sorti(int polje[][10],int n)
{
    int swi;
    for(int y=0;y<10;y++){
        for(int i=0;i<n;i++){
            for(int a=1;a<n;a++){
                if(polje[y][a]>polje[y][a-1]){
                    swi=polje[y][a];
                    polje[y][a]=polje[y][a-1];
                    polje[y][a-1]=swi;
                }
            }
        }
    }
    for(int i=0;i<10;i++){
        for(int a=0;a<n;a++){
            cout << polje[i][a]<<'\t';
        }
        cout <<endl;
    }
}
int main()
{
    int polje[10][10],n;
    cout << "upisi dimenziju duljinu redtka 2d polja";
    cin >> n;
    for(int i=0;i<10;i++){
        for(int a=0;a<n;a++){
            polje[i][a]=abs(rand())%100;
        }
    }
    sorti(polje,n);
}
