#include <iostream>

using namespace std;

//function prototype
int count_letters(string str);


int main(void) {

	string str = "h...h";
	cout << "length: " << count_letters(str);

}

int count_letters(string str) {
	
	int letters = 0;
	char punctuation[] = { ' ', ',', '.', '\'', '\"', '(', ')' };

	for (int i = 0; i < str.length(); i++) {
		
		bool isLetter = true;

		for (int j = 0; j < 7; j++) {
			if (str[i] == punctuation[j]) {
				isLetter = false;
			}
		}
		
		if (isLetter) { letters++; }

	}

	return letters;
}