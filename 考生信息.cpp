#include<stdio.h> 
struct student //����ṹ�壨������Ϣ�� 
{
	char num[100];//ѧ�� 
	int ji;//�Ի��� 
	int test;//������λ�� 
};
int main()
{
	struct student stu[1000];
	int n; //�������� 
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%s %d %d",&stu[i].num,&stu[i].ji,&stu[i].test);//���뿼����Ϣ 
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
				printf("%s %d\n",stu[i].num,stu[i].test);//�������ѧ�ż�������λ�� 
			}
		}
	}
	return 0;
}
