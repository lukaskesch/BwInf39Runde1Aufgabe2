#include "BwInf39Runde1Aufgabe2.h"


void print_user_greetings()
{
	cout << "Hello there!" << endl;
	cout << "This programm will loop through all the given puzzels and print their solution." << endl;
}

void read_input(int number)
{
	string file_name = "examples/puzzel";
	file_name.append(to_string(number));
	file_name.append(".txt");
	cout << endl << "file: " << file_name << endl;
	ifstream input_file_stream(file_name);

	string dummy;
	getline(input_file_stream, dummy);
	getline(input_file_stream, dummy);

	int left, right, center;
	string s_left, s_right, s_center;
	for (int i = 0; i < 9; i++)
	{
		//Pieces.push_back(vector<piece>());
		input_file_stream >> left;
		input_file_stream >> right;
		input_file_stream >> center;

		Pieces[i].push_back(piece(left, right, center));
		Pieces[i].push_back(piece(right, center, left));
		Pieces[i].push_back(piece(center, left, right));
	}
}


void print_solution()
{

}

void cleanup()
{

}

int main()
{
	print_user_greetings();

	for (int i = 0; i < number_of_tests; i++)
	{
		read_input(i);

		print_solution();
		cleanup();
	}

	return 0;
}

