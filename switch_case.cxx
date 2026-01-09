#include <iostream>
using namespace std;

int main () {
    
    string nama,prodi,menu;
    int pilihan, porsi, harga, total;
    
    cout << "========================================"<<endl;
    cout << "Silahkan Isi Data Berikut : " << endl;
    cout << "Nama : ";
    getline (cin,nama);
    
    cout << "Prodi : ";
    getline (cin,prodi);
    cout << "========================================"<<endl;
    cout<<"\n\n";
    
    do {
        cout << "Silahkan Pilih Menu Makanan :" << endl;
        cout << "1. Bakso        (5000)" << endl;
        cout << "2. Mie Ayam     (7000)" << endl;
        cout << "3. Otak Otak    (10000)" << endl;
        cout << "Masukan menu pesanan : ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                cout << "1. Bakso" << endl;
                harga = 5000;
                break;
                
            case 2:
                cout << "2. Mie Ayam" << endl;
                harga = 7000;
                break;
                
            case 3:
                cout << "3. Otak Otak" << endl;
                harga = 10000;
                break;
         
            default:
                cout << "Menu tidak tersedia, silahkan pilih kembali!" << endl;
        }
        
    } while (pilihan < 1 || pilihan > 3);
    
    cout << "Pesan berapa porsi : ";
    cin >> porsi;
    
    total = harga * porsi;
    
    cout<<"\n\n";
    cout << "========= NOTA PEMBAYARAN =========" << endl;
    cout << "Nama         : " << nama << endl;
    cout << "Menu          : " << pilihan << endl;
    cout << "Harga         : Rp " << harga << endl;
    cout << "Jumlah        : " << porsi << endl;
    cout << "Total Bayar   : Rp " << total << endl;
    cout << "==================================" << endl;
    
    return 0;
}