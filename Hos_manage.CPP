
#include <iostream>

using namespace std;
class patients
{
    private:
    //int patient;
    int problem;
    
    public:
    void get()
    {
        //cin>>patient;
    }
    void issue()
    {
        cout<<"What type of health issue are you affected by: \n";
        cout<<"1.Fever\n";
        cout<<"2.Physical Infection\n";
        cout<<"3.Digestion Problem\n";
        cout<<"4.Insect Biting Problem\n";
        cout<<"5.Health Checkup\n";
        cout<<"Enter your choice: \n";
        
        cin>>problem;
        
        
    }
    
    void appoint()
    {
       switch(problem)
        {
            case 1:
            cout<<"Your appointment is fixed for Mr. P. Ramanujan,MBBS, Vid No. 34\n";
            break;
            case 2:
            cout<<"Your appointment is fixed for Mr.R.Valluvan,MBBS, Vid No. 42\n";
            break;
            case 3:
            cout<<"Your appointment is fixed for Mr.A.Ranganathan,MBBS, Vid No. 22\n";
            break;
            case 4:
            cout<<"Your appointment is fixed for Mr.R.Vallbhai,MBBS, Vid No. 48\n";
            break;
            case 5:
            cout<<"Your appointment is fixed for Mr.R.Vasoolraja,MBBS, Vid No. 46\n";
            break;
            
            default:
            cout<<"For your health issue not any type of doctor found here\n";
        } 
    }
    
    
};

int main()
{
    int n,i;
    cout<<"Enter the number of patients: ";
    cin>>n;
    patients p[n];
    for(i=0;i<n;i++)
    {
        cout<<"Patient no "<<i+1<<"\n";
        p[i].get();
        p[i].issue();
        p[i].appoint();
    }
    return 0;
}



