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
	/// Summary for UserRequest
	/// </summary>
	public ref class UserRequest : public System::Windows::Forms::Form
	{
	private:
		User^ currentUser;
	public:
		Form^ mainForm;
		UserRequest(Form^ mainFormRef)
		{
			InitializeComponent();
			mainForm = mainFormRef;
		}
		UserRequest(User^ user)
		{
			InitializeComponent();
			currentUser = user;

			this->Owner = nullptr;
		}

		UserRequest(void)
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
		~UserRequest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ tbnApproved;
	private: System::Windows::Forms::Button^ tbnInProgress;
	private: System::Windows::Forms::Button^ tbnRejectCancel;
	private: System::Windows::Forms::Button^ button1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserRequest::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbnApproved = (gcnew System::Windows::Forms::Button());
			this->tbnInProgress = (gcnew System::Windows::Forms::Button());
			this->tbnRejectCancel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Location = System::Drawing::Point(46, 160);
			this->dataGridView1->MaximumSize = System::Drawing::Size(488, 356);
			this->dataGridView1->MinimumSize = System::Drawing::Size(488, 356);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(488, 356);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(1, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(582, 62);
			this->label1->TabIndex = 1;
			this->label1->Text = L"My Appointment";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbnApproved
			// 
			this->tbnApproved->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnApproved->ForeColor = System::Drawing::Color::YellowGreen;
			this->tbnApproved->Location = System::Drawing::Point(46, 117);
			this->tbnApproved->MaximumSize = System::Drawing::Size(123, 37);
			this->tbnApproved->MinimumSize = System::Drawing::Size(106, 37);
			this->tbnApproved->Name = L"tbnApproved";
			this->tbnApproved->Size = System::Drawing::Size(123, 37);
			this->tbnApproved->TabIndex = 2;
			this->tbnApproved->Text = L"Approved";
			this->tbnApproved->UseVisualStyleBackColor = true;
			this->tbnApproved->Click += gcnew System::EventHandler(this, &UserRequest::tbnApproved_Click);
			// 
			// tbnInProgress
			// 
			this->tbnInProgress->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnInProgress->ForeColor = System::Drawing::Color::Gold;
			this->tbnInProgress->Location = System::Drawing::Point(175, 117);
			this->tbnInProgress->MaximumSize = System::Drawing::Size(137, 37);
			this->tbnInProgress->MinimumSize = System::Drawing::Size(132, 37);
			this->tbnInProgress->Name = L"tbnInProgress";
			this->tbnInProgress->Size = System::Drawing::Size(137, 37);
			this->tbnInProgress->TabIndex = 3;
			this->tbnInProgress->Text = L"In Progress";
			this->tbnInProgress->UseVisualStyleBackColor = true;
			this->tbnInProgress->Click += gcnew System::EventHandler(this, &UserRequest::tbnInProgress_Click);
			// 
			// tbnRejectCancel
			// 
			this->tbnRejectCancel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnRejectCancel->ForeColor = System::Drawing::Color::OrangeRed;
			this->tbnRejectCancel->Location = System::Drawing::Point(318, 117);
			this->tbnRejectCancel->MaximumSize = System::Drawing::Size(216, 37);
			this->tbnRejectCancel->MinimumSize = System::Drawing::Size(132, 37);
			this->tbnRejectCancel->Name = L"tbnRejectCancel";
			this->tbnRejectCancel->Size = System::Drawing::Size(216, 37);
			this->tbnRejectCancel->TabIndex = 4;
			this->tbnRejectCancel->Text = L"Rejected/Cancelled";
			this->tbnRejectCancel->UseVisualStyleBackColor = true;
			this->tbnRejectCancel->Click += gcnew System::EventHandler(this, &UserRequest::tbnRejectCancel_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(12, 601);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(54, 28);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserRequest::button1_Click);
			// 
			// UserRequest
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(581, 641);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbnRejectCancel);
			this->Controls->Add(this->tbnInProgress);
			this->Controls->Add(this->tbnApproved);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->MaximumSize = System::Drawing::Size(599, 688);
			this->MinimumSize = System::Drawing::Size(599, 688);
			this->Name = L"UserRequest";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserRequest";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); 
}
private: System::Void tbnApproved_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	String^ query = "SELECT * FROM PatientTreatment WHERE studentNo = @studentNo AND Status = 'Approved'";

	SqlCommand^ cmd = gcnew SqlCommand(query, connection);
	cmd->Parameters->AddWithValue("@studentNo", currentUser->studentNo); 

	try {
		connection->Open();

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		dataGridView1->DataSource = dt;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error loading data: " + ex->Message);
	}
	finally {
		connection->Close();
	}
}
private: System::Void tbnInProgress_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	String^ query = "SELECT * FROM PatientTreatment WHERE studentNo = @studentNo AND Status = 'In progress'";

	SqlCommand^ cmd = gcnew SqlCommand(query, connection);
	cmd->Parameters->AddWithValue("@studentNo", currentUser->studentNo);

	try {
		connection->Open();

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		dataGridView1->DataSource = dt;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error loading data: " + ex->Message);
	}
	finally {
		connection->Close();
	}
}
private: System::Void tbnRejectCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	String^ query = "SELECT * FROM PatientTreatment WHERE studentNo = @studentNo AND (Status = 'Rejected' OR Status = 'Cancelled')";

	SqlCommand^ cmd = gcnew SqlCommand(query, connection);
	cmd->Parameters->AddWithValue("@studentNo", currentUser->studentNo); 
	try {
		connection->Open();

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		dataGridView1->DataSource = dt;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error loading data: " + ex->Message);
	}
	finally {
		connection->Close();
	}
}
};
}
