//Muhammad Ihsan Abdul Hakim
//16020129

#include <iostream>
using namespace std;

int n,k1,k2,l1,l2;

void MapMaker(int n){      // mendeklarasikan fungsi pembuat peta
    for (int i = 0; i<n; i++){  // looping bersarang (nested loop) matriks i
        for (int j = 0; j<n; j++){ // looping bersarang (nested loop) matriks j
            if (i == 0 ||i == n-1 || j == 0 || j == n-1){ 
                cout << "x"; // output pola pinggir matriks
            }
            else{
                cout << "-"; // output pola dalam matriks
            }
        }
        cout << endl;
    }
}

char FirstLetter(string a){ // mendeklarasikan parameter pembuat simbol nama korban
    char* array;    // pointer pembuat variabel array
    string nama(a);
    array = &nama[0]; // konversi string ke character array
    return array[0]; // pengembalian parameter huruf pertama dari string
}
// mendeklarasikan bentuk simulasi peta bervariabel
void MapConverter(int n, string a, string b, int x, int y, int u, int v, int q, int w, int e, int r){ 
    char P = FirstLetter(a); 
    char T = FirstLetter(b);

    for (int i = 0; i<n; i++){ 
        for (int j = 0; j<n; j++){ 
            if(x == u && y == v || x == q  & y == w || x == e && y == r){ // kondisi 2 koordinat objek persis senilai
                cout << "Obyek menabrak";
                break;
            }
            else if(u == q && v == w || u == e && v == r || q == e && w == r){  // kondisi 2 koordinat objek persis senilai
                cout << "Obyek menabrak";
                break;
            }
            else{
                if (i == 0 ||i == n-1 || j == 0 || j == n-1){
                    cout << "x";
                }
                else{
                    if (i == x && j == y){
                        cout << P;  // posisi korban pertama
                    }
                    else if (i == u && j == v){
                        cout << T;  // posisi korban kedua
                    }
                    else if (i == q && j == w || i == e && j == r){
                        cout << "L"; // posisi lilin 1 dan lilin 2
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
// mendeklarasi bentuk simulasi peta sisi kiri
void LeftMap (int n, string a, string b, int x, int y, int u, int v, int q, int w, int e, int r){
    char P = FirstLetter(a);
    char T = FirstLetter(b);
    for (int i = 0; i<n; i++){
        for (int j = n ; j>0; j--){ // Transpose matriks
            if(x == u && y == v || x == q  & y == w || x == e && y == r){ // kondisi 2 koordinat objek persis senilai
                cout << "Obyek menabrak";
                break;
            }
            else if(u == q && v == w || u == e && v == r || q == e && w == r){  // kondisi 2 koordinat objek persis senilai
                cout << "Obyek menabrak";
                break;
            }
            else{  
                if (i == n-1 || i == 0 || j == n || j == 1){
                cout << "x"; 
                }    
                else{
                    if (i == n-(y+1) && j == n-x){
                        cout << P; // posisi korban pertama sisi kiri
                    }
                    else if (i == n-(v+1) && j == n-u){
                        cout << T; // posisi korban kedua sisi kiri
                    }
                    else if (i == n-(w+1) && j == n-q || i == n-(r+1) && j == n-e){
                        cout << "L"; // posisi lilin di sisi kiri
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
// mendeklarasi fungsi peta sisi kanan
void RightMap (int n, string a, string b, int x, int y, int u, int v, int q, int w, int e, int r){
    char P = FirstLetter(a);
    char T = FirstLetter(b);
    for (int i = 0; i<n; i++){
        for (int j = n ; j>0; j--){ // Transpose matriks
            if(x == u && y == v || x == q  & y == w || x == e && y == r){ // kondisi 2 koordinat objek persis senilai
                cout << "Obyek menabrak";
                break;
            }
            else if(u == q && v == w || u == e && v == r || q == e && w == r){  // kondisi 2 koordinat objek persis senilai
                cout << "Obyek menabrak";
                break;
            }
            else{
                if (i == n-1 || i == 0 || j == n || j == 1){
                cout << "x"; 
                }   
                else{
                    if (i == y && j == x+1){
                        cout << P; // posisi korban pertama sisi kanan
                    }
                    else if (i == v && j == u+1){
                        cout << T; // posisi korban kedua sisi kanan
                    }
                    else if (i == w && j == q+1 || i == r && j == e+1){
                        cout << "L"; // posisi lilin di sisi kanan
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
typedef struct Korban{ //deklarasi struct data korban
    string nama;
    int absis;
    int ordinat;
} Korban;

typedef struct Lilin{ //deklarasi struct data lilin
    int absis; 
    int ordinat;
} Lilin;

typedef enum{   // mendeklarasikan variabel enumeration status penyalaan lilin
    off, on
} status;

void CandleEnumeration1(int q, int w, int n){ // deklarasi fungsi enumerasi lilin 1
    int* nulnumber;     // pemanggil pointer variabel NULL
    nulnumber = NULL;
    status light1, light2;
    light1 = off;   // status nyala lilin bernilai 0 (mati)
    light2 = on;    // status nyala lilin bernilai 1 (nyala)
    if(q == n-1  || w == 0 || &q == nulnumber || &w == nulnumber){ // syarat kondisi enumerasi
        cout << "Status lilin 1: " << light1 << endl;
    }
    else{
        cout << "Status lilin 1: " << light2 << endl;
    }
}

void CandleEnumeration2(int e, int r, int n){ // deklarasi fungsi enumerasi lilin 1
    int* nulnumber;     // pemanggil pointer variabel NULL
    nulnumber = NULL;
    status light1, light2;
    light1 = off;   // status nyala lilin bernilai 0 (mati)
    light2 = on;    // status nyala lilin bernilai 1 (nyala)
    if(e == n-1  || r == 0 || &e == nulnumber || &r == nulnumber){ //syarat kondisi enumerasi
        cout << "Status lilin 2: " << light1 << endl; 
    }
    else{
        cout << "Status lilin 2: " << light2 << endl;
    }
}

int main() {
    cout << "Masukkan ukuran Peta: "; 
    cin >> n; //menerima input peta dengan matriks 2D n x n
    cout << "Tampilan Peta Dilihat dari Depan" << endl;
    MapMaker(n); //pemanggilan fungsi pembuat peta

    Korban k1,k2; //pembuatan elemen-elemen struct korban berdasarkan variabel k1 dan k2
    k1.nama;
    k1.absis;
    k1.ordinat;
    k2.nama;
    k2.absis;
    k2.ordinat;
    
    Lilin l1,l2; //pembuatan elemen-elemen struct korban berdasarkan variabel k1 dan k2
    l1.absis;
    l1.ordinat;
    l2.absis;
    l2.ordinat;
    CandleEnumeration1(l1.absis,l1.ordinat,n); //pemanggilan fungsi enumerasi lilin 1 ketika belum diletakan dalam map
    CandleEnumeration2(l2.absis,l2.ordinat,n); //pemanggilan fungsi enumerasi lilin 2 ketika belum diletakan dalam map

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

    cout << "\nTampilan Peta Berbagai Sudut Padang" << endl;
    cout << "Tampilan Peta dari Depan" << endl;
    // Pemanggilan fungsi-fungsi di header map.h
    MapConverter(n,k1.nama,k2.nama,k1.absis,k1.ordinat,k2.absis,k2.ordinat,l1.absis,l1.ordinat,l2.absis,l2.ordinat);
    cout << "\nTampilan Peta Posisi Kiri" << endl;
    LeftMap(n,k1.nama,k2.nama,k1.absis,k1.ordinat,k2.absis,k2.ordinat,l1.absis,l1.ordinat,l2.absis,l2.ordinat);
    cout << "\nTampilan Peta Posisi Kanan" << endl;
    RightMap(n,k1.nama,k2.nama,k1.absis,k1.ordinat,k2.absis,k2.ordinat,l1.absis,l1.ordinat,l2.absis,l2.ordinat);
    cout << "\n" << endl;
    CandleEnumeration1(l1.absis,l1.ordinat,n); //pemanggilan fungsi enumerasi lilin 1 ketika sudah diletakan dalam map
    CandleEnumeration2(l2.absis,l2.ordinat,n); //pemanggilan fungsi enumerasi lilin 2 ketika sudah diletakan dalam map
return 0;
}
