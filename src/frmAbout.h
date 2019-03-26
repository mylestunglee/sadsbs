#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SADSBookingSystem {

	/// <summary>
	/// Summary for frmAbout
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmAbout : public System::Windows::Forms::Form
	{
	public:
		frmAbout(void)
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
		~frmAbout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bttClose;
	private: System::Windows::Forms::PictureBox^  pctLogo;
	private: System::Windows::Forms::Label^  lblVersion;
	private: System::Windows::Forms::Label^  lblCompany;
	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::TableLayoutPanel^  grpLayout;
	private: System::Windows::Forms::Label^  lblWork;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmAbout::typeid));
			this->bttClose = (gcnew System::Windows::Forms::Button());
			this->pctLogo = (gcnew System::Windows::Forms::PictureBox());
			this->lblVersion = (gcnew System::Windows::Forms::Label());
			this->lblCompany = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->grpLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblWork = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pctLogo))->BeginInit();
			this->grpLayout->SuspendLayout();
			this->SuspendLayout();
			// 
			// bttClose
			// 
			this->bttClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bttClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->bttClose->Location = System::Drawing::Point(252, 162);
			this->bttClose->Name = L"bttClose";
			this->bttClose->Size = System::Drawing::Size(75, 23);
			this->bttClose->TabIndex = 0;
			this->bttClose->Text = L"&Close";
			this->bttClose->UseVisualStyleBackColor = true;
			// 
			// pctLogo
			// 
			this->pctLogo->BackColor = System::Drawing::Color::White;
			this->pctLogo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pctLogo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pctLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pctLogo.Image")));
			this->pctLogo->Location = System::Drawing::Point(3, 3);
			this->pctLogo->Name = L"pctLogo";
			this->grpLayout->SetRowSpan(this->pctLogo, 5);
			this->pctLogo->Size = System::Drawing::Size(159, 182);
			this->pctLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pctLogo->TabIndex = 1;
			this->pctLogo->TabStop = false;
			// 
			// lblVersion
			// 
			this->lblVersion->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblVersion->AutoSize = true;
			this->lblVersion->Location = System::Drawing::Point(217, 49);
			this->lblVersion->Name = L"lblVersion";
			this->lblVersion->Size = System::Drawing::Size(60, 13);
			this->lblVersion->TabIndex = 2;
			this->lblVersion->Text = L"Version 1.0";
			// 
			// lblCompany
			// 
			this->lblCompany->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblCompany->AutoSize = true;
			this->lblCompany->Location = System::Drawing::Point(212, 123);
			this->lblCompany->Name = L"lblCompany";
			this->lblCompany->Size = System::Drawing::Size(70, 13);
			this->lblCompany->TabIndex = 3;
			this->lblCompany->Text = L"By Myles Lee";
			// 
			// lblName
			// 
			this->lblName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(190, 12);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(115, 13);
			this->lblName->TabIndex = 4;
			this->lblName->Text = L"SADS Booking System";
			// 
			// grpLayout
			// 
			this->grpLayout->ColumnCount = 2;
			this->grpLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->grpLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->grpLayout->Controls->Add(this->pctLogo, 0, 0);
			this->grpLayout->Controls->Add(this->lblName, 1, 0);
			this->grpLayout->Controls->Add(this->bttClose, 1, 4);
			this->grpLayout->Controls->Add(this->lblCompany, 1, 3);
			this->grpLayout->Controls->Add(this->lblVersion, 1, 1);
			this->grpLayout->Controls->Add(this->lblWork, 1, 2);
			this->grpLayout->Location = System::Drawing::Point(12, 12);
			this->grpLayout->Name = L"grpLayout";
			this->grpLayout->RowCount = 5;
			this->grpLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->grpLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->grpLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->grpLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->grpLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->grpLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->grpLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->grpLayout->Size = System::Drawing::Size(330, 188);
			this->grpLayout->TabIndex = 5;
			// 
			// lblWork
			// 
			this->lblWork->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblWork->AutoSize = true;
			this->lblWork->Location = System::Drawing::Point(173, 86);
			this->lblWork->Name = L"lblWork";
			this->lblWork->Size = System::Drawing::Size(149, 13);
			this->lblWork->TabIndex = 5;
			this->lblWork->Text = L"AS Computing Extended Task";
			// 
			// frmAbout
			// 
			this->AcceptButton = this->bttClose;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->bttClose;
			this->ClientSize = System::Drawing::Size(354, 212);
			this->Controls->Add(this->grpLayout);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmAbout";
			this->Text = L"About SADS Booking System";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pctLogo))->EndInit();
			this->grpLayout->ResumeLayout(false);
			this->grpLayout->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
