//#include<iostream>
//using namespace std;
//class TemperatureList {
//	float N;
//	float* arr;
//public:
//	TemperatureList(int n) {
//		N = n;
//		arr = new float[N];
//	}
//	TemperatureList(const TemperatureList& temp) {
//		N = temp.N;
//		arr = new float[N];
//		for (int i = 0; i < N; i++) {
//			arr[i] = temp.arr[i];
//		}
//	}
//	TemperatureList& operator=(const TemperatureList& temp) {
//		if (this != &temp) {
//			delete[] arr;
//			N = temp.N;
//			arr = new float[N];
//			for (int i = 0; i < N; i++) {
//				arr[i] = temp.arr[i];
//			}
//		}
//		return *this;
//	}
//	float& operator[](int index) {
//		if(index < 0 || index >= N) {
//			cout << "invalid index" << endl;
//		}
//		return arr[index];
//	}
//
//
//	~TemperatureList() {
//		delete[] arr;
//	}
//
//};
//int main() {
//	int n;
//	cout << "Enter number of days: ";
//	cin >> n;
//	TemperatureList temps(n);
//	for (int i = 0; i < n; i++) {
//		cout << "Enter temperature for day " << i << ": ";
//		cin >> temps[i];
//	}
//	int daycpy;
//	TemperatureList temps2 = temps;
//	cout << "Enter day you have to copy temperature from: ";
//	cin >> daycpy;
//	cout << "Temperature on day " << daycpy << " is " << temps2[daycpy] << endl;
//
//		return 0;
//}