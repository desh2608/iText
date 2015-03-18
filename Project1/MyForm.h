#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>


namespace Project1 {

	using namespace System;
	using namespace System::Timers;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	int count = 0;
	static int i = 0;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			// StartTimer takes argument as time in milli seconds
			StartTimer(5000);
		}
	private: System::Windows::Forms::Panel^  panel1;
	public:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox6;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  btnClip;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  fromClip1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fromClip2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fromClip3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fromClip4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fromClip5ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem;

	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::ToolStrip^  findToolStrip;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel1;
	private: System::Windows::Forms::ToolStripTextBox^  findText;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripLabel^  findSatus;
	private: System::Windows::Forms::ToolStripButton^  findAllButton;
	private: System::Windows::Forms::ToolStrip^  replaceToolStrip;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel2;
	private: System::Windows::Forms::ToolStripTextBox^  replaceFindText;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel3;
	private: System::Windows::Forms::ToolStripTextBox^  replaceReplaceText;
	private: System::Windows::Forms::ToolStripButton^  replaceButton;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripLabel^  replaceStatus;
	private: System::Windows::Forms::ToolStripButton^  replaceAllButton;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^  propertiesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  themesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  darkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  normalToolStripMenuItem;

	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::RichTextBox^  lineNumberBox;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^  gotoToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  GoTotoolStrip;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel4;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripTextBox^  lineNo;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;




	private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem1;

	private:
		void richTextBox1_DragEnter(System::Object ^  sender,
			System::Windows::Forms::DragEventArgs ^  e)
		{
			if (e->Data->GetDataPresent(DataFormats::Text))
				e->Effect = DragDropEffects::Copy;
			else
				e->Effect = DragDropEffects::None;
		}















			 String^savedPath;
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  findToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  findToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  replaceToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->findToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->findToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->replaceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gotoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->propertiesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->themesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->normalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->cutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fromClip1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fromClip2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fromClip3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fromClip4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fromClip5ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnClip = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->findToolStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->findText = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->findSatus = (gcnew System::Windows::Forms::ToolStripLabel());
			this->findAllButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->replaceToolStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->replaceFindText = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripLabel3 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->replaceReplaceText = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->replaceButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->replaceStatus = (gcnew System::Windows::Forms::ToolStripLabel());
			this->replaceAllButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->lineNumberBox = (gcnew System::Windows::Forms::RichTextBox());
			this->GoTotoolStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel4 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->lineNo = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->findToolStrip->SuspendLayout();
			this->replaceToolStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->GoTotoolStrip->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::MediumTurquoise;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->findToolStripMenuItem, this->propertiesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(921, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->printToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->printToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->printToolStripMenuItem->Text = L"Print";
			this->printToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cutToolStripMenuItem,
					this->copyToolStripMenuItem, this->toolStripMenuItem1
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->cutToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->cutToolStripMenuItem->Text = L"Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripMenuItem1_Click);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripMenuItem1_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem1->Text = L"Paste";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D1));
			this->toolStripMenuItem2->Size = System::Drawing::Size(175, 22);
			this->toolStripMenuItem2->Text = L"From Clip 1";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::fromClip1ToolStripMenuItem_Click_1);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D2));
			this->toolStripMenuItem3->Size = System::Drawing::Size(175, 22);
			this->toolStripMenuItem3->Text = L"From Clip 2";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::fromClip2ToolStripMenuItem_Click_1);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D3));
			this->toolStripMenuItem4->Size = System::Drawing::Size(175, 22);
			this->toolStripMenuItem4->Text = L"From Clip 3";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::fromClip3ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D4));
			this->toolStripMenuItem5->Size = System::Drawing::Size(175, 22);
			this->toolStripMenuItem5->Text = L"From Clip 4";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::fromClip4ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D5));
			this->toolStripMenuItem6->Size = System::Drawing::Size(175, 22);
			this->toolStripMenuItem6->Text = L"From Clip 5";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MyForm::fromClip5ToolStripMenuItem_Click);
			// 
			// findToolStripMenuItem
			// 
			this->findToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->findToolStripMenuItem1,
					this->replaceToolStripMenuItem, this->gotoToolStripMenuItem
			});
			this->findToolStripMenuItem->Name = L"findToolStripMenuItem";
			this->findToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->findToolStripMenuItem->Text = L"Find";
			// 
			// findToolStripMenuItem1
			// 
			this->findToolStripMenuItem1->Name = L"findToolStripMenuItem1";
			this->findToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->findToolStripMenuItem1->Size = System::Drawing::Size(158, 22);
			this->findToolStripMenuItem1->Text = L"Find ";
			this->findToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::findToolStripMenuItem1_Click_1);
			// 
			// replaceToolStripMenuItem
			// 
			this->replaceToolStripMenuItem->Name = L"replaceToolStripMenuItem";
			this->replaceToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->replaceToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->replaceToolStripMenuItem->Text = L"Replace";
			this->replaceToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::replaceToolStripMenuItem_Click_1);
			// 
			// gotoToolStripMenuItem
			// 
			this->gotoToolStripMenuItem->Name = L"gotoToolStripMenuItem";
			this->gotoToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->gotoToolStripMenuItem->Text = L"Goto";
			this->gotoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::gotoToolStripMenuItem_Click);
			// 
			// propertiesToolStripMenuItem
			// 
			this->propertiesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->themesToolStripMenuItem });
			this->propertiesToolStripMenuItem->Name = L"propertiesToolStripMenuItem";
			this->propertiesToolStripMenuItem->Size = System::Drawing::Size(80, 20);
			this->propertiesToolStripMenuItem->Text = L"Preferences";
			this->propertiesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::propertiesToolStripMenuItem_Click);
			// 
			// themesToolStripMenuItem
			// 
			this->themesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->lightToolStripMenuItem,
					this->darkToolStripMenuItem, this->normalToolStripMenuItem
			});
			this->themesToolStripMenuItem->Name = L"themesToolStripMenuItem";
			this->themesToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->themesToolStripMenuItem->Text = L"Themes";
			// 
			// lightToolStripMenuItem
			// 
			this->lightToolStripMenuItem->Name = L"lightToolStripMenuItem";
			this->lightToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->lightToolStripMenuItem->Text = L"Light";
			this->lightToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lightToolStripMenuItem_Click);
			// 
			// darkToolStripMenuItem
			// 
			this->darkToolStripMenuItem->Name = L"darkToolStripMenuItem";
			this->darkToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->darkToolStripMenuItem->Text = L"Dark";
			this->darkToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::darkToolStripMenuItem_Click);
			// 
			// normalToolStripMenuItem
			// 
			this->normalToolStripMenuItem->Name = L"normalToolStripMenuItem";
			this->normalToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->normalToolStripMenuItem->Text = L"Normal";
			this->normalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::normalToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Lavender;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::Black;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(869, 670);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->SelectionChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_SelectionChanged);
			this->richTextBox1->VScroll += gcnew System::EventHandler(this, &MyForm::richTextBox1_VScroll);
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cutToolStripMenuItem1,
					this->copyToolStripMenuItem1, this->pasteToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(145, 70);
			// 
			// cutToolStripMenuItem1
			// 
			this->cutToolStripMenuItem1->Name = L"cutToolStripMenuItem1";
			this->cutToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->cutToolStripMenuItem1->Size = System::Drawing::Size(144, 22);
			this->cutToolStripMenuItem1->Text = L"Cut";
			this->cutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripMenuItem1_Click);
			// 
			// copyToolStripMenuItem1
			// 
			this->copyToolStripMenuItem1->Name = L"copyToolStripMenuItem1";
			this->copyToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyToolStripMenuItem1->Size = System::Drawing::Size(144, 22);
			this->copyToolStripMenuItem1->Text = L"Copy";
			this->copyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripMenuItem1_Click);
			// 
			// pasteToolStripMenuItem1
			// 
			this->pasteToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fromClip1ToolStripMenuItem,
					this->fromClip2ToolStripMenuItem, this->fromClip3ToolStripMenuItem, this->fromClip4ToolStripMenuItem, this->fromClip5ToolStripMenuItem
			});
			this->pasteToolStripMenuItem1->Name = L"pasteToolStripMenuItem1";
			this->pasteToolStripMenuItem1->Size = System::Drawing::Size(144, 22);
			this->pasteToolStripMenuItem1->Text = L"Paste";
			// 
			// fromClip1ToolStripMenuItem
			// 
			this->fromClip1ToolStripMenuItem->Name = L"fromClip1ToolStripMenuItem";
			this->fromClip1ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D1));
			this->fromClip1ToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->fromClip1ToolStripMenuItem->Text = L"From Clip 1";
			this->fromClip1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fromClip1ToolStripMenuItem_Click_1);
			// 
			// fromClip2ToolStripMenuItem
			// 
			this->fromClip2ToolStripMenuItem->Name = L"fromClip2ToolStripMenuItem";
			this->fromClip2ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D2));
			this->fromClip2ToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->fromClip2ToolStripMenuItem->Text = L"From Clip 2";
			this->fromClip2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fromClip2ToolStripMenuItem_Click_1);
			// 
			// fromClip3ToolStripMenuItem
			// 
			this->fromClip3ToolStripMenuItem->Name = L"fromClip3ToolStripMenuItem";
			this->fromClip3ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D3));
			this->fromClip3ToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->fromClip3ToolStripMenuItem->Text = L"From Clip 3";
			this->fromClip3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fromClip3ToolStripMenuItem_Click);
			// 
			// fromClip4ToolStripMenuItem
			// 
			this->fromClip4ToolStripMenuItem->Name = L"fromClip4ToolStripMenuItem";
			this->fromClip4ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D4));
			this->fromClip4ToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->fromClip4ToolStripMenuItem->Text = L"From Clip 4";
			this->fromClip4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fromClip4ToolStripMenuItem_Click);
			// 
			// fromClip5ToolStripMenuItem
			// 
			this->fromClip5ToolStripMenuItem->Name = L"fromClip5ToolStripMenuItem";
			this->fromClip5ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D5));
			this->fromClip5ToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->fromClip5ToolStripMenuItem->Text = L"From Clip 5";
			this->fromClip5ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fromClip5ToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Cornsilk;
			this->panel1->Controls->Add(this->richTextBox6);
			this->panel1->Controls->Add(this->richTextBox5);
			this->panel1->Controls->Add(this->richTextBox4);
			this->panel1->Controls->Add(this->richTextBox3);
			this->panel1->Controls->Add(this->richTextBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(762, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(159, 670);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// richTextBox6
			// 
			this->richTextBox6->AutoWordSelection = true;
			this->richTextBox6->BackColor = System::Drawing::Color::Thistle;
			this->richTextBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->richTextBox6->EnableAutoDragDrop = true;
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox6->HideSelection = false;
			this->richTextBox6->Location = System::Drawing::Point(8, 551);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox6->Size = System::Drawing::Size(139, 98);
			this->richTextBox6->TabIndex = 5;
			this->richTextBox6->Text = L"";
			this->richTextBox6->ZoomFactor = 0.602F;
			this->richTextBox6->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::richTextBox6_MouseDoubleClick);
			// 
			// richTextBox5
			// 
			this->richTextBox5->AutoWordSelection = true;
			this->richTextBox5->BackColor = System::Drawing::Color::LightGreen;
			this->richTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->richTextBox5->EnableAutoDragDrop = true;
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox5->HideSelection = false;
			this->richTextBox5->Location = System::Drawing::Point(8, 435);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox5->Size = System::Drawing::Size(139, 98);
			this->richTextBox5->TabIndex = 4;
			this->richTextBox5->Text = L"";
			this->richTextBox5->ZoomFactor = 0.602F;
			this->richTextBox5->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::richTextBox5_MouseDoubleClick);
			// 
			// richTextBox4
			// 
			this->richTextBox4->AutoWordSelection = true;
			this->richTextBox4->BackColor = System::Drawing::Color::Khaki;
			this->richTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->richTextBox4->EnableAutoDragDrop = true;
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox4->HideSelection = false;
			this->richTextBox4->Location = System::Drawing::Point(8, 319);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox4->Size = System::Drawing::Size(139, 98);
			this->richTextBox4->TabIndex = 3;
			this->richTextBox4->Text = L"";
			this->richTextBox4->ZoomFactor = 0.602F;
			this->richTextBox4->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::richTextBox4_MouseDoubleClick);
			// 
			// richTextBox3
			// 
			this->richTextBox3->AutoWordSelection = true;
			this->richTextBox3->BackColor = System::Drawing::Color::NavajoWhite;
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->richTextBox3->EnableAutoDragDrop = true;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->HideSelection = false;
			this->richTextBox3->Location = System::Drawing::Point(8, 201);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox3->Size = System::Drawing::Size(139, 98);
			this->richTextBox3->TabIndex = 2;
			this->richTextBox3->Text = L"";
			this->richTextBox3->ZoomFactor = 0.602F;
			this->richTextBox3->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::richTextBox3_MouseDoubleClick);
			// 
			// richTextBox2
			// 
			this->richTextBox2->AutoWordSelection = true;
			this->richTextBox2->BackColor = System::Drawing::Color::LightBlue;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox2->EnableAutoDragDrop = true;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(8, 86);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox2->Size = System::Drawing::Size(139, 98);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			this->richTextBox2->ZoomFactor = 0.602F;
			this->richTextBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::richTextBox2_MouseClick);
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox2_TextChanged);
			this->richTextBox2->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::richTextBox2_MouseDoubleClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CLIPBOARD";
			// 
			// btnClip
			// 
			this->btnClip->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClip->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnClip->Location = System::Drawing::Point(868, 0);
			this->btnClip->Name = L"btnClip";
			this->btnClip->Size = System::Drawing::Size(41, 28);
			this->btnClip->TabIndex = 7;
			this->btnClip->Text = L">>";
			this->btnClip->UseVisualStyleBackColor = false;
			this->btnClip->Click += gcnew System::EventHandler(this, &MyForm::btnClip_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Location = System::Drawing::Point(765, 0);
			this->button1->Margin = System::Windows::Forms::Padding(3, 3, 0, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 28);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Clear All";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// findToolStrip
			// 
			this->findToolStrip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->findToolStrip->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->findToolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->toolStripSeparator1,
					this->toolStripLabel1, this->findText, this->toolStripButton1, this->toolStripButton2, this->toolStripSeparator2, this->toolStripButton3,
					this->findSatus, this->findAllButton
			});
			this->findToolStrip->Location = System::Drawing::Point(0, 669);
			this->findToolStrip->Name = L"findToolStrip";
			this->findToolStrip->Size = System::Drawing::Size(762, 25);
			this->findToolStrip->TabIndex = 14;
			this->findToolStrip->Text = L"Find Tool Strip";
			this->findToolStrip->Visible = false;
			this->findToolStrip->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::findToolStrip_ItemClicked);
			this->findToolStrip->VisibleChanged += gcnew System::EventHandler(this, &MyForm::findToolStrip_VisibleChanged);
			this->findToolStrip->Click += gcnew System::EventHandler(this, &MyForm::findToolStrip_Click);
			this->findToolStrip->Enter += gcnew System::EventHandler(this, &MyForm::findToolStrip_Enter);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(62, 22);
			this->toolStripLabel1->Text = L"Find what:";
			// 
			// findText
			// 
			this->findText->BackColor = System::Drawing::Color::White;
			this->findText->Name = L"findText";
			this->findText->Size = System::Drawing::Size(100, 25);
			this->findText->Enter += gcnew System::EventHandler(this, &MyForm::findText_Enter);
			this->findText->Leave += gcnew System::EventHandler(this, &MyForm::findText_Leave);
			this->findText->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::findText_KeyPress);
			this->findText->TextChanged += gcnew System::EventHandler(this, &MyForm::findText_TextChanged);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(59, 22);
			this->toolStripButton1->Text = L"Find next";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(60, 22);
			this->toolStripButton2->Text = L"Find prev";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton3->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"X";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// findSatus
			// 
			this->findSatus->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->findSatus->Name = L"findSatus";
			this->findSatus->Size = System::Drawing::Size(89, 22);
			this->findSatus->Text = L"Nothing to find";
			// 
			// findAllButton
			// 
			this->findAllButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->findAllButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"findAllButton.Image")));
			this->findAllButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->findAllButton->Name = L"findAllButton";
			this->findAllButton->Size = System::Drawing::Size(49, 22);
			this->findAllButton->Text = L"Find all";
			this->findAllButton->Click += gcnew System::EventHandler(this, &MyForm::findAllButton_Click);
			// 
			// replaceToolStrip
			// 
			this->replaceToolStrip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->replaceToolStrip->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->replaceToolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripLabel2,
					this->replaceFindText, this->toolStripLabel3, this->replaceReplaceText, this->replaceButton, this->toolStripButton4, this->replaceStatus,
					this->replaceAllButton
			});
			this->replaceToolStrip->Location = System::Drawing::Point(0, 669);
			this->replaceToolStrip->Name = L"replaceToolStrip";
			this->replaceToolStrip->Size = System::Drawing::Size(762, 25);
			this->replaceToolStrip->TabIndex = 15;
			this->replaceToolStrip->Text = L"Replace Tool Strip";
			this->replaceToolStrip->Visible = false;
			this->replaceToolStrip->VisibleChanged += gcnew System::EventHandler(this, &MyForm::replaceToolStrip_VisibleChanged);
			// 
			// toolStripLabel2
			// 
			this->toolStripLabel2->Name = L"toolStripLabel2";
			this->toolStripLabel2->Size = System::Drawing::Size(62, 22);
			this->toolStripLabel2->Text = L"Find what:";
			// 
			// replaceFindText
			// 
			this->replaceFindText->Name = L"replaceFindText";
			this->replaceFindText->Size = System::Drawing::Size(100, 25);
			this->replaceFindText->TextChanged += gcnew System::EventHandler(this, &MyForm::replaceFindText_TextChanged);
			// 
			// toolStripLabel3
			// 
			this->toolStripLabel3->Name = L"toolStripLabel3";
			this->toolStripLabel3->Size = System::Drawing::Size(77, 22);
			this->toolStripLabel3->Text = L"Replace with:";
			// 
			// replaceReplaceText
			// 
			this->replaceReplaceText->Name = L"replaceReplaceText";
			this->replaceReplaceText->Size = System::Drawing::Size(100, 25);
			// 
			// replaceButton
			// 
			this->replaceButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->replaceButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"replaceButton.Image")));
			this->replaceButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->replaceButton->Name = L"replaceButton";
			this->replaceButton->Size = System::Drawing::Size(77, 22);
			this->replaceButton->Text = L"Replace next";
			this->replaceButton->Click += gcnew System::EventHandler(this, &MyForm::replaceButton_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton4->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"X";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click_1);
			// 
			// replaceStatus
			// 
			this->replaceStatus->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->replaceStatus->Name = L"replaceStatus";
			this->replaceStatus->Size = System::Drawing::Size(106, 22);
			this->replaceStatus->Text = L"Nothing to replace";
			// 
			// replaceAllButton
			// 
			this->replaceAllButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->replaceAllButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"replaceAllButton.Image")));
			this->replaceAllButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->replaceAllButton->Name = L"replaceAllButton";
			this->replaceAllButton->Size = System::Drawing::Size(67, 22);
			this->replaceAllButton->Text = L"Replace all";
			this->replaceAllButton->Click += gcnew System::EventHandler(this, &MyForm::replaceAllButton_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(0, 24);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->lineNumberBox);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->GoTotoolStrip);
			this->splitContainer1->Panel2->Controls->Add(this->statusStrip1);
			this->splitContainer1->Panel2->Controls->Add(this->richTextBox1);
			this->splitContainer1->Size = System::Drawing::Size(921, 670);
			this->splitContainer1->SplitterDistance = 51;
			this->splitContainer1->SplitterWidth = 1;
			this->splitContainer1->TabIndex = 16;
			// 
			// lineNumberBox
			// 
			this->lineNumberBox->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->lineNumberBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lineNumberBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->lineNumberBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lineNumberBox->Location = System::Drawing::Point(0, 0);
			this->lineNumberBox->Name = L"lineNumberBox";
			this->lineNumberBox->ReadOnly = true;
			this->lineNumberBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->lineNumberBox->Size = System::Drawing::Size(51, 670);
			this->lineNumberBox->TabIndex = 0;
			this->lineNumberBox->Text = L"";
			this->lineNumberBox->Enter += gcnew System::EventHandler(this, &MyForm::lineNumberBox_Enter);
			// 
			// GoTotoolStrip
			// 
			this->GoTotoolStrip->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->GoTotoolStrip->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->GoTotoolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripSeparator3,
					this->toolStripLabel4, this->toolStripSeparator4, this->lineNo, this->toolStripSeparator5, this->toolStripButton5
			});
			this->GoTotoolStrip->Location = System::Drawing::Point(0, 623);
			this->GoTotoolStrip->Name = L"GoTotoolStrip";
			this->GoTotoolStrip->Size = System::Drawing::Size(869, 25);
			this->GoTotoolStrip->TabIndex = 3;
			this->GoTotoolStrip->Text = L"toolStrip1";
			this->GoTotoolStrip->Visible = false;
			this->GoTotoolStrip->VisibleChanged += gcnew System::EventHandler(this, &MyForm::GoTotoolStrip_VisibleChanged);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel4
			// 
			this->toolStripLabel4->Name = L"toolStripLabel4";
			this->toolStripLabel4->Size = System::Drawing::Size(106, 22);
			this->toolStripLabel4->Text = L"Enter Line Number";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// lineNo
			// 
			this->lineNo->Name = L"lineNo";
			this->lineNo->Size = System::Drawing::Size(100, 25);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(67, 22);
			this->toolStripButton5->Text = L"GoTo  Line";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 648);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(869, 22);
			this->statusStrip1->TabIndex = 2;
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			this->toolStripStatusLabel1->Click += gcnew System::EventHandler(this, &MyForm::toolStripStatusLabel1_Click);
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(921, 694);
			this->Controls->Add(this->findToolStrip);
			this->Controls->Add(this->replaceToolStrip);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnClip);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->splitContainer1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Untitled - iText";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->findToolStrip->ResumeLayout(false);
			this->findToolStrip->PerformLayout();
			this->replaceToolStrip->ResumeLayout(false);
			this->replaceToolStrip->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->GoTotoolStrip->ResumeLayout(false);
			this->GoTotoolStrip->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 
				 if (count == 1 || this->richTextBox1->Text->Length == 0)
				 {
				 
					 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 {
						 System::IO::StreamReader ^ sr = gcnew
							 System::IO::StreamReader(openFileDialog1->FileName);

						 String^ strpathname = openFileDialog1->InitialDirectory + openFileDialog1->FileName;

						 richTextBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);

						 sr->Close();
						 this->Text = getFileName(strpathname) + " - iText";
					 }	 
				 }
				 else
				 {
					 //msg
					 if(MessageBox::Show("Do you want to save the file?", "File not saved", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					 {
						 saveAsToolStripMenuItem_Click(sender, e);
					 }
					else
					{
						if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
						{
							System::IO::StreamReader ^ sr = gcnew
								System::IO::StreamReader(openFileDialog1->FileName);

							String^ strpathname = openFileDialog1->InitialDirectory + openFileDialog1->FileName;

							richTextBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);

							sr->Close();
						}
					}
					 //msgEnds
					 
				 }
	}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (count == 1) {
				 count = 2;
			 }

			 //update line numbers
			 numberLines();
	
			 
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 //m2
			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;

			 // Initialize the SaveFileDialog to specify the RTF extension for the file.
			 saveFileDialog1->FileName = "Untitled";
			 saveFileDialog1->DefaultExt = "*.rtf";
			 saveFileDialog1->Filter = "RTF Files|*.rtf|Text Files|*.txt|C Files|*.c|All files|*.*";
			 


			 // Determine if the user selected a file name from the saveFileDialog. 
			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
				 saveFileDialog1->FileName->Length > 0)
			 {
				 // Save the contents of the RichTextBox into the file.
				 richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
				 count = 1;
				 savedPath = saveFileDialog1->FileName;
				 this->Text = getFileName(savedPath) + " - iText";
				 
			 }



}
private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (count == 0)
			 {
				 saveAsToolStripMenuItem_Click(sender,e);
			 }
			 else
			 {
				 richTextBox1->SaveFile(savedPath, RichTextBoxStreamType::PlainText);
				 MessageBox::Show("Saved successfully");
				 count = 1;
				
			 }
}

		 public:String^ getFileName(String^ path)
		 {
					int i = path->LastIndexOf("\\");
					String^ fname = path->Substring(i + 1);
					return fname;
		 }



private: System::Void btnClip_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (btnClip->Text->Equals(">>"))
			 {
				 panel1->Hide();
				 btnClip->Text = "<<";
				 richTextBox1->Dock = DockStyle::Fill;
			 }
			 else
			 {
				 panel1->Show();
				 btnClip->Text = ">>";
				 richTextBox1->Dock = DockStyle::Fill;
			 }
}


	public: array<RichTextBox ^>^ clips = gcnew array<RichTextBox ^>(5);
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox2->Text = "";
			 richTextBox3->Text = "";
			 richTextBox4->Text = "";
			 richTextBox5->Text = "";
			 richTextBox6->Text = "";
			 i = 0;
}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->button1->BackColor = System::Drawing::Color::GhostWhite;
				 this->btnClip->BackColor = System::Drawing::Color::GhostWhite;
				 lightToolStripMenuItem_Click(sender,e);
				 clips[0] = richTextBox2;
				 clips[1] = richTextBox3;
				 clips[2] = richTextBox4;
				 clips[3] = richTextBox5;
				 clips[4] = richTextBox6;

				 //set font size and family of lineNumberBox
				 lineNumberBox->Font = richTextBox1->Font;
	}


private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (count == 1 || this->richTextBox1->Text->Length == 0)
			 {
				 richTextBox1->Text = "";
				 this->Text = "Untitled - iText";
				 count = 0;
			 }
			 else
			 {
				 //msg
				 if (MessageBox::Show("Do you want to save the file?", "File not saved", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				 {
					 saveAsToolStripMenuItem_Click(sender, e);
				 }
				 else
				 {
					 richTextBox1->Text = "";
					 this->Text = "Untitled - iText";
					 count = 0;
				 }
				 //msgEnds

			 }
			 
}

public: System::Void cutToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			String ^ text = richTextBox1->SelectedText;
			richTextBox1->SelectedText = "";
			Clipboard::SetDataObject(text, true);
			clips[i]->Text = text;
			i = (i + 1) % 5;
}
public: System::Void copyToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			String ^ text = richTextBox1->SelectedText;
			Clipboard::SetDataObject(text, true);
			clips[i]->Text = text;
			i = (i + 1) % 5;
}


private: System::Void fromClip1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ clip = clips[0]->Text;
			 pasteAtCursor(clip);
}
private: System::Void fromClip2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ clip = clips[1]->Text;
			 pasteAtCursor(clip);
}
private: System::Void fromClip1ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ clip = clips[2]->Text;
			 pasteAtCursor(clip);
}
private: System::Void fromClip1ToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ clip = clips[3]->Text;
			 pasteAtCursor(clip);
}
private: System::Void fromClip1ToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ clip = clips[4]->Text;
			 pasteAtCursor(clip);
}


public: Void pasteAtCursor(String^ clip)
{
			int i = richTextBox1->SelectionStart;
			String^ part1 = richTextBox1->Text->Substring(0, i );
			String^ part2 = richTextBox1->Text->Substring(i);
			richTextBox1->Text = part1 + clip + part2;
}

		
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 
}
private: System::Void richTextBox6_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 richTextBox6->SelectAll();
}
private: System::Void richTextBox5_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 richTextBox5->SelectAll();
}
private: System::Void richTextBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			
}
private: System::Void richTextBox3_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 richTextBox3->SelectAll();
	}
private: System::Void richTextBox4_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 richTextBox4->SelectAll();
}
private: System::Void richTextBox2_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 richTextBox2->SelectAll();
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
		
private: System::Void fromClip1ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 String^ clip = clips[0]->Text;
			 pasteAtCursor(clip);
}
private: System::Void fromClip2ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 String^ clip = clips[1]->Text;
			 pasteAtCursor(clip);
}
private: System::Void fromClip3ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ clip = clips[2]->Text;
			 pasteAtCursor(clip);
}
private: System::Void fromClip4ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ clip = clips[3]->Text;
			 pasteAtCursor(clip);
}
private: System::Void fromClip5ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ clip = clips[4]->Text;
			 pasteAtCursor(clip);
}
private: System::Void printToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 PrintDialog^ printDialog1 = gcnew PrintDialog;
			 printDialog1->ShowDialog();
}

		 /**
		 START of Find and Replace code
		 written by - midhul
		 **/

public:
	//present index of find
	int findIndex = 0;
	int prevFindIndex = 0;
	//find text in rich text box
	int FindText(String^ searchText, int searchStart, int searchEnd)
	{
		// Initialize the return value to false by default.
		int returnValue = -1;

		// Ensure that a search string and a valid starting point are specified.
		if (searchText->Length > 0 && searchStart >= 0)
		{
			// Ensure that a valid ending value is provided.
			if (searchEnd > searchStart || searchEnd == -1)
			{
				// Obtain the location of the search string in richTextBox1.
				int indexToText = richTextBox1->Find(searchText, searchStart, searchEnd, RichTextBoxFinds::MatchCase);
				// Determine whether the text was found in richTextBox1.
				if (indexToText >= 0)
				{
					// Return the index to the specified search text.
					returnValue = indexToText;
				}
			}
		}

		return returnValue;
	}

	//find last occurence of text in range
	int findLastText(String^ searchText, int searchStart, int searchEnd) {
		int lastIndex = searchStart - 1;
		while (1) {
			int idx = FindText(searchText, lastIndex + 1, searchEnd);
			if (idx >= 0) {
				lastIndex = idx;
				continue;
			}
			else {
				break;
			}
		}
		return lastIndex;
	}
	//find next method
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Focus();
			 if (findText->TextLength > 0){
				 int indexFound = FindText(findText->Text, findIndex, richTextBox1->TextLength);

				 //update next and prev find indexes and status
				 if (indexFound >= 0) {
					 findSatus->Text = "Match found";
					 findIndex = indexFound + 1;
					 prevFindIndex = indexFound + findText->TextLength - 1;
				 }
				 else {
					 findSatus->Text = "No more matches";
				 }

			 }
			 else {
				 findSatus->Text = "Nothing to find";
			 }


}
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Focus();
			 if (findText->TextLength > 0){
				 int indexFound = findLastText(findText->Text, 0, prevFindIndex);

				 //update next and prev find indexes and status
				 if (indexFound >= 0) {
					 findSatus->Text = "Match found";
					 findIndex = indexFound + 1;
					 prevFindIndex = indexFound + findText->TextLength - 1;
				 }
				 else {
					 findSatus->Text = "No more matches";
				 }

			 }
			 else {
				 findSatus->Text = "Nothing to find";
			 }
}
private: System::Void findText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //reset find indexes
			 findIndex = 0;
			 prevFindIndex = 0;
			 //unhighligh text
			 clearColors();
}
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
			 findToolStrip->Visible = false;
			 clearColors();
}
private: System::Void findToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 findToolStrip->Visible = true;
}
private: System::Void toolStripLabel2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void replaceButton_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Focus();
	//try to find the given text
			 if (FindText(replaceFindText->Text, 0, richTextBox1->TextLength) >= 0) {
				 richTextBox1->SelectionBackColor = System::Drawing::Color::Yellow;
				 richTextBox1->SelectedText = replaceReplaceText->Text;

				 replaceStatus->Text = "Replacement made";

			 }
			 else {
				 //nothing found
				 replaceStatus->Text = "No more matches";

			 }

}
private: System::Void replaceFindText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //un-highlight all text
			 clearColors();
}
private: System::Void toolStripButton4_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 //close replace toolstrip
			 replaceToolStrip->Visible = false;
			 clearColors();

}
private: System::Void replaceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 replaceToolStrip->Visible = true;
}
private: System::Void findAllButton_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Focus();
			 //find and highlight all occurences
			 int lastFind = -1;
			 int idx;
			 int num = 0;
			 while ((idx = FindText(findText->Text, lastFind + 1, richTextBox1->TextLength)) >= 0) {
				 num++;
				 lastFind = idx;
				 //highlight
				 richTextBox1->SelectionBackColor = System::Drawing::Color::Yellow;

			 }
			 findSatus->Text = Convert::ToString(num) + " matches found";
}
public: void clearColors() {
			richTextBox1->SelectAll();
			richTextBox1->SelectionBackColor = richTextBox1->BackColor;
			richTextBox1->DeselectAll();
}
private: System::Void replaceAllButton_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Focus();
			 //replace all occurences
			 //soft replacement

			 int lastIdx = -1;
			 int idx, num = 0;
			 while ((idx = FindText(replaceFindText->Text, lastIdx + 1, richTextBox1->TextLength)) >= 0) {
				 //highlight replacement
				 richTextBox1->SelectionBackColor = System::Drawing::Color::Yellow;
				 //replace
				 richTextBox1->SelectedText = replaceReplaceText->Text;

				 lastIdx = idx;
				 num++;
			 }
			 replaceStatus->Text = Convert::ToString(num) + " replacements made";


}

			private: System::Void findToolStrip_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
					 }
			private: System::Void findToolStrip_Click(System::Object^  sender, System::EventArgs^  e) {
			}
			private: System::Void findToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
						 //open find tool strip
						 findToolStrip->Visible = true;
						 
			}
			private: System::Void replaceToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
						 //open replace toolstrip
						 replaceToolStrip->Visible = true;
			}
			private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

			}
					 /**
					 END of find and replace code
					 **/





		 //--------------------------------------------------------------------------------------------
		 // Time Module
		 // Author: Jayadeep Karnati
		 // Last Modified: 15 Dec 2015
		 //--------------------------------------------------------------------------------------------

private: System::Void StartTimer(int time_interval){
			 // Initializes timer and sets time interval
			 System::Timers::Timer^ aTimer = gcnew System::Timers::Timer;
			 aTimer->Elapsed += gcnew ElapsedEventHandler(this, &Project1::MyForm::OnTimedEvent);
			 aTimer->Interval = time_interval;
			 aTimer->Enabled = true;
			 GC::KeepAlive(aTimer);
}

	private: System::Void OnTimedEvent(Object^ source, ElapsedEventArgs^ e) {
				 // Timed Event generated at regular intervals
				 AutoSave();
				 // Other time based events go here.

	}

	private: System::Void AutoSave() {
				 // Invoke is required as it is a different thread.
				 if (InvokeRequired){
					 this->Invoke(gcnew Action(this, &Project1::MyForm::AutoSave));
				 }
				 else{
					 if (count == 1 || count == 2){
						 // Autosaves if the file is saved atleast once
						 int lastindex = savedPath->LastIndexOf(".");
						 String^ filename = savedPath->Substring(0, lastindex);
						 String^ extension = savedPath->Substring(lastindex);
						 richTextBox1->SaveFile(filename + "(autosave)" + extension, RichTextBoxStreamType::PlainText);
					 }
				 }
	}

			 // End of Time Module
			 //--------------------------------------------------------------------------------------------

			// Properties button

private: System::Void lightToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->richTextBox1->BackColor = System::Drawing::Color::White;
			 this->richTextBox1->ForeColor = System::Drawing::Color::Black;
			 this->button1->BackColor = System::Drawing::Color::White;
			 this->btnClip->BackColor = System::Drawing::Color::White;
			 this->menuStrip1->BackColor = System::Drawing::Color::MediumTurquoise;
			 this->panel1->BackColor = System::Drawing::Color::GhostWhite;
			 this->label1->ForeColor = System::Drawing::Color::Black;
			 this->menuStrip1->ForeColor = System::Drawing::Color::Black;

}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 //this->menuStrip1->BackColor = System::Drawing::Color::MediumTurquoise;
}
private: System::Void darkToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->richTextBox1->BackColor = System::Drawing::Color::Black;
			 this->richTextBox1->ForeColor = System::Drawing::Color::MediumTurquoise;
			 this->menuStrip1->BackColor = System::Drawing::Color::MediumTurquoise;
			 this->menuStrip1->ForeColor = System::Drawing::Color::Black;
			 this->label1->ForeColor = System::Drawing::Color::Black;
			 this->panel1->BackColor = System::Drawing::Color::DimGray;
			 this->label1->ForeColor = System::Drawing::Color::GhostWhite;
			 this->button1->BackColor = System::Drawing::Color::MediumTurquoise;
			 this->btnClip->BackColor = System::Drawing::Color::GhostWhite;
			
			 
}
private: System::Void normalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->richTextBox1->BackColor = System::Drawing::Color::Lavender;
			 this->richTextBox1->ForeColor = System::Drawing::Color::Black;
			 this->menuStrip1->BackColor = System::Drawing::Color::MediumTurquoise;
			 this->label1->ForeColor = System::Drawing::Color::Black;
			 this->panel1->BackColor = System::Drawing::Color::GhostWhite;
			 this->menuStrip1->ForeColor = System::Drawing::Color::Black;
			 this->button1->BackColor = System::Drawing::Color::MediumTurquoise;
			 this->btnClip->BackColor = System::Drawing::Color::GhostWhite;
}
		 // end of properties
private: System::Void propertiesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
}
		 //testing function
private: System::Void labToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 
			 if (richTextBox1->TextLength > 0) {
				 //first and last line exist
				 
				 Point pos = Point(0,0);
				 int firstIndex = richTextBox1->GetCharIndexFromPosition(pos);
				 int firstLine = richTextBox1->GetLineFromCharIndex(firstIndex);

				 pos.X = ClientRectangle.Width;
				 pos.Y = ClientRectangle.Height;
				 int lastIndex = richTextBox1->GetCharIndexFromPosition(pos);
				 int lastLine = richTextBox1->GetLineFromCharIndex(lastIndex);

				 findSatus->Text = Convert::ToString(firstLine) + " " + Convert::ToString(lastLine);

				 //add line no 0
				 int line = firstLine;
				 lineNumberBox->Text =  Convert::ToString(line)  + "\n";
				 //start numbering the lines
				 while (line < lastLine) {
					 //check position of last index in line number box
					 Point toWrite = lineNumberBox->GetPositionFromCharIndex(lineNumberBox->TextLength - 1);
					 //get actual line+1 position
					 Point actualPosition = richTextBox1->GetPositionFromCharIndex(richTextBox1->GetFirstCharIndexFromLine(line+1));
						 //write line number
						 lineNumberBox->Text += Convert::ToString(line+1) + "\n";
						 line++;
				 }

			 }
}

		 //function to number lines in range
 private: System::Void numberLines() {
					  if (richTextBox1->TextLength > 0) {
						  //first and last line exist

						  Point pos = Point(0, 0);
						  int firstIndex = richTextBox1->GetCharIndexFromPosition(pos);
						  int firstLine = richTextBox1->GetLineFromCharIndex(firstIndex);

						  pos.X = ClientRectangle.Width;
						  pos.Y = ClientRectangle.Height;
						  int lastIndex = richTextBox1->GetCharIndexFromPosition(pos);
						  int lastLine = richTextBox1->GetLineFromCharIndex(lastIndex);

						  //findSatus->Text = Convert::ToString(firstLine) + " " + Convert::ToString(lastLine);

						  //add line no 0
						  int line = firstLine;
						  lineNumberBox->Text = Convert::ToString(line) + "\n";
						  //start numbering the lines
						  while (line < lastLine) {
							  //check position of last index in line number box
							  Point toWrite = lineNumberBox->GetPositionFromCharIndex(lineNumberBox->TextLength - 1);
							  //get actual line+1 position
							  Point actualPosition = richTextBox1->GetPositionFromCharIndex(richTextBox1->GetFirstCharIndexFromLine(line + 1));
							  //write line number
							  lineNumberBox->Text += Convert::ToString(line + 1) + "\n";
							  line++;
						  }

					  }

		 }

private: System::Void lineNumberBox_Enter(System::Object^  sender, System::EventArgs^  e) {
			 //Hiding the caret
			 SelectNextControl(lineNumberBox, true, true, true, true);
}
private: System::Void richTextBox1_VScroll(System::Object^  sender, System::EventArgs^  e) {
			 //update line numbers
			 numberLines();
}
private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
			 //update line numbers
			 numberLines();
}
private: System::Void toolStripStatusLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
		
}
private: System::Void richTextBox1_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
			 int index = richTextBox1->SelectionStart;
			 int line = richTextBox1->GetLineFromCharIndex(index);
			 toolStripStatusLabel1->Text = "Line: " + line.ToString();
}
private: System::Void gotoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //open GoTo tool strip
			 GoTotoolStrip->Visible = true;

}
private: System::Void toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e) {
			 //GoTo line

	//first and last line exist

	Point pos = Point(0, 0);
	int firstIndex = richTextBox1->GetCharIndexFromPosition(pos);
	int firstLine = richTextBox1->GetLineFromCharIndex(firstIndex);

	pos.X = ClientRectangle.Width;
	pos.Y = ClientRectangle.Height;
	int lastIndex = richTextBox1->GetCharIndexFromPosition(pos);
	int lastLine = richTextBox1->GetLineFromCharIndex(lastIndex);

			 String^ str = lineNo->Text;
			 int bar = System::Convert::ToInt32(str);
			 
			 if (bar <= lastLine) {
				 int idx = richTextBox1->GetFirstCharIndexFromLine(bar);
				 richTextBox1->SelectionStart = idx;
				 richTextBox1->SelectionLength = 0;

				 GoTotoolStrip->Visible = false;
			 }

}
private: System::Void findToolStrip_Enter(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void hiddenFindButton_Click(System::Object^  sender, System::EventArgs^  e) {
	toolStripButton1_Click(sender, e);
}
private: System::Void findText_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
}
private: System::Void findToolStrip_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	//auto-focus textbox
	if (findToolStrip->Visible == true) {
		findText->Focus();
	}
	else {
		richTextBox1->Focus();

	}
}
private: System::Void findText_Enter(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void findText_Leave(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void replaceToolStrip_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	if (replaceToolStrip->Visible == true) {
		replaceFindText->Focus();
	}
	else {
		richTextBox1->Focus();
	}
}
private: System::Void GoTotoolStrip_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	if (GoTotoolStrip->Visible == true) {
		lineNo->Focus();
	}
	else {
		richTextBox1->Focus();
	}
}
};
}
