
#include<iostream>
using namespace std;
 
int qiongju(int head,int foot,int *chicken,int * rabbit)
{
 int re,i,j;
 re=0;
 for(i=0;i<=head;i++) 
 {
  j=head-i;
  if(i*2+j*4==foot)  
  {
   re=1;    
   *chicken=i;
   *rabbit=j; 
  }
 }
 return re;
}
int main()
{
 int chicken,rabbit,head,foot;
 int re;
 cout<<" The exhaustive method is used to solve the problem: "<<endl;
 cout<<" Please enter the number of heads: ";
 cin>>head;
 cout<<" Please enter the number of feet: ";
 cin>>foot;
 re=qiongju(head,foot,&chicken,&rabbit);
 if(re==1)
 {
  cout<<" The chicken has "<<chicken<<" Is the only, rabbit "<<rabbit<<" Only. "<<endl;
 }
 else
 {
  cout<<" Unsolvable! "<<endl;
 }
 return 0; 
} 

