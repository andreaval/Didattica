/**
 * Verifica se una parola è l'anagramma dell'altra.
 * @author Andrea Vallorani
 */
#include <fstream>
using namespace std;
int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string s1,s2;
    int i,y;
    bool ok = false;
    fin >> s1 >> s2;
    //il metodo length() applicato ad una stringa ne ritorna la lunghezza
    if(s1.length()==s2.length()){
        i = 0;
        ok = true;
        while(i<s1.length() && ok){
            ok = false; 
            y = 0;
            while(y<s1.length() && !ok){
                if(s1[i]==s2[y]){
                    ok = true;
                    s2[y] = 0; 
                }
                y++;
            }
            i++;
        }
    }
    if(ok) fout << "SI";
    else fout << "NO"; 
    
    fout.close();
    fin.close();
}