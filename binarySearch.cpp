// recursive binarySearch
int binarySearch(int goal, int *arr, int s, int e)
{
	int mid = (e-s)/2+s;
	if(mid > e)
		return -1;
	if(arr[mid] == goal)
		return  mid;
	if(arr[mid] < goal)
		return binarySearch(goal, arr, mid+1, e);
	else
		return binarySearch(goal, arr, s, mid-1);
}
