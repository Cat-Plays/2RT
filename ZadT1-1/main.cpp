#include <iostream>
using namespace std;

void legoreci()
{
    //turk šteri su ti favorite legači bili ak si opće ih imal, meni definitivno Ninjago setovi
    char spojenarec[100]={'\0'},rec[100];
    for(int i=0;true;i++){
        gets(rec);
        if(rec[0]=='s'&&rec[1]=='t'&&rec[2]=='o'&&rec[3]=='p') break;
        for (int a=0;rec[a]!='\0';a++){
            spojenarec[i]=rec[a];
            i++;
        }
        spojenarec[i]=' ';
    }
    for (int i=0;spojenarec[i]!='\0';i++){
        cout << spojenarec[i];
    }
}
void sahovnica()
{

}
void test(int *a)
{
    cout << *(a)[1];
}
int main()
{
    int a[2]={2,3};
    test(a);
}
