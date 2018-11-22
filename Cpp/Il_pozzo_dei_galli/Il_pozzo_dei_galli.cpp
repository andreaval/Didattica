#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n,dPozzo,i;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin >> n >> dPozzo;
	int galliH[n],galliL[n],aH[n],aL[n];
	for(i=0;i<n;i++){
		fin >> aH[i] >> aL[i];
	}
    int max, maxI, minI, tot, dGalli,usciti,sacrificati;
    int min,tempS,y,prova;
    cout << "Altezza pozzo: " << dPozzo << endl;
    cout << "--------------------------\n";
    for(prova=1;prova<=4;prova++){
        cout << "\n\n==== PROVA "<< prova <<"=====\n";
        dGalli=0;
        usciti=0;
        sacrificati=0;
        for(i=0;i<n;i++){
            galliH[i] = aH[i];
            galliL[i] = aL[i];
            dGalli += galliH[i];
        }
        y=1;
        while(n>usciti+sacrificati){
            cout << "Galli nel pozzo: " << (n-usciti) << " - Altezza galli: " << dGalli << endl;
            //epurazione
            if(dGalli<dPozzo){
                for(i=0;i<n;i++){
                    if(galliH[i]!=0 && dGalli+galliL[i]<dPozzo){
                        galliH[i] = 0;
                        sacrificati++;
                        cout << y << ") Il gallo " << (i+1) << " non potrà mai uscire (" << sacrificati << " galli sacrificati)" << endl;
                        y++;
                    }
                }
            }
            //trovo il migliore da far uscire
            min = -1;
            for(i=0;i<n;i++){
                if(galliH[i]!=0 && dGalli+galliL[i]>=dPozzo){
                    if(min==-1){
                        min = i;
                    }
                    else{
                        switch(prova){
                            case 1: 
                                if(galliH[i]+galliL[i]<galliH[min]+galliL[min] 
                                    || (galliH[i]+galliL[i]==galliH[min]+galliL[min] && galliH[i]<galliH[min])
                                || (galliH[i]<galliH[min] && galliL[i]<galliH[min]+(dPozzo-dGalli))){
                                    min = i;
                                }
                            break;
                            case 2:
                                if(galliL[i]<galliL[min] 
                                   || (galliL[i]==galliL[min] && galliH[i]<galliH[min])){
                                    min = i;
                                }
                            case 3: 
                                if((galliH[i]<=galliH[min] && galliL[i]>galliL[min])){
                                    min = i;
                                }
                                break;
                            break;
                        }
                        
                    }
                }
            }
            if(min>-1){
                cout << y << ")Esce il gallo ("<<galliH[min]<<"-"<<galliL[min]<<") " << (min+1) << endl;
                usciti++;
                y++;
                dGalli -= galliH[min];
                galliH[min] = 0;
            }
        }
        cout << "--------------------------\n";
        cout << "Galli usciti: " << usciti << " - Galli rimasti intrappolati: " << sacrificati << endl;
    }
	fout << usciti;
    fout.close();
    fin.close();
}