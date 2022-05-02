#include<iostream>
using namespace std;

int size = 25;
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37,
        41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int binarySearch(int x) {
    int min = 0;
    int max = size - 1;
    while (min <= max) {
        int valor = min + (max - min) / 2;
        if (primes[valor] == x) {
            return valor;
        } else if (primes[valor] < x) {
            min = valor + 1;
        } else {
            max = valor - 1;
        }
    }
    return -1;
}

int main() {
    int x;
    cin >> x;
    int position = binarySearch(x);
    cout << position << endl;
    return 0;
}
