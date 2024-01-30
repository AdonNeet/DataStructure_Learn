/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-30 06:51:27.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <conio.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int hexadecimalToDecimal(string hexadecimal) {
    int decimal = 0;
    int size = hexadecimal.size();

    for (int i = 0; i < size; ++i) {
        char digit = hexadecimal[i];
        int digitValue;

        if (digit >= '0' && digit <= '9') {
            digitValue = digit - '0';
        } else if (digit >= 'A' && digit <= 'F') {
            digitValue = 10 + (digit - 'A');
        } else if (digit >= 'a' && digit <= 'f') {
            digitValue = 10 + (digit - 'a');
        } else {
            cout << "Input tidak valid." << endl;
            return 0;
        }

        decimal += digitValue * pow(16, size - i - 1);
    }

    return decimal;
}

int main() {
    string hexadecimalNumber;

    cout << "Masukkan bilangan heksadesimal: ";
    cin >> hexadecimalNumber;

    int decimalNumber = hexadecimalToDecimal(hexadecimalNumber);

    cout << "Bilangan desimal: " << decimalNumber << endl;

    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}
