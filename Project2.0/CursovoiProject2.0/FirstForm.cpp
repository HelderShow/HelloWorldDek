#include "FirstForm.h"
#include <Windows.h>
using namespace CursovoiProject20;
[STAThreadAttribute]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew FirstForm);
	return 0;
}
