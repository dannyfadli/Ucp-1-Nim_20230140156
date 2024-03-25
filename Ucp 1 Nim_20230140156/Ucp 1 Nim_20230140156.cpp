// 1.Jelaskan bagaimana algoritma Insertion Sort membandingkan serta menukar elemen-elemen.?
// pada inserttion sort pertama-tama angka  pada n(0) akan dipisahken sendirian dari n1-setererusnya kemudian,
// n yang telah terpisah tersebut akan dibandingan dengan n(0) kemudian apabila n tersebut lebih keci daari n(0) maka akan ditaruh didepanya
// dan mengganti posisi menjadi n(0)

//2.Jelaskan bagaimana algoritma Selection Sort membandingkan serta menukar elemen-elemen.? pada selection sort
// pertama tama akan dipilih patokan nya pada n(0) kemudian akan ada program yang mencari data yang paling kecil dari data yang dimilik n(0)
// kemudian apabila sdh mendapatkan yang paling kecil maka akan ditukar sama n(0) setalah dotukar maka lanjut menjadi n(1) hingga semuanya tersusun
 
// 3.Dalam algorithma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan? Jelaskan.pertama tambahkan variable k+1 maka kemudian 
// repeat 0 

#include <iostream>
using namespace std;

int ardhian[56];
int n;

void input() {
    while (true) {
        cout << "Masukan banyanknya Array: ";
        cin >> n;
        
        if (n <= 56)
            break;
        else {
            cout << "\nmaksimal panjang array yang dapat dimuat adalah 56\n";

        }
		
    }
    cout << endl;
    cout << "==============" << endl;
    cout << "masukkan array" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << " : ";
        cin >> ardhian[i];
    }
    cout << endl;
}

void display() {
    cout << endl;
    cout << "=========================" << endl;
    cout << "Array yang telah tersusun" << endl;
    
    for (int j = 0; j < n; j++) {
        cout << ardhian[j] << endl;
    }
}

void BubleSort() {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (ardhian[j] > ardhian[j + 1]) {
                int temp = ardhian[j];
                ardhian[j] = ardhian[j + 1];
                ardhian[j + 1] = temp;
            }
        }
    }


}


int main()
{
    input();
    display();
    BubleSort();
    return 0;
}


