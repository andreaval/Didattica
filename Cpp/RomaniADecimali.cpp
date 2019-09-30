#include <iostream>
using namespace std;
bool isRomanChar(char c){
    if(c=='I' || c=='V' || c=='X' || c=='L' || c=='C' || c=='D' || c=='M'){
        return true;
    }
    else return false;
}
bool checkNum(string roman){
    int i=0,len=roman.length();
    while(isRomanChar(roman[i])) i++;
    if(i<len) return false;
    else return true;
}
bool checkDisp(int numeri[],int len){
    int cont,i=0;
    bool ok=true;
    while(ok && i<len){
        if(i>0 && numeri[i]==numeri[i-1]) cont++;
        else cont=1;
        if((cont==2 && (numeri[i]==5 || numeri[i]==50 || numeri[i]==500)) 
            || cont==4 
            || (i+1<len && cont>=2 && numeri[i]<numeri[i+1])
            || (i+2<len && numeri[i]<numeri[i+1] && numeri[i+1]<numeri[i+2])){
            ok=false;
        } 
        i++;
    }
    return ok;
}
int main(){
    string r;
    int l,i,num=0;
    cout << "Inserisci un numero romano: ";
    cin >> r;
    if(checkNum(r)){
        l=r.length();
        int d[l];
        for(i=0;i<l;i++){
            if(r[i]=='I') d[i]=1;
            else if(r[i]=='V') d[i]=5;
            else if(r[i]=='X') d[i]=10;
            else if(r[i]=='L') d[i]=50;
            else if(r[i]=='C') d[i]=100;
            else if(r[i]=='D') d[i]=500;
            else d[i]=1000;
        }
        if(checkDisp(d,l)){
            for(i=0;i<l;i++){
                if(i+1<l && d[i]<d[i+1]) num=num-d[i];
                else num=num+d[i];
            }
            cout << num;
        }
        else{
            cout << "Numero non valido: costruzione errata";
        }
    }
    else{
        cout << "Numero non valido: ci sono caratteri non ammessi";
    }
    cout << "\n";
}