//Authors: Lokesh Kumaraguru
#include<iostream>
#include<string>

using namespace std;

int main()
{
  std::string firstname;
  std::string lastname;

  std::cout<<"Hello. Please give me your first name.";
  std::cin>>firstname;
  std::cout<<"Now please give me your last name.";
  std::cin>>lastname;

  std::string nickfirst;
  nickfirst = firstname[0];
  std::string nicklast;
  nicklast = lastname[0];

  std::cout<<"Welcome, ";
  std::cout<<nickfirst;
  std::cout<<".";
  std::cout<<nicklast;
  std::cout<<".";
  std::cout<<", here is your fortune..."<<endl;

  return 0;
}
