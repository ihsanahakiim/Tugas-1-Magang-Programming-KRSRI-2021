#include <iostream>
#include <cstring>
#include <string>
#include "objects.h"
using namespace std;

int n,k1,k2,l1,l2,x,y,u,v,q,w,e,r;
string a,b;

int main(){
    cout << "Nama Korban 1 : ";
    cin >> a;
    Name(a);
    cout << "Koordinat sumbu x : ";
    cin >> x;
    cout << "Koordinat sumbu y : ";
    cin >> y;

    cout << "Nama Korban 2 : ";
    cin >> b;
    Name(b);
    cout << "Koordinat sumbu x : ";
    cin >> u;
    cout << "Koordinat sumbu y : ";
    cin >> v;

    cout << "Lilin 1"<<endl;
    cout << "Koordinat sumbu x : ";
    cin >> q;
    cout << "Koordinat sumbu y : ";
    cin >> w;

    cout << "Lilin 2"<<endl;
    cout << "Koordinat sumbu x : ";
    cin >> e;
    cout << "Koordinat sumbu y : ";
    cin >> r;

    Korban k1, k2;
    k1.nama = a;
    k2.nama = b;

    k1.absis = x;
    k1.ordinat = y;

    k2.absis = u;
    k2.ordinat = v;

    Lilin l1, l2;
    l1.absis = q;
    l1.ordinat = w;
    l2.absis = e;
    l2.absis = r;

system("pause");
return 0;    
} 