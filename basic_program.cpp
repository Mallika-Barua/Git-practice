#include <iostream>
using namespace std;

long long factorial(int n) {
if (n<=1) return 1;
long long f=1;
for (int i=1; i<=n; i++)
f *=i;
return f;
} 
void printFinonacci(it n) {
long long a =0, b=1;
cout << "Fibonacci sequence: ";
for (int i=0; i<n; i++){
cout << a << " ";
long long next = a+b;
a =b;
b=next;
}
cout << endl;
}
int main(){
int n;
cout<< "Enter a num: ";
cin >> n;
cout<< "Factorial of " << n<< "is " <<factorial(n) <<endl;
printFibonacci(n);
return 0;
}
