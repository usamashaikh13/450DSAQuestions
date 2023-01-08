// C++ program for the union of two arrays using Set
#include <bits/stdc++.h>
using namespace std;
void getUnion(int a[], int n, int b[], int m)
{
    set<int> s;
    for(int i = 0; i < n; i++){
        s.insert(a[i]);
    }
    for(int j = 0; j < m; j++){
        s.insert(b[j]);
    }
    cout <<"Number of elements after Union Operation is: "<<s.size();
    cout <<"The Union set of both arrays is: ";
    for(auto itr = s.begin(); itr!=s.end(); itr++){
        cout <<*itr<<" ";
    }
	
}
int main()
{
	int a[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
    int b[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };

    getUnion(a, 9, b, 10);

}
