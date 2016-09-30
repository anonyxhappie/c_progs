#include <iostream>
using namespace std;
 
// Returns count of possible paths to reach cell at row number m and column
// number n from the topmost leftmost cell (cell at 1, 1)
int  numberOfPaths(int m, int n)
{
   if (m == 1 || n == 1)
   		return 1;
 
   return numberOfPaths(m-1, n) + numberOfPaths(m, n-1) + numberOfPaths(m-1,n-1);
}
 
int main()
{
    cout << numberOfPaths(3, 3);	
    return 0;
}


