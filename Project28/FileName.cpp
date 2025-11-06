#include <iostream>

using namespace std;

//function prototype
int count_letters(string str);


int main(void) {

	string str = "I don't give a Holstein for programmers that can only spell a variable one way. (Dr. Stephany)";
	cout << "length: " << count_letters(str) << endl;

}

int count_letters(string str) {
	
	int letters = 0;
	char invalid[] = { ' ', ',', '.', '\'', '\"', '(', ')', '0', '1', '2', '3', '4', '5','6', '7', '8', '9'};

	for (int i = 0; i < str.length(); i++) {
		
		bool isLetter = true;

		for (int j = 0; j < sizeof(invalid) / sizeof(invalid[0]); j++) {
			if (str[i] == invalid[j]) {
				isLetter = false;
			}
		}
		
		if (isLetter) { letters++; }

	}

	return letters;
}