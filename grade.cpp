#include <iostream>

using namespace std;

int main()
{
    int marks;
    std::cout << "Enter Marks: \n" << std::endl;
    std::cin >> marks;
    std::cout << "The marks is : " << marks ;
  
    if(marks<40)
    {
       cout<<"\nThe grade of student is: D\n";
    }
    else if(marks>=40)
    {
       cout<<"\nThe grade of student is: C\n";
    }
    else if(marks>=60)
    {
       cout<<"\nThe grade of student is: B\n";
    }
    else
    {
        cout<<"\nThe grade of student is: A";
    }
    
}
