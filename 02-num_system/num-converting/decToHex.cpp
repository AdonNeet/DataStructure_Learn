/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-30 05:30:55.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <conio.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


string decimalToHexadecimal(int decimal) {
    string hexadecimal = "";
    char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    // Handle kasus khusus untuk bilangan 0
    if (decimal == 0) {
        hexadecimal = "0";
    } else {
        // Konversi desimal ke heksadesimal
        while (decimal > 0) {
            int remainder = decimal % 16;
            hexadecimal = hexChars[remainder] + hexadecimal;
            decimal /= 16;
        }
    }

    return hexadecimal;
}

int main() {
    int decimalNumber;

    cout << "Masukkan bilangan desimal: ";
    cin >> decimalNumber;

    string hexadecimalNumber = decimalToHexadecimal(decimalNumber);

    cout << "Bilangan heksadesimal: " << hexadecimalNumber << endl;

    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}
