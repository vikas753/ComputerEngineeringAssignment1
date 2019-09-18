/*
 Name : VIKAS VEERABATHINI
 NU ID : 001302155
 Program : Swap by reference and pointers 
*/

#include<iostream>
using namespace std;

/*Swap the values in two variables using pointers .
  Note : Pointers wont be swapped !
  An cautionary check has been added to see if pointers 
  aint NULL and if values are equal they wont be swapped to save cycles */

template <typename T>
bool SwapP(T* Var1 , T* Var2)
{
  if((Var1!=NULL) && (Var2!=NULL))
  {
    if(*Var1 != *Var2)
    {
      int TempPlaceholder = *Var2;
      *Var2 = *Var1;
      *Var1 = TempPlaceholder;
    }

    return true;
  }
  else
  {
    return false;
  }
}

/*
  Swap the values of two variables by passing them using reference . 
  If they are equal , then bypass swap operation .
*/

template <typename T>
void SwapR(T& Var1 , T& Var2)
{
  if(Var1 != Var2)
  {
    T TempPlaceholder = Var2;
    Var2 = Var1;
    Var1 = TempPlaceholder;
  }
}

int main()
{
  /* A basic test case undergoes here */

  int a = 9 , b = 10;

  cout << "Without Swap : " << a << "," << b << endl;

  if(SwapP<int>(&a,&b)==true)
  {
    cout << "With SwapP : " << a << "," << b << endl;
  }
  
  SwapR(a,b);
  
  cout << "With SwapR :" << a << "," << b << endl;

  return 0;
}
