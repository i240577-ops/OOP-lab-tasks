#include <iostream>
using namespace std;

int* rotateArray(int* arr, int sizeofArray, int n, int m) {
    // normalize rotation
    n = n % sizeofArray;

    // create new array for rotated result
    int* rotated = new int[sizeofArray];

    // shift elements circularly to the right by n
    for (int i = 0; i < sizeofArray; i++) {
        rotated[(i + n) % sizeofArray] = arr[i];
    }

    // "divide into m parts" ? just print partitions for clarity
    cout << "\narray divided into " << m << " parts:\n";
    int partSize = sizeofArray / m;
    int extra = sizeofArray % m;

    int index = 0;
    for (int i = 0; i < m; i++) {
        int currentPartSize = partSize + (i < extra ? 1 : 0);
        cout << "part " << i + 1 << ": ";
        for (int j = 0; j < currentPartSize; j++) {
            cout << rotated[index++] << " ";
        }
        cout << endl;
    }

    return rotated;
}

int main() {
    int num;
    cout << "enter size of array: ";
    cin >> num;

    int* arr = new int[num];
    cout << "enter the array elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int n, m;
    cout << "enter number of rotations (n): ";
    cin >> n;
    cout << "enter number of parts (m): ";
    cin >> m;

    int* rotated = rotateArray(arr, num, n, m);

    cout << "rotated array: ";
    for (int i = 0; i < num; i++) {
        cout << rotated[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] rotated;

    return 0;
}
