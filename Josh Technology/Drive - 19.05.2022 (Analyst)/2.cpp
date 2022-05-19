// ramnitcode27
// Function to rearrange the array, such that all the negative appear on the left side
#include <bits/stdc++.h>
using namespace std;

void sortNegative(int arr[], int N)
{
	int i, ind;
    for (i = 0; i < N; i++) {
		if (arr[i] == 0) {
			ind = i;
			break;
		}
	}

	int j = -1, k, temp;
	for (k = 0; k < N; k++) {
		if (arr[k] < 0) {
			j += 1;
            if (arr[j] == 0)
				j += 1;
			swap(arr[j], arr[k]);
		}
	}
	swap(arr[ind], arr[j]);
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	sortNegative(arr, n);
	return 0;
}