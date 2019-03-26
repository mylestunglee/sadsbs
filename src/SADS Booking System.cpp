// SADS Booking System.cpp : main project file.

#include "frmLogin.h"

using namespace SADSBookingSystem;

[STAThreadAttribute]
int main()
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew frmLogin());
	return 0;
}
