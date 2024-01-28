/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-28 19:04:45.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <conio.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main()
{
    int bil[5], i;
    cout<<"Masukkan 5 bilangan acak: "<<endl;
    for(i = 0;i<5;i++) {
        cout<<"Bilangan "<<i+1<<" : ";
        cin>>bil[i]; 
    }
    cout<<endl;
    cout<<"5 bilangan yang dimasukkan "<<endl;
    for(i = 0;i<5;i++) {
        cout<<" "<<bil[i];
    }
    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}