#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  string str = "John is from USA.";
  char ch;

  cout << "The uppercase version of \"" << str << "\" is " << endl;

  for (int i = 0; i < strlen(str); i++) {

    // convert str[i] to uppercase
    ch = toupper(str[i]);

    cout << ch;
  }

  return 0;
}
