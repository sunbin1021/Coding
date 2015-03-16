class BubbleSort{
public:
	void Sort(int *A, int left, int right){
		int i,j,tmp;
		for(i=left;i<=right-1;i++)
			for(j=i+1;j<=right;j++){
				if(A[i]>A[j]){
					tmp = A[i];
					A[i] = A[j];
					A[j] = tmp;
				}
			}
	}
	// version 2
	template<typename T> void Sort(T arr[], int len){
		int i,j;
		T tmp;
		for(i=0;i<len-1;i++){
			printArray(arr,0,len-1);
			for(j=0;j<len-1-i;j++){
				cout << "compare:" << arr[j] << " " << arr[j+1] << endl;
				if(arr[j+1]<arr[j]){
					tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;
				}
			}
			printArray(arr,0,len-1);
		}
	}
	// this is the failure version
	template<typename T> void _Sort(T arr[], int len){
		int i,j;
		T tmp;
		for(i=0;i<len-1;i++){
			printArray(arr,0,len-1);
			for(j=len-1-i;j>0;j--){
				cout << "compare:" << arr[j-1] << " " << arr[j] << endl;
				if(arr[j]>arr[j-1]){
					tmp = arr[j];
					arr[j] = arr[j-1];
					arr[j-1] = tmp;
				}
			}
			printArray(arr,0,len-1);
		}
	}
	template<typename T> void printArray(T *A,int left,int right){
	cout<< "arr:[ ";
	for(int i=left;i<=right;i++){
		cout<< A[i] << " ";
	}
	cout << "]" << endl;
}
};