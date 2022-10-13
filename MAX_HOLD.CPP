
#include <iostream>

using namespace std;
static int m;
class customer
{
  private:
  int cid;
  char cname[10];
  double balance;
  int bid;
  
  public:
  void get()
  {
      cout<<"\nEnter customer id: \n";
      cin>>cid;
      cout<<"Enter the customer name: \n";
      cin>>cname;
      cout<<"Enter the balance: \n";
      cin>>balance;
      cout<<"Enter the branchid: \n";
      cin>>bid;
  }
  void calc(customer c)
  {
      if((bid==c.bid)&&(balance>=c.balance)&&(balance>=m))
      m=balance;
  }
  void show()
  {
      if(balance==m)
      cout<<"cid: "<<cid<<" cname: "<<cname<<" Balance: "<<balance<<" bid: "<<bid;
  }
};

int main()
{
    customer c[10];
    int n,i,j;
    cout<<"Enter the no of customer: ";
    cin>>n;
    
    for(i=0;i<n;i++){
    c[i].get();}
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i].calc(c[j]);
        }
    }
    
     for(i=0;i<n;i++)
    {
        c[i].show();
    }
   
    return 0;
}