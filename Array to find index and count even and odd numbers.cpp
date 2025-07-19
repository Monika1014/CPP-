#include <iostream>
int main()
{
    int arr[]={10,24,25,45,30};
    int even=0,odd=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
            std::cout<<i<<" ";
        }
        else
        {
            odd++;
            std::cout<<i<<" ";
        }
    }
    std::cout<<"\n"<<"Even = "<<even<<" "<<"Odd = "<<odd;
    return 0;
}
