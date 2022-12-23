#include "MyForm.h"
#include <string.h>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Sciber::MyForm form;
	Application::Run(% form);

}

