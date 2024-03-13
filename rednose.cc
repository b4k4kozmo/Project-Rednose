#include <iostream>

int xA, yA, t, xP;
char units[6] = "units";

void setValues()
{
    std::cout<<"Enter the age you want to check the perception of"<<std::endl;
    std::cin>>xA;
    std::cout<<std::endl;
    std::cout<<"Enter the age you want to compare it to"<<std::endl;
    std::cin>>yA;
    std::cout<<std::endl;
    std::cout<<"Type a unit of time"<<std::endl;
    std::cin>>units;
    std::cout<<std::endl;
    std::cout<<"Enter an amount of ";
    std::cout<<units<<std::endl;
    std::cin>>t;
    std::cout<<std::endl;
}
int calculateP()
{
    return (xA/yA * t);
}

int main() {
    setValues();
    xP = calculateP();
    std::cout<<t<<" ";
    std::cout<<units;
    std::cout<<" for a "<<yA;
    std::cout<<" year old would feel like "<<xP;
    std::cout<<" ";
    std::cout<<units;
    std::cout<<" to a "<<xA;
    std::cout<<" year old."<<std::endl;
    return 0;
}