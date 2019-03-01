#include "iostream"
using namespace std;
const double pi=3.14;
class circle  //Բ��
{
public:
	virtual double area()=0;
	virtual double volume()=0;
private:
	double radius;
};
class sphere:public circle //����
{
	
public:
    sphere(double r){radius=r;}
	double area()
{
	return 4*pi*radius*radius;
}
	double volume()
{
	return (4/3)*pi*radius*radius*radius;
}
private:
	double radius;
};
class column:public circle //Բ����
{
public:
	column(double r,double h){radius=r;high=h;}
	double area()
{
	return radius*radius*pi*2+2*pi*radius*high;
}
	double volume()
{
	return pi*radius*radius*high;
}
private:
	double radius;
	double high;
};

void main()
{
    sphere sph(5);
	column col(5,7);
	cout<<"��ı������:"<<sph.area()<<endl;
	cout<<"��������:"<<sph.volume()<<endl;
	cout<<"Բ���ı������:"<<col.area()<<endl;
	cout<<"Բ���������:"<<col.volume()<<endl;

}












