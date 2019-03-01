#include <iostream>
#include <string.h>
using namespace std;
class MyString
{
public:
MyString(char *s)
{
str=new char[strlen(s)+1];
strcpy(str,s);
}
MyString()
{
str = new char;
str[0]='\0';
}
~MyString()
{
delete []str;
}
void PrintSelf()
{
cout<<str<<endl;
}
MyString& operator +(MyString &b) //�ַ�������
{
char* temp = str;
str = new char[strlen(temp)+strlen(b.str)+1];
str =strcpy(str,temp);
delete []temp;
str = strcat(str,b.str);
return *this;
}
MyString& operator =(MyString &c) // ��ֵ����
{
if(this == &c)return *this; //����Ը�ֵ
delete []str; // �ͷ�ԭ�е��ڴ���Դ
str = new char[strlen(c.str )+1]; // �����µ��ڴ���Դ
strcpy(str,c.str); // ����������
return *this; // ���ر����������
}
private:
char *str;
};
int main()
{
MyString a;
MyString b("HELLO"),c("WORLD");
a=b+c;
a.PrintSelf();
return 0;
}