#pragma once
#include <fstream>
#include <iostream>

using namespace System;

public ref class User
{
    public: int score;
    public: int progress;
    public: String^ username;
    public: void SaveScoreNS();
    public: User(String^ _nickname, int _score, int progress);
    ~User() {}
};

