#include "iostream.h"
#include "fstream.h"
#include "stdlib.h"
ofstream outfile;
void write()
{ 
 outfile.open("D:\\2.txt", ios::app);//open����
 if(!outfile) 
 {
  cout<<"2.txt can't open"<<endl;
  abort(); 
 }
 else
 {
  outfile << "How are you?" << endl;
  outfile.close();
 }
}
void add_write()
{
 outfile.open("D:\\2.txt", ios::app);//׷��
 if(!outfile) 
 {
  cout<< "2.txt can't open"<< endl;
  abort(); 
 }
 else
 {
  outfile << "I am fine." << endl;
  outfile.close();
 }
}
int main()
{
	ofstream f("d:\\1.txt",ios::out);//���캯��
	f<<"Hello World!\n";
	f.close();
 write();
 add_write();
 return 0;
}