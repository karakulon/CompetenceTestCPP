#include "Question.h"

Question::Question(String^ _mainquestion, String^ _description, String^ _solutionA, String^  _solutionB, String^ _solutionC, String^ _solutionD, String^ _trueSolution, float _rate, char _complexity)
{
	mainquestion = _mainquestion;
	description = _description;
	solutionA = _solutionA;
	solutionB = _solutionB;
	solutionC = _solutionC;
	solutionD = _solutionD;
	trueSolution = _trueSolution;
	rate = _rate;
	complexity = _complexity;
}
