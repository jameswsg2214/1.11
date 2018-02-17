#include <iostream>
#include <string>
using namespace std;
class Hello
{
    public:
 int calc(int a)
 {
     if(a==0)
     {
         cout<<"zero";
     }
         else if(a>0){
             cout<<"postive";
         }
         else{
             cout<<"negative";
         }
         return 0;
 }
};
int main()
{
  Hello h;
  int d;
  cout<<"entr the value";
  cin>>d;
  h.calc(d);
  return 0;
}
