#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n,dPozzo,i;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin >> n >> dPozzo;
	int galliH[n],galliL[n];
	for(i=0;i<n;i++){
		fin >> galliH[i] >> galliL[i];
	}
    int max, maxI, minI, tot, dGalli=0, usciti=0, sacrificati=0;
    int s,min,tempS,serve,esiste;
    
    for(i=0;i<n;i++){
        dGalli += galliH[i];
    }
    cout << "Altezza pozzo: " << dPozzo << endl;
    cout << "--------------------------\n";
    cout << "Galli nel pozzo: " << (n-usciti) << " - Altezza galli: " << dGalli << endl;
    s = 0;
    //epurazione
    if(dGalli<dPozzo-1){
        for(i=0;i<n;i++){
            if(galliH[i]!=0 && dGalli+galliL[i]<dPozzo){
                s += galliH[i];
                sacrificati++;
                cout << "Il gallo " << (i+1) << " (" << galliH[i] << "-" << galliL[i]<< ") non potrà mai uscire (" << sacrificati << " galli sacrificati)" << endl;
                galliH[i] = 0;
            }
        }
    }
    while(n>usciti+sacrificati){
        //autonomi
        do{
            max = -1;
            for(i=0;i<n;i++){
                if(galliH[i]!=0 && s+galliH[i]+galliL[i]>=dPozzo){
                    if(max==-1) max=i;
                    else{
                        if(galliH[i]<galliH[max] || (galliH[i]==galliH[max] && galliL[i]<galliL[max])) max=i;
                    }
                }
            }
            if(max>-1){
                s += galliH[max];
                usciti++;
                cout << "Esce il gallo " << (max+1) << " (" << galliH[max] << "-" << galliL[max] << ") (" << (dPozzo-s) << ")" << endl;
                galliH[max] = 0;
            }
        }while(max>-1);
        
        cout << "Situazione di partenza: altezza " << s << " - distanza mancante " << (dPozzo-s) << endl;
        max = -1;
        for(i=0;i<n;i++){
            if(galliH[i]!=0){
                if(max==-1){
                    max = i;
                }
                else{
                    if(galliH[i]+galliL[i]>galliH[max]+galliL[max]){
                        max = i;
                    }
                }
            }
        }
        if(max>-1){
            serve = dPozzo-s-galliH[max]-galliL[max];
            cout << "Mi serve togliere " << serve << endl;
        }
        else serve = 0;
        
        //while(serve>0){
            max = -1;
            for(i=0;i<n;i++){
                if(galliH[i]!=0){
                    if(max==-1){
                        max = i;
                    }
                    else{
                        if(galliH[i]>galliH[max]
                          || (galliH[i]==galliH[max] && galliL[i]<galliL[max])){
                            max = i;
                        }
                    }
                }
            }
            if(max>-1){
                sacrificati++;
                s += galliH[max];
                serve -= galliH[max];
                cout << "Il gallo " << (max+1) << " (" << galliH[max] << "-" << galliL[max] << ") non può più uscire (" << sacrificati << " galli sacrificati) (" << (dPozzo-s) << ")" << endl;
                galliH[max] = 0;
            }
            else break;
        //}
    }
    cout << "--------------------------\n";
    cout << "Galli usciti: " << usciti << " - Galli rimasti intrappolati: " << sacrificati << endl;
	fout << usciti;
    fout.close();
    fin.close();
}