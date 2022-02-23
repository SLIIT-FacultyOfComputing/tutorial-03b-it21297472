#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << setw(6)<<"No" << setw(12)<<"Name" << setw(6)<<"Marks" << endl;
 for (int r = 0; r < 5; r++) {
     cout <<  setw(6)<<r+1 
          <<  setw(12)<<names[r]
          <<  setw(6)<<marks[r] << endl;
         
 }
}