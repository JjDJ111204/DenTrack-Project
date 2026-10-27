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
	/// Summary for AdminAppoinment
	/// </summary>
	public ref class AdminAppointment : public System::Windows::Forms::Form
	{
	private: 
		User^ currentUser;
	public:
		Form^ MainForm;
		AdminAppointment(Form^ MainFormRef)
		{
			InitializeComponent();
			MainForm = MainFormRef;
		}

		AdminAppointment(User^ user)
		{
			InitializeComponent();
			currentUser = user;

			this->Owner = nullptr;
		}

		AdminAppointment(void)
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
		~AdminAppointment()
		{
			if (components)
			{
				delete components;
			}
		}



	protected:

	protected:


	private: System::Windows::Forms::Button^ tbnLogout;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ tbnLoad;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbDentalService;

	private: System::Windows::Forms::TextBox^ tbDateTime;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ tbCreate;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminAppointment::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tbnLogout = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tbnLoad = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbDentalService = (gcnew System::Windows::Forms::TextBox());
			this->tbDateTime = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbCreate = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tbnLogout
			// 
			this->tbnLogout->BackColor = System::Drawing::Color::LightBlue;
			this->tbnLogout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tbnLogout.BackgroundImage")));
			this->tbnLogout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tbnLogout->Location = System::Drawing::Point(12, 694);
			this->tbnLogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbnLogout->Name = L"tbnLogout";
			this->tbnLogout->Size = System::Drawing::Size(49, 48);
			this->tbnLogout->TabIndex = 8;
			this->tbnLogout->UseVisualStyleBackColor = false;
			this->tbnLogout->Click += gcnew System::EventHandler(this, &AdminAppointment::tbnLogout_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(4, 2);
			this->monthCalendar1->Location = System::Drawing::Point(405, 118);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(7);
			this->monthCalendar1->MaximumSize = System::Drawing::Size(794, 398);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->MinimumSize = System::Drawing::Size(794, 398);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 9;
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &AdminAppointment::monthCalendar1_DateSelected);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Location = System::Drawing::Point(417, 580);
			this->dataGridView1->MinimumSize = System::Drawing::Size(774, 151);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->Size = System::Drawing::Size(774, 151);
			this->dataGridView1->TabIndex = 10;
			// 
			// tbnLoad
			// 
			this->tbnLoad->BackColor = System::Drawing::Color::Transparent;
			this->tbnLoad->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnLoad->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbnLoad->Location = System::Drawing::Point(417, 526);
			this->tbnLoad->Name = L"tbnLoad";
			this->tbnLoad->Size = System::Drawing::Size(79, 36);
			this->tbnLoad->TabIndex = 11;
			this->tbnLoad->Text = L"Load";
			this->tbnLoad->UseVisualStyleBackColor = false;
			this->tbnLoad->Click += gcnew System::EventHandler(this, &AdminAppointment::tbnLoad_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(330, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(947, 55);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Create Appointment";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbDentalService
			// 
			this->tbDentalService->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDentalService->Location = System::Drawing::Point(41, 339);
			this->tbDentalService->Name = L"tbDentalService";
			this->tbDentalService->Size = System::Drawing::Size(231, 27);
			this->tbDentalService->TabIndex = 14;
			// 
			// tbDateTime
			// 
			this->tbDateTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDateTime->Location = System::Drawing::Point(41, 420);
			this->tbDateTime->Name = L"tbDateTime";
			this->tbDateTime->Size = System::Drawing::Size(231, 27);
			this->tbDateTime->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(38, 320);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 16);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Enter Dental Service:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(38, 401);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 16);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Enter Date and Time:";
			// 
			// tbCreate
			// 
			this->tbCreate->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCreate->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbCreate->Location = System::Drawing::Point(86, 486);
			this->tbCreate->Name = L"tbCreate";
			this->tbCreate->Size = System::Drawing::Size(147, 30);
			this->tbCreate->TabIndex = 18;
			this->tbCreate->Text = L"Create";
			this->tbCreate->UseVisualStyleBackColor = true;
			this->tbCreate->Click += gcnew System::EventHandler(this, &AdminAppointment::tbCreate_Click);
			// 
			// AdminAppointment
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1282, 753);
			this->Controls->Add(this->tbCreate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbDateTime);
			this->Controls->Add(this->tbDentalService);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbnLoad);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->tbnLogout);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MinimumSize = System::Drawing::Size(1300, 800);
			this->Name = L"AdminAppointment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DenTrack";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tbnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void tbCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the input values from the textboxes 
		String^ dentalService = tbDentalService->Text;
		String^ dateTimeInput = tbDateTime->Text;

		// List of predetermined dental services
		array<String^>^ validServices = gcnew array<String^> { "Filling", "Tooth Extraction", "General Check-up" };
		bool isServiceValid = false;

		// Check if the inputted dental service is in the list of valid services
		for each (String ^ service in validServices) {
			if (dentalService->Equals(service)) {
				isServiceValid = true;
				break;
			}
		}

		if (!isServiceValid) {
			MessageBox::Show("Invalid dental service. Please select a valid service.");
			return;
		}

		// Parse the date and time from the input (assuming the format is "MM/dd/yyyy HH:mm:ss")
		DateTime appointmentDateTime;
		if (!DateTime::TryParseExact(dateTimeInput, "MM/dd/yyyy HH:mm", nullptr, System::Globalization::DateTimeStyles::None, appointmentDateTime)) {
			MessageBox::Show("Invalid date and time format. Please enter the date and time in the format MM/dd/yyyy HH:mm.");
			return;
		}

		// Get the current date and time
		DateTime currentDateTime = DateTime::Now;

		// Restrict scheduling to future dates only
		if (appointmentDateTime <= currentDateTime) {
			MessageBox::Show("You cannot create an appointment for today or any past date. Please select a future date.");
			return;
		}

		// List of valid time slots
		array<String^>^ validTimeSlots = gcnew array<String^> { "09:00", "10:00", "11:00", "13:00", "14:00", "15:00", "16:00" };
		bool isTimeSlotValid = false;

		// Extract the time part from appointmentDateTime
		String^ timeInput = appointmentDateTime.ToString("HH:mm");

		// Check if the extracted time is in the list of valid time slots
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

		// Database connection string (adjust if needed)
		SqlConnection^ connection = gcnew SqlConnection("Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;");

		// Check if the selected date and time already exists in the PatientTreatment table with a conflicting status
		String^ checkQuery = "SELECT Status FROM PatientTreatment WHERE TreatmentDate = @appointmentDateTime";
		SqlCommand^ checkCmd = gcnew SqlCommand(checkQuery, connection);
		checkCmd->Parameters->AddWithValue("@appointmentDateTime", appointmentDateTime);

		try {
			connection->Open();
			SqlDataReader^ reader = checkCmd->ExecuteReader();

			bool allowCreation = true;  // Flag to determine if a new appointment can be created

			while (reader->Read()) {
				String^ existingStatus = reader->GetString(0);

				// If there's an existing appointment with a status other than "In progress," "Rejected," or "Cancelled", restrict the scheduling
				if (existingStatus != "In progress" && existingStatus != "Rejected" && existingStatus != "Cancelled") {
					MessageBox::Show("An appointment already exists on the selected date and time with an active status. Please choose a different time.");
					allowCreation = false;
					break;
				}
			}
			reader->Close();

			// Only proceed with appointment creation if allowed
			if (allowCreation) {
				// Define SQL command to insert a new record into PatientTreatment (table2)
				String^ insertQuery = "INSERT INTO PatientTreatment (name, studentNo, Treatment, TreatmentDate, Remarks, Status) VALUES (@name, @studentNo, @Treatment, @TreatmentDate, @Remarks, @Status)";
				SqlCommand^ cmd = gcnew SqlCommand(insertQuery, connection);

				// Retrieve current user details
				// Assumes `currentUser` is an accessible User object with properties like name and studentNo
				cmd->Parameters->AddWithValue("@name", currentUser->name);
				cmd->Parameters->AddWithValue("@studentNo", currentUser->studentNo);
				cmd->Parameters->AddWithValue("@Treatment", dentalService);
				cmd->Parameters->AddWithValue("@TreatmentDate", appointmentDateTime);
				cmd->Parameters->AddWithValue("@Remarks", ""); // Adjust if Remarks are required
				cmd->Parameters->AddWithValue("@Status", "In progress");

				// Execute the command
				cmd->ExecuteNonQuery();
				MessageBox::Show("Appointment created successfully.");
				tbDentalService->Clear();
				tbDateTime->Clear();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error creating appointment: " + ex->Message);
		}
		finally {
			// Close the connection
			connection->Close();
		}
	}
private: System::Void tbnLoad_Click(System::Object^ sender, System::EventArgs^ e) {
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
		this->dataGridView1->Rows->Clear();

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
			if (this->dataGridView1->Columns->Count == 0)
			{
				this->dataGridView1->Columns->Add("TreatmentDate", "Treatment Date");
				this->dataGridView1->Columns->Add("Treatment", "Treatment");
			}

			while (reader->Read())
			{
				// Get TreatmentDate and Treatment values
				DateTime treatmentDate = reader->GetDateTime(0);
				String^ treatment = reader->GetString(1);

				// Add row to DataGridView
				this->dataGridView1->Rows->Add(treatmentDate.ToString(), treatment);
			}

			reader->Close();
			conn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message);
		}
	}
};
}
