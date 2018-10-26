#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 111;
//原始数组，原始数组备份，改变之后的数组 
int origin[maxn], tempOri[maxn], changed[maxn];
int n;	//元素个数
 
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
		if(flag == true) return true;	//达到目标数组 
	}
	return false;
}

void mergeSort()
{
	bool flag = false;
	for(int step=2; step/2 <= n; step *= 2){
		if(step != 2 && isSame(tempOri, changed)){
			flag = true;		//中间步骤与目标相同，并且不是初始序列 
		}
		for(int i=0; i<n; i+=step){
			sort(tempOri+i, tempOri+min(i+step, n));
		}
		if(flag == true){	//达到目标数组
			showArray(tempOri);	//输出下一步排序后的结果 
			return; 
		}
	}
}

int main()
{
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &origin[i]);	//初始数组
		tempOri[i] = origin[i];		//备份数组, 排序过程中对其进行操作 
	}
	for(int i=0; i<n; i++){
		scanf("%d", &changed[i]);
	} 
	if(insertSort()){	//如果是插入排序
		printf("Insertion Sort\n");
		showArray(tempOri); 
	}else{		//是归并排序
		printf("Merge Sort\n");
		for(int i=0; i<n; i++){
			tempOri[i] = origin[i];		//还原tempOri数组 
		} 
		mergeSort();		//进行归并排序, 因为在判断插入排序时，对数组进行了操作 
	}
	return 0;
}
