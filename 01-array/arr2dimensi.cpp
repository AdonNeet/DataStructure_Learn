/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-28 19:11:24.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <conio.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main()
{
    int bil[2][2], i, j;
    cout<<"Masukkan 4 bilangan acak: "<<endl;
    for(i = 0;i < 2;i++) {
        for(j = 0;j < 2;j++) {
            cout<<"Bilangan ["<<i+1<<"]["<<j+1<<"] : ";
            cin>>bil[i][j];
        } 
    }
    cout<<endl;
    cout<<"4 bilangan yang dimasukkan "<<endl;
    for(i = 0;i<2;i++) {
        for(j = 0;j < 2;j++) {
            cout<<" "<<bil[i][j];
        }
        cout<<endl;
    }
    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}