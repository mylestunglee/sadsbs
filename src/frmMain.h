#pragma once

#include "frmDataEntry.h"
#include "frmAbout.h"
#include "frmFind.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::IO;

namespace SADSBookingSystem {

	/// <summary>
	/// Summary for frmMain
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  mnu;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuFile;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuPrintReport;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuPrintDiagram;
	private: System::Windows::Forms::ToolStripSeparator^  mnuSep1;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuExit;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuData;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuInsert;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuEdit;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuDelete;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuHelp;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuAbout;
	private: System::Windows::Forms::SplitContainer^  cntSplit;
	private: System::Windows::Forms::DataGridView^  dgvBookings;
	private: System::Windows::Forms::GroupBox^  grpDay;
	private: System::Windows::Forms::GroupBox^  grpSummary;
	private: System::Windows::Forms::Label^  lblIncomeInfo;
	private: System::Windows::Forms::Label^  lblBooksInfo;


	private: System::Windows::Forms::PictureBox^  pctDiagram;
	private: System::Windows::Forms::RadioButton^  rdbFriday;
	private: System::Windows::Forms::RadioButton^  rdbSaturday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SeatCode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DateBooked;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Forename;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  HouseNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PostCode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telephone;
	private: System::Windows::Forms::Panel^  grpControls;
	private: System::Windows::Forms::ToolStripSeparator^  mnuSep2;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuFind;
	private: System::Drawing::Printing::PrintDocument^  dcmDiagram;
	private: System::Drawing::Printing::PrintDocument^  dcmReport;
	private: System::Windows::Forms::PrintDialog^  dlgPrint;
	private: System::Windows::Forms::PrintPreviewDialog^  dlgPreview;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuPreviewReport;


	private: System::Windows::Forms::ToolStripSeparator^  mnuSep0;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuPreviewDiagram;








	private: System::Windows::Forms::ToolStripSeparator^  mnuSep3;
	private: System::Windows::Forms::ToolStripMenuItem^  sortToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuSeatCode;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuDateBooked;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuForename;
	private: System::Windows::Forms::TextBox^  txtIncome;
	private: System::Windows::Forms::TextBox^  txtBookingsCount;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->mnu = (gcnew System::Windows::Forms::MenuStrip());
			this->mnuFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuPreviewReport = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuPrintReport = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuSep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mnuPreviewDiagram = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuPrintDiagram = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuSep1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mnuExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuData = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuInsert = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuEdit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuDelete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuSep2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mnuFind = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuSep3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->sortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuSeatCode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuDateBooked = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuForename = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cntSplit = (gcnew System::Windows::Forms::SplitContainer());
			this->dgvBookings = (gcnew System::Windows::Forms::DataGridView());
			this->SeatCode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateBooked = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Forename = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HouseNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PostCode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telephone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pctDiagram = (gcnew System::Windows::Forms::PictureBox());
			this->grpControls = (gcnew System::Windows::Forms::Panel());
			this->grpDay = (gcnew System::Windows::Forms::GroupBox());
			this->rdbFriday = (gcnew System::Windows::Forms::RadioButton());
			this->rdbSaturday = (gcnew System::Windows::Forms::RadioButton());
			this->grpSummary = (gcnew System::Windows::Forms::GroupBox());
			this->txtIncome = (gcnew System::Windows::Forms::TextBox());
			this->txtBookingsCount = (gcnew System::Windows::Forms::TextBox());
			this->lblIncomeInfo = (gcnew System::Windows::Forms::Label());
			this->lblBooksInfo = (gcnew System::Windows::Forms::Label());
			this->dcmDiagram = (gcnew System::Drawing::Printing::PrintDocument());
			this->dcmReport = (gcnew System::Drawing::Printing::PrintDocument());
			this->dlgPrint = (gcnew System::Windows::Forms::PrintDialog());
			this->dlgPreview = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->mnu->SuspendLayout();
			this->cntSplit->Panel1->SuspendLayout();
			this->cntSplit->Panel2->SuspendLayout();
			this->cntSplit->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvBookings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pctDiagram))->BeginInit();
			this->grpControls->SuspendLayout();
			this->grpDay->SuspendLayout();
			this->grpSummary->SuspendLayout();
			this->SuspendLayout();
			// 
			// mnu
			// 
			this->mnu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->mnuFile, this->mnuData, 
				this->mnuHelp});
			this->mnu->Location = System::Drawing::Point(0, 0);
			this->mnu->Name = L"mnu";
			this->mnu->Size = System::Drawing::Size(624, 24);
			this->mnu->TabIndex = 0;
			this->mnu->Text = L"menuStrip1";
			// 
			// mnuFile
			// 
			this->mnuFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->mnuPreviewReport, 
				this->mnuPrintReport, this->mnuSep0, this->mnuPreviewDiagram, this->mnuPrintDiagram, this->mnuSep1, this->mnuExit});
			this->mnuFile->Name = L"mnuFile";
			this->mnuFile->Size = System::Drawing::Size(37, 20);
			this->mnuFile->Text = L"&File";
			// 
			// mnuPreviewReport
			// 
			this->mnuPreviewReport->Name = L"mnuPreviewReport";
			this->mnuPreviewReport->Size = System::Drawing::Size(229, 22);
			this->mnuPreviewReport->Text = L"Print &Preview Report...";
			this->mnuPreviewReport->Click += gcnew System::EventHandler(this, &frmMain::PrintPreviewReport);
			// 
			// mnuPrintReport
			// 
			this->mnuPrintReport->Name = L"mnuPrintReport";
			this->mnuPrintReport->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->mnuPrintReport->Size = System::Drawing::Size(229, 22);
			this->mnuPrintReport->Text = L"Print &Report...";
			this->mnuPrintReport->Click += gcnew System::EventHandler(this, &frmMain::PrintReportClick);
			// 
			// mnuSep0
			// 
			this->mnuSep0->Name = L"mnuSep0";
			this->mnuSep0->Size = System::Drawing::Size(226, 6);
			// 
			// mnuPreviewDiagram
			// 
			this->mnuPreviewDiagram->Name = L"mnuPreviewDiagram";
			this->mnuPreviewDiagram->Size = System::Drawing::Size(229, 22);
			this->mnuPreviewDiagram->Text = L"Print Pre&view Diagram...";
			this->mnuPreviewDiagram->Click += gcnew System::EventHandler(this, &frmMain::PrintPreviewDiagram);
			// 
			// mnuPrintDiagram
			// 
			this->mnuPrintDiagram->Name = L"mnuPrintDiagram";
			this->mnuPrintDiagram->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::P));
			this->mnuPrintDiagram->Size = System::Drawing::Size(229, 22);
			this->mnuPrintDiagram->Text = L"Print &Diagram...";
			this->mnuPrintDiagram->Click += gcnew System::EventHandler(this, &frmMain::PrintDiagramClick);
			// 
			// mnuSep1
			// 
			this->mnuSep1->Name = L"mnuSep1";
			this->mnuSep1->Size = System::Drawing::Size(226, 6);
			// 
			// mnuExit
			// 
			this->mnuExit->Name = L"mnuExit";
			this->mnuExit->Size = System::Drawing::Size(229, 22);
			this->mnuExit->Text = L"E&xit";
			this->mnuExit->Click += gcnew System::EventHandler(this, &frmMain::Exit);
			// 
			// mnuData
			// 
			this->mnuData->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->mnuInsert, this->mnuEdit, 
				this->mnuDelete, this->mnuSep2, this->mnuFind, this->mnuSep3, this->sortToolStripMenuItem});
			this->mnuData->Name = L"mnuData";
			this->mnuData->Size = System::Drawing::Size(43, 20);
			this->mnuData->Text = L"&Data";
			// 
			// mnuInsert
			// 
			this->mnuInsert->Name = L"mnuInsert";
			this->mnuInsert->ShortcutKeys = System::Windows::Forms::Keys::Insert;
			this->mnuInsert->Size = System::Drawing::Size(146, 22);
			this->mnuInsert->Text = L"&Insert...";
			this->mnuInsert->Click += gcnew System::EventHandler(this, &frmMain::Insert);
			// 
			// mnuEdit
			// 
			this->mnuEdit->Name = L"mnuEdit";
			this->mnuEdit->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->mnuEdit->Size = System::Drawing::Size(146, 22);
			this->mnuEdit->Text = L"&Edit...";
			this->mnuEdit->Click += gcnew System::EventHandler(this, &frmMain::Edit);
			// 
			// mnuDelete
			// 
			this->mnuDelete->Name = L"mnuDelete";
			this->mnuDelete->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->mnuDelete->Size = System::Drawing::Size(146, 22);
			this->mnuDelete->Text = L"&Delete";
			this->mnuDelete->Click += gcnew System::EventHandler(this, &frmMain::Delete);
			// 
			// mnuSep2
			// 
			this->mnuSep2->Name = L"mnuSep2";
			this->mnuSep2->Size = System::Drawing::Size(143, 6);
			// 
			// mnuFind
			// 
			this->mnuFind->Name = L"mnuFind";
			this->mnuFind->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->mnuFind->Size = System::Drawing::Size(146, 22);
			this->mnuFind->Text = L"&Find...";
			this->mnuFind->Click += gcnew System::EventHandler(this, &frmMain::Find);
			// 
			// mnuSep3
			// 
			this->mnuSep3->Name = L"mnuSep3";
			this->mnuSep3->Size = System::Drawing::Size(143, 6);
			// 
			// sortToolStripMenuItem
			// 
			this->sortToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->mnuSeatCode, 
				this->mnuDateBooked, this->mnuForename});
			this->sortToolStripMenuItem->Name = L"sortToolStripMenuItem";
			this->sortToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->sortToolStripMenuItem->Text = L"&Sort By ...";
			// 
			// mnuSeatCode
			// 
			this->mnuSeatCode->Name = L"mnuSeatCode";
			this->mnuSeatCode->Size = System::Drawing::Size(141, 22);
			this->mnuSeatCode->Text = L"&Seat Code";
			this->mnuSeatCode->Click += gcnew System::EventHandler(this, &frmMain::SortBySeatCode);
			// 
			// mnuDateBooked
			// 
			this->mnuDateBooked->Name = L"mnuDateBooked";
			this->mnuDateBooked->Size = System::Drawing::Size(141, 22);
			this->mnuDateBooked->Text = L"&Date Booked";
			this->mnuDateBooked->Click += gcnew System::EventHandler(this, &frmMain::SortByDateBooked);
			// 
			// mnuForename
			// 
			this->mnuForename->Name = L"mnuForename";
			this->mnuForename->Size = System::Drawing::Size(141, 22);
			this->mnuForename->Text = L"&Forename";
			this->mnuForename->Click += gcnew System::EventHandler(this, &frmMain::SortByForename);
			// 
			// mnuHelp
			// 
			this->mnuHelp->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->mnuAbout});
			this->mnuHelp->Name = L"mnuHelp";
			this->mnuHelp->Size = System::Drawing::Size(44, 20);
			this->mnuHelp->Text = L"&Help";
			// 
			// mnuAbout
			// 
			this->mnuAbout->Name = L"mnuAbout";
			this->mnuAbout->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->mnuAbout->Size = System::Drawing::Size(135, 22);
			this->mnuAbout->Text = L"&About...";
			this->mnuAbout->Click += gcnew System::EventHandler(this, &frmMain::About);
			// 
			// cntSplit
			// 
			this->cntSplit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cntSplit->Location = System::Drawing::Point(0, 24);
			this->cntSplit->Name = L"cntSplit";
			// 
			// cntSplit.Panel1
			// 
			this->cntSplit->Panel1->Controls->Add(this->dgvBookings);
			// 
			// cntSplit.Panel2
			// 
			this->cntSplit->Panel2->Controls->Add(this->pctDiagram);
			this->cntSplit->Panel2->Controls->Add(this->grpControls);
			this->cntSplit->Size = System::Drawing::Size(624, 418);
			this->cntSplit->SplitterDistance = 326;
			this->cntSplit->TabIndex = 0;
			// 
			// dgvBookings
			// 
			this->dgvBookings->AllowUserToAddRows = false;
			this->dgvBookings->AllowUserToDeleteRows = false;
			this->dgvBookings->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvBookings->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dgvBookings->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBookings->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->SeatCode, 
				this->DateBooked, this->Forename, this->Surname, this->HouseNumber, this->PostCode, this->Telephone});
			this->dgvBookings->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvBookings->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dgvBookings->Location = System::Drawing::Point(0, 0);
			this->dgvBookings->MultiSelect = false;
			this->dgvBookings->Name = L"dgvBookings";
			this->dgvBookings->ReadOnly = true;
			this->dgvBookings->RowHeadersVisible = false;
			this->dgvBookings->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			this->dgvBookings->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvBookings->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvBookings->ShowCellToolTips = false;
			this->dgvBookings->ShowEditingIcon = false;
			this->dgvBookings->Size = System::Drawing::Size(326, 418);
			this->dgvBookings->TabIndex = 0;
			// 
			// SeatCode
			// 
			this->SeatCode->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->SeatCode->HeaderText = L"Seat Code";
			this->SeatCode->MaxInputLength = 3;
			this->SeatCode->MinimumWidth = 85;
			this->SeatCode->Name = L"SeatCode";
			this->SeatCode->ReadOnly = true;
			this->SeatCode->Width = 85;
			// 
			// DateBooked
			// 
			this->DateBooked->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->DateBooked->HeaderText = L"Date Booked";
			this->DateBooked->MaxInputLength = 32;
			this->DateBooked->MinimumWidth = 100;
			this->DateBooked->Name = L"DateBooked";
			this->DateBooked->ReadOnly = true;
			// 
			// Forename
			// 
			this->Forename->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Forename->HeaderText = L"Forename";
			this->Forename->MaxInputLength = 64;
			this->Forename->MinimumWidth = 100;
			this->Forename->Name = L"Forename";
			this->Forename->ReadOnly = true;
			// 
			// Surname
			// 
			this->Surname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Surname->HeaderText = L"Surname";
			this->Surname->MaxInputLength = 64;
			this->Surname->MinimumWidth = 100;
			this->Surname->Name = L"Surname";
			this->Surname->ReadOnly = true;
			// 
			// HouseNumber
			// 
			this->HouseNumber->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->HouseNumber->HeaderText = L"House Number";
			this->HouseNumber->MaxInputLength = 5;
			this->HouseNumber->MinimumWidth = 110;
			this->HouseNumber->Name = L"HouseNumber";
			this->HouseNumber->ReadOnly = true;
			this->HouseNumber->Width = 110;
			// 
			// PostCode
			// 
			this->PostCode->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->PostCode->HeaderText = L"Post Code";
			this->PostCode->MaxInputLength = 7;
			this->PostCode->MinimumWidth = 80;
			this->PostCode->Name = L"PostCode";
			this->PostCode->ReadOnly = true;
			this->PostCode->Width = 80;
			// 
			// Telephone
			// 
			this->Telephone->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Telephone->HeaderText = L"Telephone";
			this->Telephone->MaxInputLength = 11;
			this->Telephone->MinimumWidth = 90;
			this->Telephone->Name = L"Telephone";
			this->Telephone->ReadOnly = true;
			this->Telephone->Width = 90;
			// 
			// pctDiagram
			// 
			this->pctDiagram->BackColor = System::Drawing::Color::White;
			this->pctDiagram->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pctDiagram->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pctDiagram->Location = System::Drawing::Point(0, 88);
			this->pctDiagram->Name = L"pctDiagram";
			this->pctDiagram->Size = System::Drawing::Size(294, 330);
			this->pctDiagram->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pctDiagram->TabIndex = 2;
			this->pctDiagram->TabStop = false;
			this->pctDiagram->SizeChanged += gcnew System::EventHandler(this, &frmMain::DiagramSizeChanged);
			// 
			// grpControls
			// 
			this->grpControls->Controls->Add(this->grpDay);
			this->grpControls->Controls->Add(this->grpSummary);
			this->grpControls->Dock = System::Windows::Forms::DockStyle::Top;
			this->grpControls->Location = System::Drawing::Point(0, 0);
			this->grpControls->Name = L"grpControls";
			this->grpControls->Size = System::Drawing::Size(294, 88);
			this->grpControls->TabIndex = 3;
			// 
			// grpDay
			// 
			this->grpDay->Controls->Add(this->rdbFriday);
			this->grpDay->Controls->Add(this->rdbSaturday);
			this->grpDay->Location = System::Drawing::Point(3, 3);
			this->grpDay->Name = L"grpDay";
			this->grpDay->Size = System::Drawing::Size(100, 81);
			this->grpDay->TabIndex = 1;
			this->grpDay->TabStop = false;
			this->grpDay->Text = L"Day";
			// 
			// rdbFriday
			// 
			this->rdbFriday->AutoSize = true;
			this->rdbFriday->Checked = true;
			this->rdbFriday->Location = System::Drawing::Point(6, 21);
			this->rdbFriday->Name = L"rdbFriday";
			this->rdbFriday->Size = System::Drawing::Size(53, 17);
			this->rdbFriday->TabIndex = 0;
			this->rdbFriday->TabStop = true;
			this->rdbFriday->Text = L"&Friday";
			this->rdbFriday->UseVisualStyleBackColor = true;
			this->rdbFriday->CheckedChanged += gcnew System::EventHandler(this, &frmMain::DayChange);
			// 
			// rdbSaturday
			// 
			this->rdbSaturday->AutoSize = true;
			this->rdbSaturday->Location = System::Drawing::Point(6, 53);
			this->rdbSaturday->Name = L"rdbSaturday";
			this->rdbSaturday->Size = System::Drawing::Size(67, 17);
			this->rdbSaturday->TabIndex = 1;
			this->rdbSaturday->Text = L"&Saturday";
			this->rdbSaturday->UseVisualStyleBackColor = true;
			// 
			// grpSummary
			// 
			this->grpSummary->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->grpSummary->Controls->Add(this->txtIncome);
			this->grpSummary->Controls->Add(this->txtBookingsCount);
			this->grpSummary->Controls->Add(this->lblIncomeInfo);
			this->grpSummary->Controls->Add(this->lblBooksInfo);
			this->grpSummary->Location = System::Drawing::Point(109, 3);
			this->grpSummary->Name = L"grpSummary";
			this->grpSummary->Size = System::Drawing::Size(182, 81);
			this->grpSummary->TabIndex = 0;
			this->grpSummary->TabStop = false;
			this->grpSummary->Text = L"Summary";
			// 
			// txtIncome
			// 
			this->txtIncome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtIncome->Location = System::Drawing::Point(118, 52);
			this->txtIncome->Name = L"txtIncome";
			this->txtIncome->ReadOnly = true;
			this->txtIncome->Size = System::Drawing::Size(55, 20);
			this->txtIncome->TabIndex = 3;
			// 
			// txtBookingsCount
			// 
			this->txtBookingsCount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBookingsCount->Location = System::Drawing::Point(118, 19);
			this->txtBookingsCount->Name = L"txtBookingsCount";
			this->txtBookingsCount->ReadOnly = true;
			this->txtBookingsCount->Size = System::Drawing::Size(55, 20);
			this->txtBookingsCount->TabIndex = 2;
			// 
			// lblIncomeInfo
			// 
			this->lblIncomeInfo->AutoSize = true;
			this->lblIncomeInfo->Location = System::Drawing::Point(6, 55);
			this->lblIncomeInfo->Name = L"lblIncomeInfo";
			this->lblIncomeInfo->Size = System::Drawing::Size(72, 13);
			this->lblIncomeInfo->TabIndex = 1;
			this->lblIncomeInfo->Text = L"Total Income:";
			// 
			// lblBooksInfo
			// 
			this->lblBooksInfo->AutoSize = true;
			this->lblBooksInfo->Location = System::Drawing::Point(6, 23);
			this->lblBooksInfo->Name = L"lblBooksInfo";
			this->lblBooksInfo->Size = System::Drawing::Size(106, 13);
			this->lblBooksInfo->TabIndex = 0;
			this->lblBooksInfo->Text = L"Number of Bookings:";
			// 
			// dcmDiagram
			// 
			this->dcmDiagram->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &frmMain::PrintDiagramDocument);
			// 
			// dcmReport
			// 
			this->dcmReport->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &frmMain::PrintReportDocument);
			// 
			// dlgPrint
			// 
			this->dlgPrint->UseEXDialog = true;
			// 
			// dlgPreview
			// 
			this->dlgPreview->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->dlgPreview->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->dlgPreview->ClientSize = System::Drawing::Size(400, 300);
			this->dlgPreview->Document = this->dcmReport;
			this->dlgPreview->Enabled = true;
			this->dlgPreview->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"dlgPreview.Icon")));
			this->dlgPreview->Name = L"printPreviewDialog1";
			this->dlgPreview->UseAntiAlias = true;
			this->dlgPreview->Visible = false;
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 442);
			this->Controls->Add(this->cntSplit);
			this->Controls->Add(this->mnu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->mnu;
			this->MinimumSize = System::Drawing::Size(640, 480);
			this->Name = L"frmMain";
			this->Text = L"SADS Booking System";
			this->Load += gcnew System::EventHandler(this, &frmMain::FormLoad);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMain::FormClose);
			this->mnu->ResumeLayout(false);
			this->mnu->PerformLayout();
			this->cntSplit->Panel1->ResumeLayout(false);
			this->cntSplit->Panel2->ResumeLayout(false);
			this->cntSplit->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvBookings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pctDiagram))->EndInit();
			this->grpControls->ResumeLayout(false);
			this->grpDay->ResumeLayout(false);
			this->grpDay->PerformLayout();
			this->grpSummary->ResumeLayout(false);
			this->grpSummary->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Stores the bitmap used to hold the diagram
		Bitmap^ Diagram;

		//Occurs when the form is loaded for the first time
		void frmMain::FormLoad(Object^, EventArgs^ )
		{
			this->cntSplit->Panel2MinSize = 294;
			LoadData(Application::StartupPath + "\\Friday.sadsdb");
			UpdateSummary();
			DrawDiagram(Math::Min(this->pctDiagram->ClientRectangle.Width, this->pctDiagram->ClientRectangle.Height));
			this->pctDiagram->Image = Diagram;
		}

		//Occurs when the form is closing
		void frmMain::FormClose(Object^, FormClosingEventArgs^ )
		{
			if(this->rdbFriday->Checked)
			{
				//Save the current changes
				SaveData(Application::StartupPath + "\\Friday.sadsdb");
			}
			else
			{
				SaveData(Application::StartupPath + "\\Saturday.sadsdb");
			}
			//Exits the application, including force closing the other forms
			Application::Exit();
		}

		//Occurs when the user changes the day
		void frmMain::DayChange(Object^, EventArgs^)
		{
			if(this->rdbFriday->Checked)
			{
				SaveData(Application::StartupPath + "\\Saturday.sadsdb");
				LoadData(Application::StartupPath + "\\Friday.sadsdb");
			} else {
				SaveData(Application::StartupPath + "\\Friday.sadsdb");
				LoadData(Application::StartupPath + "\\Saturday.sadsdb");
			}
			//Updates the summary
			UpdateSummary();
			//Updates the diagram
			DrawDiagram(Math::Min(this->pctDiagram->ClientRectangle.Width, this->pctDiagram->ClientRectangle.Height));
			this->pctDiagram->Image = Diagram;
		}
		//Occurs when the picture box's size has changed
		void frmMain::DiagramSizeChanged(Object^, EventArgs^)
		{
			//Updates the diagram
			DrawDiagram(Math::Min(this->pctDiagram->ClientRectangle.Width, this->pctDiagram->ClientRectangle.Height));
			this->pctDiagram->Image = Diagram;
		}
		//Occurs when the Exit button is clicked
		void frmMain::Exit(Object^, EventArgs^)
		{
			if(this->rdbFriday->Checked)
			{
				//Save the current changes
				SaveData(Application::StartupPath + "\\Friday.sadsdb");
			}
			else
			{
				SaveData(Application::StartupPath + "\\Saturday.sadsdb");
			}
			//Exits the application, including force closing the other forms
			Application::Exit();
		}
		//Occurs when the Insert button is clicked
		void frmMain::Insert(Object^, EventArgs^ )
		{
			//Stores whether to loop again
			bool Repeat = false;
			//Set the form as an insert form
			frmDataEntry::InsertForm = true;
			//Sets the form's day
			frmDataEntry::Day = this->rdbFriday->Checked ? L"Friday" : L"Saturday";
			//Creates a new form
			frmDataEntry^ DataForm = gcnew frmDataEntry();
			//Loops until a suitable seat code is used
			do
			{
				//Clear the seat code to determine whether a new seat is to be requested
				frmDataEntry::SeatCode = String::Empty;
				//Show the form
				DataForm->ShowDialog();
				//Calculate whether the seat is invalid and do not loop again if empty
				if(frmDataEntry::SeatCode != String::Empty)
				{
					Repeat = CheckSeat(frmDataEntry::SeatCode);
				}
				//Check whether the loop is repeat
				if(Repeat)
				{
					//Promopt the user that the seat has already been taken
					MessageBox::Show("The seat " + frmDataEntry::SeatCode + " has already been booked. Please choose a different seat.",
						"Seat Invalid", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			} while(Repeat);
			//Delete the form when it is closed
			delete DataForm;
			//Check if whether to add a seat
			if(frmDataEntry::SeatCode != String::Empty)
			{
				//Creates an array containing the data to hold the record
				array<Object^>^ Cells = {
					frmDataEntry::SeatCode,
					frmDataEntry::DateBooked.ToShortDateString(),
					frmDataEntry::Forename,
					frmDataEntry::Surname,
					frmDataEntry::HouseNumber,
					frmDataEntry::PostCode,
					frmDataEntry::Telephone};
				//Add a new row
				this->dgvBookings->Rows->Add(Cells);
				//Delete the array
				delete Cells;
				//Updates the summary
				UpdateSummary();
				//Updates the diagram
				DrawDiagram(Math::Min(this->pctDiagram->ClientRectangle.Width, this->pctDiagram->ClientRectangle.Height));
				this->pctDiagram->Image = Diagram;
			}
		}
		//Occurs when the Edit button is clicked
		void frmMain::Edit(Object^, EventArgs^ )
		{
			//Ensure that a record is selected
			if(this->dgvBookings->RowCount == 0)
			{
				//Shows a messagebox promoting the user not to select the last row
				MessageBox::Show("Please select a record with data.", "Cannot Edit", MessageBoxButtons::OK, MessageBoxIcon::Error);
			} else {
				//Stores whether to loop again
				bool Repeat = false;
				//Set the form as an edit form
				frmDataEntry::InsertForm = false;
				//Sets the form's day
				frmDataEntry::Day = this->rdbFriday->Checked ? L"Friday" : L"Saturday";
				//Set the form's field properties
				frmDataEntry::SeatCode = Convert::ToString(this->dgvBookings->SelectedCells[0]->Value);
				frmDataEntry::DateBooked = Convert::ToDateTime(this->dgvBookings->SelectedCells[1]->Value);
				frmDataEntry::Forename = Convert::ToString(this->dgvBookings->SelectedCells[2]->Value);
				frmDataEntry::Surname = Convert::ToString(this->dgvBookings->SelectedCells[3]->Value);
				frmDataEntry::HouseNumber = Convert::ToString(this->dgvBookings->SelectedCells[4]->Value);
				frmDataEntry::PostCode = Convert::ToString(this->dgvBookings->SelectedCells[5]->Value);
				frmDataEntry::Telephone = Convert::ToString(this->dgvBookings->SelectedCells[6]->Value);
								
				//Creates a new form
				frmDataEntry^ DataForm = gcnew frmDataEntry();
				do
				{
					//Show the form
					DataForm->ShowDialog();
					//Calculate whether the seat is invalid and do not loop again if empty
					Repeat = CheckSeat(frmDataEntry::SeatCode) &&
						frmDataEntry::SeatCode != String::Empty &&
						dgvBookings->SelectedRows[0]->Cells[0]->Value->ToString() != frmDataEntry::SeatCode;
					//Check whether the loop is repeat
					if(Repeat)
					{
						//Promopt the user that the seat has already been taken
						MessageBox::Show("The seat " + frmDataEntry::SeatCode + " has already been booked. Please choose a different seat.",
							"Seat Invalid", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				} while(Repeat);
				//Delete the form when it is closed
				delete DataForm;
				if(frmDataEntry::SeatCode != String::Empty)
				{
				//Set the current row's properties
					this->dgvBookings->SelectedRows[0]->Cells[0]->Value = frmDataEntry::SeatCode;
					this->dgvBookings->SelectedRows[0]->Cells[1]->Value = frmDataEntry::DateBooked.ToShortDateString();
					this->dgvBookings->SelectedRows[0]->Cells[2]->Value = frmDataEntry::Forename;
					this->dgvBookings->SelectedRows[0]->Cells[3]->Value = frmDataEntry::Surname;
					this->dgvBookings->SelectedRows[0]->Cells[4]->Value = frmDataEntry::HouseNumber;
					this->dgvBookings->SelectedRows[0]->Cells[5]->Value = frmDataEntry::PostCode;
					this->dgvBookings->SelectedRows[0]->Cells[6]->Value = frmDataEntry::Telephone;
					//Updates the summary
					UpdateSummary();
					//Updates the diagram
					DrawDiagram(Math::Min(this->pctDiagram->ClientRectangle.Width, this->pctDiagram->ClientRectangle.Height));
					this->pctDiagram->Image = Diagram;
				}
			}
		}
		//Occurs when the Delete button is clicked
		void frmMain::Delete(Object^, EventArgs^ )
		{
			//Checks that the selected row is in range
			if(this->dgvBookings->RowCount == 0)
			{
				//Shows a messagebox promoting the user not to select the last row
				MessageBox::Show("Please select a record with data.", "Cannot Delete", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				//Deletes the selected row
				this->dgvBookings->Rows->RemoveAt(this->dgvBookings->SelectedRows[0]->Index);
				//Updates the summary
				UpdateSummary();
				//Updates the diagram
				DrawDiagram(Math::Min(this->pctDiagram->ClientRectangle.Width, this->pctDiagram->ClientRectangle.Height));
				this->pctDiagram->Image = Diagram;			}
		}
		//Occurs when the Find button is clicked
		void frmMain::Find(Object^, EventArgs^ )
		{
			//Creates a new form
			frmFind^ FindForm = gcnew frmFind();
			//Show the form
			FindForm->ShowDialog();
			//Delete the form when it is closed
			delete FindForm;
			//Checks whether a search value exists
			if(frmFind::SearchValue != String::Empty)
			{
				//Checks if there are any records
				if(this->dgvBookings->RowCount == 0)
				{
					//Promopt the user that the find cannot be performed
					MessageBox::Show("There are no records to search.", "Cannot Find", MessageBoxButtons::OK, MessageBoxIcon::Error);
				} //Checks if the field is already selected
				else
				{
					//Stores where to start searching
					int StartRow = 0;

					//Checks whether the current row meets the search critera
					if(this->dgvBookings->SelectedRows[0]->Cells[frmFind::SearchCellIndex]->Value->ToString() == frmFind::SearchValue ||
						(this->dgvBookings->SelectedRows[0]->Cells[frmFind::SearchCellIndex]->Value->ToString()->Contains(frmFind::SearchValue) && !frmFind::SearchMatchWholeField))
					{
						//Start searching after the current row
						StartRow = this->dgvBookings->SelectedRows[0]->Index + 1;
					}

					//Loops through the records
					for(int i = StartRow; i < dgvBookings->RowCount; i++)
					{
						//Checks whether the value is found
						if(dgvBookings->Rows[i]->Cells[frmFind::SearchCellIndex]->Value->ToString() == frmFind::SearchValue ||
							(dgvBookings->Rows[i]->Cells[frmFind::SearchCellIndex]->Value->ToString()->Contains(frmFind::SearchValue) && !frmFind::SearchMatchWholeField))
						{
							//Select the current row
							this->dgvBookings->CurrentCell = this->dgvBookings->Rows[i]->Cells[0];
							//Don't search for more 
							return;
						}
					}

					//Shows that the record cannot be found
					MessageBox::Show("No more records are found.", "Not Found", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		//Occurs when the About button is clicked
		void frmMain::About(Object^, EventArgs^ )
		{
			//Creates a new form
			frmAbout^ AboutForm = gcnew frmAbout();
			//Show the form
			AboutForm->ShowDialog();
			//Delete the form when it is closed
			delete AboutForm;
		}
		//Occurs when the report is required to be printed
		void frmMain::PrintReportDocument(Object^, System::Drawing::Printing::PrintPageEventArgs^  e)
		{
			//Stores the current page
			static int Page = 0;
			//Stores the current row or booking
			static int Row = 0;
			//Stores the number of rows that can be printed on one page
			int MaxRows = 53;
			//Stores the Y position of the headings
			float HeadingY = 20.0f;
			//Draws smooth and high quality text
			e->Graphics->TextRenderingHint = Drawing::Text::TextRenderingHint::AntiAlias;
			
			//Stores the font to display the bookings headings
			Drawing::Font^ Heading = gcnew Drawing::Font("Times New Roman", 12.0f, FontStyle::Bold);
			//Stores the font is display the infomation
			Drawing::Font^ Body = gcnew Drawing::Font("Arial Narrow", 12.0f, FontStyle::Bold);
			//Stores the font to display the title
			Drawing::Font^ TitleFont = gcnew Drawing::Font("Lucida Calligraphy", 24, FontStyle::Bold);
			
			//Stores the title text
			String^ TitleText = L"Theatre Bookings";
			//Stores the size of the title
			SizeF TitleSize = e->Graphics->MeasureString(TitleText, TitleFont);

			//Checks if the current page is the first page
			if(Page == 0)
			{
				//Reduces the number of rows since the first page has other content
				MaxRows = 47;
				//Increases the spacing for the heading on the first page
				HeadingY = 140;
				//Draws the title
				e->Graphics->DrawString(TitleText, TitleFont, Brushes::Black, e->PageSettings->PaperSize->Width / 2 - TitleSize.Width / 2.0f, 20);
				//Draws the summary information
				e->Graphics->DrawString(
					"Day: " + (rdbFriday->Checked ? "Friday" : "Saturday") +
					"\nNumber of Bookings: " + txtBookingsCount->Text +
					"\nTotal Income: " + txtIncome->Text, Body, Brushes::Black, 70, 55);
			}

			//Draws the row headings
			e->Graphics->DrawString("Seat Code", Heading, Brushes::Black, 70.0f, HeadingY);
			e->Graphics->DrawString("Date Booked", Heading, Brushes::Black, 150.0f, HeadingY);
			e->Graphics->DrawString("Forename", Heading, Brushes::Black, 250.0f, HeadingY);
			e->Graphics->DrawString("Surname", Heading, Brushes::Black, 340.0f, HeadingY);
			e->Graphics->DrawString("House Number", Heading, Brushes::Black, 430.0f, HeadingY);
			e->Graphics->DrawString("Post Code", Heading, Brushes::Black, 550.0f, HeadingY);
			e->Graphics->DrawString("Telephone ", Heading, Brushes::Black, 650.0f, HeadingY);

			//Draw a black line to mark the start of data
			e->Graphics->DrawLine(Pens::Black, 70.0f, HeadingY + 20.0f, 750.0f, HeadingY + 20.0f);

			//Loops through the rows that can be drawn on this page
			for(int i = 0; i < MaxRows; i++)
			{
				//Check if there is more rows that can be printed
				if(Row < dgvBookings->RowCount)
				{
					//Prints out the data
					e->Graphics->DrawString(dgvBookings->Rows[Row]->Cells[0]->Value->ToString(), Body, Brushes::Black, 70, HeadingY + 20 + i * 20);
					e->Graphics->DrawString(dgvBookings->Rows[Row]->Cells[1]->Value->ToString(), Body, Brushes::Black, 150, HeadingY + 20 + i * 20);
					e->Graphics->DrawString(dgvBookings->Rows[Row]->Cells[2]->Value->ToString(), Body, Brushes::Black, 250 , HeadingY + 20 + i * 20);
					e->Graphics->DrawString(dgvBookings->Rows[Row]->Cells[3]->Value->ToString(), Body, Brushes::Black, 340, HeadingY + 20 + i * 20);
					e->Graphics->DrawString(dgvBookings->Rows[Row]->Cells[4]->Value->ToString(), Body, Brushes::Black, 430, HeadingY + 20 + i * 20);
					e->Graphics->DrawString(dgvBookings->Rows[Row]->Cells[5]->Value->ToString(), Body, Brushes::Black, 550, HeadingY + 20 + i * 20);
					e->Graphics->DrawString(dgvBookings->Rows[Row]->Cells[6]->Value->ToString(), Body, Brushes::Black, 650, HeadingY + 20 + i * 20);					
					//Increments the row counter
					Row++;
					//Draws a faint line to mark the next row
					e->Graphics->DrawLine(Pens::LightGray,
						70.0f,
						HeadingY + 40.0f + Convert::ToSingle(i) * 20.0f,
						750.0f,
						HeadingY + 40.0f + Convert::ToSingle(i) * 20.0f);
				} else {
					//Reset the page number
					Page = 0;
					//Reset the row number
					Row = 0;
					//Exit the function
					return;
				}
			}

			//Checks if there is still more unprinted rows
			if(Row < dgvBookings->RowCount)
			{
				//Ensures the other pages are printed
				e->HasMorePages = true;
				//Moves on to the next page
				Page++;
			} else {
				//Resets the page number
				Page = 0;
				//Resets the row number
				Row = 0;
			}
		}
		//Occurs when the diagram is required to be printed
		void frmMain::PrintDiagramDocument(Object^, System::Drawing::Printing::PrintPageEventArgs^  e)
		{
			DrawDiagram(Convert::ToInt32(Math::Min(e->PageSettings->PrintableArea.Width, e->PageSettings->PrintableArea.Height)));
			e->Graphics->DrawImageUnscaled(Diagram, 0, 0);
		}
		//Occurs when the report is requied to be printed
		void frmMain::PrintReportClick(Object^, EventArgs^)
		{
			dlgPrint->Document = dcmReport;
			if(dlgPrint->ShowDialog() == Windows::Forms::DialogResult::OK)
			{
				dcmDiagram->PrinterSettings = dlgPrint->PrinterSettings;
				dcmReport->Print();		
			}
		}
		//Occurs when the print diagram button is clicked
		void frmMain::PrintDiagramClick(Object^, EventArgs^)
		{
			dlgPrint->Document = dcmDiagram;
			if(dlgPrint->ShowDialog() == Windows::Forms::DialogResult::OK)
			{
				dcmDiagram->PrinterSettings = dlgPrint->PrinterSettings;
				dcmDiagram->Print();		
			}
		}
		//Occurs when the report preview is requested
		void frmMain::PrintPreviewReport(Object^, EventArgs^)
		{
			dlgPreview->Document = dcmReport;
			dlgPreview->ShowDialog();
		}
		//Occurs when the diagram preview is requested
		void frmMain::PrintPreviewDiagram(Object^, EventArgs^)
		{
			dlgPreview->Document = dcmDiagram;
			dlgPreview->ShowDialog();
		}
		//Occurs when the Sort by Seat Code button is clicked
		void frmMain::SortBySeatCode(Object^, EventArgs^)
		{
			//Sort by the first column in ascending order
			this->dgvBookings->Sort(dgvBookings->Columns[0], ListSortDirection::Ascending);
		}
		//Occurs when the Sort by Date Booked button is clicked
		void frmMain::SortByDateBooked(Object^, EventArgs^)
		{
			//Sort by the first column in ascending order
			this->dgvBookings->Sort(dgvBookings->Columns[1], ListSortDirection::Ascending);
		}
		//Occurs when the Sort by Forename button is clicked
		void frmMain::SortByForename(Object^, EventArgs^)
		{
			//Sort by the first column in ascending order
			this->dgvBookings->Sort(dgvBookings->Columns[2], ListSortDirection::Ascending);
		}
		//Saves the current data as a custom database file to the specified filepath
		void frmMain::SaveData(String^ FilePath)
		{
			//Stores the medium to access to the file
			FileStream^ Stream;

			//Exposes functions for writing binary data
			BinaryWriter^ Writer;
			try
			{
				//Opens or creates a new file for saving
				Stream = gcnew FileStream(FilePath, FileMode::OpenOrCreate, FileAccess::Write);

				//Links the BinaryWriter with the opened file stream
				Writer = gcnew BinaryWriter(Stream);

				//Loops through all the records
				for(int i = 0; i < this->dgvBookings->RowCount; i++)
				{
					//Saves the Seat Code
					Writer->Write(this->dgvBookings->Rows[i]->Cells[0]->Value->ToString());
					//Saves the Booking Date - Coverts string into date and extracts raw int64 data to save
					Writer->Write(Convert::ToDateTime(this->dgvBookings->Rows[i]->Cells[1]->Value).Ticks);
					//Saves the Customer's Forename
					Writer->Write(this->dgvBookings->Rows[i]->Cells[2]->Value->ToString());
					//Saves the Customer's Surname
					Writer->Write(this->dgvBookings->Rows[i]->Cells[3]->Value->ToString());
					//Saves the Customer's House Number
					Writer->Write(this->dgvBookings->Rows[i]->Cells[4]->Value->ToString());
					//Saves the Customer's Post Code
					Writer->Write(this->dgvBookings->Rows[i]->Cells[5]->Value->ToString());
					//Saves the Customer's Telephone
					Writer->Write(this->dgvBookings->Rows[i]->Cells[6]->Value->ToString());
				}

				//End the data with a string terminator
				Writer->Write(L"END");

				//Closes the file
				Writer->Close();
				Stream->Close();

			} catch (...)
			{
				//Promopt the user that the file could not be saved
				MessageBox::Show("The file could not be saved.", "Cannot Save", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}


			//Frees any memory
			delete Writer;
			delete Stream;
		}

		//Loads a custom database file from a specified filepath into the current data
		void frmMain::LoadData(String^ FilePath)
		{
			//Checks if the file exists
			if(!File::Exists(FilePath))
			{
				//Exits the function
				return;
			}

			//Stores the medium to access to the file
			FileStream^ Stream;

			//Exposes functions for reading binary data
			BinaryReader^ Reader;
			
			//Catches any errors the appears
			try
			{
				//Opens or creates a new file for saving
				Stream = gcnew FileStream(FilePath, FileMode::Open, FileAccess::Read);

				//Links the BinaryWriter with the opened file stream
				Reader = gcnew BinaryReader(Stream);

				//Clears the current data view of items
				this->dgvBookings->Rows->Clear();

				//Loops through all the recorded bookings
				for(int i = 0; i < 196; i++)
				{
					//Stores and reads the Seat Code
					String^ SeatCode = Reader->ReadString();
					//Check if the file contains no more records
					if(SeatCode == L"END")
					{
						//Exit the loop
						break;
					} else {
						//Add a new record
						this->dgvBookings->Rows->Add();
						//Sets the Seat Code
						this->dgvBookings->Rows[i]->Cells[0]->Value = SeatCode;
						//Reads the Booking Date - Reads the raw int64 and converts it into a suitable date format
						this->dgvBookings->Rows[i]->Cells[1]->Value = DateTime(Reader->ReadInt64()).ToShortDateString();
						//Reads the Customer's Forenmae
						this->dgvBookings->Rows[i]->Cells[2]->Value = Reader->ReadString();
						//Reads the Customer's Surname
						this->dgvBookings->Rows[i]->Cells[3]->Value = Reader->ReadString();
						//Reads the Customer's House Number
						this->dgvBookings->Rows[i]->Cells[4]->Value = Reader->ReadString();
						//Reads the Customer's Post Code
						this->dgvBookings->Rows[i]->Cells[5]->Value = Reader->ReadString();
						//Reads the Customer's Telephone
						this->dgvBookings->Rows[i]->Cells[6]->Value = Reader->ReadString();
					}
				}

				//Closes the file
				Reader->Close();
				Stream->Close();

			} catch (...)
			{
				//Promopt the user that the file could not be saved
				MessageBox::Show("The file could not be loaded.", "Cannot Load", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			//Frees any memory
			delete Reader;
			delete Stream;
		}
		//Updates the summary in the top-right
		void frmMain::UpdateSummary()
		{
			//Updates the total number of bookings
			this->txtBookingsCount->Text = this->dgvBookings->RowCount.ToString();
			//Stores the seat row
			char SeatRow;
			//Stores the total income
			float TotalIncome = 0.0f;
			//Loops through all the records
			for(int i = 0; i < this->dgvBookings->RowCount; i++)
			{
				//Extract the seat row
				SeatRow = Convert::ToByte(this->dgvBookings->Rows[i]->Cells[0]->Value->ToString()[0]);
				//Comapres the seat row
				if(SeatRow <= 'C')
				{
					TotalIncome += 10.00;
				}
				else if(SeatRow <= 'F')
				{
					TotalIncome += 12.50;
				}
				else
				{
					TotalIncome += 7.25;
				}
			}
			//Displays the total income
			this->txtIncome->Text = TotalIncome.ToString("£0.00");
		}
		//Draws a dynamic diagram of the theatre seating plan - Width is the width of the bitmap to generate
		void frmMain::DrawDiagram(int Width)
		{
			//Stores the number of rows
			const int SeatRowCount = 11;

			//Stores the width of one grid square
			float GridWidth = Width / 24.0f;

			//Stores the seat row
			char SeatRow = ' ';

			//Stores the seat number
			int SeatNumber = 0;

			//Stores the coordinates of the current grid square
			PointF CurrentGrid;
			
			//Deletes the previous bitmap if it exists
			delete Diagram;

			//Allocates memory for the bitmap
			Diagram = gcnew Bitmap(Width, Width);

			//Creates a graphic object to draw onto the bitmap
			Graphics^ Paint = Graphics::FromImage(Diagram);

			//Ensure the graphics object draws high quality text
			Paint->TextRenderingHint = Drawing::Text::TextRenderingHint::AntiAlias;

			//Stores the cross hatching brush
			Drawing::Drawing2D::HatchBrush^ DisabledBrush = gcnew HatchBrush(HatchStyle::DarkDownwardDiagonal, Color::PowderBlue, Color::Transparent);

			//Stores the font is diaplay the seat
			Drawing::Font^ SeatFont = gcnew Drawing::Font("Times New Roman", GridWidth * 0.375f, FontStyle::Bold);
	
			//Stores the font to display the seat row
			Drawing::Font^ SeatRowFont = gcnew Drawing::Font("Times New Roman", GridWidth * 0.425f, FontStyle::Bold);
	
			//Stores the font to display the seat row
			Drawing::Font^ TicketFont = gcnew Drawing::Font("Times New Roman", GridWidth * 0.425f, FontStyle::Bold + FontStyle::Italic);

			//Stores the way the font is rendered
			StringFormat^ SeatFormat = gcnew StringFormat();

			SeatFormat->Alignment = StringAlignment::Center;
			SeatFormat->LineAlignment = StringAlignment::Center;

			//Stores the font to display the title
			Drawing::Font^ TitleFont = gcnew Drawing::Font("Lucida Calligraphy", GridWidth * 0.8f, FontStyle::Bold);

			//Stores the title text
			String^ TitleText = L"Theatre Seating Plan";

			//Stores the size of the title
			SizeF TitleSize = Paint->MeasureString(TitleText, TitleFont);

			//Draws the title in the middle upper position
			Paint->DrawString(TitleText, TitleFont, Brushes::Black, GridWidth * 12.0f - TitleSize.Width / 2.0f, GridWidth * 0.5f);
			
			//Loops through the Y axis
			for(int i = 0; i < SeatRowCount; i++)
			{
				//Sets data for the current row
				switch(i)
				{
				case 0:
					SeatRow = 'L';
					SeatNumber = 15;
					CurrentGrid.X = GridWidth * 6.0f;
					break;
				case 1:
					SeatRow = 'K';
					SeatNumber = 19;
					CurrentGrid.X = GridWidth * 2.0f;
					break;
				case 2:
					SeatRow = 'J';
					SeatNumber = 19;
					CurrentGrid.X = GridWidth;
					break;
				case 3:
					SeatRow = 'H';
					SeatNumber = 19;
					CurrentGrid.X = GridWidth;
					break;
				case 4:
					SeatRow = 'G';
					SeatNumber = 19;
					CurrentGrid.X = GridWidth;
					break;
				case 5:
					SeatRow = 'F';
					SeatNumber = 20;
					CurrentGrid.X = GridWidth;
					break;
				case 6:
					SeatRow = 'E';
					SeatNumber = 20;
					CurrentGrid.X = GridWidth;
					break;
				case 7:
					SeatRow = 'D';
					SeatNumber = 19;
					CurrentGrid.X = GridWidth;
					break;
				case 8:
					SeatRow = 'C';
					SeatNumber = 17;
					CurrentGrid.X = GridWidth * 2.0f;
					break;
				case 9:
					SeatRow = 'B';
					SeatNumber = 16;
					CurrentGrid.X = GridWidth * 2.0f;
					break;
				case 10:
					SeatRow = 'A';
					SeatNumber = 14;
					CurrentGrid.X = GridWidth * 3.0f;
					break;
				}

				CurrentGrid.Y = GridWidth * (i + 3);

				//Loops until seat number 1 is reached
				for(; SeatNumber > 0; SeatNumber--)
				{
					if(Math::Abs(CurrentGrid.X - GridWidth * 6.0f) < 0.1f)
					{
						Paint->DrawString(Char::ToString(SeatRow),
							SeatRowFont, Brushes::Black, RectangleF(CurrentGrid.X, CurrentGrid.Y, GridWidth * 2.0f, GridWidth), SeatFormat);
						CurrentGrid.X += GridWidth * 2.0f;
					}

					if(CheckSeat(Char::ToString(SeatRow) + SeatNumber.ToString()))
					{
						Paint->FillRectangle(Brushes::DeepSkyBlue, CurrentGrid.X, CurrentGrid.Y, GridWidth, GridWidth);
					}

					if(frmDataEntry::IsSeatDisabled(Char::ToString(SeatRow) + SeatNumber.ToString()))
					{
						Paint->FillRectangle(DisabledBrush, CurrentGrid.X, CurrentGrid.Y, GridWidth, GridWidth);
					}

					Paint->DrawRectangle(Pens::Black, CurrentGrid.X, CurrentGrid.Y, GridWidth, GridWidth);
					Paint->DrawString(Convert::ToString(SeatNumber),
						SeatFont, Brushes::Black, RectangleF(CurrentGrid.X, CurrentGrid.Y, GridWidth, GridWidth), SeatFormat);

					CurrentGrid.X += GridWidth;
				}
			}

			//Stores a pen which is twice as thick as default pens are
			Pen^ ThickLine = gcnew Pen(Color::Black, 2.0f);

			//Draw the stage
			Paint->DrawLine(ThickLine, GridWidth, GridWidth * 15.0f, GridWidth , GridWidth * 16.0f);
			Paint->DrawLine(ThickLine, GridWidth, GridWidth * 15.0f, GridWidth * 23.0f, GridWidth * 15.0f);
			Paint->DrawLine(ThickLine, GridWidth * 23.0f, GridWidth * 15.0f, GridWidth * 23.0f, GridWidth * 16.0f);

			//Stores the text to display the stage
			String^ StageText = "S T A G E";

			//Stores the font to display the stage
			Drawing::Font^ StageFont = gcnew Drawing::Font("Times New Roman", GridWidth * 0.7f, FontStyle::Bold);

			//Stores the size of the text
			SizeF StageSize = Paint->MeasureString(StageText, StageFont);

			//Draw the font
			Paint->DrawString(StageText, StageFont, Brushes::Black, GridWidth * 12.0f - StageSize.Width / 2.0f, GridWidth * 15.0f);

			//Draws the key
			Paint->DrawString("Available:", SeatFont, Brushes::Black, RectangleF(GridWidth * 2.0f, GridWidth * 17.0f, GridWidth * 3.0f, GridWidth), SeatFormat);
			Paint->DrawString("Sold:", SeatFont, Brushes::Black, RectangleF(GridWidth * 2.0f, GridWidth * 19.0f, GridWidth * 3.0f, GridWidth), SeatFormat);
			Paint->DrawString("Disabled:", SeatFont, Brushes::Black, RectangleF(GridWidth * 2.0f, GridWidth * 21.0f, GridWidth * 3.0f, GridWidth), SeatFormat);
			Paint->DrawRectangle(Pens::Black, GridWidth * 5.0f, GridWidth * 17.0f, GridWidth, GridWidth);
			Paint->FillRectangle(Brushes::DeepSkyBlue, GridWidth * 5.0f, GridWidth * 19.0f, GridWidth, GridWidth);
			Paint->DrawRectangle(Pens::Black, GridWidth * 5.0f, GridWidth * 19.0f, GridWidth, GridWidth);
			Paint->FillRectangle(DisabledBrush, GridWidth * 5.0f, GridWidth * 21.0f, GridWidth, GridWidth);
			Paint->DrawRectangle(Pens::Black, GridWidth * 5.0f, GridWidth * 21.0f, GridWidth, GridWidth);

			//Draws the ticket prices
			Paint->DrawString("Ticket prices", SeatRowFont, Brushes::Black, RectangleF(GridWidth * 12.0f, GridWidth * 17.0f, GridWidth * 8.0f, GridWidth), SeatFormat);
			Paint->DrawString("Rows A to C", TicketFont, Brushes::Black, RectangleF(GridWidth * 12.0f, GridWidth * 18.0f, GridWidth * 4.0f, GridWidth), SeatFormat);
			Paint->DrawString("Rows D to F", TicketFont, Brushes::Black, RectangleF(GridWidth * 12.0f, GridWidth * 19.0f, GridWidth * 4.0f, GridWidth), SeatFormat);
			Paint->DrawString("Rows G to L", TicketFont, Brushes::Black, RectangleF(GridWidth * 12.0f, GridWidth * 20.0f, GridWidth * 4.0f, GridWidth), SeatFormat);
			Paint->DrawString("£10.00", TicketFont, Brushes::Black, RectangleF(GridWidth * 16.0f, GridWidth * 18.0f, GridWidth * 4.0f, GridWidth), SeatFormat);
			Paint->DrawString("£12.50", TicketFont, Brushes::Black, RectangleF(GridWidth * 16.0f, GridWidth * 19.0f, GridWidth * 4.0f, GridWidth), SeatFormat);
			Paint->DrawString("£7.25", TicketFont, Brushes::Black, RectangleF(GridWidth * 16.0f, GridWidth * 20.0f, GridWidth * 4.0f, GridWidth), SeatFormat);
			Paint->DrawRectangle(Pens::Black, GridWidth * 12.0f, GridWidth * 17.0f, GridWidth * 8.0f, GridWidth * 4.0f);
			Paint->DrawLine(Pens::Black, GridWidth * 12.0f, GridWidth * 18.0f, GridWidth * 20.0f, GridWidth * 18.0f);
			Paint->DrawLine(Pens::Black, GridWidth * 12.0f, GridWidth * 19.0f, GridWidth * 20.0f, GridWidth * 19.0f);
			Paint->DrawLine(Pens::Black, GridWidth * 12.0f, GridWidth * 20.0f, GridWidth * 20.0f, GridWidth * 20.0f);
			Paint->DrawLine(Pens::Black, GridWidth * 16.0f, GridWidth * 18.0f, GridWidth * 16.0f, GridWidth * 21.0f);

			delete DisabledBrush;
			delete SeatFont;
			delete SeatRowFont;
			delete TicketFont;
			delete SeatFormat;
			delete TitleFont;
			delete ThickLine;
			delete StageFont;
			delete Paint;
		}
		//Returns whether the particular seat has already been booked
		bool frmMain::CheckSeat(String^ SeatCode)
		{
			//Loops through all the records
			for(int i = 0; i < this->dgvBookings->RowCount; i++)
			{
				//Check if the selected seat is SeatCode
				if(Convert::ToString(this->dgvBookings->Rows[i]->Cells[0]->Value) == SeatCode[0] + SeatCode->Substring(1)->PadLeft(2, '0'))
				{
					//The seat already exists
					return true;
				}
			}
			//The seat does not exist
			return false;
		}
};
}
