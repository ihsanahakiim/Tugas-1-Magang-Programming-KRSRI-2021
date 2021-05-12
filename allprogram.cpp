#include <iostream>
using namespace std;

int n,k1,k2,l1,l2;

void MapMaker(int n){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if (i == 0 ||i == n-1 || j == 0 || j == n-1){
                cout << "x";
            }
            else{
                cout << "-";
            }
        }
        cout << endl;
    }
}

char FirstLetter(string a){
    char* array;
    string nama(a);
    array = &nama[0];
    return array[0];
}
void MapConverter(int n, string a, string b, int x, int y, int u, int v, int q, int w, int e, int r){
    char P = FirstLetter(a);
    char T = FirstLetter(b);

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if(x == u && y == v || x == q  & y == w || x == e && y == r){
                cout << "Obyek menabrak";
                break;
            }
            else if(u == q && v == w || u == e && v == r || q == e && w == r){ 
                cout << "Obyek menabrak";
                break;
            }
            else{
                if (i == 0 ||i == n-1 || j == 0 || j == n-1){
                    cout << "x";
                }
                else{
                    if (i == x && j == y){
                        cout << P;
                    }
                    else if (i == u && j == v){
                        cout << T;
                    }
                    else if (i == q && j == w || i == e && j == r){
                        cout << "L";
                    }
                    else{
                        cout << "-";
                    }
                }    
            }
        }
        cout << endl;
    }
}

void LeftMap (int n, string a, string b, int x, int y, int u, int v, int q, int w, int e, int r){
    char P = FirstLetter(a);
    char T = FirstLetter(b);
    for (int i = 0; i<n; i++){
        for (int j = n ; j>0; j--){
            if(x == u && y == v || x == q  & y == w || x == e && y == r){
                cout << "Obyek menabrak";
                break;
            }
            else if(u == q && v == w || u == e && v == r || q == e && w == r){ 
                cout << "Obyek menabrak";
                break;
            }
            else{  
                if (i == n-1 || i == 0 || j == n || j == 1){
                cout << "x"; 
                }    
                else{
                    if (i == n-(y+1) && j == n-x){
                        cout << P;
                    }
                    else if (i == n-(v+1) && j == n-u){
                        cout << T;
                    }
                    else if (i == n-(w+1) && j == n-q || i == n-(r+1) && j == n-e){
                        cout << "L";
                    }
                    else{
                        cout << "-";
                    }   
                }  
            }      
        }
    cout << endl;
    }
}          
void RightMap (int n, string a, string b, int x, int y, int u, int v, int q, int w, int e, int r){
    char P = FirstLetter(a);
    char T = FirstLetter(b);
    for (int i = 0; i<n; i++){
        for (int j = n ; j>0; j--){
            if(x == u && y == v || x == q  & y == w || x == e && y == r){
                cout << "Obyek menabrak";
                break;
            }
            else if(u == q && v == w || u == e && v == r || q == e && w == r){ 
                cout << "Obyek menabrak";
                break;
            }
            else{
                if (i == n-1 || i == 0 || j == n || j == 1){
                cout << "x"; 
                }   
                else{
                    if (i == y && j == x+1){
                        cout << P;
                    }
                    else if (i == v && j == u+1){
                        cout << T;
                    }
                    else if (i == w && j == q+1 || i == r && j == e+1){
                        cout << "L";
                    }
                    else{
                        cout << "-";
                    }   
                } 
            }   
        }
    cout << endl;
    }
}   
typedef struct Korban{
    string nama;
    int absis;
    int ordinat;
} Korban;

typedef struct Lilin{
    int absis;
    int ordinat;
} Lilin;

typedef enum{
    off, on
} status;

void CandleEnumeration1(int q, int w, int n){
    int* nulnumber;
    nulnumber = NULL;
    status light1, light2;
    light1 = off;
    light2 = on;
    if(q == n-1  || w == 0 || &q == nulnumber || &w == nulnumber){
        cout << "Status lilin 1: " << light1 << endl;
    }
    else{
        cout << "Status lilin 1: " << light2 << endl;
    }
}

void CandleEnumeration2(int e, int r, int n){
    int* nulnumber;
    nulnumber = NULL;
    status light1, light2;
    light1 = off;
    light2 = on;
    if(e == n-1  || r == 0 || &e == nulnumber || &r == nulnumber){
        cout << "Status lilin 2: " << light1 << endl;
    }
    else{
        cout << "Status lilin 2: " << light2 << endl;
    }
}

int main() {
    cout << "Masukkan ukuran Peta: ";
    cin >> n;
    cout << "Tampilan Peta Dilihat dari Depan" << endl;
    MapMaker(n);

    Korban k1,k2;
    k1.nama;
    k1.absis;
    k1.ordinat;
    k2.nama;
    k2.absis;
    k2.ordinat;
    
    Lilin l1,l2;
    l1.absis;
    l1.ordinat;
    l2.absis;
    l2.ordinat;
    CandleEnumeration1(l1.absis,l1.ordinat,n);
    CandleEnumeration2(l2.absis,l2.ordinat,n);

    cout << "\nNama Korban 1 : ";
    cin >> k1.nama;
    cout << "Koordinat sumbu x : ";
    cin >> k1.absis;
    cout << "Koordinat sumbu y : ";
    cin >> k1.ordinat;

    cout << "\nNama Korban 2 : ";
    cin >> k2.nama;
    cout << "Koordinat sumbu x : ";
    cin >> k2.absis;
    cout << "Koordinat sumbu y : ";
    cin >> k2.ordinat;

    cout << "\nLilin 1"<<endl;
    cout << "Koordinat sumbu x : ";
    cin >> l1.absis;
    cout << "Koordinat sumbu y : ";
    cin >> l1.ordinat;

    cout << "\nLilin 2"<<endl;
    cout << "Koordinat sumbu x : ";
    cin >> l2.absis;
    cout << "Koordinat sumbu y : ";
    cin >> l2.ordinat;

    
    cout << "\nTampilan Peta Depan" << endl;
    MapConverter(n,k1.nama,k2.nama,k1.absis,k1.ordinat,k2.absis,k2.ordinat,l1.absis,l1.ordinat,l2.absis,l2.ordinat);
    cout << "\nTampilan Peta Posisi Kiri" << endl;
    LeftMap(n,k1.nama,k2.nama,k1.absis,k1.ordinat,k2.absis,k2.ordinat,l1.absis,l1.ordinat,l2.absis,l2.ordinat);
    cout << "\nTampilan Peta Posisi Kanan" << endl;
    RightMap(n,k1.nama,k2.nama,k1.absis,k1.ordinat,k2.absis,k2.ordinat,l1.absis,l1.ordinat,l2.absis,l2.ordinat);
    cout << "\n" << endl;
    CandleEnumeration1(l1.absis,l1.ordinat,n);
    CandleEnumeration2(l2.absis,l2.ordinat,n);
system("pause");
return 0;
}
