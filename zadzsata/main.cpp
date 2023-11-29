#include <iostream>
#include <stdlib.h>
using namespace std;

int najdulji(char *p)
{
    int n=0, c=1;
    for(int i=0;*(p+i-1)!='\0';i++){
        if(*(p+i)==*(p+i-1)){
            c++;
        }else{
            if(c>n) n=c;
            c=1;
        }
    }
    return n;
}

int main()
{
    char p[100];
    gets(p);
    cout << najdulji(&p[1]);
}
