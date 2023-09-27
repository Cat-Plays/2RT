#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a[10],b;
    for(int i=0;i<10;i++){
        a[i]=abs(rand()) % 100;
    }
    for (int i =0;i<10;i++){
        for(int i2=1;i2<10;i2++){
            if (a[i2]<a[i2-1]){
                b=a[i2];
                a[i2]=a[i2-1];
                a[i2-1]=b;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout << a[i]<<'\t';
    }
}
