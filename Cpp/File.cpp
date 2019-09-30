#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin("leggi.txt");
    ofstream fout("scrivi.txt");
    fstream ff("altro.txt");
    if(fin.is_open()){
        char c;
        //lettura con >>
        fin >> c;
        while(!fin.eof()){
            cout << c;
            fin >> c;
        }
        cout << "\n";
        //lettura con get
        fin.clear();
        fin.seekg(0);
        while(fin.get(c)){
            cout << c;
        }
        cout << "\n";
        //lettura con getline
        fin.clear();
        fin.seekg(0);
        string s;
        while(getline(fin,s)){
            cout << s << "\n";
        }
    }
    else{
        cout << "Errore apertura file leggi.txt";
    }
}