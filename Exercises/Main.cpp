/* This main function is used to call the exercises included
	in the header file. 
	For reference see 'exercises.h'.
*/

#include <iostream>
#include <string>
#include <vector>
#include "Exercises1.h"
#include "Exercises2.h"
#include "Exercises3.h"
#include "Exercises4.h"

using namespace std;

int main()
{
	vector<string> vetor = { "b", "z", "x","k","l","k","a"};

	bubblesort(vetor);

	for (int i = 0; i < vetor.size(); i++)
		cout << vetor.at(i) << "  ";

	cout << endl;

	cout << binarySearch(vetor, "l");
}