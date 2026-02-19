#pragma once
#include<iostream>
using namespace std;
int findMax(int array[], int size) 
{
	int max = array[0];
	for (int i = 0; i < size; i++) 
	{
		if (array[i] > max) 
		{
			max = array[i];
		}	
	}
	return max;
}
int* rotateLeft(int array[], int size) {
	int a = array[0];
for (int i = 0; i < size-1; i++) {
	array[i] = array[i+1];
}
array[size - 1] = a;
for (int i = 0; i < size; i++) {
    cout << array[i];
}
return array;
}

