#include<bits/stdc++.h>
using namespace std;


//O(n log n)

bool Anagram_Checker_sorting(string s1,string s2) {


	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	if(s1==s2){
		return 1;
	}
	else{
		return 0;
	}
}



//O(n)

bool Anagram_Checker_Frequency(string s1,string s2) {

	int arr_string[123] = {0};// a to z er value range 97-122


	for (int i = 0; i < s1.length(); ++i)
	{
		arr_string[s1[i]]++;
	}

	for (int i = 0; i < s1.length(); ++i)
	{
		arr_string[s2[i]]--;
	}

	for (int i = 0; i < 123; ++i)
	{
		if(arr_string[i]!=0){
			return 0;
		}
	}

	return 1;
}

//can also be done with unordered map

int main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout << Anagram_Checker_Frequency("1201","1112") << endl;













}
