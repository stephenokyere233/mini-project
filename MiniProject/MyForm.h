#pragma once

namespace MiniProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			PopulateListView();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ passwordField;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ usernameField;
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::Panel^ loginPanel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ dashboardPanel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ membersListView;


	protected:


	protected:

	protected:


	private: System::Void PopulateListView() {
		membersListView->View = View::Details;

		// Add columns for Row Number, Name, and ID
		membersListView->Columns->Add("No.", 50);
		membersListView->Columns->Add("Name", 250);
		membersListView->Columns->Add("ID", 200);

		// Array of names and IDs
		array<String^>^ names = { "Henry Kweku Ghansah", "Jacob Antwi", "Stephen Okyere", "Dennis Baidoo",
								  "Stella Serwaa Agyakwah", "Felix Nii Ayi Tetteh", "Vincent Osekre",
								  "Odame Isaac", "Isaac Elloh Hulledzi" };
		array<String^>^ ids = { "1703150928", "1699359632", "1694088060", "1688301431",
								"1704627981", "1700140611", "1699552887", "1699441853", "1700152964" };

		// Add items to the ListView with row numbers
		for (int i = 0; i < names->Length; i++) {
			ListViewItem^ item = gcnew ListViewItem((i + 1).ToString()); // Row number
			item->SubItems->Add(names[i]);
			item->SubItems->Add(ids[i]);
			membersListView->Items->Add(item);
		}
	}


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordField = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->usernameField = (gcnew System::Windows::Forms::TextBox());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->dashboardPanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->membersListView = (gcnew System::Windows::Forms::ListView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->loginPanel->SuspendLayout();
			this->dashboardPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(57, 265);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(292, 2);
			this->panel2->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 201);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 40);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Password";
			// 
			// passwordField
			// 
			this->passwordField->BackColor = System::Drawing::Color::Black;
			this->passwordField->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordField->ForeColor = System::Drawing::Color::White;
			this->passwordField->Location = System::Drawing::Point(55, 237);
			this->passwordField->Margin = System::Windows::Forms::Padding(6);
			this->passwordField->Name = L"passwordField";
			this->passwordField->Size = System::Drawing::Size(296, 38);
			this->passwordField->TabIndex = 15;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(57, 165);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(292, 2);
			this->panel3->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(47, 34);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 48);
			this->label3->TabIndex = 13;
			this->label3->Text = L"SIGN IN";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 101);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 40);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Username";
			// 
			// usernameField
			// 
			this->usernameField->BackColor = System::Drawing::Color::Black;
			this->usernameField->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameField->ForeColor = System::Drawing::Color::White;
			this->usernameField->Location = System::Drawing::Point(55, 137);
			this->usernameField->Margin = System::Windows::Forms::Padding(6);
			this->usernameField->Name = L"usernameField";
			this->usernameField->Size = System::Drawing::Size(296, 38);
			this->usernameField->TabIndex = 11;
			// 
			// loginBtn
			// 
			this->loginBtn->ForeColor = System::Drawing::Color::Black;
			this->loginBtn->Location = System::Drawing::Point(53, 311);
			this->loginBtn->Margin = System::Windows::Forms::Padding(6);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(204, 44);
			this->loginBtn->TabIndex = 10;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			this->loginBtn->Click += gcnew System::EventHandler(this, &MyForm::loginBtn_Click);
			// 
			// loginPanel
			// 
			this->loginPanel->Controls->Add(this->panel2);
			this->loginPanel->Controls->Add(this->label2);
			this->loginPanel->Controls->Add(this->passwordField);
			this->loginPanel->Controls->Add(this->panel3);
			this->loginPanel->Controls->Add(this->label3);
			this->loginPanel->Controls->Add(this->label1);
			this->loginPanel->Controls->Add(this->usernameField);
			this->loginPanel->Controls->Add(this->loginBtn);
			this->loginPanel->Location = System::Drawing::Point(2, 0);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(564, 461);
			this->loginPanel->TabIndex = 18;
			// 
			// dashboardPanel
			// 
			this->dashboardPanel->Controls->Add(this->button1);
			this->dashboardPanel->Controls->Add(this->membersListView);
			this->dashboardPanel->Controls->Add(this->label4);
			this->dashboardPanel->Location = System::Drawing::Point(-1, 3);
			this->dashboardPanel->Name = L"dashboardPanel";
			this->dashboardPanel->Size = System::Drawing::Size(768, 454);
			this->dashboardPanel->TabIndex = 0;
			this->dashboardPanel->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(614, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// membersListView
			// 
			this->membersListView->BackColor = System::Drawing::Color::Black;
			this->membersListView->ForeColor = System::Drawing::Color::White;
			this->membersListView->HideSelection = false;
			this->membersListView->Location = System::Drawing::Point(56, 82);
			this->membersListView->Name = L"membersListView";
			this->membersListView->Size = System::Drawing::Size(674, 335);
			this->membersListView->TabIndex = 1;
			this->membersListView->UseCompatibleStateImageBehavior = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(537, 48);
			this->label4->TabIndex = 0;
			this->label4->Text = L"WELCOME TO MY DASHBOARD";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(769, 444);
			this->Controls->Add(this->dashboardPanel);
			this->Controls->Add(this->loginPanel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Group 2 Project Work";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->dashboardPanel->ResumeLayout(false);
			this->dashboardPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (usernameField->Text->Trim() == "" && passwordField->Text->Trim() == "") {
			MessageBox::Show("Please enter a username and a password", "Invalid Credentials", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (usernameField->Text->Trim() == "") {
			MessageBox::Show("Please enter a username", "Invalid Username", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (passwordField->Text->Trim() == "") {
			MessageBox::Show("Please enter a password", "Invalid Password", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (usernameField->Text->Trim() == "admin" && passwordField->Text->Trim() == "admin") {
			usernameField->Text = "";
			passwordField->Text = "";
			loginPanel->Visible = false;
			dashboardPanel->Visible = true;

		}
		else {
			if (usernameField->Text->Trim() != "admin"&& passwordField->Text->Trim() != "admin") {
				MessageBox::Show("Incorrect username & password", "Incorect Credentials", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (usernameField->Text->Trim() != "admin") {
				MessageBox::Show("Incorrect username", "Incorect Credentials", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (passwordField->Text->Trim() != "admin") {
			MessageBox::Show("Incorrect password", "Incorect Credentials", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			

		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	loginPanel->Visible = true;
	dashboardPanel->Visible = false;
}
};
}
