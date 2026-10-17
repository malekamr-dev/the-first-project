#include <iostream> 
using namespace std;   
#include <cmath>
int main() 
{ 
int seconds= 1900000000;
int minutes = seconds / 60;
int hours = minutes / 60;
int days = hours / 24;
cout << seconds % 60 << endl;
cout << minutes % 60 << endl;
cout <<hours % 24 << endl;

     return 0; 
}
