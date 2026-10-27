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
	/// Summary for UserRegistrationAdmin
	/// </summary>
	public ref class UserRegistrationAdmin : public System::Windows::Forms::Form
	{
	public:
		Form^ patientRecord;
		UserRegistrationAdmin(Form^ patientRecordRef)
		{
			InitializeComponent();
			patientRecord = patientRecordRef;
			//
			//TODO: Add the constructor code here
			//
		}

		UserRegistrationAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


		protected:
				/// <summary>
				/// Clean up any resources being used.
				/// </summary>
				~UserRegistrationAdmin()
				{
					if (components)
					{
						delete components;
					}
				}
			private: System::Windows::Forms::Label^ label1;
			private: System::Windows::Forms::Label^ label2;
			private: System::Windows::Forms::TextBox^ tbName;

			private: System::Windows::Forms::Label^ label3;
			private: System::Windows::Forms::TextBox^ tbEmail;

			private: System::Windows::Forms::Label^ label4;
			private: System::Windows::Forms::TextBox^ tbStudentNo;

			private: System::Windows::Forms::Label^ label5;
			private: System::Windows::Forms::TextBox^ tbProgram;

			private: System::Windows::Forms::Label^ label6;
			private: System::Windows::Forms::TextBox^ tbYearLevel;

			private: System::Windows::Forms::Label^ label7;
			private: System::Windows::Forms::TextBox^ tbAddress;

			private: System::Windows::Forms::Label^ label8;
			private: System::Windows::Forms::TextBox^ tbPhoneNo;

			private: System::Windows::Forms::Label^ label9;
			private: System::Windows::Forms::TextBox^ tbPassword;

			private: System::Windows::Forms::Label^ label10;
			private: System::Windows::Forms::TextBox^ tbConfirmPassword;

			private: System::Windows::Forms::Button^ btnCancel;


			private: System::Windows::Forms::LinkLabel^ llLogin;
			private: System::Windows::Forms::Button^ btnRegister;
			private: System::Windows::Forms::Label^ label11;
			private: System::Windows::Forms::TextBox^ tbAge;
			private: System::Windows::Forms::Label^ label12;
			private: System::Windows::Forms::TextBox^ tbGender;
			private: System::Windows::Forms::Label^ label13;
			private: System::Windows::Forms::TextBox^ tbDateOfBirth;





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
					this->label1 = (gcnew System::Windows::Forms::Label());
					this->label2 = (gcnew System::Windows::Forms::Label());
					this->tbName = (gcnew System::Windows::Forms::TextBox());
					this->label3 = (gcnew System::Windows::Forms::Label());
					this->tbEmail = (gcnew System::Windows::Forms::TextBox());
					this->label4 = (gcnew System::Windows::Forms::Label());
					this->tbStudentNo = (gcnew System::Windows::Forms::TextBox());
					this->label5 = (gcnew System::Windows::Forms::Label());
					this->tbProgram = (gcnew System::Windows::Forms::TextBox());
					this->label6 = (gcnew System::Windows::Forms::Label());
					this->tbYearLevel = (gcnew System::Windows::Forms::TextBox());
					this->label7 = (gcnew System::Windows::Forms::Label());
					this->tbAddress = (gcnew System::Windows::Forms::TextBox());
					this->label8 = (gcnew System::Windows::Forms::Label());
					this->tbPhoneNo = (gcnew System::Windows::Forms::TextBox());
					this->label9 = (gcnew System::Windows::Forms::Label());
					this->tbPassword = (gcnew System::Windows::Forms::TextBox());
					this->label10 = (gcnew System::Windows::Forms::Label());
					this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
					this->btnCancel = (gcnew System::Windows::Forms::Button());
					this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
					this->btnRegister = (gcnew System::Windows::Forms::Button());
					this->label11 = (gcnew System::Windows::Forms::Label());
					this->tbAge = (gcnew System::Windows::Forms::TextBox());
					this->label12 = (gcnew System::Windows::Forms::Label());
					this->tbGender = (gcnew System::Windows::Forms::TextBox());
					this->label13 = (gcnew System::Windows::Forms::Label());
					this->tbDateOfBirth = (gcnew System::Windows::Forms::TextBox());
					this->SuspendLayout();
					// 
					// label1
					// 
					this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label1->Location = System::Drawing::Point(1, 20);
					this->label1->Name = L"label1";
					this->label1->Size = System::Drawing::Size(1477, 53);
					this->label1->TabIndex = 0;
					this->label1->Text = L"Registration Form";
					this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					this->label1->Click += gcnew System::EventHandler(this, &UserRegistrationAdmin::label1_Click);
					// 
					// label2
					// 
					this->label2->AutoSize = true;
					this->label2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label2->Location = System::Drawing::Point(26, 104);
					this->label2->Name = L"label2";
					this->label2->Size = System::Drawing::Size(100, 34);
					this->label2->TabIndex = 1;
					this->label2->Text = L"Name ";
					// 
					// tbName
					// 
					this->tbName->Location = System::Drawing::Point(369, 101);
					this->tbName->Name = L"tbName";
					this->tbName->Size = System::Drawing::Size(376, 40);
					this->tbName->TabIndex = 2;
					// 
					// label3
					// 
					this->label3->AutoSize = true;
					this->label3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label3->Location = System::Drawing::Point(26, 150);
					this->label3->Name = L"label3";
					this->label3->Size = System::Drawing::Size(100, 34);
					this->label3->TabIndex = 1;
					this->label3->Text = L"Email";
					// 
					// tbEmail
					// 
					this->tbEmail->Location = System::Drawing::Point(369, 147);
					this->tbEmail->Name = L"tbEmail";
					this->tbEmail->Size = System::Drawing::Size(376, 40);
					this->tbEmail->TabIndex = 2;
					// 
					// label4
					// 
					this->label4->AutoSize = true;
					this->label4->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label4->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label4->Location = System::Drawing::Point(26, 195);
					this->label4->Name = L"label4";
					this->label4->Size = System::Drawing::Size(202, 34);
					this->label4->TabIndex = 1;
					this->label4->Text = L"Student No.";
					// 
					// tbStudentNo
					// 
					this->tbStudentNo->Location = System::Drawing::Point(369, 192);
					this->tbStudentNo->Name = L"tbStudentNo";
					this->tbStudentNo->Size = System::Drawing::Size(376, 40);
					this->tbStudentNo->TabIndex = 2;
					// 
					// label5
					// 
					this->label5->AutoSize = true;
					this->label5->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label5->Location = System::Drawing::Point(26, 241);
					this->label5->Name = L"label5";
					this->label5->Size = System::Drawing::Size(134, 34);
					this->label5->TabIndex = 1;
					this->label5->Text = L"Program";
					// 
					// tbProgram
					// 
					this->tbProgram->Location = System::Drawing::Point(369, 237);
					this->tbProgram->Name = L"tbProgram";
					this->tbProgram->Size = System::Drawing::Size(376, 40);
					this->tbProgram->TabIndex = 2;
					// 
					// label6
					// 
					this->label6->AutoSize = true;
					this->label6->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label6->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label6->Location = System::Drawing::Point(26, 286);
					this->label6->Name = L"label6";
					this->label6->Size = System::Drawing::Size(185, 34);
					this->label6->TabIndex = 1;
					this->label6->Text = L"Year Level";
					// 
					// tbYearLevel
					// 
					this->tbYearLevel->Location = System::Drawing::Point(369, 283);
					this->tbYearLevel->Name = L"tbYearLevel";
					this->tbYearLevel->Size = System::Drawing::Size(376, 40);
					this->tbYearLevel->TabIndex = 2;
					// 
					// label7
					// 
					this->label7->AutoSize = true;
					this->label7->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label7->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label7->Location = System::Drawing::Point(26, 331);
					this->label7->Name = L"label7";
					this->label7->Size = System::Drawing::Size(134, 34);
					this->label7->TabIndex = 1;
					this->label7->Text = L"Address";
					// 
					// tbAddress
					// 
					this->tbAddress->Location = System::Drawing::Point(369, 328);
					this->tbAddress->Name = L"tbAddress";
					this->tbAddress->Size = System::Drawing::Size(376, 40);
					this->tbAddress->TabIndex = 2;
					// 
					// label8
					// 
					this->label8->AutoSize = true;
					this->label8->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label8->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label8->Location = System::Drawing::Point(783, 107);
					this->label8->Name = L"label8";
					this->label8->Size = System::Drawing::Size(168, 34);
					this->label8->TabIndex = 1;
					this->label8->Text = L"Phone No.";
					// 
					// tbPhoneNo
					// 
					this->tbPhoneNo->Location = System::Drawing::Point(1083, 101);
					this->tbPhoneNo->Name = L"tbPhoneNo";
					this->tbPhoneNo->Size = System::Drawing::Size(376, 40);
					this->tbPhoneNo->TabIndex = 2;
					// 
					// label9
					// 
					this->label9->AutoSize = true;
					this->label9->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label9->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label9->Location = System::Drawing::Point(783, 286);
					this->label9->Name = L"label9";
					this->label9->Size = System::Drawing::Size(151, 34);
					this->label9->TabIndex = 1;
					this->label9->Text = L"Password";
					// 
					// tbPassword
					// 
					this->tbPassword->Location = System::Drawing::Point(1083, 283);
					this->tbPassword->Name = L"tbPassword";
					this->tbPassword->PasswordChar = '*';
					this->tbPassword->Size = System::Drawing::Size(376, 40);
					this->tbPassword->TabIndex = 2;
					// 
					// label10
					// 
					this->label10->AutoSize = true;
					this->label10->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label10->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label10->Location = System::Drawing::Point(783, 331);
					this->label10->Name = L"label10";
					this->label10->Size = System::Drawing::Size(287, 34);
					this->label10->TabIndex = 1;
					this->label10->Text = L"Confirm Password";
					// 
					// tbConfirmPassword
					// 
					this->tbConfirmPassword->Location = System::Drawing::Point(1083, 328);
					this->tbConfirmPassword->Name = L"tbConfirmPassword";
					this->tbConfirmPassword->PasswordChar = '*';
					this->tbConfirmPassword->Size = System::Drawing::Size(376, 40);
					this->tbConfirmPassword->TabIndex = 2;
					// 
					// btnCancel
					// 
					this->btnCancel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->btnCancel->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->btnCancel->Location = System::Drawing::Point(1194, 484);
					this->btnCancel->Name = L"btnCancel";
					this->btnCancel->Size = System::Drawing::Size(121, 50);
					this->btnCancel->TabIndex = 4;
					this->btnCancel->Text = L"Cancel";
					this->btnCancel->UseVisualStyleBackColor = true;
					this->btnCancel->Click += gcnew System::EventHandler(this, &UserRegistrationAdmin::btnCancel_Click);
					// 
					// btnRegister
					// 
					this->btnRegister->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->btnRegister->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->btnRegister->Location = System::Drawing::Point(1338, 484);
					this->btnRegister->Name = L"btnRegister";
					this->btnRegister->Size = System::Drawing::Size(121, 50);
					this->btnRegister->TabIndex = 7;
					this->btnRegister->Text = L"Register";
					this->btnRegister->UseVisualStyleBackColor = true;
					this->btnRegister->Click += gcnew System::EventHandler(this, &UserRegistrationAdmin::btnRegister_Click);
					// 
					// label11
					// 
					this->label11->AutoSize = true;
					this->label11->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label11->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label11->Location = System::Drawing::Point(783, 150);
					this->label11->Name = L"label11";
					this->label11->Size = System::Drawing::Size(66, 34);
					this->label11->TabIndex = 1;
					this->label11->Text = L"Age";
					// 
					// tbAge
					// 
					this->tbAge->Location = System::Drawing::Point(1083, 147);
					this->tbAge->Name = L"tbAge";
					this->tbAge->Size = System::Drawing::Size(376, 40);
					this->tbAge->TabIndex = 2;
					// 
					// label12
					// 
					this->label12->AutoSize = true;
					this->label12->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label12->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label12->Location = System::Drawing::Point(783, 195);
					this->label12->Name = L"label12";
					this->label12->Size = System::Drawing::Size(117, 34);
					this->label12->TabIndex = 1;
					this->label12->Text = L"Gender";
					// 
					// tbGender
					// 
					this->tbGender->Location = System::Drawing::Point(1083, 192);
					this->tbGender->Name = L"tbGender";
					this->tbGender->Size = System::Drawing::Size(376, 40);
					this->tbGender->TabIndex = 2;
					// 
					// label13
					// 
					this->label13->AutoSize = true;
					this->label13->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->label13->ForeColor = System::Drawing::Color::DarkSlateGray;
					this->label13->Location = System::Drawing::Point(783, 241);
					this->label13->Name = L"label13";
					this->label13->Size = System::Drawing::Size(236, 34);
					this->label13->TabIndex = 1;
					this->label13->Text = L"Date Of Birth";
					// 
					// tbDateOfBirth
					// 
					this->tbDateOfBirth->Location = System::Drawing::Point(1083, 238);
					this->tbDateOfBirth->Name = L"tbDateOfBirth";
					this->tbDateOfBirth->Size = System::Drawing::Size(376, 40);
					this->tbDateOfBirth->TabIndex = 2;
					// 
					// UserRegistrationAdmin
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(16, 32);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->BackColor = System::Drawing::Color::LightBlue;
					this->ClientSize = System::Drawing::Size(1482, 553);
					this->Controls->Add(this->btnRegister);
					this->Controls->Add(this->llLogin);
					this->Controls->Add(this->btnCancel);
					this->Controls->Add(this->tbDateOfBirth);
					this->Controls->Add(this->label13);
					this->Controls->Add(this->tbGender);
					this->Controls->Add(this->label12);
					this->Controls->Add(this->tbAge);
					this->Controls->Add(this->label11);
					this->Controls->Add(this->tbConfirmPassword);
					this->Controls->Add(this->label10);
					this->Controls->Add(this->tbPassword);
					this->Controls->Add(this->label9);
					this->Controls->Add(this->tbPhoneNo);
					this->Controls->Add(this->label8);
					this->Controls->Add(this->tbAddress);
					this->Controls->Add(this->label7);
					this->Controls->Add(this->tbYearLevel);
					this->Controls->Add(this->label6);
					this->Controls->Add(this->tbProgram);
					this->Controls->Add(this->label5);
					this->Controls->Add(this->tbStudentNo);
					this->Controls->Add(this->label4);
					this->Controls->Add(this->tbEmail);
					this->Controls->Add(this->label3);
					this->Controls->Add(this->tbName);
					this->Controls->Add(this->label2);
					this->Controls->Add(this->label1);
					this->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
					this->Margin = System::Windows::Forms::Padding(6);
					this->MaximizeBox = false;
					this->MinimizeBox = false;
					this->Name = L"UserRegistrationAdmin";
					this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
					this->Text = L"DenTrack";
					this->ResumeLayout(false);
					this->PerformLayout();

				}
#pragma endregion
			private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
			}
			private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			}
			private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
				this->Hide(); 
				patientRecord->Show();
			}

			public: User^ user = nullptr;

			private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
				String^ name = tbName->Text;
				String^ email = tbEmail->Text;
				String^ studentNo = tbStudentNo->Text;
				String^ program = tbProgram->Text;
				String^ yearLevel = tbYearLevel->Text;
				String^ address = tbAddress->Text;
				String^ phoneNo = tbPhoneNo->Text;
				String^ age = tbAge->Text;
				String^ gender = tbGender->Text;
				String^ dateOfBirth = tbDateOfBirth->Text;
				String^ password = tbPassword->Text;
				String^ confirmPassword = tbConfirmPassword->Text;

				if (name->Length == 0 || email->Length == 0 || studentNo->Length == 0 || program->Length == 0 || yearLevel->Length == 0 || address->Length == 0 || phoneNo->Length == 0 || age->Length == 0 || gender->Length == 0 || dateOfBirth->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
					MessageBox::Show("Please fill-up all the fields");
					return;
				}

				if (String::Compare(password, confirmPassword) != 0) {
					MessageBox::Show("Passwords does not match");
					return;
				}

				try {
					String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";
					SqlConnection sqlConn(connString);
					sqlConn.Open();

					String^ sqlQuery = "INSERT INTO UserData" + "(name, email, phoneNo, address, password, studentNo, yearLevel, program, age, gender, dateOfBirth) VALUES" + "(@name, @email, @phoneNo, @address, @password, @studentNo, @yearLevel, @program, @age, @gender, @dateOfBirth);";

					SqlCommand command(sqlQuery, % sqlConn);
					command.Parameters->AddWithValue("@name", name);
					command.Parameters->AddWithValue("@email", email);
					command.Parameters->AddWithValue("@phoneNo", phoneNo);
					command.Parameters->AddWithValue("@address", address);
					command.Parameters->AddWithValue("@password", password);
					command.Parameters->AddWithValue("@studentNo", studentNo);
					command.Parameters->AddWithValue("@yearLevel", yearLevel);
					command.Parameters->AddWithValue("@program", program);
					command.Parameters->AddWithValue("@age", age);
					command.Parameters->AddWithValue("@gender", gender);
					command.Parameters->AddWithValue("@dateOfBirth", dateOfBirth);

					command.ExecuteNonQuery();
					user = gcnew User;
					user->name = name;
					user->email = email;
					user->password = password;
					user->studentNo = studentNo;
					user->phoneNo = phoneNo;
					user->address = address;
					user->yearLevel = yearLevel;
					user->program = program;
					user->age = age;
					user->gender = gender;
					user->dateOfBirth = dateOfBirth;

					
					MessageBox::Show(user->name + " has been registered");
					this->Hide();
					patientRecord->Show();
				}
				catch (Exception^ e) {
					MessageBox::Show("Failed to Connect" + e->Message);
				}
			}
			};
		}
