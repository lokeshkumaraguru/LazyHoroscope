//Authors: Lokesh Kumaraguru
#include<iostream>
#include<string>

using namespace std;

int main()
{
  std::string firstname;
  std::string lastname;
  int lucky;

  std::cout<<"Hello. Please give me your first name.";
  std::cin>>firstname;
  std::cout<<endl;
  std::cout<<"Now please give me your last name.";
  std::cin>>lastname;
  std::cout<<endl;

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

  lucky = firstname.length();
  std::cout<<"your lucky number is ";
  std::cout<<lucky;
  std::cout<<"."<<endl;

  if(firstname[0] == 'A' || firstname[0] == 'a' || firstname[0] == 'E' || firstname[0] == 'e' || firstname[0] == 'I' || firstname[0] == 'i' || firstname[0] == 'O' || firstname[0] == 'o' || firstname[0] == 'U' || firstname[0] == 'u')
  {
    std::cout<<"you are destined to be famous!"<<endl;
  }
  else
  {
    std::cout<<"you should keep a low profile."<<endl;
  }
 
  lucky = lastname.length()-1;

  if(lastname[lucky] == 'A' || lastname[lucky] == 'a' || lastname[lucky] == 'E' || lastname[lucky] == 'e' || lastname[lucky] == 'I' || lastname[lucky] == 'i' || lastname[lucky] == 'O' || lastname[lucky] == 'o' || lastname[lucky] == 'U' || lastname[lucky] == 'u')
  {
    std::cout<<"you have already met your true love."<<endl;
  }

  std::cout<<"have a good day!"<<endl;

  return 0;

}
