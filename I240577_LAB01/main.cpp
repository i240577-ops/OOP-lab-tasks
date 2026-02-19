#include<iostream>
#include"header.h"
using namespace std;
int main() {

        int size;
        cin >> size;
        int *array = new int [size];
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }
        rotateLeft(array,size);


	return 0;
}