#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h> 
#include <string>

using namespace std;

int sumOfDivisions(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {

    int start, end;
    cout << "\nPlease,enter low limit: ";
    cin >> start;

    cout << "\nPlease,enter high limit: ";
    cin >> end;

    for (int i = start; i <= end; i++) {
        int sum = sumOfDivisions(i);
        int another = sumOfDivisions(sum);
        if (i == another && i > sum) {
            cout << "Amicable number pair: (" << sum << ", " << another << ")";
            cout << endl;
        }
    }

    return 0;
}

