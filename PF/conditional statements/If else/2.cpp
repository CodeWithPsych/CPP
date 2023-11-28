// program to check that the entered character is small, capital or a special character
#include<iostream>
using namespace std;
int main()
{
  char v_charac_varible;
  cout<<"Enter a v_charac_varible =  ";
    cin>>v_charac_varible;
  int Ascii_value_Variable=v_charac_varible;
  cout<<"The ASCII value  of "<<v_charac_varible<<
        " is "<<Ascii_value_Variable;
  if(Ascii_value_Variable>=97 && Ascii_value_Variable<=122)
  {
    cout<<"\nYou have entered a small letter";
  }
  else if(Ascii_value_Variable>=65 && Ascii_value_Variable<=90)
  {
    cout<<"\nYou have entered a capital letter";
  }
    else if (Ascii_value_Variable>=0 && Ascii_value_Variable>=47
      || Ascii_value_Variable>=54 && Ascii_value_Variable<=64
      || Ascii_value_Variable>=91 && Ascii_value_Variable<=96 
      || Ascii_value_Variable>=123 && Ascii_value_Variable<=127)
  {
    cout<<"\nYou have entered a special v_charac_varible";
  }
else if (Ascii_value_Variable>=47 && Ascii_value_Variable<=57)
  {
    cout<<"\nYou have entered a digit ";
  }
return 0;
}