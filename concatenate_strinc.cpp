#include<iostream>
#include<string.h>
using namespace std;
 class String{

public :
            char str[20];
public:
 void accept_string()
{
cout<<"Enter string   ";
cin>>str;
 }

 void display_string()
{
cout<<str;
}
    
String operator+(String x)
{
String s;
strcat(str,x.str);
strcpy(s.str,str);
return s;
}

};


int main()
{
String str1,str2,str3;

cout<<"Enter first string  \n";
str1.accept_string();

cout<<"Enter second string  \n";
str2.accept_string();

str1.display_string();
cout<<endl<<endl;
str2.display_string();

str3=str1+str2;


cout<<"\n\nConcanate of both string is      : ";
str3.display_string();

    return 0;
}