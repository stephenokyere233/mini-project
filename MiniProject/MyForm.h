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
	private: System::Windows::Forms::Panel^ signupPanel;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ confirmPasswordField;
	private: System::Windows::Forms::TextBox^ signupPasswordField;
	private: System::Windows::Forms::TextBox^ signupUsernameField;





	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ confirmSignupBtn;

	private: System::Windows::Forms::Button^ signupBtn;
	private: System::Windows::Forms::Button^ backBtn;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordField = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->usernameField = (gcnew System::Windows::Forms::TextBox());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->signupBtn = (gcnew System::Windows::Forms::Button());
			this->dashboardPanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->membersListView = (gcnew System::Windows::Forms::ListView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->signupPanel = (gcnew System::Windows::Forms::Panel());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->confirmSignupBtn = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->confirmPasswordField = (gcnew System::Windows::Forms::TextBox());
			this->signupPasswordField = (gcnew System::Windows::Forms::TextBox());
			this->signupUsernameField = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->loginPanel->SuspendLayout();
			this->dashboardPanel->SuspendLayout();
			this->signupPanel->SuspendLayout();
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
			this->label2->Size = System::Drawing::Size(91, 25);
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
			this->passwordField->Size = System::Drawing::Size(296, 26);
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
			this->label3->Size = System::Drawing::Size(101, 32);
			this->label3->TabIndex = 13;
			this->label3->Text = L"SIGN IN";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 101);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 25);
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
			this->usernameField->Size = System::Drawing::Size(296, 26);
			this->usernameField->TabIndex = 11;
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::Blue;
			this->loginBtn->FlatAppearance->BorderSize = 0;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->loginBtn->ForeColor = System::Drawing::Color::White;
			this->loginBtn->Location = System::Drawing::Point(53, 306);
			this->loginBtn->Margin = System::Windows::Forms::Padding(6);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(135, 36);
			this->loginBtn->TabIndex = 10;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &MyForm::loginBtn_Click);
			// 
			// loginPanel
			// 
			this->loginPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginPanel.BackgroundImage")));
			this->loginPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->loginPanel->Controls->Add(this->signupBtn);
			this->loginPanel->Controls->Add(this->panel2);
			this->loginPanel->Controls->Add(this->label2);
			this->loginPanel->Controls->Add(this->passwordField);
			this->loginPanel->Controls->Add(this->panel3);
			this->loginPanel->Controls->Add(this->label3);
			this->loginPanel->Controls->Add(this->label1);
			this->loginPanel->Controls->Add(this->usernameField);
			this->loginPanel->Controls->Add(this->loginBtn);
			this->loginPanel->Location = System::Drawing::Point(0, 0);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(769, 444);
			this->loginPanel->TabIndex = 18;
			// 
			// signupBtn
			// 
			this->signupBtn->BackColor = System::Drawing::Color::White;
			this->signupBtn->FlatAppearance->BorderSize = 0;
			this->signupBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signupBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->signupBtn->ForeColor = System::Drawing::Color::Blue;
			this->signupBtn->Location = System::Drawing::Point(209, 309);
			this->signupBtn->Name = L"signupBtn";
			this->signupBtn->Size = System::Drawing::Size(140, 36);
			this->signupBtn->TabIndex = 19;
			this->signupBtn->Text = L"Sign up";
			this->signupBtn->UseVisualStyleBackColor = false;
			this->signupBtn->Click += gcnew System::EventHandler(this, &MyForm::signupBtn_Click);
			// 
			// dashboardPanel
			// 
			this->dashboardPanel->Controls->Add(this->button1);
			this->dashboardPanel->Controls->Add(this->membersListView);
			this->dashboardPanel->Controls->Add(this->label4);
			this->dashboardPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dashboardPanel->Location = System::Drawing::Point(0, 0);
			this->dashboardPanel->Name = L"dashboardPanel";
			this->dashboardPanel->Size = System::Drawing::Size(684, 461);
			this->dashboardPanel->TabIndex = 0;
			this->dashboardPanel->Visible = false;
			this->dashboardPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::dashboardPanel_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(523, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// membersListView
			// 
			this->membersListView->BackColor = System::Drawing::Color::Black;
			this->membersListView->ForeColor = System::Drawing::Color::White;
			this->membersListView->HideSelection = false;
			this->membersListView->Location = System::Drawing::Point(56, 82);
			this->membersListView->Name = L"membersListView";
			this->membersListView->Size = System::Drawing::Size(583, 335);
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
			this->label4->Size = System::Drawing::Size(359, 32);
			this->label4->TabIndex = 0;
			this->label4->Text = L"WELCOME TO MY DASHBOARD";
			// 
			// signupPanel
			// 
			this->signupPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signupPanel.BackgroundImage")));
			this->signupPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->signupPanel->Controls->Add(this->backBtn);
			this->signupPanel->Controls->Add(this->confirmSignupBtn);
			this->signupPanel->Controls->Add(this->panel6);
			this->signupPanel->Controls->Add(this->panel5);
			this->signupPanel->Controls->Add(this->panel4);
			this->signupPanel->Controls->Add(this->confirmPasswordField);
			this->signupPanel->Controls->Add(this->signupPasswordField);
			this->signupPanel->Controls->Add(this->signupUsernameField);
			this->signupPanel->Controls->Add(this->label8);
			this->signupPanel->Controls->Add(this->label7);
			this->signupPanel->Controls->Add(this->label6);
			this->signupPanel->Controls->Add(this->label5);
			this->signupPanel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->signupPanel->Location = System::Drawing::Point(3, 0);
			this->signupPanel->Name = L"signupPanel";
			this->signupPanel->Size = System::Drawing::Size(681, 461);
			this->signupPanel->TabIndex = 3;
			this->signupPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::signupPanel_Paint);
			// 
			// backBtn
			// 
			this->backBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backBtn->ForeColor = System::Drawing::Color::Black;
			this->backBtn->Location = System::Drawing::Point(558, 39);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(59, 29);
			this->backBtn->TabIndex = 11;
			this->backBtn->Text = L"Back";
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &MyForm::backBtn_Click);
			// 
			// confirmSignupBtn
			// 
			this->confirmSignupBtn->BackColor = System::Drawing::Color::Blue;
			this->confirmSignupBtn->FlatAppearance->BorderSize = 0;
			this->confirmSignupBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmSignupBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->confirmSignupBtn->Location = System::Drawing::Point(58, 381);
			this->confirmSignupBtn->Name = L"confirmSignupBtn";
			this->confirmSignupBtn->Size = System::Drawing::Size(150, 36);
			this->confirmSignupBtn->TabIndex = 10;
			this->confirmSignupBtn->Text = L"Sign up";
			this->confirmSignupBtn->UseVisualStyleBackColor = false;
			this->confirmSignupBtn->Click += gcnew System::EventHandler(this, &MyForm::confirmSignupBtn_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(58, 346);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(292, 2);
			this->panel6->TabIndex = 9;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(58, 241);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(292, 2);
			this->panel5->TabIndex = 8;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->ForeColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(58, 142);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(292, 2);
			this->panel4->TabIndex = 7;
			// 
			// confirmPasswordField
			// 
			this->confirmPasswordField->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->confirmPasswordField->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->confirmPasswordField->ForeColor = System::Drawing::Color::White;
			this->confirmPasswordField->Location = System::Drawing::Point(58, 322);
			this->confirmPasswordField->Name = L"confirmPasswordField";
			this->confirmPasswordField->Size = System::Drawing::Size(292, 22);
			this->confirmPasswordField->TabIndex = 6;
			// 
			// signupPasswordField
			// 
			this->signupPasswordField->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->signupPasswordField->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->signupPasswordField->ForeColor = System::Drawing::Color::White;
			this->signupPasswordField->Location = System::Drawing::Point(58, 217);
			this->signupPasswordField->Name = L"signupPasswordField";
			this->signupPasswordField->Size = System::Drawing::Size(292, 22);
			this->signupPasswordField->TabIndex = 5;
			this->signupPasswordField->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// signupUsernameField
			// 
			this->signupUsernameField->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->signupUsernameField->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->signupUsernameField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->signupUsernameField->ForeColor = System::Drawing::Color::White;
			this->signupUsernameField->Location = System::Drawing::Point(58, 118);
			this->signupUsernameField->Name = L"signupUsernameField";
			this->signupUsernameField->Size = System::Drawing::Size(292, 22);
			this->signupUsernameField->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->label8->Location = System::Drawing::Point(52, 287);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 25);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Confirm Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->label7->Location = System::Drawing::Point(52, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 25);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Username";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->label6->Location = System::Drawing::Point(52, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 25);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(50, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 37);
			this->label5->TabIndex = 0;
			this->label5->Text = L"SIGN UP";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(684, 461);
			this->Controls->Add(this->loginPanel);
			this->Controls->Add(this->signupPanel);
			this->Controls->Add(this->dashboardPanel);
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
			this->signupPanel->ResumeLayout(false);
			this->signupPanel->PerformLayout();
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
		loginPanel->Visible = true; // Show login panel on load
		signupPanel->Visible = false;
		dashboardPanel->Visible = false;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	loginPanel->Visible = true;
	dashboardPanel->Visible = false;
}



private: System::Void dashboardPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void signupPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void signupBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	signupPanel->Visible = true;
	loginPanel->Visible = false;
	dashboardPanel->Visible = false;
}
private: System::Void confirmSignupBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (signupUsernameField->Text->Trim() == "" && signupPasswordField->Text->Trim() == "") {
		MessageBox::Show("Please enter a username and a password", "Invalid Credentials", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (signupUsernameField->Text->Trim() == "") {
		MessageBox::Show("Please enter a username", "Invalid Username", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (signupPasswordField->Text->Trim() == "") {
		MessageBox::Show("Please enter a password", "Invalid Password", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (signupPasswordField->Text->Trim()->Length <= 4) {
		MessageBox::Show("Password should not be less than 5 characters", "Weak Password", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (signupPasswordField->Text->Trim() != confirmPasswordField->Text->Trim()) {
		MessageBox::Show("Passwords do not match", "Unmatched Password", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		dashboardPanel->Visible = true;
		signupPanel->Visible = false;
		loginPanel->Visible = false;
	}
}
private: System::Void backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	signupPanel->Visible = false;
	loginPanel->Visible = true;
}
};
}
