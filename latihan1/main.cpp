#include<iostream>

using namespace std;

int main() {
    int i=0;
    int max=0;
    int a,x;

    cout << "Masukkan jumlah bilangan: ";
    cin >> a;

    for (i;i<a;i++){
        cout << "masukkan bilangan ke- " << i+1 << ": ";
        cin >> x;

        if (x > max)
            max = x;
    }

    cout << "Bilangan terbesar adalah: " << max << endl;
}
