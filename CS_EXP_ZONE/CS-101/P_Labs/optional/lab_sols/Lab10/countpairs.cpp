#include <iostream>
using namespace std;

// function to find first index >= x
int lowerIndex(int arr[], int n, int x)
{
    int l = 0, h = n - 1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] >= x)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return l;
}
 
// function to find last index <= y
int upperIndex(int arr[], int n, int y)
{
    int l = 0, h = n - 1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] <= y)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return h;
}
 
// function to count elements within given range
int countInRange(int arr[], int n, int x, int y)
{
    int count = 0;
    count = upperIndex(arr, n, y) - lowerIndex(arr, n, x) + 1;
    return count;
}

int main(){
	int n, l, r;
	cin >> n >> l >> r;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int i1, i2;
	int ans = 0;
	for(int i=0; i<n; i++){
		if(a[i]<=r && 2*a[i]>=l){
			ans += countInRange(a, i, l-a[i], r-a[i]);
		}
	}

	cout << ans << endl;
}
