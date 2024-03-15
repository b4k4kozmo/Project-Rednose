#include <iostream>

double xA, yA, t, yP;
char units[6] = "units";

void setValues()
{
    std::cout<<"Enter the age you want to check the perception of:"<<std::endl;
    std::cin>>yA;
    while (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout<<"That's not a number try again."<<std::endl;
        std::cout<<"Enter the age you want to check the perception of:"<<std::endl;
        std::cin>>yA;
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<std::endl;
    std::cout<<"Enter the age you want to compare it to:"<<std::endl;
    std::cin>>xA;
    while (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout<<"That's not a number try again."<<std::endl;
        std::cout<<"Enter the age you want to compare it to:"<<std::endl;
        std::cin>>xA;
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<std::endl;
    std::cout<<"Type a unit of time"<<std::endl;
    std::cin>>units;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<std::endl;
    std::cout<<"Enter an amount of ";
    std::cout<<units<<std::endl;
    std::cin>>t;
    while (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout<<"That's not a number try again."<<std::endl;
        std::cout<<"Enter an amount of ";
        std::cout<<units<<std::endl;
        std::cin>>t;
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<std::endl;
}
float calculateP()
{
    return (xA/yA * t);
}

int main() {
    setValues();
    yP = calculateP();
    std::cout<<t<<" ";
    std::cout<<units;
    std::cout<<" for a "<<xA;
    std::cout<<" year old would feel like "<<yP;
    std::cout<<" ";
    std::cout<<units;
    std::cout<<" to a "<<yA;
    std::cout<<" year old."<<std::endl;
    return 0;
}