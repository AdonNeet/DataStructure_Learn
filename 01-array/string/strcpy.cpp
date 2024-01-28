/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-26 14:13:01.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <conio.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main()
{
    char asal[100]; char hasil[100];
    cout<<"Masukkan kalimat: "; cin>>asal;
    strcpy(hasil, asal); cout<<" "<<endl;
    cout<<"Kalimat asal  : "<<asal<<endl;
    cout<<"Kalimat hasil : "<<hasil<<endl;
    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}