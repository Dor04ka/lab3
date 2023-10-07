#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	
	long size; // размер массива
	cin >> size;
	long* m = new long[size]; // сам массив
	for (long i = 0; i < size; ++i) { m[i] = 0; }

	string s1; // строка значений, которую вводим
	cin >> s1;
	string temp = ""; //промежуточная строка, через которую будем писать числа в массив
	long prob = 0; // счетчик пробелов в строке чисел / номер элемента в массиве
	
	for (long i = 0; i < s1.length(); ++i) {
		if (s1[i] != ' ') {
			temp += s1[i];
		}
		else {
			m[prob] = stoi(temp);
			prob += 1;
			temp = "";
		}
	}
	for (long i = 0; i < size; ++i) {
		cout << m[i] << " ";
	}
}