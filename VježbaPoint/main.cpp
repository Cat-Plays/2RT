#include <iostream>
#include <stdlib.h>
using namespace std;
void oduzimanje(int *polje1,int *polje2)
{
    int polje3[10];
    for (int i=0;i<10;i++){
        polje3[i]=*(polje1 + i)-*(polje2 + i);
    }
    for (int i=0;i<10;i++){
        cout << polje3[i] << '\t';
    }

}
int main()
{
    int polje1[10]={1,2,3,4,5,6,7,8,9,10},polje2[10]={10,9,8,7,6,5,4,3,2,1};
    oduzimanje(&polje1[0],&polje2[0]);
}
