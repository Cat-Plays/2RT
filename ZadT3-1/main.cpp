#include <iostream>
using namespace std;

int brunosa()
{
    char polje[1000];
    int br=0;
    for (int i=0;true;i++){
        cin >> polje[i];
        if (polje[i]=='0')
            return br;
        br++;
    }
}
int zbrunosa()
{
    int polje[1000];
    int br=0;
    for (int i=0;true;i++){
        cin >> polje[i];
        if (polje[i]==20)
            return br;
        br+=polje[i];
    }
}
int kreativanbrojturk()
{
    int polje[1000];
    int br=0;
    for (int i=0;true;i++){
        cin >> polje[i];
        if (polje[i]==69)
            return br;
        if(polje[i]>br)
            br=polje[i];
    }
}
int main()
{
    cout << kreativanbrojturk();
}
