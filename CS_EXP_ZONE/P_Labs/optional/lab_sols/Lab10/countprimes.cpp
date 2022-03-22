#include <iostream>
using namespace std;
 
int SieveOfEratosthenes(int num)
{
   bool pno[num+1];
   int count=0;
   for(int i=0;i<=num;i++)
       pno[i]=true;
 
   for (int i = 2; i*i <= num; i++)
   {
       if (pno[i] == true)
       {
           for (int j = i*2; j <= num; j += i)
               pno[j] = false; //modifying multiples of prime number to false
       }
   }
   for (int i = 2; i <= num; i++)
       if (pno[i]) //if pno[i] true then it is a prime
           count++;
   return count;
}
 
int main()
{
   int n;
   cin >> n;
   int count=SieveOfEratosthenes(n);
   cout << count << endl;
}
