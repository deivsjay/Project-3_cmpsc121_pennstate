#include <iostream>
#include <string>
using namespace std;

void scoring(double&, int);		// void function protocol
double minimum(double, double, double, double, double, double, double);	// protocol for the function that finds the minimum
double maximum(double, double, double, double, double, double, double);	// protocol for the function that finds the maximum
double avg(double, double, double, double, double, double, double);		// protocol for the function that finds the average

/*
Divya Jagadeesh
CMPSC 121 - Spring 2015
Sec 004

Purpose:	The main function ouputs the gymnast's score.
Input:		gymnast (name of gymnast)
Output:		score1 (score from judge 1) (passed by reference)
			score2 (score from judge 2) (passed by reference)
			score3 (score from judge 3) (passed by reference)
			score4 (score from judge 4) (passed by reference)
			score5 (score from judge 5) (passed by reference)
			score6 (score from judge 6) (passed by reference)
			score7 (score from judge 7) (passed by reference)
			average (average of judges score)
			gymnast
Processing:	The user is asked to enter the name of the gymnast.
			The void function is called 7 times (once for each judge).
			scoring(score#, #)
			for # = 1,...,7.
			The average of the judges' scores is stored into average by calling the function avg.
			double average = avg(score1, score2, score3, score4, score5, score6, score7)
			The gymnast's name and average score is couted.
*/

int main() {

	string gymnast;		// name of string
	double score1 = 0;	// score from judge 1
	double score2 = 0;	// score from judge 2
	double score3 = 0;	// score from judge 3
	double score4 = 0;	// score from judge 4
	double score5 = 0;	// score from judge 5
	double score6 = 0;	// score from judge 6
	double score7 = 0;	// score from judge 7

	cout << "Enter the name of the gymnast that will be scored today: ";
	getline(cin, gymnast);	// user inputs gymnast's name

	scoring(score1, 1);		// called void function to store judge 1's score in score 1
	scoring(score2, 2);		// called void function to store judge 2's score in score 2
	scoring(score3, 3);		// called void function to store judge 3's score in score 3
	scoring(score4, 4);		// called void function to store judge 4's score in score 4
	scoring(score5, 5);		// called void function to store judge 5's score in score 5
	scoring(score6, 6);		// called void function to store judge 6's score in score 6
	scoring(score7, 7);		// called void function to store judge 7's score in score 7

	// calls avg function and stores value into variable average
	double average = avg(score1, score2, score3, score4, score5, score6, score7);

	// outputs gymnast's name and average score
	cout << gymnast << "'s average score is " << average << "." << endl;

	return 0;
}

/*
Divya Jagadeesh
CMPSC 121 - Spring 2015
Sec 004

Purpose:	This function asks the user to input the judges' scores.
Input:		score (passed by reference)
			judge
Output:		score
Processing: The user is asked to enter the score from judge # and the score is saved into the variable score.
			A while loop is executed if the score isn't within 0 - 10.
*/

void scoring(double& score, int judge) {
	
	cout << "Enter the score from Judge " << judge << " : ";
	cin >> score;	// user inputs judge's score

	// makes sure score is between 0-10, otherwise user must input again
	while (score < 0 || score > 10) {
		cout << "The score must be greater than 0 or less than 10 (inclusive)." << endl
			<< "Please enter a valid score for Judge " << judge << " : ";
		cin >> score;
	}
}

/*
Divya Jagadeesh
CMPSC 121 - Spring 2015
Sec 004

Purpose:	This function determines the minimum score of the seven judges' scores.
Input:		minscore1 (score from judge 1)
			minscore2 (score from judge 2)
			minscore3 (score from judge 3)
			minscore4 (score from judge 4)
			minscore5 (score from judge 5)
			minscore6 (score from judge 6)
			minscore7 (score from judge 7)
Output:		min (minimum of scores) (returned)
Processing:	6 conditional operators were used to evaluate the minimum of the 7 scores after min was initialized to minscore1.
			min > minscore# ? min = minscore# : min = min	
			for # = 2,...,7.
			min was returned.
*/

double minimum(double minscore1, double minscore2, double minscore3, double minscore4, double minscore5, double minscore6, double minscore7) {
	double min = minscore1;		// first value to min
	// finds min score through conditional operators
	min > minscore2 ? min = minscore2 : min = min;
	min > minscore3 ? min = minscore3 : min = min;
	min > minscore4 ? min = minscore4 : min = min;
	min > minscore5 ? min = minscore5 : min = min;
	min > minscore6 ? min = minscore6 : min = min;
	min > minscore7 ? min = minscore7 : min = min;
	
	return min;	// returns min value
}

/*
Divya Jagadeesh
CMPSC 121 - Spring 2015
Sec 004

Purpose:	This function determines the maximum score of the seven judges' scores.
Input:		maxscore1 (score from judge 1)
			maxscore2 (score from judge 2)
			maxscore3 (score from judge 3)
			maxscore4 (score from judge 4)
			maxscore5 (score from judge 5)
			maxscore6 (score from judge 6)
			maxscore7 (score from judge 7)
Output:		max (maximum of scores) (returned)
Processing:	6 conditional operators were used to evaluate the maximum of the 7 scores after max was initialized to maxscore1.
			max < maxscore# ? max = maxscore# : max = max
			for # = 2,...,7.
			max was returned.
*/

double maximum(double maxscore1, double maxscore2, double maxscore3, double maxscore4, double maxscore5, double maxscore6, double maxscore7) {
	double max = maxscore1;		// first value to max
	// // finds max score through conditional operators
	max < maxscore2 ? max = maxscore2 : max = max;
	max < maxscore3 ? max = maxscore3 : max = max;
	max < maxscore4 ? max = maxscore4 : max = max;
	max < maxscore5 ? max = maxscore5 : max = max;
	max < maxscore6 ? max = maxscore6 : max = max;
	max < maxscore7 ? max = maxscore7 : max = max;

	return max;	//returns max value
}

/*
Divya Jagadeesh
CMPSC 121 - Spring 2015
Sec 004

Purpose:	This function determines the average score (excluding the minimum and maximum) of the seven judges' scores.
Input:		avgscore1 (score from judge 1)
			avgscore2 (score from judge 2)
			avgscore3 (score from judge 3)
			avgscore4 (score from judge 4)
			avgscore5 (score from judge 5)
			avgscore6 (score from judge 6)
			avgscore7 (score from judge 7)
Output:		min (minimum of scores)
			maximum (maximum of scores)
			avg (average of scores) (returned)
Processing:	The function that finds the minimum was called and assigned to variable min.
			double min = minimum(avgscore1, avgscore2, avgscore3, avgscore4, avgscore5, avgscore6, avgscore7)
			The function that finds the maximum was called and assigned to variable max.
			double max = maximum(avgscore1, avgscore2, avgscore3, avgscore4, avgscore5, avgscore6, avgscore7)
			The average of the 7 judges' scores was calculated without the minimum and maximum values.
			double avg = (avgscore1 + avgscore2 + avgscore3 + avgscore4 + avgscore5 + avgscore6 + avgscore7 - min - max) / 5
			avg was returned.
*/

double avg(double avgscore1, double avgscore2, double avgscore3, double avgscore4, double avgscore5, double avgscore6, double avgscore7) {
	// calls minimum function and stores value into variable min
	double min = minimum(avgscore1, avgscore2, avgscore3, avgscore4, avgscore5, avgscore6, avgscore7);
	// calls maximum function and stores value into variable max
	double max = maximum(avgscore1, avgscore2, avgscore3, avgscore4, avgscore5, avgscore6, avgscore7);
	// finds average and stores into variable avg
	double avg = (avgscore1 + avgscore2 + avgscore3 + avgscore4 + avgscore5 + avgscore6 + avgscore7 - min - max) / 5;

	return avg;	// returns avg value
}