#include "frmMain.h"

namespace SADSBookingSystem {

	using namespace System;
	using namespace System::Windows::Forms;

	public ref class frmLogin : public System::Windows::Forms::Form
	{
	public:
		frmLogin(void)
		{
			InitializeComponent();
		}
	protected:
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Button^  bttLogin;
		System::Windows::Forms::Button^  bttExit;
		System::Windows::Forms::Label^  lblInfo;
		System::Windows::Forms::Label^  lblUsername;
		System::Windows::Forms::Label^  lblPassword;
		System::Windows::Forms::TextBox^  txtUsername;
		System::Windows::Forms::TextBox^  txtPassword;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLogin::typeid));
			this->bttLogin = (gcnew System::Windows::Forms::Button());
			this->bttExit = (gcnew System::Windows::Forms::Button());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// bttLogin
			// 
			this->bttLogin->Location = System::Drawing::Point(221, 112);
			this->bttLogin->Name = L"bttLogin";
			this->bttLogin->Size = System::Drawing::Size(75, 23);
			this->bttLogin->TabIndex = 6;
			this->bttLogin->Text = L"&Login";
			this->bttLogin->UseVisualStyleBackColor = true;
			this->bttLogin->Click += gcnew System::EventHandler(this, &frmLogin::LoginClick);
			// 
			// bttExit
			// 
			this->bttExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->bttExit->Location = System::Drawing::Point(140, 112);
			this->bttExit->Name = L"bttExit";
			this->bttExit->Size = System::Drawing::Size(75, 23);
			this->bttExit->TabIndex = 5;
			this->bttExit->Text = L"&Exit";
			this->bttExit->UseVisualStyleBackColor = true;
			this->bttExit->Click += gcnew System::EventHandler(this, &frmLogin::ExitClick);
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->Location = System::Drawing::Point(12, 9);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(284, 13);
			this->lblInfo->TabIndex = 0;
			this->lblInfo->Text = L"Please enter login details to access SADS booking system.";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Location = System::Drawing::Point(37, 42);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(58, 13);
			this->lblUsername->TabIndex = 1;
			this->lblUsername->Text = L"Username:";
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(37, 77);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(56, 13);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Password:";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(101, 39);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(170, 20);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(101, 74);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(170, 20);
			this->txtPassword->TabIndex = 4;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// frmLogin
			// 
			this->AcceptButton = this->bttLogin;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->bttExit;
			this->ClientSize = System::Drawing::Size(308, 147);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->lblInfo);
			this->Controls->Add(this->bttExit);
			this->Controls->Add(this->bttLogin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmLogin";
			this->Text = L"Login to SADS Booking System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Occurs when the exit button is clicked
		void frmLogin::ExitClick(System::Object^, System::EventArgs^)
		{
			//Exit the application
			Application::Exit();
		}

		//Occurs when the login button is clicked
		void frmLogin::LoginClick(System::Object^, System::EventArgs^)
		{
			//Creates an object to hash strings, since the class' functions are not static
			Security::Cryptography::SHA512^ Encrypter = gcnew Security::Cryptography::SHA512Managed();

			//Checks whether the username and password are correct
			//The username is directly compared with the string				Username = "admin"
			//The password is hashed using SHA512 and compared to an hash	Password = "cake"
			if(txtUsername->Text == "admin" && 
				Convert::ToBase64String(
				Encrypter->ComputeHash(
				System::Text::Encoding::UTF8->GetBytes(
				txtPassword->Text))) == L"JDk6QFR2lZTdE4/t4QtU9fbNOnamf/itIcAMrCGRU99wU+KwghSNx/bVYw3KsbP9jsBaNs0WYV3nI4VOUlLZ4A==")
			{
				//Hides the login form
				this->Hide();

				//Creates a new form
				frmMain^ MainForm = gcnew frmMain();

				//Shows the main form
				MainForm->Show();
			} else {
				//The user typed in an incorrect username and password combination
				//Show an messagebox with an error icon
				MessageBox::Show(
					"The username or password is incorrect.",
					"Login Details Incorrect",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
			//Frees the memory allocated towards the encrypter
			delete Encrypter;
		}
	};
}

