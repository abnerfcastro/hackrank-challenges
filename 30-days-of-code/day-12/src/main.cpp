/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 9th, 2017
 */

#include <iostream>
#include <vector>

#include "../includes/person.h"
#include "../includes/student.h"

using namespace std;

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    
    cin >> firstName >> lastName >> id >> numScores;
    
    vector<int> scores;
  	for(int i = 0; i < numScores; i++) {
        int tmpScore;
        cin >> tmpScore;
		scores.push_back(tmpScore);
	}

	Student* s = new Student(firstName, lastName, id, scores);
	
    s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	
    return 0;
}