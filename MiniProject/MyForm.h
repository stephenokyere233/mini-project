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
	private: System::Windows::Forms::Panel^ pnlsignup;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dashboardPanel = (gcnew System::Windows::Forms::Panel());
			this->pnlsignup = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->membersListView = (gcnew System::Windows::Forms::ListView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->loginPanel->SuspendLayout();
			this->dashboardPanel->SuspendLayout();
			this->pnlsignup->SuspendLayout();
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
			this->loginBtn->BackColor = System::Drawing::Color::Blue;
			this->loginBtn->FlatAppearance->BorderSize = 0;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->loginBtn->ForeColor = System::Drawing::Color::White;
			this->loginBtn->Location = System::Drawing::Point(53, 311);
			this->loginBtn->Margin = System::Windows::Forms::Padding(6);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(115, 36);
			this->loginBtn->TabIndex = 10;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &MyForm::loginBtn_Click);
			// 
			// loginPanel
			// 
			this->loginPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginPanel.BackgroundImage")));
			this->loginPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->loginPanel->Controls->Add(this->button3);
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
			this->loginPanel->Size = System::Drawing::Size(762, 461);
			this->loginPanel->TabIndex = 18;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->button3->ForeColor = System::Drawing::Color::Blue;
			this->button3->Location = System::Drawing::Point(177, 311);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 36);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Sign up";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dashboardPanel
			// 
			this->dashboardPanel->Controls->Add(this->pnlsignup);
			this->dashboardPanel->Controls->Add(this->button1);
			this->dashboardPanel->Controls->Add(this->membersListView);
			this->dashboardPanel->Controls->Add(this->label4);
			this->dashboardPanel->Location = System::Drawing::Point(2, 3);
			this->dashboardPanel->Name = L"dashboardPanel";
			this->dashboardPanel->Size = System::Drawing::Size(762, 454);
			this->dashboardPanel->TabIndex = 0;
			this->dashboardPanel->Visible = false;
			this->dashboardPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::dashboardPanel_Paint);
			// 
			// pnlsignup
			// 
			this->pnlsignup->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlsignup.BackgroundImage")));
			this->pnlsignup->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlsignup->Controls->Add(this->button2);
			this->pnlsignup->Controls->Add(this->panel6);
			this->pnlsignup->Controls->Add(this->panel5);
			this->pnlsignup->Controls->Add(this->panel4);
			this->pnlsignup->Controls->Add(this->textBox3);
			this->pnlsignup->Controls->Add(this->textBox2);
			this->pnlsignup->Controls->Add(this->textBox1);
			this->pnlsignup->Controls->Add(this->label8);
			this->pnlsignup->Controls->Add(this->label7);
			this->pnlsignup->Controls->Add(this->label6);
			this->pnlsignup->Controls->Add(this->label5);
			this->pnlsignup->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlsignup->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->pnlsignup->Location = System::Drawing::Point(0, 0);
			this->pnlsignup->Name = L"pnlsignup";
			this->pnlsignup->Size = System::Drawing::Size(762, 454);
			this->pnlsignup->TabIndex = 3;
			this->pnlsignup->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pnlsignup_Paint);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Blue;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->button2->Location = System::Drawing::Point(73, 364);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 36);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Sign up";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(73, 329);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(292, 2);
			this->panel6->TabIndex = 9;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(73, 224);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(292, 2);
			this->panel5->TabIndex = 8;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->ForeColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(73, 125);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(292, 2);
			this->panel4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(73, 305);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(292, 32);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(73, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(292, 32);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox1->Location = System::Drawing::Point(73, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(292, 32);
			this->textBox1->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->label8->Location = System::Drawing::Point(67, 270);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(220, 36);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Confirm Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->label7->Location = System::Drawing::Point(67, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 36);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Username";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->label6->Location = System::Drawing::Point(67, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 36);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->label5->Location = System::Drawing::Point(64, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 54);
			this->label5->TabIndex = 0;
			this->label5->Text = L"SIGN UP";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(614, 19);
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
			this->pnlsignup->ResumeLayout(false);
			this->pnlsignup->PerformLayout();
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



private: System::Void dashboardPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pnlsignup_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
