#include <iostream>
#include <vector>
#include "well_formed.h"
using namespace std;

class StringFormationMain{
private:
		vector<char> answer_str;
		vector<WellForm*> stateList;
		vector<vector<char>> closedList;
public:
		StringFormationMain();
		void start();
};