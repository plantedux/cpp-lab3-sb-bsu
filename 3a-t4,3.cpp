#include <iostream>
#include <limits>


using namespace std;
int main()

{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k;

if (k==0) {
    cout << "No integers can be summed";
    return 0;
}

 
do {
cout << "Enter integer nr. " << i << ": ";
if (cin >> number) {
sum_k += number; i++;
}


    else {
cout << "You've entered not int number." << endl;
 cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }  


} while (i <= k);
cout << " The total sum of " << k << " integers is: " << sum_k;



return 0;
}
