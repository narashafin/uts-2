#include <iostream>
using namespace std;

int main () {
    int n;
    string coba;

    cout << "halo, ini program piramida" << endl;


        while (true) {
        cout << "Masukan panjang piramida yang diinginkan :" ;
        cin >> n;
        string coba;


        for (int i = 1; i <= n; i++){
            for (int j = 1; j<= i; j++){
            cout << "*";
        }
        cout << endl;
    }
        cout << " \n ingin coba lagi? (y/n) :";
        cin >> coba ;

    }

return 0;
}

