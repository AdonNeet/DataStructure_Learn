/*
 *		Author	: AdonNeet
 *		Date	: 2024-02-03 15:27:55.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <conio.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

string octalToBinary(string octal) {
    string binary = "";

    for (char octalDigit : octal) {
        int decimalValue = octalDigit - '0';
        // Konversi nilai desimal ke biner
        binary += bitset<3>(decimalValue).to_string();
    }

    return binary;
}

string binaryToHexadecimal(string binary) {
    // Menambahkan nol ke depan hingga panjang string biner menjadi kelipatan 4
    if (binary.length() % 4 != 0) {
    	if (binary.length() % 4 >= 1) {
    		binary = binary.substr(1);
    	} else {
	    	for(int i = 0; i < (binary.length() % 4); i++) {
	    		binary = '0' + binary;	
	    	}	
    	}
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

string octalToHexadecimal(string octal) {
    // Mengonversi oktal ke biner
    string binaryNumber = octalToBinary(octal);
    // Mengonversi biner ke heksadesimal
    string hexadecimalNumber = binaryToHexadecimal(binaryNumber);

    return hexadecimalNumber;
}

int main() {
    string octalNumber;

    cout << "Masukkan bilangan oktal: ";
    cin >> octalNumber;

    string hexadecimalNumber = octalToHexadecimal(octalNumber);

    cout << "Bilangan heksadesimal: " << hexadecimalNumber << endl;

    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}