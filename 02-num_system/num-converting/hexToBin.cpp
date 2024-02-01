/*
 *		Author	: AdonNeet
 *		Date	: 2024-02-01 09:51:58.000-05:00
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

int main() {
    string hexadecimalNumber;

    cout << "Masukkan bilangan heksadesimal: ";
    cin >> hexadecimalNumber;

    string binaryNumber = hexadecimalToBinary(hexadecimalNumber);

    cout << "Bilangan biner: " << binaryNumber << endl;
	
	cout<<"\nPress anything to exit...";
    getch();
    return 0;
}