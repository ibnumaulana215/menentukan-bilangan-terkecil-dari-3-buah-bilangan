#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int e,f,g;

   cout<<"menentukan bilangan terkecil dari 3 buah bilangan"<<endl<<endl;

   cout<<"bilangan 1 adalah = "; cin>>e;
   cout<<endl;
   cout<<"bilangan 2 adalah = "; cin>>f;
   cout<<endl;
   cout<<"bilangan 3 adalah = "; cin>>g;
   cout<<endl;

   if(e<f)
   cout<<"bilangan terkecilnya adalah "<<e<<endl;
   else if(f<g)
    cout<<"bilangan terkecilnya adalah "<<f<<endl;
   else
    cout<<"bilangan terkecilnya adalah "<<g<<endl;



   getch();
   return 0;

}
