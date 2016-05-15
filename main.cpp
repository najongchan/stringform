#include <iostream>
#include <vector>
#include <string>

#include "well_formed.h"
#include "state.h"
using namespace std;

int main(){
	char xstr[] = "";
	char ystr[] = "";
	cin >> xstr;
	cin >> ystr;

	vector<char> input_str;
	vector<char> result_str;
	for (int i = 0; i < strlen(xstr); i++){
		input_str.push_back(xstr[i]);
	}
	for (int i = 0; i < strlen(ystr); i++){
		result_str.push_back(ystr[i]);
	}
	int index = 0;

	WellForm *string = new WellForm(input_str, result_str, 0,0);

	while (1){
		
	}
	return 0;
}