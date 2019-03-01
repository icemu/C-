#include "iostream"
#include "iomanip"
using namespace std;
const int M(3),N(3);//M个学生，N门成绩
int main()
{
	char Stu_name[M][20]={0};
	float Stu_score[M][N]={0};
	char Search_name[20]={0};
	int i=0,j=0;
	for(i=0;i<M;i++)
	{
		cout<<"请输入第"<<i+1<<"名学生姓名:";
		cin>>Stu_name[i];
	}
	for(i=0;i<M;i++)
	{
		cout<<"请输入第"<<i+1<<"名学生的"<<N<<"门成绩:";
		for(j=0;j<N;j++)
		{
			cin>>Stu_score[i][j];
		}

	}
	cout<<"请输入查找学生的姓名:";
		cin>>Search_name;
	for(i=0;i<M;i++)
	{
		int flag;
		flag=strncmp(Search_name,Stu_name[i],20);
		if(flag==0)
		{
			for(j=0;j<N;j++)
			{
				cout<<"成绩"<<j+1<<"为:";
				cout<<setw(5)<<Stu_score[i][j]<<endl;
			}break;
		}
	}
	cout<<"学生成绩表："<<endl;
	for(i=0;i<M+1;i++)
	{	
	if(i<M)
	{
	 cout<<setw(10)<<Stu_name[i]<<" ";
     for(j=0;j<N;j++)
	 {
		 cout<<setw(6)<<Stu_score[i][j]<<" ";
	 }
	} 
	cout<<endl;
	}
return 0;

}
