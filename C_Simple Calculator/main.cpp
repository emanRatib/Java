#include <iostream>

using namespace std;

int main()
{
   int x;
  //X, Y (1  ≤  X, Y  ≤  10^5), int بتشيل لحد (10^9) and in this problem ,the multiplication x*y = 10 ^10 ..it will happen overflow so we should use data type  long long at least on one variable
   long long y;
   cin>>x>>y;
   cout<< x<<" + "<<y<<" = "<<x+y<<"\n";
   cout<< x<<" * "<<y<<" = "<<x*y<<"\n";
   cout<< x<<" - "<<y<<" = "<<x-y<<"\n";
    return 0;
}
