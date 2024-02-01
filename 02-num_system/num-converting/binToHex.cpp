/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-31 01:40:38.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <conio.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

string binaryToHexadecimal(string binary) {
    // Menambahkan nol ke depan hingga panjang string biner menjadi kelipatan 4
    while (binary.length() % 4 != 0) {
        binary = '0' + binary;
    }

    stringstream ss;
    for (size_t i = 0; i < binary.length(); i += 4) {
        bitset<4> bits(binary.substr(i, 4));
        ss << hex << bits.to_ulong();
    }
    
    char currentChar;
    string result;
    
    while (ss.get(currentChar)) {
        if (std::isdigit(currentChar)) {
            result += currentChar;
        } else {
            // Jika bukan merupakan digit maka kapitalkan
            result += toupper(currentChar);
        }
    }

    return result;
}

int main() {
    string binaryNumber;

    cout << "Masukkan bilangan biner: ";
    cin >> binaryNumber;

    string hexadecimalNumber = binaryToHexadecimal(binaryNumber);

    cout << "Bilangan heksadesimal: " << hexadecimalNumber << endl;

    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}