
#include<iostream>
using namespace std;
int main()
{
    double weight,height;
    cin>>weight>>height;

    double bmi=weight/(height*height);

    if(bmi<18.5)
    {
        cout<<"underweight, BMI="<<bmi;
    }
    else
    {
        if(bmi<25)
        {
            cout<<"normal weight, BMI="<<bmi;
        }
        else
        {
            if(bmi<30)
            {
                cout<<"overweight, BMI="<<bmi;
            }
            else
            {
                cout<<"obese, BMI="<<bmi;
            }
        }
    }
    return 0;
}