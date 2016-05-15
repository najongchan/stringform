using namespace std;
#include "well_formed.h"
#include <iostream>
void WellForm::charswap(int i){
	vector<char> temp_str1 = this->wellformstring;

	this->wellformstring[i] = temp_str1[i + 1];
	this->wellformstring[i + 1] = temp_str1[i];
	
	this->movecost++;
	this->calculateHeuristic();
}
void WellForm::calculateHeuristic(){
	this->heuristic = 0;
	for (int i = 0; i < this->destination.size(); i++){
		if (this->wellformstring[i] != this->destination[i])
			this->heuristic++;
	}
}
int WellForm::getEval(){
	return (this->movecost + this->heuristic);
}
bool WellForm::possibility(){
	if ( this->wellformcheck() == false)
		return false;
	//if (this->movecost > this->wellformstring.size())
	//	return false;
	else
		true;
}
WellForm* WellForm::expand(int index){
	WellForm* newWellForm = new WellForm(this->wellformstring, this->destination, this->movecost, this->heuristic);
	newWellForm->charswap(index);
	if (newWellForm->wellformcheck()){
		return newWellForm;
	}
	else{
		return nullptr;
	}
}
bool WellForm::wellformcheck(){
	int str_size = this->wellformstring.size();
	int astr_size = this->destination.size();
	int count=0;
	int acount = 0;
	int i;
	if ((str_size % 2) != 0){
		return false;
	}
	if ((astr_size % 2) != 0){
		return false;
	}
	for (i = 0; i < str_size; i++){
		if (this->wellformstring[i] == 'a'){
			count++;
		}
		if (this->wellformstring[i] == 'b'){
			count--;
		}
		if (count < 0){
			return false;
		}
	}
	for (i = 0; i < str_size; i++){
		if (this->destination[i] == 'a'){
			acount++;
		}
		if (this->destination[i] == 'b'){
			acount--;
		}
		if (acount < 0){
			return false;
		}
	}
	if (count == 0 && acount ==0){
		return true;
	}
	else
	{
		return false;
	}
}