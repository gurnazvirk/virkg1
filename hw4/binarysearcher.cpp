#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
  int a[100];
  int n,i,beg,ed,mid,item;

  cout<<"Enter Number of Elements: ";
  cin>>n;

  cout<<"Enter Sorted Elements: \n";
  for(i=1;i<=n;i++)
  {
    cin>>a[i];
  }

  cout<<"Enter Search Element: ";
  cin>>item;

  beg=1;
  ed=n;

  mid=(beg+ed)/2;

  while(beg<=ed && a[mid] !=item)
  {
    if(a[mid]<item)
      beg=mid+1;
    else
      ed=mid-1;

    mid=(beg+ed)/2;
  }

  if(a[mid]==item)
  {
    cout<<"\nItem found at Location"<<mid;
  }

  else
    cout<<"\n data not found";

  cout << " ------- end of program ";

  return 0;

}
