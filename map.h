#ifndef MAP.H
#define MAP.H

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
    }void MapMaker(int n){
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
#endif
