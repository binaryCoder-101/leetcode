class Solution {
public:

void printBits(int n)
{
  for (int i = 31; i >= 0; i--)
  {
    cout << ((n >> i) & 1);
  }
  cout << endl;
}

    bool isPowerOfTwo(int n) {
       // printBits(n);
      //  printBits(n-1);
        if (n > 0)
            return (n & (n - 1)) == 0;
            return false;
        n = ~n;
        n += 1;
        return n & (n - 1) == 0;
    }
};