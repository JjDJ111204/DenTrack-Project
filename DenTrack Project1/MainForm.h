#pragma once
#include "User.h"
#include "AdminAppointment.h"
#include "RescheduleAppointment.h"
#include "UserRequest.h"

namespace DenTrackProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private: 
		User^ currentUser;
	public:
		MainForm(User ^user)
		{
			InitializeComponent();
			lbUserInfo->Text = "Welcome, " + user->name;
			currentUser = user;
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ lbUserInfo;

	private: System::Windows::Forms::Button^ tbnMyAppointment;
	private: System::Windows::Forms::Button^ tbnUserLogout;
	private: System::Windows::Forms::Button^ tbResched;
	private: System::Windows::Forms::Button^ tbnRequest;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->tbnMyAppointment = (gcnew System::Windows::Forms::Button());
			this->tbnUserLogout = (gcnew System::Windows::Forms::Button());
			this->tbResched = (gcnew System::Windows::Forms::Button());
			this->tbnRequest = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->BackColor = System::Drawing::Color::LightBlue;
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lbUserInfo->Location = System::Drawing::Point(353, 126);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(359, 49);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"label2";
			this->lbUserInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbnMyAppointment
			// 
			this->tbnMyAppointment->BackColor = System::Drawing::Color::LightBlue;
			this->tbnMyAppointment->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnMyAppointment->ForeColor = System::Drawing::Color::Transparent;
			this->tbnMyAppointment->Location = System::Drawing::Point(396, 246);
			this->tbnMyAppointment->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbnMyAppointment->Name = L"tbnMyAppointment";
			this->tbnMyAppointment->Size = System::Drawing::Size(275, 41);
			this->tbnMyAppointment->TabIndex = 6;
			this->tbnMyAppointment->Text = L"Create Appointment";
			this->tbnMyAppointment->UseVisualStyleBackColor = false;
			this->tbnMyAppointment->Click += gcnew System::EventHandler(this, &MainForm::tbnMyAppointment_Click);
			// 
			// tbnUserLogout
			// 
			this->tbnUserLogout->BackColor = System::Drawing::Color::LightBlue;
			this->tbnUserLogout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tbnUserLogout.BackgroundImage")));
			this->tbnUserLogout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tbnUserLogout->Location = System::Drawing::Point(291, 428);
			this->tbnUserLogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbnUserLogout->Name = L"tbnUserLogout";
			this->tbnUserLogout->Size = System::Drawing::Size(49, 48);
			this->tbnUserLogout->TabIndex = 8;
			this->tbnUserLogout->UseVisualStyleBackColor = false;
			this->tbnUserLogout->Click += gcnew System::EventHandler(this, &MainForm::tbnUserLogout_Click);
			// 
			// tbResched
			// 
			this->tbResched->BackColor = System::Drawing::Color::LightBlue;
			this->tbResched->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbResched->ForeColor = System::Drawing::Color::Transparent;
			this->tbResched->Location = System::Drawing::Point(396, 291);
			this->tbResched->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbResched->Name = L"tbResched";
			this->tbResched->Size = System::Drawing::Size(275, 41);
			this->tbResched->TabIndex = 9;
			this->tbResched->Text = L"Reschedule Appointment";
			this->tbResched->UseVisualStyleBackColor = false;
			this->tbResched->Click += gcnew System::EventHandler(this, &MainForm::tbResched_Click);
			// 
			// tbnRequest
			// 
			this->tbnRequest->BackColor = System::Drawing::Color::LightBlue;
			this->tbnRequest->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnRequest->ForeColor = System::Drawing::Color::Transparent;
			this->tbnRequest->Location = System::Drawing::Point(396, 336);
			this->tbnRequest->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbnRequest->Name = L"tbnRequest";
			this->tbnRequest->Size = System::Drawing::Size(275, 41);
			this->tbnRequest->TabIndex = 10;
			this->tbnRequest->Text = L"My Appointment";
			this->tbnRequest->UseVisualStyleBackColor = false;
			this->tbnRequest->Click += gcnew System::EventHandler(this, &MainForm::tbnRequest_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1069, 591);
			this->Controls->Add(this->tbnRequest);
			this->Controls->Add(this->tbResched);
			this->Controls->Add(this->tbnUserLogout);
			this->Controls->Add(this->tbnMyAppointment);
			this->Controls->Add(this->lbUserInfo);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbnUserLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void tbnMyAppointment_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();  // Hide the current form

	// Instantiate AdminAppointment and pass currentUser
	AdminAppointment^ adminAppointment = gcnew AdminAppointment(currentUser);
	adminAppointment->ShowDialog(); // Show AdminAppointment as a modal dialog

	// Dispose of AdminAppointment after ShowDialog() returns
	adminAppointment->Close(); // Close the form after dialog is complete
	delete adminAppointment;   

	this->Show();
}
private: System::Void tbResched_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();  // Hide the current form


	RescheduleAppointment^ rescheduleAppointment = gcnew RescheduleAppointment(currentUser); 
	rescheduleAppointment->ShowDialog();
	// Dispose of AdminAppointment after ShowDialog() returns

	rescheduleAppointment->Close(); 
	delete rescheduleAppointment;  
		this->Show();
}
private: System::Void tbnRequest_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();  // Hide the current form

	// Instantiate AdminAppointment and pass currentUser
	UserRequest^ userRequestForm = gcnew UserRequest(currentUser);
	userRequestForm->ShowDialog(); // Show AdminAppointment as a modal dialog

	// Dispose of AdminAppointment after ShowDialog() returns
	userRequestForm->Close(); // Close the form after dialog is complete
	delete userRequestForm;    // Dispose of the form to free up resources

	this->Show();
}
};
}
