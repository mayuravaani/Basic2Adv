#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
string item_name;
ifstream nameFileout;

ofstream outfile("palindrome.out");;


  // Write to the file
  outfile << "Files can be tricky, but it is fun enough!";

  // Close the file
  outfile.close();

nameFileout.open("palindrome.in");
while (getline(nameFileout, item_name))
{
    cout << item_name;
}
nameFileout.close();
}
