/* Finding the minimum and maximum of element an array */

/* Divide and Conquer */
void minmax(int arr[], int i, int j, int* minEl, int* maxEl){
	if(j - i == 0){
		*minEl = arr[i];
		*maxEl = arr[i];
	} else if(j - i == 1){
		if(arr[i] >= arr[j]){
			*minEl = arr[j];
			*maxEl = arr[i];
		} else{
			*minEl = arr[i];
			*maxEl = arr[j];
		}
	} else{
		int min1, min2, max1, max2;
		int k = (i + j) / 2;
		minmax(arr, i, k, &min1, &max1);
		minmax(arr, k+1, j, &min2, &max2);
		*minEl = (min1 <= min2) ? min1 : min2;
		*maxEl = (max1 >= max2) ? max1 : max2;
	}
}
