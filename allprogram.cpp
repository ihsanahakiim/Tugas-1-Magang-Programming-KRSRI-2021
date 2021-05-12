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
return 0;
}
