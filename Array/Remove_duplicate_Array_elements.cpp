#include<bits/stdc++.h>
using namespace std;

vector<int> duplecate_elements_remover_Map(int *arr, int n) {

	unordered_map<int, int> frequency_map;
	vector<int> new_arr;

	for (int i = 0; i < n; ++i)
	{
		frequency_map[arr[i]]++;
	}

	for (auto x : frequency_map) {
		
		new_arr.push_back(x.first);

	}

	for(auto x: new_arr){
		cout<<x<<endl;
	}


	return new_arr;


}



int main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[6] = {1,2,3,1,2,3};
	std::vector<int> v;

	v =duplecate_elements_remover_sorted(arr, 6);




	//cout << Anagram_Checker_Frequency("1201","1112") << endl;




}
