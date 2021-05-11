#ifndef MAP_H
#define MAP_H

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

void LeftMap (int n){
    for (int i = 0; i<n; i++){
        for (int j = n ; j>0; j--){
            if (i == n-1 || i == 0 || j == n || j == 1){
                cout << "x";
            }
            else{
                cout << "-";
            }
        }
        cout << endl;
    }
}

void  RightMap (int n){
    for (int i = n; i>0; i--){
        for (int j = 0; j<n; j++){
            if (i == 1 ||i == n || j == 0 || j == n-1){
                cout << "x";
            }
            else{
                cout << "-";
            }
        }
        cout << endl;
    }
}