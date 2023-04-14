#include<iostream>
using namespace std;
bool linear_search(int* arr,int size, int key) {
	for (int i = 0; i < size; i++) {
		if (arr[i]==key)
		{
			return true;
		}
	}
	return false;

}
int main() {

	int size;
	cout << " Enter the size of array " << endl;
	cin >> size;
	int *arr = nullptr;
	arr = new int[size];
	cout << " Enter the value for array " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << " Your array is : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int key;
	cout << " Enter the key which you want to seach " << endl;
	cin >> key;
	if (linear_search(arr, size, key)) {
		cout << " key is found " << endl;
	}
	else {
		cout << "key not found " << endl;
	}
	delete []arr;
	system("pause");
	return 0;
}