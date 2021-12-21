Question Link- https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7

// Fast Exponentiation //

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int res = 1;
    while(n > 0) {
        if(n & 1)  {
           res = (1LL * (res) * (x) % m) % m;            //for odd case
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
	}
    return res;
}
