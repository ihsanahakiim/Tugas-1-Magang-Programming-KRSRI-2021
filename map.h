//map.h
#ifndef MAP.H
#define MAP.H

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
#endif
