#include <iostream>

using namespace std;


//zbroji br od n do 0
int rek(int a){
    if (a==0)
        return 0;
    return rek(a-1) + a;
}
//zbroji prvih n parnih br
int par(int a){
    if (a == 0)
        return 0;
    return par(a-1) + a*2;
}
//zbroji sve neparne brojeve manje ili jednake n
int nepar(int a){
    if(a == 0)
        return 0;
    if (a % 2 != 0)
        a--;
    return nepar(a-2) + a;
}
//zamjeni sve ' ' sa ':'
void zam(char *a){
    if (*a == '\0')
        return;
    if (*a == ' ')
        *a = ':';
    zam(a+1);
}
//makne sve ' '
void pomek(char *a){
    if (*a == '\0')
        return;
    *a = *(a+1);
    if (*a == '\0')
        return;
    pomek (a + 1);
}
void mek(char *a){
    if (*a == '\0')
        return;
    if (*a == ' ')
        pomek(a);
    mek(a+1);
}



int main()
{
    cout << nepar(11);
    char a[100];
    cout <<endl;
    gets(a);
    mek(&a[0]);
    cout <<endl;
    for (int i=0; a[i]!='\0';i++)
        cout << a[i];
}
