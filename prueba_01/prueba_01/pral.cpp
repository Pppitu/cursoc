#include "MyForm.h"
#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	prueba01::MyForm form;
	Application::Run(% form);
}
