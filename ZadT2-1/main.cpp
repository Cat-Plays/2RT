#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int zbrojpolja()
{
    int x,y,polje[100][100],br=0;
    cin >> x;
    cin >> y;
    for (int i=0;i<y;i++){
        for (int a=0;a<x;a++){
            polje[y][x]=rand() %100 -50;
        }
    }
    for (int i=0;i<y;i++){
        for (int a=0;a<x;a++){
            cout <<polje[y][x]<<" ";
        }
        cout <<endl;
    }
    for (int i=0;i<y;i++){
        for (int a=0;a<x;a++){
            if(polje[y][x]%2==0)
                br+=polje[y][x];
        }
    }
    return br;
}
void repsamg()
{
    char rec[100];
    gets(rec); //delam v codebloksu deni _s ak v VS
    for(int i=0;rec[i]!='\0';i++){
        if(rec[i]=='a'||rec[i]=='e'||rec[i]=='i'||rec[i]=='o'||rec[i]=='u'||rec[i]=='A'||rec[i]=='E'||rec[i]=='I'||rec[i]=='O'||rec[i]=='U')
            rec[i]='#';
    }
    for (int i=0;rec[i]!='\0';i++)
        cout << rec[i]<<" ";
}
int main()
{
    srand(time(0));
    repsamg();
}
