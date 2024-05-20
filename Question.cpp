#include "Question.h"

Question::Question(String^ _mainquestion, String^ _description, char _trueSolution)
{
	mainquestion = _mainquestion;
	description = _description;
	trueSolution = _trueSolution;
}
