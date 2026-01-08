#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    int total_baris = 0; // karena dimulai dari bulan ke 0

    while (total_baris < 3) {
        luas_kandang += 7;     
        cout << luas_kandang << endl;

        // total baris yang tercetak bertambah 1
        total_baris += 1;
    }
}
