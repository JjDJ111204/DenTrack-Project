#pragma once

namespace DenTrackProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for Request
	/// </summary>
	public ref class Request : public System::Windows::Forms::Form
	{
	public:
		Form^ adminMainForm;
		Request(Form^ adminMainFormRef)
		{
			InitializeComponent();
			adminMainForm = adminMainFormRef;
		}

		Request(void)
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
		~Request()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ tbApprove;
	protected:
	private: System::Windows::Forms::Button^ tbCompleted;
	private: System::Windows::Forms::Button^ tbReject;
	private: System::Windows::Forms::TextBox^ tbTreatmentId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ tbnApproved;


	private: System::Windows::Forms::Button^ tbnInProgress;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ tbnLogout;
	private: System::Windows::Forms::TextBox^ tbReason;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ tbCancel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ tbnDeleted;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Request::typeid));
			this->tbApprove = (gcnew System::Windows::Forms::Button());
			this->tbCompleted = (gcnew System::Windows::Forms::Button());
			this->tbReject = (gcnew System::Windows::Forms::Button());
			this->tbTreatmentId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbnApproved = (gcnew System::Windows::Forms::Button());
			this->tbnInProgress = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tbnLogout = (gcnew System::Windows::Forms::Button());
			this->tbReason = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbCancel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbnDeleted = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tbApprove
			// 
			this->tbApprove->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbApprove->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbApprove->Location = System::Drawing::Point(45, 262);
			this->tbApprove->Name = L"tbApprove";
			this->tbApprove->Size = System::Drawing::Size(129, 27);
			this->tbApprove->TabIndex = 0;
			this->tbApprove->Text = L"Approve";
			this->tbApprove->UseVisualStyleBackColor = true;
			this->tbApprove->Click += gcnew System::EventHandler(this, &Request::tbApprove_Click);
			// 
			// tbCompleted
			// 
			this->tbCompleted->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCompleted->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbCompleted->Location = System::Drawing::Point(45, 295);
			this->tbCompleted->Name = L"tbCompleted";
			this->tbCompleted->Size = System::Drawing::Size(129, 27);
			this->tbCompleted->TabIndex = 1;
			this->tbCompleted->Text = L"Completed";
			this->tbCompleted->UseVisualStyleBackColor = true;
			this->tbCompleted->Click += gcnew System::EventHandler(this, &Request::tbCompleted_Click);
			// 
			// tbReject
			// 
			this->tbReject->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbReject->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbReject->Location = System::Drawing::Point(45, 328);
			this->tbReject->Name = L"tbReject";
			this->tbReject->Size = System::Drawing::Size(129, 27);
			this->tbReject->TabIndex = 2;
			this->tbReject->Text = L"Reject";
			this->tbReject->UseVisualStyleBackColor = true;
			this->tbReject->Click += gcnew System::EventHandler(this, &Request::tbReject_Click);
			// 
			// tbTreatmentId
			// 
			this->tbTreatmentId->Location = System::Drawing::Point(20, 225);
			this->tbTreatmentId->MaximumSize = System::Drawing::Size(180, 22);
			this->tbTreatmentId->MinimumSize = System::Drawing::Size(180, 22);
			this->tbTreatmentId->Name = L"tbTreatmentId";
			this->tbTreatmentId->Size = System::Drawing::Size(180, 22);
			this->tbTreatmentId->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(20, 205);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Enter or choose Treatment ID:";
			// 
			// tbnApproved
			// 
			this->tbnApproved->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnApproved->ForeColor = System::Drawing::Color::YellowGreen;
			this->tbnApproved->Location = System::Drawing::Point(310, 83);
			this->tbnApproved->MaximumSize = System::Drawing::Size(94, 37);
			this->tbnApproved->MinimumSize = System::Drawing::Size(94, 37);
			this->tbnApproved->Name = L"tbnApproved";
			this->tbnApproved->Size = System::Drawing::Size(94, 37);
			this->tbnApproved->TabIndex = 5;
			this->tbnApproved->Text = L"Approved";
			this->tbnApproved->UseVisualStyleBackColor = true;
			this->tbnApproved->Click += gcnew System::EventHandler(this, &Request::tbnApproved_Click);
			// 
			// tbnInProgress
			// 
			this->tbnInProgress->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnInProgress->ForeColor = System::Drawing::Color::Gold;
			this->tbnInProgress->Location = System::Drawing::Point(410, 83);
			this->tbnInProgress->MaximumSize = System::Drawing::Size(118, 37);
			this->tbnInProgress->MinimumSize = System::Drawing::Size(118, 37);
			this->tbnInProgress->Name = L"tbnInProgress";
			this->tbnInProgress->Size = System::Drawing::Size(118, 37);
			this->tbnInProgress->TabIndex = 6;
			this->tbnInProgress->Text = L"In Progress";
			this->tbnInProgress->UseVisualStyleBackColor = true;
			this->tbnInProgress->Click += gcnew System::EventHandler(this, &Request::tbnInProgress_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Location = System::Drawing::Point(310, 126);
			this->dataGridView1->MaximumSize = System::Drawing::Size(516, 354);
			this->dataGridView1->MinimumSize = System::Drawing::Size(516, 354);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(516, 354);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Request::dataGridView1_CellClick);
			// 
			// tbnLogout
			// 
			this->tbnLogout->BackColor = System::Drawing::Color::LightBlue;
			this->tbnLogout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tbnLogout.BackgroundImage")));
			this->tbnLogout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tbnLogout->Location = System::Drawing::Point(12, 518);
			this->tbnLogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbnLogout->MaximumSize = System::Drawing::Size(38, 38);
			this->tbnLogout->MinimumSize = System::Drawing::Size(38, 38);
			this->tbnLogout->Name = L"tbnLogout";
			this->tbnLogout->Size = System::Drawing::Size(38, 38);
			this->tbnLogout->TabIndex = 9;
			this->tbnLogout->UseVisualStyleBackColor = false;
			this->tbnLogout->Click += gcnew System::EventHandler(this, &Request::tbnLogout_Click);
			// 
			// tbReason
			// 
			this->tbReason->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbReason->Location = System::Drawing::Point(24, 419);
			this->tbReason->Multiline = true;
			this->tbReason->Name = L"tbReason";
			this->tbReason->Size = System::Drawing::Size(180, 61);
			this->tbReason->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(21, 400);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Enter reason:";
			// 
			// tbCancel
			// 
			this->tbCancel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCancel->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbCancel->Location = System::Drawing::Point(45, 361);
			this->tbCancel->Name = L"tbCancel";
			this->tbCancel->Size = System::Drawing::Size(129, 27);
			this->tbCancel->TabIndex = 12;
			this->tbCancel->Text = L"Cancel";
			this->tbCancel->UseVisualStyleBackColor = true;
			this->tbCancel->Click += gcnew System::EventHandler(this, &Request::tbCancel_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::OrangeRed;
			this->button1->Location = System::Drawing::Point(534, 83);
			this->button1->MaximumSize = System::Drawing::Size(187, 37);
			this->button1->MinimumSize = System::Drawing::Size(187, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 37);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Cancelled/Rejected";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Request::button1_Click);
			// 
			// tbnDeleted
			// 
			this->tbnDeleted->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnDeleted->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbnDeleted->Location = System::Drawing::Point(727, 83);
			this->tbnDeleted->MaximumSize = System::Drawing::Size(187, 37);
			this->tbnDeleted->Name = L"tbnDeleted";
			this->tbnDeleted->Size = System::Drawing::Size(99, 37);
			this->tbnDeleted->TabIndex = 14;
			this->tbnDeleted->Text = L"Deleted";
			this->tbnDeleted->UseVisualStyleBackColor = true;
			this->tbnDeleted->Click += gcnew System::EventHandler(this, &Request::tbnDeleted_Click);
			// 
			// Request
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(897, 567);
			this->Controls->Add(this->tbnDeleted);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbCancel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbReason);
			this->Controls->Add(this->tbnLogout);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->tbnInProgress);
			this->Controls->Add(this->tbnApproved);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbTreatmentId);
			this->Controls->Add(this->tbReject);
			this->Controls->Add(this->tbCompleted);
			this->Controls->Add(this->tbApprove);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximumSize = System::Drawing::Size(915, 614);
			this->MinimumSize = System::Drawing::Size(915, 614);
			this->Name = L"Request";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Request";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tbnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		adminMainForm->ShowDialog(); 
	}
private: System::Void tbnApproved_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	String^ selectQuery = "SELECT * FROM PatientTreatment WHERE Status = 'Approved'";

	SqlCommand^ cmd = gcnew SqlCommand(selectQuery, connection);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
	DataTable^ approvedTable = gcnew DataTable();

	try {
		connection->Open();
		adapter->Fill(approvedTable);
		dataGridView1->DataSource = approvedTable;
		isDeletedData = false;

	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred while loading approved treatments: " + ex->Message);
	}
	finally {
		connection->Close();
	}
}
private: System::Void tbnInProgress_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	String^ selectQuery = "SELECT * FROM PatientTreatment WHERE Status = 'In progress'";

	SqlCommand^ cmd = gcnew SqlCommand(selectQuery, connection);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
	DataTable^ approvedTable = gcnew DataTable();

	try {
		connection->Open();
		adapter->Fill(approvedTable);
		dataGridView1->DataSource = approvedTable;
		isDeletedData = false;
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred while loading approved treatments: " + ex->Message);
	}
	finally {
		connection->Close();
	}
}
private: bool isDeletedData = false;
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];
		if (selectedRow->Cells["TreatmentID"]->Value != nullptr) {
			if (isDeletedData) {
				MessageBox::Show("This data is inaccessible");
				tbTreatmentId->Text = ""; 
			}
			else {
				tbTreatmentId->Text = selectedRow->Cells["TreatmentID"]->Value->ToString();
			}
		}
		else {
			tbTreatmentId->Text = "";
		}
	}
}
private: System::Void tbApprove_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ treatmentId = tbTreatmentId->Text;

	if (String::IsNullOrEmpty(treatmentId)) {
		MessageBox::Show("Please select a Treatment ID.");
		return;
	}

	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	// SQL query to check current status and update if "In progress"
	String^ query = "UPDATE PatientTreatment SET Status = @newStatus WHERE TreatmentID = @treatmentId AND Status = 'In progress'";
	SqlCommand^ cmd = gcnew SqlCommand(query, connection);

	// Define parameters
	cmd->Parameters->AddWithValue("@treatmentId", treatmentId);
	cmd->Parameters->AddWithValue("@newStatus", "Approved"); // Replace with your desired new status

	try {
		// Open the connection
		connection->Open();

		// Execute the update command and check if any rows were affected
		int rowsAffected = cmd->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Status updated successfully.");
			tbTreatmentId->Clear();  
		}
		else {
			MessageBox::Show("Status is not 'In progress', or Treatment ID is invalid.");
			tbTreatmentId->Clear(); 
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	finally {
		// Close the connection
		connection->Close();
	}
}
private: System::Void tbCompleted_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the TreatmentID from the textbox
	String^ treatmentId = tbTreatmentId->Text;

	// Check if TreatmentID is provided
	if (String::IsNullOrEmpty(treatmentId)) {
		MessageBox::Show("Please select a Treatment ID.");
		return;
	}

	// Database connection string
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	// SQL query to check current status and update if "Approved"
	String^ query = "UPDATE PatientTreatment SET Status = @newStatus WHERE TreatmentID = @treatmentId AND Status = 'Approved'";
	SqlCommand^ cmd = gcnew SqlCommand(query, connection);

	// Define parameters
	cmd->Parameters->AddWithValue("@treatmentId", treatmentId);
	cmd->Parameters->AddWithValue("@newStatus", "Completed"); // New status

	try {
		// Open the connection
		connection->Open();

		// Execute the update command and check if any rows were affected
		int rowsAffected = cmd->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Status updated to 'Completed' successfully.");
			tbTreatmentId->Clear(); 
		}
		else {
			MessageBox::Show("Status is not 'Approved', or Treatment ID is invalid.");
			tbTreatmentId->Clear();  
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	finally {
		// Close the connection
		connection->Close();
	}
}
private: System::Void tbReject_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the TreatmentID and Reason from the textboxes
	String^ treatmentId = tbTreatmentId->Text;
	String^ reason = tbReason->Text;

	// Check if TreatmentID and Reason are provided
	if (String::IsNullOrEmpty(treatmentId)) {
		MessageBox::Show("Please select a Treatment ID.");
		return;
	}
	if (String::IsNullOrEmpty(reason)) {
		MessageBox::Show("Please provide a reason for rejection.");
		return;
	}

	// Database connection string
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	// SQL query to check current status, update status to "Rejected" if "In progress", and add reason to Remarks
	String^ query = "UPDATE PatientTreatment SET Status = @newStatus, Remarks = @reason WHERE TreatmentID = @treatmentId AND Status = 'In progress'";
	SqlCommand^ cmd = gcnew SqlCommand(query, connection);

	// Define parameters
	cmd->Parameters->AddWithValue("@treatmentId", treatmentId);
	cmd->Parameters->AddWithValue("@newStatus", "Rejected"); // New status
	cmd->Parameters->AddWithValue("@reason", reason); // Reason for rejection

	try {
		// Open the connection
		connection->Open();

		// Execute the update command and check if any rows were affected
		int rowsAffected = cmd->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Status updated to 'Rejected' and reason added to Remarks successfully.");
			tbTreatmentId->Clear(); 
			tbReason->Clear(); 
		} 
		else {
			MessageBox::Show("Status is not 'In progress', or Treatment ID is invalid.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	finally {
		// Close the connection
		connection->Close();
	}
}
private: System::Void tbCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the TreatmentID and Reason from the textboxes
	String^ treatmentId = tbTreatmentId->Text;
	String^ reason = tbReason->Text;

	// Check if TreatmentID and Reason are provided
	if (String::IsNullOrEmpty(treatmentId)) {
		MessageBox::Show("Please select a Treatment ID.");
		return;
	}
	if (String::IsNullOrEmpty(reason)) {
		MessageBox::Show("Please provide a reason for cancellation.");
		return;
	}

	// Database connection string
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	// SQL query to check current status, update status to "Canceled" if "Approved", and add reason to Remarks
	String^ query = "UPDATE PatientTreatment SET Status = @newStatus, Remarks = @reason WHERE TreatmentID = @treatmentId AND Status = 'Approved'";
	SqlCommand^ cmd = gcnew SqlCommand(query, connection);

	// Define parameters
	cmd->Parameters->AddWithValue("@treatmentId", treatmentId);
	cmd->Parameters->AddWithValue("@newStatus", "Cancelled"); // New status
	cmd->Parameters->AddWithValue("@reason", reason); // Reason for cancellation

	try {
		// Open the connection
		connection->Open();

		// Execute the update command and check if any rows were affected
		int rowsAffected = cmd->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Status updated to 'Canceled' and reason added to Remarks successfully.");
			tbTreatmentId->Clear();
			tbReason->Clear();
		}
		else {
			MessageBox::Show("Status is not 'Approved', or Treatment ID is invalid.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	finally {
		// Close the connection
		connection->Close();
	}
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Connection string
		String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
		SqlConnection^ connection = gcnew SqlConnection(connString);

		// SQL query to select all columns where Status is either "Rejected" or "Cancelled"
		String^ selectQuery = "SELECT * FROM PatientTreatment WHERE Status IN ('Rejected', 'Cancelled')";

		// Create the SQL command and adapter
		SqlCommand^ cmd = gcnew SqlCommand(selectQuery, connection);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
		DataTable^ statusTable = gcnew DataTable();

		try {
			connection->Open();
			adapter->Fill(statusTable);
			dataGridView1->DataSource = statusTable;
			isDeletedData = false;
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while loading treatments: " + ex->Message);
		}
		finally {
			connection->Close();
		}
	}
private: System::Void tbnDeleted_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);
	String^ selectQuery = "SELECT * FROM DeletedData";

	SqlCommand^ cmd = gcnew SqlCommand(selectQuery, connection);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
	DataTable^ statusTable = gcnew DataTable();

	try {
		connection->Open();
		adapter->Fill(statusTable);
		dataGridView1->DataSource = statusTable;
		isDeletedData = true;
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred while loading treatments: " + ex->Message);
	}
	finally {
		connection->Close();
	}
}
};
}
