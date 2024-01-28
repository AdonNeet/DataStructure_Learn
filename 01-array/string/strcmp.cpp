/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-28 11:07:36.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <conio.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
    char sa[] = "Logika";
    char sb[] = "Logika Algoritma";
    char sc[] = "Logika Algoritma dan Pemrograman";
    // Membandingkan 2 string dan menampilkan nilainya
    cout<<"Nilai perbandingan sa,sb: "<<strcmp(sa,sb)<<endl;
    cout<<"Nilai perbandingan sa,sc: "<<strcmp(sa,sc)<<endl;
    cout<<"Nilai perbandingan sb,sa: "<<strcmp(sb,sa)<<endl;
    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}