#include <iostream>
using namespace std;
const float Pi=3.14;
const float ConcretePrice=20;
const float FencePrice=35;
class Circle
{
private:
	float radius;
public:
	Circle(float r);
	float Circumference();
	float Area();

};
Circle::Circle(float r)
{
   radius=r;
}
float Circle::Circumference()
{
return 2*Pi*radius;	
}
float Circle::Area()
{
return Pi*radius*radius;  
}

void main()
{
	float radius;
	float ConcreteCost,FenceCost;
	cout<<"������Բ�İ뾶��";
	cin>>radius;
	Circle Pool(radius);
    Circle PoolRim(radius+3);
    ConcreteCost=(PoolRim.Area()-Pool.Area())*ConcretePrice;
	cout<<"���������:"<<ConcreteCost<<endl;
	FenceCost=PoolRim.Circumference()*FencePrice;
    cout<<"դ�������:"<<FenceCost<<endl;

}
