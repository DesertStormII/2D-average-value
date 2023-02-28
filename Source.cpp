#include <iostream>

using namespace std;
int main()
{
	int m,sum=0,n;
	int array1[50][50] = {  };
	cout << " Create array" << endl;
	cout << " Enter row:";
	cin >> m;
	cout << " Enter columns:";
	cin >> n;
	cout << endl << " Enter meaning for an array:" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> array1[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		cout << endl;
		for (int j = 0; j < n; j++) {
			cout << array1[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		cout << endl;
		for (int j = 0; j < n; j++) {
			sum = sum + array1[i][j];
		}
	}
	cout << " Sum of array equal to "<< sum;


	


	return 0;
}