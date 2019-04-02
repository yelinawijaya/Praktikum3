#include<iostream>
#include<conio.h>

int main ()
   { int i=10, j=20, k=30, r;
     r = i > j;   // operator lebih besar
     cout<<"r = "<<r<<r<<endl;
     r = i >= k;  // operator lebih besar sama dengan
     cout<<"r = "<<r<<r<<endl;
     r = j < k;  // operator lebih kecil
     cout<<"r = "<<r<<r<<endl;
     r = j <= k;  // operator lebih kecil sama dengan
     cout<<"r = "<<r<<r<<endl;
     r = i == k;  // operator sama dengan
     cout<<"r = "<<r<<r<<endl;
     r = i != k;  // operator tidak sama dengan
     cout<<"r = "<<r<<r<<endl;

getch ();
return (0);
}
