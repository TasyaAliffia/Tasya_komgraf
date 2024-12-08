#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk melakukan dilatasi pada sebuah objek
void dilate(vector<pair<int, int>>& points, double scaleFactor) {
    for (auto& point : points) {
        point.first = static_cast<int>(point.first * scaleFactor);
        point.second = static_cast<int>(point.second * scaleFactor);
    }
}

// Fungsi untuk mencetak koordinat
void printPoints(const vector<pair<int, int>>& points) {
    for (const auto& point : points) {
        cout << "(" << point.first << ", " << point.second << ")" << endl;
    }
}

int main() {
    // Membuat objek berupa persegi dengan empat titik
    vector<pair<int, int>> object = {{1, 2}, {2, 3}, {3, 4},{4, 1}};

    cout << "Koordinat awal objek:" << endl;
    printPoints(object);

    // Memasukkan faktor skala
    double scaleFactor;
    cout << "Masukkan faktor skala untuk dilatasi: ";
    cin >> scaleFactor;

    // Melakukan dilatasi
    dilate(object, scaleFactor);

    cout << "Koordinat setelah dilatasi:" << endl;
    printPoints(object);

    return 0;
}