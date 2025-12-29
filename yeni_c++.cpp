#include <iostream>
using namespace std;

int main() {
    int secim;
    double bakiye = 1000.0;
    double miktar;
    bool devam = true;

    while (devam) {
        cout << "\n--- MINI BANKA ---\n";
        cout << "1. Bakiye Goruntule\n";
        cout << "2. Para Yatir\n";
        cout << "3. Para Cek\n";
        cout << "4. Cikis\n";
        cout << "Seciminizi girin: ";
        cin >> secim;

        switch (secim) {
            case 1:
                cout << "Mevcut Bakiyeniz: " << bakiye << " TL\n";
                break;

            case 2:
                cout << "Yatirilacak miktar: ";
                cin >> miktar;
                if (miktar > 0) {
                    bakiye += miktar;
                    cout << "Para yatirildi.\n";
                } else {
                    cout << "Gecersiz miktar!\n";
                }
                break;

            case 3:
                cout << "Cekilecek miktar: ";
                cin >> miktar;
                if (miktar > 0 && miktar <= bakiye) {
                    bakiye -= miktar;
                    cout << "Para cekildi.\n";
                } else {
                    cout << "Yetersiz bakiye veya gecersiz miktar!\n";
                }
                break;

            case 4:
                cout << "Cikis yapiliyor...\n";
                devam = false;
                break;

            default:
                cout << "Gecersiz secim!\n";
        }
    }

    return 0;
}
