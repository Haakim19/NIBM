//Question 04
#include<iostream>
using namespace std;

int main() 
{
    // Declare variables
    int number_of_units = 0;
    float total = 0;
    
    // Input number of units
    cout << "Number of Units:";
    cin >> number_of_units;
    
    // Calculate total based on number of units
    if (number_of_units >= 100) 
    {
        total = number_of_units * 30;
    }
    else if (50 <= number_of_units && number_of_units < 100) 
    {
        total = number_of_units * 20;
    }
    else if (number_of_units < 50) 
    {
        total = number_of_units * 10;
    }
    
    // Apply discount or surcharge based on total bill amount
    if (total > 5000)
    {
        total +=(total * 0.05);
    }
    else if (total < 500)
    {
        total -=(total * 0.05);
    }
 cout << "Total Bill is: " << total;
    return 0;
}
//Question 01
#include<iostream>
using namespace std;
int main()
{
    int n=0,total=0,i=1,root=0;
    cout <<"Enter a Number:";
    cin >>n;
    while (i<=n)
    {
        root=i*i;
        cout <<root<<endl;
        total+=root;
        i+=1;
    }
    cout <<"The sum of above series is:"<<total<<endl;
}

//Question 02
#include<iostream>
using namespace std;
int main()
{
    int employee_number=0,years_of_working=0,a=1;

    while (a<=3)
    {

     cout << "Employee Number:";
     cin >>employee_number;
     cout << "Years of working:";

        
        if (years_of_working>=10)
        {
            cout <<employee_number<<"has at least 10 years of experience with RTX"<<endl;
        }
     a+=1;
    }
    return 0;
}
//Question 03
#include<iostream>
using namespace std;
int main()
{
    float bill_amount=0,net_bill=0,total=0,i=1;
    
    for (float i = 1; i <=2; i++)
    {
     cout <<"Bill Amount:";
     cin >> bill_amount;
        if (bill_amount>=15000)
        {
            net_bill=bill_amount-bill_amount*0.07;
            cout <<"Your Discount is 7%"<<endl;
            cout << "Total:"<<net_bill<<endl;
        }
        else if (bill_amount>=10000)
        {
            net_bill=bill_amount-bill_amount*0.05;
            cout <<"Your Discount is 5%"<<endl;
            cout << "Total:"<<net_bill<<endl;
        }
        else
        {
            net_bill=bill_amount;
            cout << "Total:"<<net_bill<<endl;
        }
        total+=net_bill;
        
    }
    
    cout <<"Total sales in that hour:"<<total<<endl;
}