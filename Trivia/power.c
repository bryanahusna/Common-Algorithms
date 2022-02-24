/* Finding a ^ n (a to the power of n) */

/* With divide and conquer algorithm */
int power(int a, int n){
	if(n == 0)
		return 1;
	
	int x = power(a, n/2);    // Calculate a^(n/2)
	if(n % 2 == 1)
		return x * x * a; // If n odd, then a^(n/2) * a^(n/2) = a^(n-1), so we need one additional multiplication of a
	else
		return x * x;
}
