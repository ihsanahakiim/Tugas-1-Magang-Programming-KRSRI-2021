#ifndef OBJECT_H
#define OBJECT_H

typedef struct Korban{
    string nama;
    int absis;
    int ordinat;
} Korban;

typedef struct Lilin{
    int absis;
    int ordinat;
} Lilin;

void Name(string a){

    char* array;
    string nama(a);
    array = &nama[0];
    cout << "Simbol: " << array[0] << endl;
}
