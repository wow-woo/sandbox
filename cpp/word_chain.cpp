#include <iostream>
#include <string>
#include <vector>

using namespace std;
//lower case

bool is_said(vector<string> &words, string &word, int e)
{
	for (int i = 0; i < e; i++) {
		if (word == words[i]) {
			return true;
		}
	}
	return false;
}

vector<int> solution(int n, vector<string> words)
{
	vector<int> answer = {0, 0}; // [loser, turn]
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.

	int turn = 1;
	int size_words = words.size();

	for (int i = 0; i < size_words - 1; i++) {
		++turn;
		int size_word = words[i].size();

		if ((is_said(words, words[i + 1], i)) || words[i][size_word - 1] != words[i + 1][0]) {
			int loser = turn % n;
			if (loser == 0)
				loser = n;

			int p = turn / n;
			if (turn % n != 0)
				++p;

			answer[0] = loser;
			answer[1] = p;

			return answer;
		}
	}
	return answer;
}