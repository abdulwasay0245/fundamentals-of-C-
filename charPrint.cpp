#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
   while(ch <= 'Z'){
      for(int i = 1 ; i <=4 && ch <= 'Z' ; i++){
           cout << ch;
           ch++;
      }
      cout << endl;
   }
    return 0;
}
