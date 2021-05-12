//objects.h
#ifndef OBJECT.H
#define OBJECT.H

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
#endif
