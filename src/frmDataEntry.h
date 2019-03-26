#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SADSBookingSystem {

	/// <summary>
	/// Summary for frmDataEntry
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmDataEntry : public System::Windows::Forms::Form
	{
	public:
		frmDataEntry(void)
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
		~frmDataEntry()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  lblSeatCode;
	private: System::Windows::Forms::Label^  lblDate;
	private: System::Windows::Forms::Label^  lblForename;
	private: System::Windows::Forms::Label^  lblHouseNumber;
	private: System::Windows::Forms::Button^  bttAccept;
	private: System::Windows::Forms::Button^  bttClose;
	private: System::Windows::Forms::Label^  lblSurname;
	private: System::Windows::Forms::Label^  lblTelephone;
	private: System::Windows::Forms::Label^  lblPostCode;
	private: System::Windows::Forms::MaskedTextBox^  txtSeatCode;
	private: System::Windows::Forms::DateTimePicker^  dtpDate;
	private: System::Windows::Forms::TextBox^  txtForename;
	private: System::Windows::Forms::TextBox^  txtSurname;
	private: System::Windows::Forms::MaskedTextBox^  txtHouseNumber;
	private: System::Windows::Forms::MaskedTextBox^  txtPostCode;
	private: System::Windows::Forms::MaskedTextBox^  txtTelephone;
	private: System::Windows::Forms::GroupBox^  grpCustomer;
	private: System::Windows::Forms::Label^  lblInfo;
	private: System::Windows::Forms::Label^  lblPriceInfo;

	private: System::Windows::Forms::Label^  lblDayInfo;

	private: System::Windows::Forms::Label^  lblDisabledInfo;
	private: System::Windows::Forms::TextBox^  txtPrice;
	private: System::Windows::Forms::TextBox^  txtDay;
	private: System::Windows::Forms::TextBox^  txtDisabledSeat;





	protected: 


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblSeatCode = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblForename = (gcnew System::Windows::Forms::Label());
			this->lblHouseNumber = (gcnew System::Windows::Forms::Label());
			this->bttAccept = (gcnew System::Windows::Forms::Button());
			this->bttClose = (gcnew System::Windows::Forms::Button());
			this->lblSurname = (gcnew System::Windows::Forms::Label());
			this->lblTelephone = (gcnew System::Windows::Forms::Label());
			this->lblPostCode = (gcnew System::Windows::Forms::Label());
			this->txtSeatCode = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dtpDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtForename = (gcnew System::Windows::Forms::TextBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtHouseNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtPostCode = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtTelephone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->grpCustomer = (gcnew System::Windows::Forms::GroupBox());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->lblPriceInfo = (gcnew System::Windows::Forms::Label());
			this->lblDayInfo = (gcnew System::Windows::Forms::Label());
			this->lblDisabledInfo = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtDay = (gcnew System::Windows::Forms::TextBox());
			this->txtDisabledSeat = (gcnew System::Windows::Forms::TextBox());
			this->grpCustomer->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblSeatCode
			// 
			this->lblSeatCode->AutoSize = true;
			this->lblSeatCode->Location = System::Drawing::Point(13, 38);
			this->lblSeatCode->Name = L"lblSeatCode";
			this->lblSeatCode->Size = System::Drawing::Size(60, 13);
			this->lblSeatCode->TabIndex = 1;
			this->lblSeatCode->Text = L"Seat Code:";
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Location = System::Drawing::Point(13, 142);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(73, 13);
			this->lblDate->TabIndex = 9;
			this->lblDate->Text = L"Date Booked:";
			// 
			// lblForename
			// 
			this->lblForename->AutoSize = true;
			this->lblForename->Location = System::Drawing::Point(6, 22);
			this->lblForename->Name = L"lblForename";
			this->lblForename->Size = System::Drawing::Size(57, 13);
			this->lblForename->TabIndex = 0;
			this->lblForename->Text = L"Forename:";
			// 
			// lblHouseNumber
			// 
			this->lblHouseNumber->AutoSize = true;
			this->lblHouseNumber->Location = System::Drawing::Point(6, 74);
			this->lblHouseNumber->Name = L"lblHouseNumber";
			this->lblHouseNumber->Size = System::Drawing::Size(81, 13);
			this->lblHouseNumber->TabIndex = 4;
			this->lblHouseNumber->Text = L"House Number:";
			// 
			// bttAccept
			// 
			this->bttAccept->Location = System::Drawing::Point(190, 326);
			this->bttAccept->Name = L"bttAccept";
			this->bttAccept->Size = System::Drawing::Size(75, 23);
			this->bttAccept->TabIndex = 12;
			this->bttAccept->Text = L"&Insert";
			this->bttAccept->UseVisualStyleBackColor = true;
			this->bttAccept->Click += gcnew System::EventHandler(this, &frmDataEntry::AcceptClick);
			// 
			// bttClose
			// 
			this->bttClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->bttClose->Location = System::Drawing::Point(109, 326);
			this->bttClose->Name = L"bttClose";
			this->bttClose->Size = System::Drawing::Size(75, 23);
			this->bttClose->TabIndex = 13;
			this->bttClose->Text = L"&Close";
			this->bttClose->UseVisualStyleBackColor = true;
			// 
			// lblSurname
			// 
			this->lblSurname->AutoSize = true;
			this->lblSurname->Location = System::Drawing::Point(6, 48);
			this->lblSurname->Name = L"lblSurname";
			this->lblSurname->Size = System::Drawing::Size(52, 13);
			this->lblSurname->TabIndex = 2;
			this->lblSurname->Text = L"Surname:";
			// 
			// lblTelephone
			// 
			this->lblTelephone->AutoSize = true;
			this->lblTelephone->Location = System::Drawing::Point(6, 126);
			this->lblTelephone->Name = L"lblTelephone";
			this->lblTelephone->Size = System::Drawing::Size(61, 13);
			this->lblTelephone->TabIndex = 8;
			this->lblTelephone->Text = L"Telephone:";
			// 
			// lblPostCode
			// 
			this->lblPostCode->AutoSize = true;
			this->lblPostCode->Location = System::Drawing::Point(6, 100);
			this->lblPostCode->Name = L"lblPostCode";
			this->lblPostCode->Size = System::Drawing::Size(59, 13);
			this->lblPostCode->TabIndex = 6;
			this->lblPostCode->Text = L"Post Code:";
			// 
			// txtSeatCode
			// 
			this->txtSeatCode->AsciiOnly = true;
			this->txtSeatCode->Location = System::Drawing::Point(109, 35);
			this->txtSeatCode->Mask = L">L09";
			this->txtSeatCode->Name = L"txtSeatCode";
			this->txtSeatCode->ResetOnSpace = false;
			this->txtSeatCode->Size = System::Drawing::Size(150, 20);
			this->txtSeatCode->TabIndex = 2;
			this->txtSeatCode->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			this->txtSeatCode->TextChanged += gcnew System::EventHandler(this, &frmDataEntry::SeatCodeChanged);
			// 
			// dtpDate
			// 
			this->dtpDate->Location = System::Drawing::Point(109, 139);
			this->dtpDate->Name = L"dtpDate";
			this->dtpDate->Size = System::Drawing::Size(150, 20);
			this->dtpDate->TabIndex = 10;
			// 
			// txtForename
			// 
			this->txtForename->Location = System::Drawing::Point(93, 19);
			this->txtForename->MaxLength = 32;
			this->txtForename->Name = L"txtForename";
			this->txtForename->Size = System::Drawing::Size(150, 20);
			this->txtForename->TabIndex = 1;
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(93, 45);
			this->txtSurname->MaxLength = 32;
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(150, 20);
			this->txtSurname->TabIndex = 3;
			// 
			// txtHouseNumber
			// 
			this->txtHouseNumber->AsciiOnly = true;
			this->txtHouseNumber->Location = System::Drawing::Point(93, 71);
			this->txtHouseNumber->Mask = L"0>CCCC";
			this->txtHouseNumber->Name = L"txtHouseNumber";
			this->txtHouseNumber->Size = System::Drawing::Size(150, 20);
			this->txtHouseNumber->TabIndex = 5;
			this->txtHouseNumber->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// txtPostCode
			// 
			this->txtPostCode->AsciiOnly = true;
			this->txtPostCode->Location = System::Drawing::Point(93, 97);
			this->txtPostCode->Mask = L">L\?09 0LL";
			this->txtPostCode->Name = L"txtPostCode";
			this->txtPostCode->Size = System::Drawing::Size(150, 20);
			this->txtPostCode->TabIndex = 7;
			this->txtPostCode->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// txtTelephone
			// 
			this->txtTelephone->AsciiOnly = true;
			this->txtTelephone->Location = System::Drawing::Point(93, 123);
			this->txtTelephone->Mask = L"(9999) 000-0000";
			this->txtTelephone->Name = L"txtTelephone";
			this->txtTelephone->Size = System::Drawing::Size(150, 20);
			this->txtTelephone->TabIndex = 9;
			this->txtTelephone->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// grpCustomer
			// 
			this->grpCustomer->Controls->Add(this->lblForename);
			this->grpCustomer->Controls->Add(this->txtTelephone);
			this->grpCustomer->Controls->Add(this->lblHouseNumber);
			this->grpCustomer->Controls->Add(this->txtPostCode);
			this->grpCustomer->Controls->Add(this->lblPostCode);
			this->grpCustomer->Controls->Add(this->txtHouseNumber);
			this->grpCustomer->Controls->Add(this->lblTelephone);
			this->grpCustomer->Controls->Add(this->txtSurname);
			this->grpCustomer->Controls->Add(this->lblSurname);
			this->grpCustomer->Controls->Add(this->txtForename);
			this->grpCustomer->Location = System::Drawing::Point(16, 165);
			this->grpCustomer->Name = L"grpCustomer";
			this->grpCustomer->Size = System::Drawing::Size(249, 155);
			this->grpCustomer->TabIndex = 11;
			this->grpCustomer->TabStop = false;
			this->grpCustomer->Text = L"Customer Details";
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->Location = System::Drawing::Point(12, 9);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(224, 13);
			this->lblInfo->TabIndex = 0;
			this->lblInfo->Text = L"Please ensure that data entered are accurate.\r\n";
			// 
			// lblPriceInfo
			// 
			this->lblPriceInfo->AutoSize = true;
			this->lblPriceInfo->Location = System::Drawing::Point(13, 64);
			this->lblPriceInfo->Name = L"lblPriceInfo";
			this->lblPriceInfo->Size = System::Drawing::Size(34, 13);
			this->lblPriceInfo->TabIndex = 3;
			this->lblPriceInfo->Text = L"Price:";
			// 
			// lblDayInfo
			// 
			this->lblDayInfo->AutoSize = true;
			this->lblDayInfo->Location = System::Drawing::Point(13, 91);
			this->lblDayInfo->Name = L"lblDayInfo";
			this->lblDayInfo->Size = System::Drawing::Size(29, 13);
			this->lblDayInfo->TabIndex = 5;
			this->lblDayInfo->Text = L"Day:";
			// 
			// lblDisabledInfo
			// 
			this->lblDisabledInfo->AutoSize = true;
			this->lblDisabledInfo->Location = System::Drawing::Point(13, 117);
			this->lblDisabledInfo->Name = L"lblDisabledInfo";
			this->lblDisabledInfo->Size = System::Drawing::Size(76, 13);
			this->lblDisabledInfo->TabIndex = 7;
			this->lblDisabledInfo->Text = L"Disabled Seat:";
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(109, 61);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->ReadOnly = true;
			this->txtPrice->Size = System::Drawing::Size(150, 20);
			this->txtPrice->TabIndex = 4;
			this->txtPrice->Text = L"Unknown";
			// 
			// txtDay
			// 
			this->txtDay->Location = System::Drawing::Point(109, 87);
			this->txtDay->Name = L"txtDay";
			this->txtDay->ReadOnly = true;
			this->txtDay->Size = System::Drawing::Size(150, 20);
			this->txtDay->TabIndex = 6;
			this->txtDay->Text = L"Friday";
			// 
			// txtDisabledSeat
			// 
			this->txtDisabledSeat->Location = System::Drawing::Point(109, 113);
			this->txtDisabledSeat->Name = L"txtDisabledSeat";
			this->txtDisabledSeat->ReadOnly = true;
			this->txtDisabledSeat->Size = System::Drawing::Size(150, 20);
			this->txtDisabledSeat->TabIndex = 8;
			this->txtDisabledSeat->Text = L"No";
			// 
			// frmDataEntry
			// 
			this->AcceptButton = this->bttAccept;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->bttClose;
			this->ClientSize = System::Drawing::Size(277, 361);
			this->Controls->Add(this->txtDisabledSeat);
			this->Controls->Add(this->txtDay);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->lblDisabledInfo);
			this->Controls->Add(this->lblDayInfo);
			this->Controls->Add(this->lblPriceInfo);
			this->Controls->Add(this->lblInfo);
			this->Controls->Add(this->grpCustomer);
			this->Controls->Add(this->dtpDate);
			this->Controls->Add(this->txtSeatCode);
			this->Controls->Add(this->bttClose);
			this->Controls->Add(this->bttAccept);
			this->Controls->Add(this->lblDate);
			this->Controls->Add(this->lblSeatCode);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmDataEntry";
			this->ShowIcon = false;
			this->Text = L"Insert Record";
			this->Load += gcnew System::EventHandler(this, &frmDataEntry::FormLoad);
			this->grpCustomer->ResumeLayout(false);
			this->grpCustomer->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		//Stores whether the form is used as an insert or edit form
		static bool InsertForm = true;
		//Stores the Seat Code
		static String^ SeatCode;
		//Stores the Date Booked
		static DateTime DateBooked;
		//Stores the Customer's Forename
		static String^ Forename;
		//Stores the Customer's Surname
		static String^ Surname;
		//Stores the Customer's House Number
		static String^ HouseNumber;
		//Stores the Customer's Post Code
		static String^ PostCode;
		//Stores the Customer's Telephone
		static String^ Telephone;
		//Stores the current day
		static String^ Day;

	private:
		//Returns whether all the characters in a string are not numeric
		bool frmDataEntry::IsText(String^ Value)
		{
			//Loops through all the characters
			for(int i = 0; i < Value->Length; i++)
			{
				//Checks the particular character
				if(Value[i] >= '0' && Value[i] <= '9')
				{
					//String contains numbers
					return false;
				}
			}
			//String has no numbers
			return true;
		}

		//Occurs when the form is started
		void frmDataEntry::FormLoad(Object^, EventArgs^)
		{
			//Updates the day
			this->txtDay->Text = Day;

			//Checks whether the form is an edit form
			if(!InsertForm)
			{
				//Changes the appearance of the form to suit an edit form
				this->Text = L"Edit Record";
				this->lblInfo->Text = L"Please ensure changes are accurate.";
				this->bttAccept->Text = L"&Edit";

				//Fill in empty data entry fields
				this->txtSeatCode->Text = SeatCode[0] + SeatCode->Substring(1)->PadLeft(2, '0');
				this->dtpDate->Value = DateBooked;
				this->txtForename->Text = Forename;
				this->txtSurname->Text = Surname;
				this->txtHouseNumber->Text = Convert::ToString(HouseNumber);
				this->txtPostCode->Text = PostCode;
				this->txtTelephone->Text = Telephone;
			}
		}

		//Occurs when the Insert or Edit button is pressed
		void frmDataEntry::AcceptClick(Object^, EventArgs^)
		{
			//Extracts the first character, and puts a rouge value if no character is present
			char SeatRow = Convert::ToByte(txtSeatCode->Text->PadRight(1, 'Z')[0]);

			//Extracts the following chracters, and puts a rouge value if no characters are present
			int SeatNumber = Convert::ToInt32(txtSeatCode->Text->PadRight(2, '0')->Substring(1));
			
			//Performs validation of fields that has been entered and displays the messagebox to prompt the user
			//Also, the field that is incorrectly entered is selected
			if(SeatNumber == 0) //Seat number is 1 or more
			{
				MessageBox::Show("Please enter a valid seat number.", "Invalid Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->txtSeatCode->Focus();
			}
			else if(SeatRow < L'A' || SeatRow > L'L' || SeatRow == L'I') //Seat row is between A and L, excluding I
			{
				MessageBox::Show("Please enter a valid seat row.", "Invalid Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->txtSeatCode->Focus();
			}
			else if( SeatRow == L'A' && SeatNumber > 14 ||
				SeatRow == L'B' && SeatNumber > 16 ||
				SeatRow == L'C' && SeatNumber > 17 ||
				SeatRow == L'D' && SeatNumber > 19 ||
				SeatRow == L'E' && SeatNumber > 20 ||
				SeatRow == L'F' && SeatNumber > 20 ||
				SeatRow == L'G' && SeatNumber > 19 ||
				SeatRow == L'H' && SeatNumber > 19 ||
				SeatRow == L'J' && SeatNumber > 19 ||
				SeatRow == L'K' && SeatNumber > 19 ||
				SeatRow == L'L' && SeatNumber > 15) //Ensures the selected row has the right number of seats
			{
				MessageBox::Show("Please enter a valid seat number.", "Invalid Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->txtSeatCode->Focus();
			}
			else if(dtpDate->Value < DateTime(1996, 1, 1) || dtpDate->Value > DateTime::Now) //Stops future booking
			{
				MessageBox::Show("Please enter a valid booking date.", "Invalid Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->dtpDate->Focus();
			}
			else if(!IsText(txtForename->Text) || txtForename->Text == String::Empty) //Stops numbers in names and presence check
			{
				MessageBox::Show("Please enter a valid forename.", "Invalid Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->txtForename->Focus();
			}
			else if(!IsText(txtSurname->Text) || txtSurname->Text == String::Empty) //Stops numbers in names and presence check
			{
				MessageBox::Show("Please enter a valid surname.", "Invalid Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->txtSurname->Focus();
			}
			else if(txtHouseNumber->Text == String::Empty) //House number cannot be 0
			{
				MessageBox::Show("Please enter a valid house number.", "Invalid Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->txtHouseNumber->Focus();
			}
			else if(txtPostCode->Text->Length < 6) //Post code must be entered
			{
				MessageBox::Show("Post code is too short.", "Invalid Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->txtPostCode->Focus();
			}
			else if(txtTelephone->Text->Length < 7) //Telephone must be entered
			{
				MessageBox::Show("Telephone number is too short.", "Invalid Data Entry", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->txtTelephone->Focus();
			}
			else 
			{
				//Apply the form's fields to the static variables
				SeatCode = this->txtSeatCode->Text[0] + this->txtSeatCode->Text->Substring(1)->PadLeft(2, '0');
				DateBooked = this->dtpDate->Value;
				Forename = this->txtForename->Text;
				Surname = this->txtSurname->Text;
				HouseNumber = this->txtHouseNumber->Text;
				PostCode = this->txtPostCode->Text;
				Telephone = this->txtTelephone->Text;
				
				//Close the form
				Close();
			}
		}

		//Occurs when the Seat Code is changed
		void frmDataEntry::SeatCodeChanged(Object^, EventArgs^)
		{
			//Extracts the first character, and puts a rouge value if no character is present
			char SeatRow = Convert::ToByte(txtSeatCode->Text->PadRight(1, 'Z')[0]);

			//Compares the row with the pricing
			if(SeatRow <= L'C')
			{
				txtPrice->Text = L"£10.00";
			} 
			else if(SeatRow <= L'F') 
			{
				txtPrice->Text = L"£12.50";	
			} 
			else if(SeatRow <= L'L' && SeatRow != 'I')
			{
				txtPrice->Text = L"£7.25";
			} 
			else
			{
				txtPrice->Text = L"Unknown";
			}

			if(IsSeatDisabled(txtSeatCode->Text))
			{
				txtDisabledSeat->Text = "Yes";
			} else {
				txtDisabledSeat->Text = "No";
			}
		}

	public:
		//Returns whether the seat is disabled
		static bool frmDataEntry::IsSeatDisabled(String^ SeatCode)
		{
			//Extracts the first character, and puts a rouge value if no character is present
			char SeatRow = Convert::ToByte(SeatCode->PadRight(1, 'Z')[0]);

			//Extracts the following chracters, and puts a rouge value if no characters are present
			int SeatNumber = Convert::ToInt32(SeatCode->PadRight(2, '0')->Substring(1));

			//Checks if the seat is the first row
			if(SeatNumber == 1)
			{
				return true;
			} else if(
					(SeatRow == 'A' && SeatNumber == 14) ||
					(SeatRow == 'B' && SeatNumber == 16) ||
					(SeatRow == 'C' && SeatNumber == 17) ||
					(SeatRow == 'D' && SeatNumber == 19) ||
					(SeatRow == 'E' && SeatNumber == 20) ||
					(SeatRow == 'F' && SeatNumber == 20) ||
					(SeatRow == 'G' && SeatNumber == 19) ||
					(SeatRow == 'H' && SeatNumber == 19) ||
					(SeatRow == 'J' && SeatNumber == 19) ||
					(SeatRow == 'K' && SeatNumber == 19) ||
					(SeatRow == 'L' && SeatNumber == 15))
			{
				return true;
			} else {
				return false;
			}
		}
	};
}
