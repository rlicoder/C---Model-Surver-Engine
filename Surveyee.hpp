#ifndef SURVEYEE_HPP
#define SURVEYEE_HPP
#include "Form.hpp"

class Surveyee
{
    private:
	vector<Form> answered;
	string name;
	string id;
    public:
	Surveyee();
	Surveyee(string sname, string sid);

	string getName() { return this->name; };
	string getID() { return this->id; };

	void getSurveyResults();

	void insertSurvey(Form x);

	string saveResults();

	void pushSurvey(vector<Form> a);

};

#endif /* SURVEYEE_HPP */

