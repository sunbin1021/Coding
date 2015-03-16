class SelectionSort{
public:
	void Sort(int *A, int left, int right){
		int min = left+1;
		for(int i=left;i<=right-1;i++){
			for(int j=i+1;j<=right;j++)
				if(A[min]>A[j]) min = j; 
			if(A[i]>A[min]){
				int tmp = A[i];
				A[i] = A[min];
				A[min] = tmp;
			}
		}
	}
};