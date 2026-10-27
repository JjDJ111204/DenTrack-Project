#pragma once
#include "UserRegistration(Admin).h"
#include "UpdatePatientRecord.h"

namespace DenTrackProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for PatientRecord
	/// </summary>
	public ref class PatientRecord : public System::Windows::Forms::Form
	{
	public:
		Form^ adminMainForm;
		PatientRecord(Form^ adminMainFormRef)
		{
			InitializeComponent();
			adminMainForm = adminMainFormRef;
			//
			//TODO: Add the constructor code here
			//
		}

		PatientRecord(void)
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
		~PatientRecord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbNameSearch;
	private: System::Windows::Forms::TextBox^ tbTreatmentSearch;
	private: System::Windows::Forms::Button^ tbnSearch;
	private: System::Windows::Forms::Button^ tbnDelete;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ tbnLoadTable;
	private: System::Windows::Forms::DataGridView^ dataGridView2;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PatientRecord::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbNameSearch = (gcnew System::Windows::Forms::TextBox());
			this->tbTreatmentSearch = (gcnew System::Windows::Forms::TextBox());
			this->tbnSearch = (gcnew System::Windows::Forms::Button());
			this->tbnDelete = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tbnLoadTable = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(24, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PatientRecord::button1_Click);
			// 
			// tbNameSearch
			// 
			this->tbNameSearch->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNameSearch->ForeColor = System::Drawing::SystemColors::InfoText;
			this->tbNameSearch->Location = System::Drawing::Point(597, 11);
			this->tbNameSearch->Name = L"tbNameSearch";
			this->tbNameSearch->Size = System::Drawing::Size(262, 25);
			this->tbNameSearch->TabIndex = 1;
			// 
			// tbTreatmentSearch
			// 
			this->tbTreatmentSearch->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbTreatmentSearch->ForeColor = System::Drawing::SystemColors::InfoText;
			this->tbTreatmentSearch->Location = System::Drawing::Point(597, 43);
			this->tbTreatmentSearch->Name = L"tbTreatmentSearch";
			this->tbTreatmentSearch->Size = System::Drawing::Size(262, 25);
			this->tbTreatmentSearch->TabIndex = 1;
			// 
			// tbnSearch
			// 
			this->tbnSearch->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnSearch->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->tbnSearch->Location = System::Drawing::Point(865, 11);
			this->tbnSearch->Name = L"tbnSearch";
			this->tbnSearch->Size = System::Drawing::Size(95, 26);
			this->tbnSearch->TabIndex = 2;
			this->tbnSearch->Text = L"Search";
			this->tbnSearch->UseVisualStyleBackColor = true;
			this->tbnSearch->Click += gcnew System::EventHandler(this, &PatientRecord::tbnSearch_Click);
			// 
			// tbnDelete
			// 
			this->tbnDelete->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnDelete->ForeColor = System::Drawing::Color::DarkRed;
			this->tbnDelete->Location = System::Drawing::Point(865, 43);
			this->tbnDelete->Name = L"tbnDelete";
			this->tbnDelete->Size = System::Drawing::Size(95, 25);
			this->tbnDelete->TabIndex = 3;
			this->tbnDelete->Text = L"Delete";
			this->tbnDelete->UseVisualStyleBackColor = true;
			this->tbnDelete->Click += gcnew System::EventHandler(this, &PatientRecord::tbnDelete_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Location = System::Drawing::Point(768, 185);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 42);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Add Patient Record";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &PatientRecord::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button3->Location = System::Drawing::Point(768, 255);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 42);
			this->button3->TabIndex = 5;
			this->button3->Text = L" Update Patient Record";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &PatientRecord::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Location = System::Drawing::Point(24, 120);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(696, 177);
			this->dataGridView1->TabIndex = 6;
			// 
			// tbnLoadTable
			// 
			this->tbnLoadTable->BackColor = System::Drawing::Color::LightBlue;
			this->tbnLoadTable->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnLoadTable->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbnLoadTable->Location = System::Drawing::Point(768, 120);
			this->tbnLoadTable->Name = L"tbnLoadTable";
			this->tbnLoadTable->Size = System::Drawing::Size(192, 42);
			this->tbnLoadTable->TabIndex = 7;
			this->tbnLoadTable->Text = L"Load Patient Record Table";
			this->tbnLoadTable->UseVisualStyleBackColor = false;
			this->tbnLoadTable->Click += gcnew System::EventHandler(this, &PatientRecord::tbnLoadTable_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->Location = System::Drawing::Point(99, 412);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(778, 281);
			this->dataGridView2->TabIndex = 8;
			// 
			// PatientRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->tbnLoadTable);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tbnDelete);
			this->Controls->Add(this->tbnSearch);
			this->Controls->Add(this->tbTreatmentSearch);
			this->Controls->Add(this->tbNameSearch);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"PatientRecord";
			this->Text = L"DenTrack";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		adminMainForm->Show();
	}
	private: System::Void tbnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nameInput = tbNameSearch->Text->Trim();
		String^ treatmentInput = tbTreatmentSearch->Text->Trim();

		SqlConnection^ connection = gcnew SqlConnection("Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;");

		// Case 1: Only tbNameSearch has input (search by name in UserData)
		if (!String::IsNullOrEmpty(nameInput) && String::IsNullOrEmpty(treatmentInput)) {
			String^ query = "SELECT name, email, studentNo, program, yearLevel, address, phoneNo, age, gender, dateOfBirth "
				"FROM UserData WHERE name = @name";
			SqlCommand^ cmd = gcnew SqlCommand(query, connection);
			cmd->Parameters->AddWithValue("@name", nameInput);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataTable^ userTable = gcnew DataTable();

			connection->Open();
			adapter->Fill(userTable);
			connection->Close();

			if (userTable->Rows->Count > 0) {
				dataGridView1->DataSource = userTable;

				// Load related treatments with "Completed" status in DataGridView2 based on studentNo
				String^ studentNo = userTable->Rows[0]->default["studentNo"]->ToString();
				String^ treatmentQuery = "SELECT name, studentNo, Treatment, TreatmentDate, Remarks "
					"FROM PatientTreatment WHERE studentNo = @studentNo AND Status = 'Completed'";
				SqlCommand^ treatmentCmd = gcnew SqlCommand(treatmentQuery, connection);
				treatmentCmd->Parameters->AddWithValue("@studentNo", studentNo);

				SqlDataAdapter^ treatmentAdapter = gcnew SqlDataAdapter(treatmentCmd);
				DataTable^ treatmentTable = gcnew DataTable();
				connection->Open();
				treatmentAdapter->Fill(treatmentTable);
				connection->Close();

				dataGridView2->DataSource = treatmentTable;
			}
			else {
				MessageBox::Show("Patient doesn't exist in the database.");
				dataGridView1->DataSource = nullptr;
				dataGridView2->DataSource = nullptr;
			}
		}

		// Case 2: Only tbTreatmentSearch has input (search by treatment in PatientTreatment)
		else if (String::IsNullOrEmpty(nameInput) && !String::IsNullOrEmpty(treatmentInput)) {
			String^ treatmentQuery = "SELECT name, studentNo, Treatment, TreatmentDate, Remarks "
				"FROM PatientTreatment WHERE Treatment = @treatment AND Status = 'Completed'";
			SqlCommand^ cmd = gcnew SqlCommand(treatmentQuery, connection);
			cmd->Parameters->AddWithValue("@treatment", treatmentInput);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataTable^ treatmentTable = gcnew DataTable();

			connection->Open();
			adapter->Fill(treatmentTable);
			connection->Close();

			if (treatmentTable->Rows->Count > 0) {
				dataGridView2->DataSource = treatmentTable;
				dataGridView1->DataSource = nullptr;  // Clear DataGridView1
			}
			else {
				MessageBox::Show("Treatment doesn't exist in the database.");
				dataGridView1->DataSource = nullptr;
				dataGridView2->DataSource = nullptr;
			}
		}

		// Case 3: Both tbNameSearch and tbTreatmentSearch have input (search for both)
		else if (!String::IsNullOrEmpty(nameInput) && !String::IsNullOrEmpty(treatmentInput)) {
			// Search for patient in UserData by name
			String^ query = "SELECT name, email, studentNo, program, yearLevel, address, phoneNo, age, gender, dateOfBirth "
				"FROM UserData WHERE name = @name";
			SqlCommand^ cmd = gcnew SqlCommand(query, connection);
			cmd->Parameters->AddWithValue("@name", nameInput);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataTable^ userTable = gcnew DataTable();

			connection->Open();
			adapter->Fill(userTable);
			connection->Close();

			if (userTable->Rows->Count > 0) {
				dataGridView1->DataSource = userTable;

				// Get studentNo and search for the specific treatment with "Completed" status in PatientTreatment
				String^ studentNo = userTable->Rows[0]->default["studentNo"]->ToString();
				String^ treatmentQuery = "SELECT name, studentNo, Treatment, TreatmentDate, Remarks "
					"FROM PatientTreatment WHERE studentNo = @studentNo AND Treatment = @treatment AND Status = 'Completed'";
				SqlCommand^ treatmentCmd = gcnew SqlCommand(treatmentQuery, connection);
				treatmentCmd->Parameters->AddWithValue("@studentNo", studentNo);
				treatmentCmd->Parameters->AddWithValue("@treatment", treatmentInput);

				SqlDataAdapter^ treatmentAdapter = gcnew SqlDataAdapter(treatmentCmd);
				DataTable^ treatmentTable = gcnew DataTable();
				connection->Open();
				treatmentAdapter->Fill(treatmentTable);
				connection->Close();

				if (treatmentTable->Rows->Count > 0) {
					dataGridView2->DataSource = treatmentTable;
				}
				else {
					MessageBox::Show("No 'Completed' treatment found for this patient.");
					dataGridView1->DataSource = nullptr;
					dataGridView2->DataSource = nullptr;
				}
			}
			else {
				MessageBox::Show("Patient doesn't exist in the database.");
				dataGridView1->DataSource = nullptr;
				dataGridView2->DataSource = nullptr;
			}
		}
	}
	private: System::Void tbnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ searchTerm = tbNameSearch->Text;
		String^ connectionString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
		String^ selectQuery = "SELECT studentNo FROM UserData WHERE name = @searchTerm";

		if (searchTerm->Length != 0) {
			System::Windows::Forms::DialogResult result = MessageBox::Show(
				"Are you sure you want to delete " + searchTerm + "'s record?", "Confirm Deletion",
				MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				SqlConnection^ connection = gcnew SqlConnection(connectionString); // Declare connection here
				try {
					SqlCommand^ selectCommand = gcnew SqlCommand(selectQuery, connection);
					selectCommand->Parameters->AddWithValue("@searchTerm", searchTerm);
					connection->Open();

					String^ studentNo = nullptr;
					SqlDataReader^ reader = selectCommand->ExecuteReader();
					if (reader->Read()) {
						studentNo = reader["studentNo"]->ToString();
					}
					reader->Close();

					if (studentNo != nullptr) {
						// Step 1: Copy data to DeletedData table and update status to "Deleted"
						String^ archiveQuery = "INSERT INTO DeletedData (name, studentNo, TreatmentDate, Treatment, Status) "
							"SELECT name, studentNo, TreatmentDate, Treatment, 'Deleted' FROM PatientTreatment " "WHERE studentNo = @studentNo";
						SqlCommand^ archiveCommand = gcnew SqlCommand(archiveQuery, connection);
						archiveCommand->Parameters->AddWithValue("@studentNo", studentNo);
						int archiveRowsAffected = archiveCommand->ExecuteNonQuery();

						if (archiveRowsAffected > 0) {
							// Step 2: Update the status in PatientTreatment to "Deleted" before deleting
							String^ updateStatusQuery = "UPDATE PatientTreatment SET Status = 'Deleted' WHERE studentNo = @studentNo";
							SqlCommand^ updateStatusCommand = gcnew SqlCommand(updateStatusQuery, connection);
							updateStatusCommand->Parameters->AddWithValue("@studentNo", studentNo);
							updateStatusCommand->ExecuteNonQuery();

							// Step 3: Delete data from PatientTreatment and UserData
							String^ deleteTreatmentQuery = "DELETE FROM PatientTreatment WHERE studentNo = @studentNo";
							SqlCommand^ deleteTreatmentCommand = gcnew SqlCommand(deleteTreatmentQuery, connection);
							deleteTreatmentCommand->Parameters->AddWithValue("@studentNo", studentNo);
							deleteTreatmentCommand->ExecuteNonQuery();

							String^ deleteUserDataQuery = "DELETE FROM UserData WHERE studentNo = @studentNo";
							SqlCommand^ deleteUserDataCommand = gcnew SqlCommand(deleteUserDataQuery, connection);
							deleteUserDataCommand->Parameters->AddWithValue("@studentNo", studentNo);
							int userRowsAffected = deleteUserDataCommand->ExecuteNonQuery();

							if (userRowsAffected > 0) {
								MessageBox::Show("Data archived and deleted successfully.");
							}
							else {
								MessageBox::Show("Failed to delete data from UserData.");
							}
						}
						else {
							MessageBox::Show("Failed to archive data.");
						}
					}
					else {
						MessageBox::Show("No matching data found for deletion.");
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message);
				}
				finally {
					if (connection->State == ConnectionState::Open) {
						connection->Close();
					}
				}
			}
			else {
				MessageBox::Show("Deletion canceled.");
			}
		}
		else {
			MessageBox::Show("Please type-in the name of the record to be deleted.");
		}
	}
	private: System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
		this->Hide();
		UserRegistrationAdmin^ userRegistration = gcnew UserRegistrationAdmin(this);
		userRegistration->Show();
	}
	private: System::Void tbnLoadTable_Click(System::Object^ sender, System::EventArgs^ e) {
		// Load all data from UserData into DataGridView1
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;");

		String^ userDataQuery = "SELECT name, email, studentNo, program, yearLevel, address, phoneNo, age, gender, dateOfBirth "
			"FROM UserData";
		SqlCommand^ userCmd = gcnew SqlCommand(userDataQuery, connection);
		SqlDataAdapter^ userAdapter = gcnew SqlDataAdapter(userCmd);
		DataTable^ userTable = gcnew DataTable();

		try {
			connection->Open();
			userAdapter->Fill(userTable);
			dataGridView1->DataSource = userTable;  // Bind the DataTable to DataGridView1
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error loading user data: " + ex->Message);
		}
		finally {
			connection->Close();
		}

		// Load only "Completed" records from PatientTreatment into DataGridView2
		connection = gcnew SqlConnection("Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;");

		String^ treatmentQuery = "SELECT name, studentNo, Treatment, TreatmentDate, Remarks "
			"FROM PatientTreatment WHERE Status = 'Completed'";
		SqlCommand^ treatmentCmd = gcnew SqlCommand(treatmentQuery, connection);
		SqlDataAdapter^ treatmentAdapter = gcnew SqlDataAdapter(treatmentCmd);
		DataTable^ treatmentTable = gcnew DataTable();

		try {
			connection->Open();
			treatmentAdapter->Fill(treatmentTable);
			dataGridView2->DataSource = treatmentTable;  // Bind the DataTable to DataGridView2
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error loading treatment data: " + ex->Message);
		}
		finally {
			connection->Close();
		}
	}
	// Button click event handler
private: System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->Hide();
	UpdatePatientRecord^ updatePatientRecord = gcnew UpdatePatientRecord(this);
	updatePatientRecord->Show();
}
};
}
