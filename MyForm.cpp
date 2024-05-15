#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main() 
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CompetenceTest::MyForm form;
	Application::Run(% form);
}
