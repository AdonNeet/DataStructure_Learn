/*
 *		Author	: AdonNeet
 *		Date	: 2024-02-03 16:54:50.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <conio.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


string hexadecimalToBinary(string hexadecimal) {
    string binary = "";

    for (char hexDigit : hexadecimal) {
        int decimalValue;

        if (hexDigit >= '0' && hexDigit <= '9') {
            decimalValue = hexDigit - '0';
        } else if (hexDigit >= 'A' && hexDigit <= 'F') {
            decimalValue = 10 + (hexDigit - 'A');
        } else if (hexDigit >= 'a' && hexDigit <= 'f') {
            decimalValue = 10 + (hexDigit - 'a');
        } else {
            cout << "Input tidak valid." << endl;
            return "";
        }

        // Konversi nilai desimal ke biner
        binary += bitset<4>(decimalValue).to_string();
    }

    return binary;
}

string binaryToOctal(string binary) {
    // Menambahkan nol ke depan hingga panjang string biner menjadi kelipatan 3
    while (binary.length() % 3 != 0) {
        binary = '0' + binary;
    }

    string octal = "";

    // Konversi setiap grup 3 digit biner ke satu digit oktal
    for (size_t i = 0; i < binary.length(); i += 3) {
        bitset<3> bits(binary.substr(i, 3));
        octal += to_string(bits.to_ulong());
    }

    return octal;
}

string hexadecimalToOctal(string hexadecimal) {
    // Mengonversi heksadesimal ke biner
    string binaryNumber = hexadecimalToBinary(hexadecimal);
    // Mengonversi biner ke oktal
    string octalNumber = binaryToOctal(binaryNumber);

    return octalNumber;
}

int main() {
    string hexadecimalNumber;

    // Input bilangan heksadesimal dari pengguna
    cout << "Masukkan bilangan heksadesimal: ";
    cin >> hexadecimalNumber;

    // Memanggil fungsi untuk mengonversi
    string octalNumber = hexadecimalToOctal(hexadecimalNumber);

    // Menampilkan hasil konversi
    cout << "Bilangan oktal: " << octalNumber << endl;

    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}