#include<bits/stdc++.h>
using namespace std;

//TC should be O(n/2) but we can assume O(n)
bool Plaindrome_Checker_loop(string s) {
	for (int i = 0, j = s.length() - 1 ; i < s.length(); j--, i++) {

		if (i <= j) {

			if (s[i] != s[j]) {
				return 0;
			}

		}
	}

	return 1;
}

//TC should be O(n/2) but we can assume O(n)
bool palindrome_checker_recursion(string s, int L, int R) {
	
	if (L >= R) return 1;
	if (s[L] != s[R]) return 0;
	return palindrome_checker_recursion(s, L + 1, R - 1);

}


int main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout << palindrome_checker_recursion("1001",0,3) << endl;









}
