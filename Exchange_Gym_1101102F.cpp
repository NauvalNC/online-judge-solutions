/*
 * Solution for Exchange Gym - 101102F
 * Problem: https://vjudge.net/problem/Gym-101102F
*/

#include <bits/stdc++.h>

using namespace std;

// Maximum length of string input is 10^5
const int MAX = 100005;

int main() 
{
	int cases;
	scanf("%d", &cases);

	char str[MAX]; getchar();

	// Track the frequency and visited alphabet
	int freq[26];
	int flag[26];

	while(cases--) 
	{
		scanf("%[^\n]", str); getchar();

		memset(freq, 0, sizeof(freq));
		memset(flag, 0, sizeof(flag));

		// Helper variable to store letter that should be exchanged
		int a, b;
		a = b = -1;

		int len = strlen(str);

		// Track the frequency of each letter in string
		// This will determine whether the letter is in string or not
		for (int i = 0; i < len; i++) 
		{
			freq[str[i]-'a'] = 1;
		}

		// Loop through the string character per character
		for (int i = 0; i < len; i++) 
		{
			// Set the letter to be visited
			flag[str[i]-'a'] = 1;

			// If the letters to exchange was found, stop. 
			if (a != -1) break;

			// If the letter is 'a', then it has no lesser lexicographical order than it
			// So continue
			if (str[i]-'a' == 0) continue;

			// Find the first lexicographical order from current letter
			for (int j = 0; j < str[i]-'a'; j++) 
			{
				// First lexicographical order found
				if (freq[j] > 0 && flag[j] == 0) 
				{
					a = str[i]-'a';
					b = j;
					break;
				}
			}
		}

		// If the letters to exchange was found, exchange them
		if (a != -1) 
		{
			for (int i = 0; i < len; i++) 
			{
				if (str[i]-'a' == a) str[i] = b+'a';
				else if (str[i]-'a' == b) str[i] = a+'a';
			}
		}

		printf("%s\n", str);
	}

	return 0;
}
