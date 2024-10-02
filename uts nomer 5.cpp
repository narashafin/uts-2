#include <iostream>
using namespace std;

double tinggi;
double berat;
double imt;

int main(){

    cout << "selamat datang di program IMT"<< endl;
    while (true){
    cout << "silahkan masukan data-data berikut"<< endl;
    cout << "Masukkan berat badan Anda (kg): ";
    cin >> berat;

    int tinggi_cm;
    cout << "Masukkan tinggi badan Anda (cm): ";
    cin >> tinggi_cm;

    tinggi = tinggi_cm / 100.0;

    imt = berat / (tinggi * tinggi);


    int imt_int = static_cast<int>(imt);
    cout << endl << "IMT Anda adalah: " << imt_int << " Kg" << endl;

    if (imt < 18.4){
        cout << "Anda termasuk dalam kategori: Berat badan kurang." << endl;
    }else if (imt >= 18.5 && imt < 24.9){
        cout << "Anda termasuk dalam kategori: Berat badan ideal" << endl;
    }else if (imt >= 25 && imt < 29.9) {
        cout << "Anda termasuk dalam kategori: Berat badan lebih" << endl;
    }else if (imt >= 30 && imt < 39.9) {
        cout << "Anda termasuk dalam kategori: Gemuk" << endl;
    }else {
        cout << "Anda termasuk dalam kategori: Sangat gemuk" << endl;
    }

            cout << "\nKategori berat badan sesuai dengan standar IMT yang telah ditetapkan."<< endl;
            cout << "Berikut nilai IMT dan kriterianya :" <<endl;
            cout << "Kurang dari 18,4: Berat badan kurang (Underweight)" << endl;
            cout << "18,5 - 24,9: Berat badan ideal" << endl;
            cout << "25 - 29,9: Berat badan berlebih (Overweight)" << endl;
            cout << "30 - 39,9: Gemuk" << endl;
            cout << "lebih dari 40: Sangat gemuk" << endl;


    }

    return 0;
}
