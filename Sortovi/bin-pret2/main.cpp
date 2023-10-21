#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int polje[10],mi,ma,s,poz,br,trazeni;
    bool pronaden=false;
    for(int i=0;i<10;i++){
        polje[i]=abs(rand())%100;
    }
       for(int i=0;i<10;i++){
        br=polje[i];
        for(int a=i;a<10;a++){
            if(br>polje[a]){
                br=polje[a];
                poz=a;
            }
        }
        if(mi<polje[i]){
            polje[poz]=polje[i];
            polje[i]=br;
        }
    }
    for (int i=0;i<10;i++){
        cout << polje[i]<<'\t';
    }
    cout << endl;
    cout << "upisi trazeni broj: ";
    cin >> trazeni;
    cout <<endl;
    mi=0;
    ma=9;
    while(mi<=ma){
        poz=(ma+mi)/2;
        if(polje[poz]==trazeni){
            pronaden=true;
            break;
        }
        if(polje[poz]<trazeni){
            mi=poz+1;
        }else{
            ma=poz-1;
        }
    }
    if(pronaden==false){
        cout<< "broj se ne nalazi u polju";
    }else cout <<"broj se nalazi u polju";
}
