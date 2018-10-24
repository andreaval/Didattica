#include <iostream>
using namespace std;

int main(){
    float price,discount,discountPrice;
    cout << "Prezzo: ";
    cin >> price;
    cout << "Sconto (%): ";
    cin >> discount;
    discountPrice = (price - (price/100)*discount);
    cout << "Prezzo scontato: " << discountPrice << endl;   
}