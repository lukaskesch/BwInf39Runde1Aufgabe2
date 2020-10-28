#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>

#include "piece.h"

using namespace std;

//Variables
const int number_of_tests = 4;
vector<bool> Pieces_in_use(9);
vector<vector<piece>> Pieces(9);
vector<piece*> Puzzel(9);
vector<piece*> Solution(9);

//Methods
void print_user_greetings();
void read_input(int number);

void print_solution();
void cleanup();
int main();