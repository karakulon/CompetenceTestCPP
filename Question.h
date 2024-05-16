#pragma once
#include <iostream>

using namespace System;


public ref class Question
{
	public: char complexity;
	public: float rate;
	public: String^ mainquestion;
	public: String^ description;
	public: String^ solutionA;
	public: String^ solutionB;
	public: String^ solutionC;
	public: String^ solutionD;
	public: char trueSolution;

	public: Question(String^ _mainquestion, String^ _description, String^ _solutionA, String^ _solutionB, String^ _solutionC, String^ _solutionD, char _trueSolution, float _rate, char _complexity);
	~Question() {}
};

