//Q. Write a Program to check a number is prime or not.

#include <iostream>

using namespace std;

int main() {

    int num, i;
    bool isPrime = true;

    // Input a number
    cout << "Enter a positive number: ";

    cin >> num;

	// 0 and 1 are not prime numbers
    if (num <= 1) {
		        isPrime = false;
    } else {

	// Check from 2 to sqrt(num)
        for (i = 2; i <= num / 2; ++i) {
			 if (num % i == 0) {
                isPrime = false;
                break;
            }
		}
    }

    // Output result
    if (isPrime)
		 cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}