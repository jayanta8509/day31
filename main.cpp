// Write a Program to Toggle each character in a string
#include <iostream>
#include <string>
using namespace std;
void character(string a) {
  int len = a.length();
  for (int i = 0; i < len; i++) {
    if (isupper(a[i])) {
      a[i] = tolower(a[i]);
    } else if (islower(a[i])) {
      a[i] = toupper(a[i]);
    }
  }
  cout << a;
}

int main() {
  string a = "Hello";
  character(a);
}