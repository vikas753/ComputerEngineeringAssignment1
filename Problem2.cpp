#include <iostream>
using namespace std;
int main ()
{
  int x = 1, y = 9;
  int *p1, *p2;
  p1 = &x;
  p2 = &y;
   
  /* inline the SWAP method definition by pointers for integers only */
  if((p1!=NULL) && (p2!=NULL))
  {
    if(*p1 != *p2)
    {
      int TempPlaceholder = *p2;
      *p2 = *p1;
      *p1 = TempPlaceholder;
    }   
  } 
 
  cout << *p1 << " and " << *p2 << endl; // Prints "9 and 1"
return 0;
}
