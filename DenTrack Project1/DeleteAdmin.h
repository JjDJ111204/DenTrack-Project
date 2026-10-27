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
	/// Summary for DeleteAdmin
	/// </summary>
	public ref class DeleteAdmin : public System::Windows::Forms::Form
	{
	public:
		Form^ adminForm;
		DeleteAdmin(Form^ adminFormRef)
		{
			InitializeComponent();
			adminForm = adminFormRef;
			//
			//TODO: Add the constructor code here
			//
		}

		DeleteAdmin(void)
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
		~DeleteAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ tbnLoad;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ tbnBack;
	private: System::Windows::Forms::TextBox^ tbName;

	private: System::Windows::Forms::Button^ tbnDelete;
	private: System::Windows::Forms::Label^ lbName;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteAdmin::typeid));
			this->tbnLoad = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tbnBack = (gcnew System::Windows::Forms::Button());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbnDelete = (gcnew System::Windows::Forms::Button());
			this->lbName = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tbnLoad
			// 
			this->tbnLoad->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnLoad->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbnLoad->Location = System::Drawing::Point(40, 120);
			this->tbnLoad->MaximumSize = System::Drawing::Size(57, 31);
			this->tbnLoad->MinimumSize = System::Drawing::Size(57, 31);
			this->tbnLoad->Name = L"tbnLoad";
			this->tbnLoad->Size = System::Drawing::Size(57, 31);
			this->tbnLoad->TabIndex = 0;
			this->tbnLoad->Text = L"Load";
			this->tbnLoad->UseVisualStyleBackColor = true;
			this->tbnLoad->Click += gcnew System::EventHandler(this, &DeleteAdmin::tbnLoad_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Location = System::Drawing::Point(40, 157);
			this->dataGridView1->MaximumSize = System::Drawing::Size(468, 280);
			this->dataGridView1->MinimumSize = System::Drawing::Size(468, 280);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(468, 280);
			this->dataGridView1->TabIndex = 1;
			// 
			// tbnBack
			// 
			this->tbnBack->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnBack->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->tbnBack->Location = System::Drawing::Point(12, 492);
			this->tbnBack->MaximumSize = System::Drawing::Size(57, 31);
			this->tbnBack->MinimumSize = System::Drawing::Size(57, 31);
			this->tbnBack->Name = L"tbnBack";
			this->tbnBack->Size = System::Drawing::Size(57, 31);
			this->tbnBack->TabIndex = 2;
			this->tbnBack->Text = L"Back";
			this->tbnBack->UseVisualStyleBackColor = true;
			this->tbnBack->Click += gcnew System::EventHandler(this, &DeleteAdmin::tbnBack_Click);
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(40, 46);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(192, 23);
			this->tbName->TabIndex = 3;
			// 
			// tbnDelete
			// 
			this->tbnDelete->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnDelete->ForeColor = System::Drawing::Color::Firebrick;
			this->tbnDelete->Location = System::Drawing::Point(238, 46);
			this->tbnDelete->MinimumSize = System::Drawing::Size(69, 23);
			this->tbnDelete->Name = L"tbnDelete";
			this->tbnDelete->Size = System::Drawing::Size(69, 23);
			this->tbnDelete->TabIndex = 4;
			this->tbnDelete->Text = L"Delete";
			this->tbnDelete->UseVisualStyleBackColor = true;
			this->tbnDelete->Click += gcnew System::EventHandler(this, &DeleteAdmin::tbnDelete_Click);
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->BackColor = System::Drawing::Color::Transparent;
			this->lbName->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lbName->Location = System::Drawing::Point(37, 27);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(95, 16);
			this->lbName->TabIndex = 5;
			this->lbName->Text = L"Enter Name:";
			// 
			// DeleteAdmin
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(556, 535);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->tbnDelete);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->tbnBack);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->tbnLoad);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximumSize = System::Drawing::Size(574, 582);
			this->MinimumSize = System::Drawing::Size(574, 582);
			this->Name = L"DeleteAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DeleteAdmin";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tbnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		adminForm->ShowDialog();
	}
private: System::Void tbnLoad_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
	String^ query = "SELECT * FROM AdminData"; // Adjust the query as needed

	DataTable^ dataTable = gcnew DataTable();

	try {
		// Open a connection to the database
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		connection->Open();

		// Execute the query
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
		adapter->Fill(dataTable);

		// Bind the DataTable to the DataGridView
		dataGridView1->DataSource = dataTable;

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
}
private: System::Void tbnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nameToDelete = tbName->Text;

	if (String::IsNullOrWhiteSpace(nameToDelete)) {
		MessageBox::Show("Please enter a name to delete.");
		return;
	}

	// Confirm deletion
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete the record for " + nameToDelete + "?", "Confirm Deletion", MessageBoxButtons::YesNo);
	if (result == System::Windows::Forms::DialogResult::Yes) {
		String^ connectionString = "Data Source=MSI\\SQLEXPRESS;Initial Catalog=DenTrack;Integrated Security=True;Encrypt=False;TrustServerCertificate=True;";
		String^ query = "DELETE FROM AdminData WHERE Name = @Name"; // Adjust the column name as needed

		try {
			// Open a connection to the database
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@Name", nameToDelete);
			connection->Open();

			// Execute the delete command
			int rowsAffected = command->ExecuteNonQuery();
			connection->Close();

			if (rowsAffected > 0) {
				MessageBox::Show("Record deleted successfully.");
			}
			else {
				MessageBox::Show("No record found with that name.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
}
};
}
