#include <iostream>
#include <stdlib.h>
using namespace std;
void norazmak()
{
    char rec[100];
    gets(rec);
    for (int i=0;rec[i]!='\0';i++){
        if(rec[i]==' '){
            for(int a=i;rec[a]!='\0';a++){
                rec[a]=rec[a+1];
            }
        }
    }
    cout << endl;
    for (int i=0;rec[i]!='\0';i++){
        cout << rec[i];
    }
}
int main()
{
    norazmak();
}
