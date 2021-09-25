#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string name;
	ofstream outFile;
	string item_name;
	string data;
	outFile.open("a.txt");
	cout << "writing to the file" << endl;
	cout << "enter your name" << endl;
	getline(cin, name);
	outFile << name << endl;
	
	string address;
	cout << "enter your address";
	cin >> address;
	outFile << address << endl;
	
	//outFile.close();
	
	ifstream inFile;
	inFile.open("a.txt");
	cout << "reading from the file";
	inFile >> data;	
	cout << "====" << data;
	inFile >> data;
	cout << "**" << data;
	
	cout << endl << "#############" << endl;
	while (getline(outFile, item_name)){
    	cout << item_name;
	}
	while (getline(inFile, data))
{
    cout << data;
}
}
