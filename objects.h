#ifndef OBJECT.H
#define OBJECT.H

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
#endif
