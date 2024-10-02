#include <iostream>
using namespace std;

void GanjilAtauGenap(int n) { //menampilkan bilangan ganjil dan genap
    if (n % 2 == 0) {
        cout << n << " adalah bilangan genap" << endl;
    } else {
        cout << n << " adalah bilangan ganjil" << endl;
    }
}

int main (){
    int n;
    cout << "selamat datang di klasifikasi bilangan" << endl;
    while (true){
    cout << "masukan batas :";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        GanjilAtauGenap(i);
    }
    cout << endl;

    }
return 0;

}
