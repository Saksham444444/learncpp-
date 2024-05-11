// WAP to compute quotient and reminder dividing two numberrs
#include <iostream>
using namespace std;
int quotient(int num_1,int divisor);
int reminder(int num_1,int divisor);
int main(){
    int num_1,divisor;
    cout << "Enter the number to be divided\n";
    cin >> num_1;
    cout << "Enter the divisor\n";
    cin  >> divisor;
    quotient(num_1,divisor);
    reminder(num_1,divisor);
    return 0;
}
int quotient(int num_1,int divisor){
    int quotient = num_1/divisor;
    cout << "The quotient is " << quotient;
}

int reminder(int num_1,int divisor){
    int reminder = num_1%divisor;
    cout << "The reminder is " << reminder;
}
