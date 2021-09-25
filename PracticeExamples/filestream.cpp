#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string name;
	string address;
	string data = "";
	cout << "data before:" << data;
	//write
	ofstream outFile;
	outFile.open("abc.txt");//not a file name // file address - 2 1. absolute path, relative path
	
	int i = 1;
	while(i < 10) {
		outFile << "Hiii " << i << endl;
		i++;
	}
	outFile.close();
	
	//read
	ifstream inFile;
	inFile.open("abc.txt");
	//inFile >> data; 
	cout << "data after:" << endl;// << data;
	
	while(getline(inFile, data)) {// Hello world
		cout << data << endl;
	}

	
	
	
	
	
	
	
	
	
	
	 
	
}
