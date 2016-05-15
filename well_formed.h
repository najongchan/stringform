#include <iostream>
#include <vector>
using namespace std;

class WellForm{
private:
	int movecost;
	int heuristic;
	vector<char> wellformstring;
	vector<char> destination;

public:
	WellForm(vector<char> in, vector<char> dest,int cost,int heurist){
		wellformstring = in;
		destination = dest;
		movecost = cost;
		heuristic = heurist;
	}
	vector<char> getChar() {
		return this->wellformstring;
	}
	void setChar(vector<char> input_str){
		this->wellformstring = input_str;
		return;
	}
	int strsize(){
		return this->wellformstring.size();
	}
	void setDest(vector<char> dest){
		this->destination = dest;
	}
	bool wellformcheck();
	void charswap(int i);
	int getcost(){ return this->movecost; }
	bool possibility();
	void calculateHeuristic();
	int getEval();
	WellForm* expand(int index);
};





