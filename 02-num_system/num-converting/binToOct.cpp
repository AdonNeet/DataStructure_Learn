/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-31 00:59:53.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <conio.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


string binaryToOctal(string binary) {
    // Menambahkan nol ke depan hingga panjang string biner menjadi kelipatan 3
    while (binary.length() % 3 != 0) {
        binary = '0' + binary;
    }

    string octal = "";
    int size = binary.size();

    // Konversi setiap grup 3 digit biner ke satu digit oktal
    for (int i = 0; i < size; i += 3) {
        int digitValue = (binary[i] - '0') * 4 + (binary[i + 1] - '0') * 2 + (binary[i + 2] - '0');
        octal += (char)(digitValue + '0');
    }

    return octal;
}

int main() {
    string binaryNumber;

    cout << "Masukkan bilangan biner: ";
    cin >> binaryNumber;

    string octalNumber = binaryToOctal(binaryNumber);

    cout << "Bilangan oktal: " << octalNumber << endl;

    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}