#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SADSBookingSystem {

	/// <summary>
	/// Summary for frmFind
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmFind : public System::Windows::Forms::Form
	{
	public:
		frmFind(void)
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
		~frmFind()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblFind;
	private: System::Windows::Forms::TextBox^  txtFind;
	private: System::Windows::Forms::RadioButton^  rdbSeatCode;
	private: System::Windows::Forms::RadioButton^  rdbSurname;
	private: System::Windows::Forms::RadioButton^  rdbPostCode;
	private: System::Windows::Forms::Button^  bttClose;
	private: System::Windows::Forms::Button^  bttFind;


	protected: 









	private: System::Windows::Forms::GroupBox^  grpSearchRange;
	private: System::Windows::Forms::CheckBox^  chcWholeField;


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
			this->lblFind = (gcnew System::Windows::Forms::Label());
			this->txtFind = (gcnew System::Windows::Forms::TextBox());
			this->rdbSeatCode = (gcnew System::Windows::Forms::RadioButton());
			this->rdbSurname = (gcnew System::Windows::Forms::RadioButton());
			this->rdbPostCode = (gcnew System::Windows::Forms::RadioButton());
			this->bttClose = (gcnew System::Windows::Forms::Button());
			this->bttFind = (gcnew System::Windows::Forms::Button());
			this->grpSearchRange = (gcnew System::Windows::Forms::GroupBox());
			this->chcWholeField = (gcnew System::Windows::Forms::CheckBox());
			this->grpSearchRange->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblFind
			// 
			this->lblFind->AutoSize = true;
			this->lblFind->Location = System::Drawing::Point(9, 15);
			this->lblFind->Name = L"lblFind";
			this->lblFind->Size = System::Drawing::Size(30, 13);
			this->lblFind->TabIndex = 1;
			this->lblFind->Text = L"Find:";
			// 
			// txtFind
			// 
			this->txtFind->Location = System::Drawing::Point(45, 12);
			this->txtFind->MaxLength = 32;
			this->txtFind->Name = L"txtFind";
			this->txtFind->Size = System::Drawing::Size(123, 20);
			this->txtFind->TabIndex = 2;
			// 
			// rdbSeatCode
			// 
			this->rdbSeatCode->AutoSize = true;
			this->rdbSeatCode->Checked = true;
			this->rdbSeatCode->Location = System::Drawing::Point(6, 19);
			this->rdbSeatCode->Name = L"rdbSeatCode";
			this->rdbSeatCode->Size = System::Drawing::Size(75, 17);
			this->rdbSeatCode->TabIndex = 4;
			this->rdbSeatCode->TabStop = true;
			this->rdbSeatCode->Text = L"Seat Code";
			this->rdbSeatCode->UseVisualStyleBackColor = true;
			// 
			// rdbSurname
			// 
			this->rdbSurname->AutoSize = true;
			this->rdbSurname->Location = System::Drawing::Point(6, 42);
			this->rdbSurname->Name = L"rdbSurname";
			this->rdbSurname->Size = System::Drawing::Size(114, 17);
			this->rdbSurname->TabIndex = 5;
			this->rdbSurname->Text = L"Customer Surname";
			this->rdbSurname->UseVisualStyleBackColor = true;
			// 
			// rdbPostCode
			// 
			this->rdbPostCode->AutoSize = true;
			this->rdbPostCode->Location = System::Drawing::Point(6, 65);
			this->rdbPostCode->Name = L"rdbPostCode";
			this->rdbPostCode->Size = System::Drawing::Size(121, 17);
			this->rdbPostCode->TabIndex = 7;
			this->rdbPostCode->Text = L"Customer Post Code";
			this->rdbPostCode->UseVisualStyleBackColor = true;
			// 
			// bttClose
			// 
			this->bttClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->bttClose->Location = System::Drawing::Point(12, 155);
			this->bttClose->Name = L"bttClose";
			this->bttClose->Size = System::Drawing::Size(75, 23);
			this->bttClose->TabIndex = 8;
			this->bttClose->Text = L"Close";
			this->bttClose->UseVisualStyleBackColor = true;
			this->bttClose->Click += gcnew System::EventHandler(this, &frmFind::CloseClick);
			// 
			// bttFind
			// 
			this->bttFind->Location = System::Drawing::Point(93, 155);
			this->bttFind->Name = L"bttFind";
			this->bttFind->Size = System::Drawing::Size(75, 23);
			this->bttFind->TabIndex = 9;
			this->bttFind->Text = L"Find";
			this->bttFind->UseVisualStyleBackColor = true;
			this->bttFind->Click += gcnew System::EventHandler(this, &frmFind::FindClick);
			// 
			// grpSearchRange
			// 
			this->grpSearchRange->Controls->Add(this->rdbSeatCode);
			this->grpSearchRange->Controls->Add(this->rdbPostCode);
			this->grpSearchRange->Controls->Add(this->rdbSurname);
			this->grpSearchRange->Location = System::Drawing::Point(12, 61);
			this->grpSearchRange->Name = L"grpSearchRange";
			this->grpSearchRange->Size = System::Drawing::Size(156, 88);
			this->grpSearchRange->TabIndex = 10;
			this->grpSearchRange->TabStop = false;
			this->grpSearchRange->Text = L"Search Range";
			// 
			// chcWholeField
			// 
			this->chcWholeField->AutoSize = true;
			this->chcWholeField->Location = System::Drawing::Point(12, 38);
			this->chcWholeField->Name = L"chcWholeField";
			this->chcWholeField->Size = System::Drawing::Size(109, 17);
			this->chcWholeField->TabIndex = 11;
			this->chcWholeField->Text = L"Match whole &field";
			this->chcWholeField->UseVisualStyleBackColor = true;
			// 
			// frmFind
			// 
			this->AcceptButton = this->bttFind;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->bttClose;
			this->ClientSize = System::Drawing::Size(180, 187);
			this->Controls->Add(this->chcWholeField);
			this->Controls->Add(this->grpSearchRange);
			this->Controls->Add(this->bttFind);
			this->Controls->Add(this->bttClose);
			this->Controls->Add(this->txtFind);
			this->Controls->Add(this->lblFind);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmFind";
			this->Text = L"Find";
			this->Load += gcnew System::EventHandler(this, &frmFind::FormLoad);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmFind::FormClose);
			this->grpSearchRange->ResumeLayout(false);
			this->grpSearchRange->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		//Stores the search value
		static String^ SearchValue;
		
		//Stores the column index to search within
		static int SearchCellIndex;

		//Stores whether to search for the whole word
		static bool SearchMatchWholeField = false;

	private:
		//Occurs when the form is started
		void frmFind::FormLoad(Object^, EventArgs^)
		{
			//Selects which radio button is to be checked
			switch(this->SearchCellIndex)
			{
			case 0:
				this->rdbSeatCode->Checked = true;
				break;
			case 3:
				this->rdbSurname->Checked = true;
				break;
			case 5:
				this->rdbPostCode->Checked = true;
			}

			//Restore settings from the form being closed
			this->txtFind->Text = SearchValue;
			this->chcWholeField->Checked = SearchMatchWholeField;
		}

		//Occurs when the Find button is clicked
		void frmFind::FindClick(Object^, EventArgs^)
		{
			//Checks if the Search Value has been entered
			if(this->txtFind->Text == String::Empty)
			{
				//Promopt the user to enter in the search value
				MessageBox::Show("Please enter in what to find.", "Missing Search Value", MessageBoxButtons::OK, MessageBoxIcon::Error);
			} else {
				//Sets the search value
				this->SearchValue = this->txtFind->Text;

				//Selects which radio button is checked, and applied the coorsponding column index
				if(rdbSeatCode->Checked)
				{
					this->SearchCellIndex = 0;
				} else if(rdbSurname->Checked)
				{
					this->SearchCellIndex = 3;
				} else {
					this->SearchCellIndex = 5;
				}

				//Sets whether to search for a whole word
				this->SearchMatchWholeField = this->chcWholeField->Checked;

				//Closes the form
				this->Close();
			}
		}

		//Occurs when the Close button is clicked
		void frmFind::CloseClick(Object^, EventArgs^)
		{
			//Clears the Search Value
			this->SearchValue = String::Empty;
		}

		//Occurs when the form is closing
		void frmFind::FormClose(System::Object^, System::Windows::Forms::FormClosingEventArgs^)
		{
			//If the use typed in a valid search value, do not clear it
			if(this->SearchValue != this->txtFind->Text)
			{
				//Clear the search value when the user did not press the close button
				this->SearchValue = String::Empty;
			}
		}
};
}
