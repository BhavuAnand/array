#include <iostream>
using namespace std;

int main()
{
   int a[5];
   cout << "Enter elements:\n ";

   for(int i = 0; i < 5; ++i)
   {
      cin >> a[i];
   }

   cout << "\nEntered elements are:\n ";
   for(int i = 0; i < 5; ++i)
   {
      cout << endl << *(a + i);
   }
   return 0;
}
