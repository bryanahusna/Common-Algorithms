// Finding greatest common divisor (GCD) of two integer using Euclidean Algorithm
// Euclidean Algorithm use this theorem: if a mod b = r, then
// GCD(a, b) = GCD(b, r)

// Using while loop
int gcd(int a, int b){
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Using recursion
int gcdrec(int a, int b){
    if(b == 0)
        return a;
    else{
        return gcdrec(b, a % b);
    }
}

// Demonstration
#include <stdio.h>
int main(){
    int gcd1 = gcd(180, 24);    // Can be in any order
    int gcd2 = gcdrec(24, 180);
    int gcd3 = gcd(100, 3);
    int gcd4 = gcdrec(100, 3);
    printf("%d %d\n", gcd1, gcd2);
    printf("%d %d\n", gcd3, gcd4);
}