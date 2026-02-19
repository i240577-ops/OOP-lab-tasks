//#include<iostream>
//using namespace std;
//class server {
//private:
//
//	string name;
//	string status;
//	static int count;
//public:
//	server() {
//		name = "localhost";
//		status = "online";
//		count++;
//		cout << "defauult server is connected to " << name << endl;
//		cout << "total servers: " << count << endl;
//	}
//
//	server(string n, string s) {
//		name = n;
//		status = s;
//		count++;
//		cout << "server is connected to " << name << " with status " << status << endl;
//		cout << "total servers: " << count << endl;
//	}
//
//	~server() {
//				count--;
//		cout << "server " << name << " is disconnected." << endl;
//		cout << "total servers: " << count << endl;
//	}
//	static void showservers() {
//		cout << "Currently active servers: " << count << endl;
//	}
//
//};
//
//int server::count = 0;
//
//
//int main() {
//	server s1;
//
//	server s2("ptcl bb", "offline");
//	server s3("comsats", "online");
//	
//	server::showservers();
//	
//	
//
//	server s4("xyz", "Online");
//
//	server::showservers();
//	return 0;
//}