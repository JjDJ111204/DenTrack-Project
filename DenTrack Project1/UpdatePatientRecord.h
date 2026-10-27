#pragma once
#include "User.h"

namespace DenTrackProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for UpdatePatientRecord
	/// </summary>
	public ref class UpdatePatientRecord : public System::Windows::Forms::Form
	{
	public:
		Form^ patientRecord;
		UpdatePatientRecord(Form^ patientRecordRef)
		{
			InitializeComponent();
			patientRecord = patientRecordRef;
			//
			//TODO: Add the constructor code here
			//
		}

		UpdatePatientRecord(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		UpdatePatientRecord(User^ user)
		{
			InitializeComponent();
			lbUpdateInfo->Text = "Updating " + user->name;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdatePatientRecord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbUpdateInfo;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbStudentNoSearch;

	private: System::Windows::Forms::TextBox^ tbProgram;
	private: System::Windows::Forms::TextBox^ tbYearLevel;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbPhoneNo;
	private: System::Windows::Forms::TextBox^ tbAge;



	private: System::Windows::Forms::TextBox^ tbGender;
	private: System::Windows::Forms::TextBox^ tbDateOfBirth;
	private: System::Windows::Forms::TextBox^ tbPassword;





	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Button^ button1;













	protected:

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
			this->lbUpdateInfo = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbStudentNoSearch = (gcnew System::Windows::Forms::TextBox());
			this->tbProgram = (gcnew System::Windows::Forms::TextBox());
			this->tbYearLevel = (gcnew System::Windows::Forms::TextBox());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbPhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->tbAge = (gcnew System::Windows::Forms::TextBox());
			this->tbGender = (gcnew System::Windows::Forms::TextBox());
			this->tbDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbUpdateInfo
			// 
			this->lbUpdateInfo->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUpdateInfo->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lbUpdateInfo->Location = System::Drawing::Point(1, 20);
			this->lbUpdateInfo->Name = L"lbUpdateInfo";
			this->lbUpdateInfo->Size = System::Drawing::Size(1477, 53);
			this->lbUpdateInfo->TabIndex = 1;
			this->lbUpdateInfo->Text = L"Update";
			this->lbUpdateInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbUpdateInfo->Click += gcnew System::EventHandler(this, &UpdatePatientRecord::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(26, 256);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(26, 299);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 34);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Location = System::Drawing::Point(28, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Student No.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Location = System::Drawing::Point(26, 345);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 34);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Program";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Location = System::Drawing::Point(26, 391);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(185, 34);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Year Level";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label7->Location = System::Drawing::Point(26, 437);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 34);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Address";
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(369, 250);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(376, 40);
			this->tbName->TabIndex = 8;
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(369, 296);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(376, 40);
			this->tbEmail->TabIndex = 8;
			// 
			// tbStudentNoSearch
			// 
			this->tbStudentNoSearch->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbStudentNoSearch->Location = System::Drawing::Point(176, 95);
			this->tbStudentNoSearch->Name = L"tbStudentNoSearch";
			this->tbStudentNoSearch->Size = System::Drawing::Size(227, 31);
			this->tbStudentNoSearch->TabIndex = 8;
			// 
			// tbProgram
			// 
			this->tbProgram->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProgram->Location = System::Drawing::Point(369, 342);
			this->tbProgram->Name = L"tbProgram";
			this->tbProgram->Size = System::Drawing::Size(376, 40);
			this->tbProgram->TabIndex = 8;
			// 
			// tbYearLevel
			// 
			this->tbYearLevel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbYearLevel->Location = System::Drawing::Point(369, 388);
			this->tbYearLevel->Name = L"tbYearLevel";
			this->tbYearLevel->Size = System::Drawing::Size(376, 40);
			this->tbYearLevel->TabIndex = 8;
			// 
			// tbAddress
			// 
			this->tbAddress->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAddress->Location = System::Drawing::Point(369, 434);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(376, 40);
			this->tbAddress->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label8->Location = System::Drawing::Point(783, 256);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(168, 34);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Phone No.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label11->Location = System::Drawing::Point(783, 299);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 34);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Age";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label12->Location = System::Drawing::Point(783, 345);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(117, 34);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Gender";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label13->Location = System::Drawing::Point(783, 391);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(236, 34);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Date Of Birth";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label9->Location = System::Drawing::Point(783, 437);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(151, 34);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Password";
			// 
			// tbPhoneNo
			// 
			this->tbPhoneNo->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPhoneNo->Location = System::Drawing::Point(1083, 250);
			this->tbPhoneNo->Name = L"tbPhoneNo";
			this->tbPhoneNo->Size = System::Drawing::Size(376, 40);
			this->tbPhoneNo->TabIndex = 14;
			// 
			// tbAge
			// 
			this->tbAge->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAge->Location = System::Drawing::Point(1083, 296);
			this->tbAge->Name = L"tbAge";
			this->tbAge->Size = System::Drawing::Size(376, 40);
			this->tbAge->TabIndex = 14;
			// 
			// tbGender
			// 
			this->tbGender->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbGender->Location = System::Drawing::Point(1083, 342);
			this->tbGender->Name = L"tbGender";
			this->tbGender->Size = System::Drawing::Size(376, 40);
			this->tbGender->TabIndex = 14;
			// 
			// tbDateOfBirth
			// 
			this->tbDateOfBirth->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDateOfBirth->Location = System::Drawing::Point(1083, 388);
			this->tbDateOfBirth->Name = L"tbDateOfBirth";
			this->tbDateOfBirth->Size = System::Drawing::Size(376, 40);
			this->tbDateOfBirth->TabIndex = 14;
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(1083, 434);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(376, 40);
			this->tbPassword->TabIndex = 14;
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->btnCancel->Location = System::Drawing::Point(1194, 594);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(121, 50);
			this->btnCancel->TabIndex = 15;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &UpdatePatientRecord::btnCancel_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label10->Location = System::Drawing::Point(783, 483);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(287, 34);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Confirm Password";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConfirmPassword->Location = System::Drawing::Point(1083, 480);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->Size = System::Drawing::Size(376, 40);
			this->tbConfirmPassword->TabIndex = 14;
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->btnRegister->Location = System::Drawing::Point(1338, 594);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(121, 50);
			this->btnRegister->TabIndex = 17;
			this->btnRegister->Text = L"Update";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &UpdatePatientRecord::btnRegister_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(423, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UpdatePatientRecord::button1_Click);
			// 
			// UpdatePatientRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1482, 656);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbDateOfBirth);
			this->Controls->Add(this->tbGender);
			this->Controls->Add(this->tbAge);
			this->Controls->Add(this->tbPhoneNo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbYearLevel);
			this->Controls->Add(this->tbProgram);
			this->Controls->Add(this->tbStudentNoSearch);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbUpdateInfo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"UpdatePatientRecord";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DenTrack";
			this->Load += gcnew System::EventHandler(this, &UpdatePatientRecord::UpdatePatientRecord_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void UpdatePatientRecord_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	patientRecord->Show(); 
}
private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbName->Text;
	String^ email = tbEmail->Text;
	String^ studentNo = tbStudentNoSearch->Text;
	String^ program = tbProgram->Text;
	String^ yearLevel = tbYearLevel->Text;
	String^ address = tbAddress->Text;
	String^ phoneNo = tbPhoneNo->Text;
	String^ age = tbAge->Text;
	String^ gender = tbGender->Text;
	String^ dateOfBirth = tbDateOfBirth->Text;
	String^ password = tbPassword->Text;
	String^ confirmPassword = tbConfirmPassword->Text;

	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	// Update query using studentNo as the condition in the WHERE clause
	String^ sqlQuery = "UPDATE UserData SET name = @name, email = @email, phoneNo = @phoneNo, address = @address, "
		"password = @password, yearLevel = @yearLevel, program = @program, age = @age, "
		"gender = @gender, dateOfBirth = @dateOfBirth WHERE studentNo = @studentNo;";

	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@name", name);
	command.Parameters->AddWithValue("@email", email);
	command.Parameters->AddWithValue("@phoneNo", phoneNo);
	command.Parameters->AddWithValue("@address", address);
	command.Parameters->AddWithValue("@password", password);
	command.Parameters->AddWithValue("@studentNo", studentNo);  // studentNo used here in WHERE clause
	command.Parameters->AddWithValue("@yearLevel", yearLevel);
	command.Parameters->AddWithValue("@program", program);
	command.Parameters->AddWithValue("@age", age);
	command.Parameters->AddWithValue("@gender", gender);
	command.Parameters->AddWithValue("@dateOfBirth", dateOfBirth);

	int rowsAffected = command.ExecuteNonQuery();  // Execute the update command

	if (rowsAffected > 0) {
		MessageBox::Show("User information has been updated successfully.");
	}
	else {
		MessageBox::Show("Update failed. User not found in the database.");
	}

	sqlConn.Close();
	this->Hide();
	patientRecord->Show(); 
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	// Retrieve data for the specified studentNo
	String^ sqlQuery = "SELECT name, email, phoneNo, address, password, yearLevel, program, age, gender, dateOfBirth "
		"FROM UserData WHERE studentNo = @studentNo";
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@studentNo", tbStudentNoSearch->Text);

	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->Read()) {
		// Populate textboxes with data from the database
		tbName->Text = reader["name"]->ToString();
		tbEmail->Text = reader["email"]->ToString();
		tbPhoneNo->Text = reader["phoneNo"]->ToString();
		tbAddress->Text = reader["address"]->ToString();
		tbPassword->Text = reader["password"]->ToString();
		tbYearLevel->Text = reader["yearLevel"]->ToString();
		tbProgram->Text = reader["program"]->ToString();
		tbAge->Text = reader["age"]->ToString();
		tbGender->Text = reader["gender"]->ToString();
		tbDateOfBirth->Text = reader["dateOfBirth"]->ToString();
	}
	else {
		MessageBox::Show("Student not found.");
	}

	sqlConn.Close();

}
};
}
