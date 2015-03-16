class InsertionSort{
public:
	void Sort(int *A, int left, int right){
		int i,j,tmp;
		for(i=left+1;i<=right;i++){
			tmp = A[i];
			for(j=i-1;j>=left && A[j]>tmp;j--)
				A[j+1] = A[j];
			A[j+1] = tmp;
		}
	}
	// length as param, if T is a class, you must override the >
	template<typename T> void _Sort(T arr[], int len){
		int i,j;
		T temp;
		for(i=1;i<len;i++){
			temp = arr[i];
			for(j=i-1;j>=0 && arr[j]>temp;j--)
				arr[j+1] = arr[j];
			arr[j+1] = temp;
		}
	}
	// pointer as param
	template<typename T> void _Sort(T *first, T *last){
		T *i,*j;
		T tmp;
		for(i=first+1;i<=last;i++)
		{
			tmp = *i;
			for(j=i-1;j>=first && *j>tmp;j--)
				*(j+1) = *j;
			*(j+1) = tmp;
		}
	}
};