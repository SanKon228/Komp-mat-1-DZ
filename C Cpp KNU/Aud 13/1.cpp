#include <iostream>
#include <string>
 using namespace std;
 int main()
{
    string f="Enter your full name";
    char myStrChar[] = "This is a sample string";
    char *ch = myStrChar;
   int count = 0;
   while(*ch != '\0'){
      count++;
      ch++;
   }
   cout << count << endl;
   cout << "String length using for loop: ";
   count = 0;
   for(int i = 0; myStrChar[i] != '\0'; i++){
      count++;
   }
   cout << count;
}