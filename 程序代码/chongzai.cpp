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
MyString& operator +(MyString &b) //字符串连接
{
char* temp = str;
str = new char[strlen(temp)+strlen(b.str)+1];
str =strcpy(str,temp);
delete []temp;
str = strcat(str,b.str);
return *this;
}
MyString& operator =(MyString &c) // 赋值函数
{
if(this == &c)return *this; //检查自赋值
delete []str; // 释放原有的内存资源
str = new char[strlen(c.str )+1]; // 分配新的内存资源
strcpy(str,c.str); // 并复制内容
return *this; // 返回本对象的引用
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