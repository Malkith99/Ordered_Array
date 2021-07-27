#include<iostream>
using namespace std;
void swap( int *j, int *k);


void swap(int* j, int* k) {
	int temp = *j;
	*j = *k;
	*k= temp;
}



int main() {
	int  num[10];
	for (int i = 0; i < 10; i++) {
		num[i] = rand()%100;
	}
	for (int i = 0; i < 10; i++) {
		cout << num[i] << "\t";
	}
	cout << "" << endl;
	for (int i = 0; i <10; i++) {
		for (int j = 0; j < 10-1-i; j++) {
			if (num[j] > num[j + 1]) {
				swap(&num[j], &num[j + 1]);
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << *(num+i)<<"\t";
	}

}