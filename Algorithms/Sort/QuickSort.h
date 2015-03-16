#include<iostream>
using namespace std;
class QSort{
public:
	void QuickSort(int* A, int left, int right){
		if(right>left){
			int i = PartitionLeftPiovt(A,left,right);
			QuickSort(A,left,i-1);
			QuickSort(A,i+1,right);
		}
	}
	int PartitionLeftPiovt(int *A, int left, int right){
		int i= left;
		int j= right;
		int pv = A[left];

		while(i!=j){
			//from right to left
			while(j!=i && A[j]>pv)
				j--;
			if(i<j){
				A[i] = A[j];
				i++;
			}

			//from left to right
			while(i!=j && A[i]<pv)
				i++;
				
			if(i<j) A[j] = A[i];
		}

		A[i] = pv;
		return i;
	}
	int PartitionFromRightPiovt(int *A, int left, int right){
		int i= left-1;
		int r = A[right];

		for(int j =left;j<right;j++){
			if(A[j]<=r){
				i++;
				sawp(A,i,j);
			}
		}
		sawp(A,++i,right);
		return i;
	}
	void sawp(int *A,int i,int j){
		int tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;
	}
	void printArray(int *A,int left,int right){
		cout<< "A:[ ";
		for(int i=left;i<=right;i++){
			cout<< A[i] << " ";
		}
		cout << "]" << endl;
	}
};

