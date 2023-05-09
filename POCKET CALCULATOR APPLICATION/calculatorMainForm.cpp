#include "calculatorMainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	POCKETCALCULATORAPPLICATION::calculatorMainForm form;
	Application::Run(% form);
}