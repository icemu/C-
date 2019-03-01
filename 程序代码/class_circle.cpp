#include "iostream"
using namespace std;
const double pi=3.14;
class circle  //圆类
{
public:
	virtual double area()=0;
	virtual double volume()=0;
private:
	double radius;
};
class sphere:public circle //球类
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
class column:public circle //圆柱类
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
	cout<<"球的表面积是:"<<sph.area()<<endl;
	cout<<"球的体积是:"<<sph.volume()<<endl;
	cout<<"圆柱的表面积是:"<<col.area()<<endl;
	cout<<"圆柱的体积是:"<<col.volume()<<endl;

}












