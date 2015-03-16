class MergeSort{
public:
	template<typename T> void Sort(T arr[], int low, int high){
		int mid = (low + high)/2;
		if(low < high){
			Sort(arr, low, mid);
			Sort(arr, mid+1, high);
			Merge(arr, low, mid, high);
		}
	}

	template<typename T> void Merge(T arr[], int low, int mid, int high){
		//low to mid as the left array, mid+1 to high as the right array
		int llen = mid-low+2;
		int rlen = high-mid+1;
		T *left = new T[llen];
		T *right = new T[rlen];

		// copy the data from arr to the left and right array
		for(int i =0; i<llen-1;i++)
			left[i] = arr[low+i];

		for(int j=0; j< rlen-1; j++)
			right[j] = arr[mid+1+j];

		//set the sentinel
		left[llen-1] = numeric_limits<T>::max();
		right[rlen-1] = numeric_limits<T>::max();

		//merge the two array
		int i=0,j=0;
		for(int k=low; k<=high; k++){
			if(left[i]<right[j]){
				arr[k] = left[i];
				i++;
			}else{
				arr[k] = right[j];
				j++;
			}
		}

		//release the tmp memory
		delete []left;
		delete []right;
	}
};