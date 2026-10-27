#pragma once
#include "Admin.h"

namespace DenTrackProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AdminLoginForm
	/// </summary>
	public ref class AdminLoginForm : public System::Windows::Forms::Form
	{
	public:
		Form^ adminMainPage;
		AdminLoginForm(Form^ adminMainPageRef)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminLoginForm(void) 
		{
			InitializeComponent(); 
			// Initialize any default settings here
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnAdminLogIn;

	private: System::Windows::Forms::TextBox^ tbAdminPassword;

	private: System::Windows::Forms::TextBox^ tbAdminEmail;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ llUserLogIn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminLoginForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAdminLogIn = (gcnew System::Windows::Forms::Button());
			this->tbAdminPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbAdminEmail = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->llUserLogIn = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(38, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(38, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 24);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Email";
			// 
			// btnAdminLogIn
			// 
			this->btnAdminLogIn->BackColor = System::Drawing::Color::Transparent;
			this->btnAdminLogIn->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdminLogIn->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->btnAdminLogIn->Location = System::Drawing::Point(636, 447);
			this->btnAdminLogIn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdminLogIn->Name = L"btnAdminLogIn";
			this->btnAdminLogIn->Size = System::Drawing::Size(106, 38);
			this->btnAdminLogIn->TabIndex = 11;
			this->btnAdminLogIn->Text = L"Log In";
			this->btnAdminLogIn->UseVisualStyleBackColor = false;
			this->btnAdminLogIn->Click += gcnew System::EventHandler(this, &AdminLoginForm::btnAdminLogIn_Click);
			// 
			// tbAdminPassword
			// 
			this->tbAdminPassword->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAdminPassword->Location = System::Drawing::Point(150, 257);
			this->tbAdminPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbAdminPassword->Name = L"tbAdminPassword";
			this->tbAdminPassword->PasswordChar = '*';
			this->tbAdminPassword->Size = System::Drawing::Size(267, 31);
			this->tbAdminPassword->TabIndex = 10;
			// 
			// tbAdminEmail
			// 
			this->tbAdminEmail->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAdminEmail->Location = System::Drawing::Point(114, 158);
			this->tbAdminEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbAdminEmail->Name = L"tbAdminEmail";
			this->tbAdminEmail->Size = System::Drawing::Size(303, 31);
			this->tbAdminEmail->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(144, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 65);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Admin Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// llUserLogIn
			// 
			this->llUserLogIn->ActiveLinkColor = System::Drawing::Color::LightSkyBlue;
			this->llUserLogIn->AutoSize = true;
			this->llUserLogIn->BackColor = System::Drawing::Color::Transparent;
			this->llUserLogIn->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llUserLogIn->LinkColor = System::Drawing::Color::DarkSlateGray;
			this->llUserLogIn->Location = System::Drawing::Point(12, 466);
			this->llUserLogIn->Name = L"llUserLogIn";
			this->llUserLogIn->Size = System::Drawing::Size(213, 30);
			this->llUserLogIn->TabIndex = 14;
			this->llUserLogIn->TabStop = true;
			this->llUserLogIn->Text = L"User Log In";
			this->llUserLogIn->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminLoginForm::llUserLogIn_LinkClicked);
			// 
			// AdminLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(782, 505);
			this->Controls->Add(this->llUserLogIn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnAdminLogIn);
			this->Controls->Add(this->tbAdminPassword);
			this->Controls->Add(this->tbAdminEmail);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AdminLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DenTrack";
			this->Load += gcnew System::EventHandler(this, &AdminLoginForm::AdminLoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: Admin^ admin = nullptr;
private: System::Void btnAdminLogIn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->tbAdminEmail->Text;
	String^ password = this->tbAdminPassword->Text;

	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("Enter an Email and Password ");
		return;
	}

	try {
		String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM AdminData Where email=@email AND password=@password;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@password", password);


		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			admin = gcnew Admin;
			admin->id = reader->GetInt32(0);
			admin->name = reader->GetString(1);
			admin->email = reader->GetString(2);
			admin->password = reader->GetString(3);
			admin->phoneNo = reader->GetString(5);
			this->Close();

		}
		else {
			MessageBox::Show("Email or Password is Incorrect");
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to Connect: " + e->Message);
	}
}
public: bool switchToLogin = false;
private: System::Void llUserLogIn_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close(); 
}
private: System::Void AdminLoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
