#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 111;
//ԭʼ���飬ԭʼ���鱸�ݣ��ı�֮������� 
int origin[maxn], tempOri[maxn], changed[maxn];
int n;	//Ԫ�ظ���
 
bool isSame(int A[], int B[])
{
	for(int i=0; i<n; i++){
		if(A[i] != B[i]) return false;
	}
	return true;
}

void showArray(int A[]){
	for(int i=0; i<n; i++){
		printf("%d", A[i]);
		if(i < n-1) printf(" ");
	}
	printf("\n"); 
}

bool insertSort()
{
	bool flag = false;
	for(int i=1; i<n; i++){
		if(i != 1 && isSame(tempOri, changed)) flag = true;
		
		int j = i;
		while(j > 0 && tempOri[j-1] > tempOri[j]){
			swap(tempOri[j-1], tempOri[j]);
			j--;
		}
		if(flag == true) return true;	//�ﵽĿ������ 
	}
	return false;
}

void mergeSort()
{
	bool flag = false;
	for(int step=2; step/2 <= n; step *= 2){
		if(step != 2 && isSame(tempOri, changed)){
			flag = true;		//�м䲽����Ŀ����ͬ�����Ҳ��ǳ�ʼ���� 
		}
		for(int i=0; i<n; i+=step){
			sort(tempOri+i, tempOri+min(i+step, n));
		}
		if(flag == true){	//�ﵽĿ������
			showArray(tempOri);	//�����һ�������Ľ�� 
			return; 
		}
	}
}

int main()
{
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &origin[i]);	//��ʼ����
		tempOri[i] = origin[i];		//��������, ��������ж�����в��� 
	}
	for(int i=0; i<n; i++){
		scanf("%d", &changed[i]);
	} 
	if(insertSort()){	//����ǲ�������
		printf("Insertion Sort\n");
		showArray(tempOri); 
	}else{		//�ǹ鲢����
		printf("Merge Sort\n");
		for(int i=0; i<n; i++){
			tempOri[i] = origin[i];		//��ԭtempOri���� 
		} 
		mergeSort();		//���й鲢����, ��Ϊ���жϲ�������ʱ������������˲��� 
	}
	return 0;
}
