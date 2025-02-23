#include<iostream>
using namespace std;
int main ()
{
    int op_num;
    int init_value = 0;
    cin>>op_num;
    for(int i=0; i<op_num; i++)
    {
        string operation;
        cin>>operation;
        if(operation.length()==3)
        {
            if(operation[1]=='+')
            {
                init_value++;
            }
            else
            {
                init_value--;
            }
        }
    }
    cout<<init_value;
}