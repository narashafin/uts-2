#include <iostream>
using namespace std;

int main () {
    float nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS, nilai_akhir, nilai_mutu;
    string nama;
    int NPM;


    cout << "selamat datang di program nilai mahasiswa" << endl;
    while (true){
    cout << "Masukan nama mahasiswa :" ;
    cin >> nama;
    cout << "Masukan 2 digit awal dan 3 digit akhir NPM :" ;
    cin >> NPM;
    cout << "Masukan nilai absen : " ;
    cin >> nilaiAbsen;
    cout << "Masukan nilai tugas :" ;
    cin >> nilaiTugas;
    cout << "Masukan nilai UTS :" ;
    cin >> nilaiUTS;
    cout << "Masukan nilai UAS :" ;
    cin >> nilaiUAS;

    nilai_akhir = ((nilaiAbsen*0.1)+(nilaiTugas*0.2)+(nilaiUTS*0.3)+(nilaiUAS*0.4));

    if (nilai_akhir >= 85 && nilai_akhir < 100){
        nilai_mutu = 'A';
    } else if (nilai_akhir >= 80 && nilai_akhir < 85){
        nilai_mutu = 'B';
    } else if (nilai_akhir >= 75 && nilai_akhir < 80){
        nilai_mutu = 'C';
    } else if (nilai_akhir >= 70 && nilai_akhir < 75){
        nilai_mutu = 'D';
    } else {
        nilai_mutu = 'E';

    }

    cout << "\n Nama mahasiswa :" << nama << endl;
    cout << "NPM :" << NPM << endl;
    cout << "Nilai absen :" << nilaiAbsen << endl;
    cout << "Nilai tugas :" << nilaiTugas << endl;
    cout << "Nilai UTS :" << nilaiUTS << endl;
    cout << "Nilai UAS :" << nilaiUAS << endl;
    cout << "Nilai akhir :" << nilai_akhir << endl;
    cout << "Nilai mutu :" << nilai_mutu << endl;

    }

return 0;


}
