#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string name;
	ofstream outFile;
	string item_name;
	outFile.open("a.txt");
	int i=1;
	while (i < 10){
    	outFile << "Hi" << i
		;
    	i++;
	}

}
