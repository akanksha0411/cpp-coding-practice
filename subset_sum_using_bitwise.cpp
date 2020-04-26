#include <iostream>
using namespace std;

int main(){

  int N;
  cout << "Enter size of the array";
  cin >> N;

  int a[N];

  for(int i=0; i<N; i++){
    cout << "Enter element " << i << " ";
    cin >> a[i];  
    }

  int S;
  cout << "Enter a number for subset sum " << endl;
  cin >> S;

  bool flag = false;

  // O(N)
  for (int i=0; i<sizeof(a)/sizeof(a[0]); i++){
    cout << "Array element " << i << " is " <<a[i] << endl;
    }

  for(int mask=0; mask<(1 << 5); mask++){
    long long sum_of_i_subset = 0;
    for(int i=0; i<5; i++){
      if(mask & (1<<i)){
	sum_of_i_subset += a[i];
	}
      }

    if(sum_of_i_subset == S){
      flag = true;
      }
    }
  if(flag){
    cout << "Subset found" << endl;
    }
  else cout << "No subset exists" << endl;
return 0;
}
