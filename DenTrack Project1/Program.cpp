#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
#include "AdminMainForm.h"
#include "AdminLoginForm.h"
#include "AdminRegistrationForm.h"
#include "AdminMainForm.h"

using namespace System;
using namespace System::Windows::Forms;

User^ ShowLoginForm(bool& switchToAdmin); // Forward declaration with flag
User^ ShowRegisterForm(bool& switchToAdmin); // Forward declaration with flag
Admin^ ShowAdminLoginForm(bool& switchToUser); // Forward declaration with flag

User^ ShowLoginForm(bool& switchToAdmin) {
    DenTrackProject1::LoginForm loginForm;
    loginForm.ShowDialog();

    if (loginForm.switchToRegister) {
        return ShowRegisterForm(switchToAdmin);
    }
    else if (loginForm.switchToAdmin) {
        switchToAdmin = true;
        return nullptr;  // Switch to admin login form
    }
    else {
        return loginForm.user;
    }
}

User^ ShowRegisterForm(bool& switchToAdmin) {
    DenTrackProject1::RegisterForm registerForm;
    registerForm.ShowDialog();

    if (registerForm.switchToLogin) {
        return ShowLoginForm(switchToAdmin); // Go back to login form
    }
    else {
        return registerForm.user;
    }
}

Admin^ ShowAdminLoginForm(bool& switchToUser) {
    DenTrackProject1::AdminLoginForm adminLoginForm;
    adminLoginForm.ShowDialog();

    if (adminLoginForm.switchToLogin) {
        switchToUser = true;
        return nullptr;  // Switch back to user login form
    }
    else {
        return adminLoginForm.admin;
    }
}

int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    bool runApp = true;

    while (runApp) {
        User^ user = nullptr;
        Admin^ admin = nullptr;
        bool switchToAdmin = false;
        bool switchToUser = false;

        user = ShowLoginForm(switchToAdmin);

        // Handle switching between login forms
        while (switchToAdmin || switchToUser) {
            if (switchToAdmin) {
                admin = ShowAdminLoginForm(switchToUser);
                switchToAdmin = false;  // Reset after switching

                // If admin wants to go back to user login
                if (switchToUser) {
                    user = ShowLoginForm(switchToAdmin);
                    switchToUser = false;  // Reset after switching
                }
            }
            else if (switchToUser) {
                user = ShowLoginForm(switchToAdmin);
                switchToUser = false;  // Reset after switching
            }

            // Exit the loop if user or admin successfully logs in
            if (user != nullptr || admin != nullptr) break;
        }

        if (user != nullptr) {
            DenTrackProject1::MainForm mainForm(user);
            Application::Run(% mainForm);
        }
        else if (admin != nullptr) {
            DenTrackProject1::AdminMainForm adminMainForm(admin);
            Application::Run(% adminMainForm);
        }
        else {
            // Exit the program if no valid login was achieved
            MessageBox::Show("Authentication Cancelled", "Program.cpp", MessageBoxButtons::OK);
            runApp = false;
        }
    }

    return 0;
}
