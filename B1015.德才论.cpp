#include<cstdio>
#include<algorithm>
using namespace std;

struct Student{
	int id;		//׼��֤�� 
	int de, cai, sum;	//�·�,�ŷ� ,�ܷ� 
	int flag;	//��Ǹ�ѧ�����ĸ���� 
}stu[100010];

bool cmp(Student a, Student b)
{
	if(a.flag != b.flag) return a.flag < b.flag;	//���С����ǰ��
	else if(a.sum != b.sum) return a.sum > b.sum;	//�ִܷ����ǰ 
	else if(a.de != b.de) return a.de > b.de;	//�·ִӴ�С����
	else return a.id < b.id; 
}

int main()
{
	int N, L, H;
	scanf("%d %d %d", &N, &L, &H);
	int cnt = N, del = 0;
	for(int i=0; i<N; i++){
		scanf("%d %d %d", &stu[i].id, &stu[i].de, &stu[i].cai);
		if(stu[i].de < L || stu[i].cai < L){
			cnt--;
			del++;
			stu[i].flag = 0;
			continue;
		}
		stu[i].sum = stu[i].de + stu[i].cai;
		if(stu[i].de >= H && stu[i].cai >= H){
			stu[i].flag = 1;
		}else if(stu[i].de >= H && stu[i].cai < H){
			stu[i].flag = 2;
		}else if(stu[i].cai < H && stu[i].de < H && stu[i].de >= stu[i].cai){
			stu[i].flag = 3;
		}else{
			stu[i].flag = 4;
		}
	} 
	sort(stu, stu + N, cmp);
	printf("%d\n", cnt);
	for(int i=del; i<N; i++){
		printf("%d %d %d\n", stu[i].id, stu[i].de, stu[i].cai);
	}	
	return 0;
 } 
