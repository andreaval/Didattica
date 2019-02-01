/**
 * Data una stringa determinare se è palindroma
 */
#include <iostream>
using namespace std;
int lunghezzaStringa(string s){
    int n;
    n = s.length();
    return n;
}
int lunghezzaStringa2(string s){
    int n=0;
    while(s[n]!='\0'){
        n++;
    }
    return n;
}
string rimuoviSpazi(string s){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]==' '){
            s.erase(i,1);
        }
        i++;
    }
    return s;
}
int main(){
    string s;
    bool ok=true;
    cout << "Inserisci parola: ";
    getline(cin,s);
    s = rimuoviSpazi(s);
    cout << "Stringa senza spazi: " << s << endl;
    int i,n;
    n=lunghezzaStringa2(s);
    cout << "Caratteri inseriti: " << n << endl;
    i=0;
    while(i<n/2 && ok==true){
        if(s[i]!=s[n-1-i]){
            ok = false;
        }
        i++;
    }
    if(ok==true) cout << "Palindroma" << endl;
    else cout << "Non palindroma" << endl;
}