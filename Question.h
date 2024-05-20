#pragma once
#include <iostream>

using namespace System;


public ref class Question
{
	public: String^ mainquestion;
	public: String^ description;
	public: char trueSolution;

	public: Question(String^ _mainquestion, String^ _description, char _trueSolution);
	~Question() {}
};

