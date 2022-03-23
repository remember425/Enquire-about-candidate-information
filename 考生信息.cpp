#include<stdio.h> 
struct student //定义结构体（考生信息） 
{
	char num[100];//学号 
	int ji;//试机号 
	int test;//考试座位号 
};
int main()
{
	struct student stu[1000];
	int n; //考生人数 
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%s %d %d",&stu[i].num,&stu[i].ji,&stu[i].test);//输入考生信息 
	}
	int j;
	int b[1000];
	scanf("%d",&j);
	int h;
	for(i=0;i<j;i++)
	{
		scanf("%d",&b[i]);
	}
	for(h=0;h<j;h++)
	{
		for(i=0;i<n;i++)
		{
			if(stu[i].ji==b[h])
			{
				printf("%s %d\n",stu[i].num,stu[i].test);//输出考生学号及考试座位号 
			}
		}
	}
	return 0;
}
