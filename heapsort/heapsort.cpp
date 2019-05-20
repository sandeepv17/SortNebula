
// C++ program for Heap Sort 
#include <iostream> 
#inlcude<algorithm>  //using algorithm library

using namespace std; 

// To apply heap concept with node at element i
// an index in arr[]. n is size of heap 
void heapify(int arr[], int n, int i) 
{ 
	int largest = i; // Initialize largest as root 
	int l = 2*i + 1; // left = 2*i + 1 
	int r = 2*i + 2; // right = 2*i + 2 

	// If left element is larger than root 
	if (l < n && arr[l] > arr[largest]) 
		largest = l; 

	// If right element is larger than largest so far 
	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	// If largest is not root 
	if (largest != i) 
	{ 
		swap(arr[i], arr[largest]); 

		// Recursively apply heap concept to the affected elements
		heapify(arr, n, largest); 
	} 
} 

// main function to do heap sort 
void heapSort(int arr[], int n) 
{ 
	// Build the heap (rearrange array) 
	for (int i = n / 2 - 1; i >= 0; i--) 
		heapify(arr, n, i); 

	// extracting the elements from the heap
	for (int i=n-1; i>=0; i--) 
	{ 
		//moving root to end
		swap(arr[0], arr[i]); 

		// calling max heapify at the end.
		heapify(arr, i, 0); 
	} 
} 



// Driver program 
int main() 
{ 
       int arr[10],i=0;
        std::vector<pair> v = { { 1, 2 }, { 1,5 }, { 3, 4 }, { 9, 0 } };
for (const pair &p: v) {
		arr[i++]=p.first;}

	int n = sizeof(arr)/sizeof(arr[0]); 

	heapSort(arr, n); 

	cout << "Sorted array is \n"; 


        for (int i=0;i<n;i++)
{
        for ((const pair &p: v) {

	if(arr[i]==v.first())
	cout<<v.first<<v.second
         }
 } 
