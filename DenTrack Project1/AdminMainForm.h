#pragma once
#include "Admin.h"
#include "AdminRegistrationForm.h"
#include "AdminLoginForm.h"
#include "PatientRecord.h"
#include "Request.h"
#include "DeleteAdmin.h"


namespace DenTrackProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminMainForm
	/// </summary>
	public ref class AdminMainForm : public System::Windows::Forms::Form
	{
	public:
		AdminMainForm(Admin^ admin)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbAdminInfo->Text = "Welcome, " + admin->name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbAdminInfo;
	private: System::Windows::Forms::Button^ btnPatientRecord;

	private: System::Windows::Forms::Button^ tbnRequests;
	private: System::Windows::Forms::Button^ tbnLogout;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ tbnDeleteAdmin;




	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMainForm::typeid));
			this->lbAdminInfo = (gcnew System::Windows::Forms::Label());
			this->btnPatientRecord = (gcnew System::Windows::Forms::Button());
			this->tbnRequests = (gcnew System::Windows::Forms::Button());
			this->tbnLogout = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbnDeleteAdmin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbAdminInfo
			// 
			this->lbAdminInfo->BackColor = System::Drawing::Color::LightBlue;
			this->lbAdminInfo->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAdminInfo->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lbAdminInfo->Location = System::Drawing::Point(353, 126);
			this->lbAdminInfo->Name = L"lbAdminInfo";
			this->lbAdminInfo->Size = System::Drawing::Size(359, 49);
			this->lbAdminInfo->TabIndex = 3;
			this->lbAdminInfo->Text = L"label2";
			this->lbAdminInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbAdminInfo->Click += gcnew System::EventHandler(this, &AdminMainForm::lbUserInfo_Click);
			// 
			// btnPatientRecord
			// 
			this->btnPatientRecord->BackColor = System::Drawing::Color::LightBlue;
			this->btnPatientRecord->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPatientRecord->ForeColor = System::Drawing::Color::Transparent;
			this->btnPatientRecord->Location = System::Drawing::Point(398, 219);
			this->btnPatientRecord->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPatientRecord->Name = L"btnPatientRecord";
			this->btnPatientRecord->Size = System::Drawing::Size(275, 41);
			this->btnPatientRecord->TabIndex = 4;
			this->btnPatientRecord->Text = L"Patient Record";
			this->btnPatientRecord->UseVisualStyleBackColor = false;
			this->btnPatientRecord->Click += gcnew System::EventHandler(this, &AdminMainForm::btnPatientRecord_Click);
			// 
			// tbnRequests
			// 
			this->tbnRequests->BackColor = System::Drawing::Color::LightBlue;
			this->tbnRequests->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnRequests->ForeColor = System::Drawing::Color::Transparent;
			this->tbnRequests->Location = System::Drawing::Point(398, 264);
			this->tbnRequests->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbnRequests->Name = L"tbnRequests";
			this->tbnRequests->Size = System::Drawing::Size(275, 41);
			this->tbnRequests->TabIndex = 6;
			this->tbnRequests->Text = L"Requests";
			this->tbnRequests->UseVisualStyleBackColor = false;
			this->tbnRequests->Click += gcnew System::EventHandler(this, &AdminMainForm::tbnRequests_Click);
			// 
			// tbnLogout
			// 
			this->tbnLogout->BackColor = System::Drawing::Color::LightBlue;
			this->tbnLogout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tbnLogout.BackgroundImage")));
			this->tbnLogout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tbnLogout->Location = System::Drawing::Point(291, 428);
			this->tbnLogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbnLogout->Name = L"tbnLogout";
			this->tbnLogout->Size = System::Drawing::Size(49, 48);
			this->tbnLogout->TabIndex = 7;
			this->tbnLogout->UseVisualStyleBackColor = false;
			this->tbnLogout->Click += gcnew System::EventHandler(this, &AdminMainForm::tbnLogout_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(398, 309);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(275, 41);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Add Admin Account";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminMainForm::button1_Click);
			// 
			// tbnDeleteAdmin
			// 
			this->tbnDeleteAdmin->BackColor = System::Drawing::Color::LightBlue;
			this->tbnDeleteAdmin->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnDeleteAdmin->ForeColor = System::Drawing::Color::Transparent;
			this->tbnDeleteAdmin->Location = System::Drawing::Point(398, 354);
			this->tbnDeleteAdmin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbnDeleteAdmin->Name = L"tbnDeleteAdmin";
			this->tbnDeleteAdmin->Size = System::Drawing::Size(275, 41);
			this->tbnDeleteAdmin->TabIndex = 9;
			this->tbnDeleteAdmin->Text = L"Delete Admin Account";
			this->tbnDeleteAdmin->UseVisualStyleBackColor = false;
			this->tbnDeleteAdmin->Click += gcnew System::EventHandler(this, &AdminMainForm::tbnDeleteAdmin_Click);
			// 
			// AdminMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1069, 591);
			this->Controls->Add(this->tbnDeleteAdmin);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbnLogout);
			this->Controls->Add(this->tbnRequests);
			this->Controls->Add(this->btnPatientRecord);
			this->Controls->Add(this->lbAdminInfo);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AdminMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DenTrack";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lbUserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminRegistrationForm^ adminRegForm = gcnew AdminRegistrationForm();

		adminRegForm->Show();
		this->Hide();

		adminRegForm->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AdminMainForm::AdminRegistrationForm_FormClosed);
	}
	private: System::Void AdminRegistrationForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->Show();
	}
	private: System::Void tbnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); // Closes AdminMainForm completely
	}
private: System::Void btnPatientRecord_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	PatientRecord^ patientRecord = gcnew PatientRecord(this);
	patientRecord->ShowDialog();
}
	private: System::Void tbnAppointment_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbnRequests_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Request^ requestForm = gcnew Request(this);
	requestForm->ShowDialog();
}
private: System::Void tbnDeleteAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	DeleteAdmin^ deleteAdminForm = gcnew DeleteAdmin(this);
	deleteAdminForm->ShowDialog();
}
};
}
