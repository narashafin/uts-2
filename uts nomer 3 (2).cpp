#include <iostream>
using namespace std;


int main() {
    int pilihan, operand1, operand2, hasil;

    cout << "Pilih operasi matematika:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Masukkan pilihan (1/2/3/4): ";
    cin >> pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> operand1;
    cout << "Masukkan angka kedua: ";
    cin >> operand2;

    switch (pilihan) {
        case 1:
            hasil = operand1 + operand2;
            cout << "Hasil: " << operand1 << " + " << operand2 << " = " << hasil << endl;
            break;
        case 2:
            hasil = operand1 - operand1;
            cout << "Hasil: " << operand1 << " - " << operand2 << " = " << hasil << endl;
            break;
        case 3:
            hasil = operand1 * operand2;
            cout << "Hasil: " << operand1 << " * " << operand2 << " = " << hasil << endl;
            break;
        case 4:
            if (operand2 != 0) {
                hasil = operand1 / operand2;
                cout << "Hasil: " << operand1 << " / " << operand2 << " = " << hasil << endl;
            } else {
                cout << "Error: Pembagian dengan nol tidak bisa!" << endl;
            }
            break;
        default:
            cout << "Error: Operator tidak valid!" << endl;
            break;
    }

    return 0;
}
