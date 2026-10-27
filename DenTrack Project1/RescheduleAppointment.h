#pragma once
#include <cliext/vector>
#include "User.h"

namespace DenTrackProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace cliext;


	/// <summary>
	/// Summary for RescheduleAppointment
	/// </summary>
	public ref class RescheduleAppointment : public System::Windows::Forms::Form
	{
	private: User^ currentUser;
	private: System::Windows::Forms::Button^ tbnLogout;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ tbnCancel;



	public:
		Form^ MainForm;
		RescheduleAppointment(Form^ MainFormRef)
		{
			InitializeComponent();
			MainForm = MainFormRef;
		}

		RescheduleAppointment(User^ user)
		{
			InitializeComponent();
			currentUser = user;

			this->Owner = nullptr;
		}

		RescheduleAppointment(void)
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
		~RescheduleAppointment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::TextBox^ tbNewSchedule;











	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RescheduleAppointment::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->tbNewSchedule = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbnLogout = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tbnCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(332, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(947, 55);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Reschedule Appointment";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(4, 1);
			this->monthCalendar1->Location = System::Drawing::Point(410, 140);
			this->monthCalendar1->MaximumSize = System::Drawing::Size(794, 207);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->MinimumSize = System::Drawing::Size(794, 207);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 14;
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &RescheduleAppointment::monthCalendar1_DateSelected);
			// 
			// tbNewSchedule
			// 
			this->tbNewSchedule->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNewSchedule->Location = System::Drawing::Point(70, 269);
			this->tbNewSchedule->Name = L"tbNewSchedule";
			this->tbNewSchedule->Size = System::Drawing::Size(185, 28);
			this->tbNewSchedule->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(68, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Change Schedule:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(420, 359);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 35);
			this->button1->TabIndex = 20;
			this->button1->Text = L"My Appointment";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RescheduleAppointment::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Location = System::Drawing::Point(575, 359);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 35);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Load";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RescheduleAppointment::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Location = System::Drawing::Point(420, 468);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(300, 84);
			this->dataGridView1->TabIndex = 22;
			this->dataGridView1->CellClick += gcnew DataGridViewCellEventHandler(this, &RescheduleAppointment::dataGridView1_CellClick); 

			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->Location = System::Drawing::Point(890, 468);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(300, 84);
			this->dataGridView2->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::LightBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::MintCream;
			this->label4->Location = System::Drawing::Point(420, 444);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(300, 23);
			this->label4->TabIndex = 24;
			this->label4->Text = L"My Appointment";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::LightBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::MintCream;
			this->label5->Location = System::Drawing::Point(890, 444);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(300, 23);
			this->label5->TabIndex = 25;
			this->label5->Text = L" All Appointment";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbnLogout
			// 
			this->tbnLogout->BackColor = System::Drawing::Color::LightBlue;
			this->tbnLogout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tbnLogout.BackgroundImage")));
			this->tbnLogout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tbnLogout->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbnLogout->Location = System::Drawing::Point(12, 544);
			this->tbnLogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbnLogout->Name = L"tbnLogout";
			this->tbnLogout->Size = System::Drawing::Size(49, 48);
			this->tbnLogout->TabIndex = 26;
			this->tbnLogout->UseVisualStyleBackColor = false;
			this->tbnLogout->Click += gcnew System::EventHandler(this, &RescheduleAppointment::tbnLogout_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button3->Location = System::Drawing::Point(102, 327);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 35);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Reschedule";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RescheduleAppointment::button3_Click);
			// 
			// tbnCancel
			// 
			this->tbnCancel->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnCancel->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbnCancel->Location = System::Drawing::Point(102, 377);
			this->tbnCancel->Name = L"tbnCancel";
			this->tbnCancel->Size = System::Drawing::Size(120, 35);
			this->tbnCancel->TabIndex = 28;
			this->tbnCancel->Text = L"Cancel";
			this->tbnCancel->UseVisualStyleBackColor = true;
			this->tbnCancel->Click += gcnew System::EventHandler(this, &RescheduleAppointment::tbnCancel_Click);
			// 
			// RescheduleAppointment
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1282, 603);
			this->Controls->Add(this->tbnCancel);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->tbnLogout);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbNewSchedule);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1300, 650);
			this->MinimumSize = System::Drawing::Size(1300, 650);
			this->Name = L"RescheduleAppointment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RescheduleAppointment";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
		String^ query = "SELECT TreatmentDate FROM PatientTreatment WHERE Status = 'Approved'";

		vector<DateTime> approvedDates;

		try {
			// Open a connection to the database
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			connection->Open();

			// Execute the query
			SqlDataReader^ reader = command->ExecuteReader();
			while (reader->Read()) {
				// Assuming TreatmentDate is of DateTime type in database
				DateTime treatmentDate = reader->GetDateTime(0);
				approvedDates.push_back(treatmentDate);
			}

			// Close the reader and connection
			reader->Close();
			connection->Close();

			// Set the selected dates on monthCalendar1
			for each (DateTime date in approvedDates) {
				monthCalendar1->AddBoldedDate(date);
			}

			// Refresh the MonthCalendar to display the bolded dates
			monthCalendar1->UpdateBoldedDates();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
private:
	void monthCalendar1_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e)
	{
		// Clear the DataGridView
		this->dataGridView2->Rows->Clear();

		// Get the selected date
		DateTime selectedDate = e->Start;

		// Database connection string (update with your connection details)
		String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";

		// SQL Query to get all treatments on the selected date
		String^ query = "SELECT TreatmentDate, Treatment FROM PatientTreatment WHERE Status = 'Approved' AND CAST(TreatmentDate AS DATE) = @selectedDate";

		SqlConnection^ conn = gcnew SqlConnection(connString);
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@selectedDate", selectedDate.Date);

		try
		{
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();

			// Set up DataGridView columns if not done already
			if (this->dataGridView2->Columns->Count == 0)
			{
				this->dataGridView2->Columns->Add("TreatmentDate", "Treatment Date");
				this->dataGridView2->Columns->Add("Treatment", "Treatment");
			}

			while (reader->Read())
			{
				// Get TreatmentDate and Treatment values
				DateTime treatmentDate = reader->GetDateTime(0);
				String^ treatment = reader->GetString(1);

				// Add row to DataGridView
				this->dataGridView2->Rows->Add(treatmentDate.ToString(), treatment);
			}

			reader->Close();
			conn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message);
		}
	}
private: System::Void tbnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: String^ currentTreatmentID; 
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
	// Connection string to connect to the database
	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";

	// Define the SQL connection and query
	SqlConnection^ connection = gcnew SqlConnection(connString);

	// Update the query to exclude "Rejected", "Cancelled", and "Completed"
	String^ treatmentQuery = "SELECT Treatment, TreatmentId, TreatmentDate, Status FROM PatientTreatment WHERE name = @name AND Status NOT IN ('Rejected', 'Cancelled', 'Completed')";

	// Create the SQL command and add parameters
	SqlCommand^ cmd = gcnew SqlCommand(treatmentQuery, connection);
	cmd->Parameters->AddWithValue("@name", currentUser->name);

	// Define a data adapter to execute the query and fill the results into a DataTable
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
	DataTable^ treatmentTable = gcnew DataTable();

	try {
		// Open the connection and fill the DataTable once
		connection->Open();
		adapter->Fill(treatmentTable);

		// Bind the DataTable to the DataGridView
		dataGridView1->DataSource = treatmentTable;

		// Apply the row colors based on the Status after data is loaded
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			// Check if the "Status" cell is not null and has a value
			if (dataGridView1->Rows[i]->Cells["Status"]->Value != nullptr) {
				String^ status = dataGridView1->Rows[i]->Cells["Status"]->Value->ToString();

				if (status->Equals("Approved")) {
					dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::GreenYellow; 
				}
				else if (status->Equals("In progress")) {
					dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::Khaki; 
				}
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error retrieving treatments: " + ex->Message);
	}
	finally {
		connection->Close();
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
		String^ treatmentDate = dataGridView1->Rows[e->RowIndex]->Cells["TreatmentDate"]->Value->ToString();
		currentTreatmentID = dataGridView1->Rows[e->RowIndex]->Cells["TreatmentID"]->Value->ToString();  // Store the TreatmentID

		tbNewSchedule->Text = treatmentDate;  
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the input date and time from the tbNewSchedule textbox
	String^ dateTimeInput = tbNewSchedule->Text;

	// Parse the input date and time
	DateTime newTreatmentDateTime;
	if (!DateTime::TryParseExact(dateTimeInput, "dd/MM/yyyy HH:mm", nullptr, System::Globalization::DateTimeStyles::None, newTreatmentDateTime)) {
		MessageBox::Show("Invalid date and time format. Please enter the date and time in the format dd/MM/yyyy HH:mm.");
		return;
	}

	// Check if the selected date and time is in the future
	DateTime currentDateTime = DateTime::Now;
	if (newTreatmentDateTime <= currentDateTime) {
		MessageBox::Show("You cannot schedule an appointment for today or any past date. Please select a future date and time.");
		tbNewSchedule->Clear();
		return;
	}

	// Validate if the time slot is correct
	array<String^>^ validTimeSlots = gcnew array<String^> { "09:00", "10:00", "11:00", "13:00", "14:00", "15:00", "16:00" };
	bool isTimeSlotValid = false;
	String^ timeInput = newTreatmentDateTime.ToString("HH:mm");

	for each (String ^ timeSlot in validTimeSlots) {
		if (timeInput->Equals(timeSlot)) {
			isTimeSlotValid = true;
			break;
		}
	}

	if (!isTimeSlotValid) {
		MessageBox::Show("Invalid time slot. Please select a valid time.");
		return;
	}

	String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	SqlConnection^ connection = gcnew SqlConnection(connString);
	String^ studentNo = currentUser->studentNo;

	// Check if the selected date and time already exists in the PatientTreatment table with a conflicting status
	String^ checkQuery = "SELECT Status FROM PatientTreatment WHERE TreatmentDate = @newDateTimeInput AND TreatmentID <> @treatmentID";
	SqlCommand^ checkCmd = gcnew SqlCommand(checkQuery, connection);
	checkCmd->Parameters->AddWithValue("@newDateTimeInput", newTreatmentDateTime);
	checkCmd->Parameters->AddWithValue("@treatmentID", currentTreatmentID); // Exclude the current treatment ID

	try {
		connection->Open();
		SqlDataReader^ reader = checkCmd->ExecuteReader();

		if (reader->Read()) {
			String^ existingStatus = reader->GetString(0);

			// If the status is not "Rejected" or "Cancelled", restrict the scheduling
			if (existingStatus != "Rejected" && existingStatus != "Cancelled" && existingStatus != "In progress") {
				MessageBox::Show("An appointment already exists on the selected date and time with an active status. Please choose a different time.");
				reader->Close();
				return;
			}
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error checking existing appointment: " + ex->Message);
		return;
	}
	finally {
		connection->Close();
	}

	// Proceed to update the TreatmentDate in PatientTreatment table if no conflict
	String^ updateQuery = "UPDATE PatientTreatment SET TreatmentDate = @newDate WHERE TreatmentID = @treatmentID";
	SqlCommand^ cmd = gcnew SqlCommand(updateQuery, connection); 
	cmd->Parameters->AddWithValue("@newDate", newTreatmentDateTime); 
	cmd->Parameters->AddWithValue("@treatmentID", currentTreatmentID); 

	try {
		connection->Open();
		int rowsAffected = cmd->ExecuteNonQuery();

		if (rowsAffected > 0) {
			// After successfully updating the TreatmentDate, change the status to "In progress"
			String^ updateStatusQuery = "UPDATE PatientTreatment SET Status = 'In progress' WHERE TreatmentID = @treatmentID";
			SqlCommand^ statusCmdUpdate = gcnew SqlCommand(updateStatusQuery, connection);
			statusCmdUpdate->Parameters->AddWithValue("@treatmentID", currentTreatmentID);

			int statusRowsAffected = statusCmdUpdate->ExecuteNonQuery();

			if (statusRowsAffected > 0) {
				MessageBox::Show("Schedule updated successfully.");
				tbNewSchedule->Clear();
			}
			else {
				MessageBox::Show("Failed to update status.");
				tbNewSchedule->Clear();
			}
		}
		else {
			MessageBox::Show("Failed to update the schedule. Please ensure the treatment exists.");
			tbNewSchedule->Clear();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	finally {
		connection->Close();
	}

	}
	private: System::Void tbnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ dateTimeInput = tbNewSchedule->Text->Trim(); 

		// Extract the date and time from the inputted dateTime
		String^ dateInput = dateTimeInput->Substring(0, dateTimeInput->IndexOf(" ")); 
		String^ timeInput = dateTimeInput->Substring(dateTimeInput->LastIndexOf(" ") + 1); 

		// Convert the dateTimeInput to DateTime to ensure correct formatting
		DateTime newDateTime;
		if (DateTime::TryParse(dateTimeInput, newDateTime)) {
			String^ formattedDate = newDateTime.ToString("yyyy-MM-dd HH:mm:ss");

			System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to cancel this appointment?",
				"Confirm Cancellation",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				String^ connString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
				SqlConnection^ connection = gcnew SqlConnection(connString);

				// SQL query to update the record's status based on date and time (TreatmentDate)
				String^ updateQuery = "UPDATE PatientTreatment SET Status = 'Cancelled' WHERE TreatmentDate = @dateTimeInput";

				SqlCommand^ cmd = gcnew SqlCommand(updateQuery, connection);
				cmd->Parameters->AddWithValue("@dateTimeInput", formattedDate);

				try {
					connection->Open();
					int rowsAffected = cmd->ExecuteNonQuery();

					if (rowsAffected > 0) {
						MessageBox::Show("Appointment has been Cancelled.");
						tbNewSchedule->Clear(); 
					}
					else {
						MessageBox::Show("No appointment found for the specified date and time.");
						tbNewSchedule->Clear(); 
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show("An error occurred: " + ex->Message);
				}
				finally {
					connection->Close();
				}
			}
			else {
				MessageBox::Show("Cancellation canceled.");
			}
		}
		else {
			MessageBox::Show("Invalid date/time format.");
		}
	}
};
}
