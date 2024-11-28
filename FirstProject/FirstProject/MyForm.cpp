#include "MyForm.h"

using namespace FirstProject;

int main()
{
    // Initialize the application
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // Create and run the form
    Application::Run(gcnew MyForm());
}
