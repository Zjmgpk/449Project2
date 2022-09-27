#pragma once
#include <cstdlib>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            b2 = gcnew array<Button^, 1>(27)
            {
                SOSbutton10, SOSbutton11, SOSbutton12, SOSbutton13, SOSbutton14, SOSbutton15, SOSbutton16, SOSbutton17, SOSbutton18,
                    SOSbutton19, SOSbutton20, SOSbutton21, SOSbutton22, SOSbutton23, SOSbutton24, SOSbutton25, SOSbutton26, SOSbutton27,
                    SOSbutton28, SOSbutton29, SOSbutton30, SOSbutton31, SOSbutton32, SOSbutton33, SOSbutton34, SOSbutton35, SOSbutton36
            };
            b = gcnew array<Button^, 2>(3, 9)
            {
                {SOSbutton10, SOSbutton11, SOSbutton12, SOSbutton13, SOSbutton14, SOSbutton15, SOSbutton16, SOSbutton17, SOSbutton18},
                { SOSbutton19,SOSbutton20,SOSbutton21,SOSbutton22,SOSbutton23,SOSbutton24,SOSbutton25,SOSbutton26,SOSbutton27 },
                { SOSbutton28, SOSbutton29, SOSbutton30, SOSbutton31,SOSbutton32,SOSbutton33,SOSbutton34,SOSbutton35,SOSbutton36 }//27 elts in both
            };
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::GroupBox^ groupBox3;
    private: System::Windows::Forms::RadioButton^ radioButton10;
    private: System::Windows::Forms::RadioButton^ radioButton9;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::GroupBox^ groupBox5;
    private: System::Windows::Forms::RadioButton^ BlueO;
    private: System::Windows::Forms::RadioButton^ BlueS;
    private: System::Windows::Forms::Label^ BluePoints;
    private: System::Windows::Forms::RadioButton^ BlueComputer;
    private: System::Windows::Forms::RadioButton^ BlueHuman;
    private: System::Windows::Forms::CheckBox^ checkBox1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Button^ SOSbutton16;
    private: System::Windows::Forms::Button^ SOSbutton15;
    private: System::Windows::Forms::Button^ SOSbutton14;
    private: System::Windows::Forms::Button^ SOSbutton13;
    private: System::Windows::Forms::Button^ SOSbutton12;
    private: System::Windows::Forms::Button^ SOSbutton3;
    private: System::Windows::Forms::Button^ SOSbutton2;
    private: System::Windows::Forms::Button^ SOSbutton1;
    private: System::Windows::Forms::Button^ SOSbutton4;
    private: System::Windows::Forms::Button^ SOSbutton5;
    private: System::Windows::Forms::Button^ SOSbutton6;
    private: System::Windows::Forms::Button^ SOSbutton7;
    private: System::Windows::Forms::Button^ SOSbutton8;
    private: System::Windows::Forms::Button^ SOSbutton9;
    private: System::Windows::Forms::Button^ SOSbutton10;
    private: System::Windows::Forms::Button^ SOSbutton11;
    private: System::Windows::Forms::Button^ SOSbutton17;
    private: System::Windows::Forms::Button^ SOSbutton18;
    private: System::Windows::Forms::Button^ SOSbutton19;
    private: System::Windows::Forms::Button^ SOSbutton20;
    private: System::Windows::Forms::Button^ SOSbutton21;
    private: System::Windows::Forms::Button^ SOSbutton22;
    private: System::Windows::Forms::Button^ SOSbutton23;
    private: System::Windows::Forms::Button^ SOSbutton24;
    private: System::Windows::Forms::Button^ SOSbutton25;
    private: System::Windows::Forms::Button^ SOSbutton26;
    private: System::Windows::Forms::Button^ SOSbutton27;
    private: System::Windows::Forms::Button^ SOSbutton28;
    private: System::Windows::Forms::Button^ SOSbutton29;
    private: System::Windows::Forms::Button^ SOSbutton30;
    private: System::Windows::Forms::Button^ SOSbutton31;
    private: System::Windows::Forms::Button^ SOSbutton32;
    private: System::Windows::Forms::Button^ SOSbutton33;
    private: System::Windows::Forms::Button^ SOSbutton34;
    private: System::Windows::Forms::Button^ SOSbutton35;
    private: System::Windows::Forms::Button^ SOSbutton36;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::GroupBox^ groupBox6;
    private: System::Windows::Forms::RadioButton^ RedO;
    private: System::Windows::Forms::RadioButton^ RedS;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::RadioButton^ Computer_Red;
    private: System::Windows::Forms::RadioButton^ RedHuman;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::GroupBox^ groupBox4;
    private: System::Windows::Forms::RadioButton^ RedTurn;
    private: System::Windows::Forms::RadioButton^ BlueTurn;
    private: System::Windows::Forms::Label^ label5;
    protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
        array<Button^, 1>^ b2;
        array<Button^, 2>^ b;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
        
        //add clicks
		void InitializeComponent(void)
		{
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
            this->BlueO = (gcnew System::Windows::Forms::RadioButton());
            this->BlueS = (gcnew System::Windows::Forms::RadioButton());
            this->BluePoints = (gcnew System::Windows::Forms::Label());
            this->BlueComputer = (gcnew System::Windows::Forms::RadioButton());
            this->BlueHuman = (gcnew System::Windows::Forms::RadioButton());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->SOSbutton16 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton15 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton14 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton13 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton12 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton3 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton2 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton1 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton4 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton5 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton6 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton7 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton8 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton9 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton10 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton11 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton17 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton18 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton19 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton20 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton21 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton22 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton23 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton24 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton25 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton26 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton27 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton28 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton29 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton30 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton31 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton32 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton33 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton34 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton35 = (gcnew System::Windows::Forms::Button());
            this->SOSbutton36 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
            this->RedO = (gcnew System::Windows::Forms::RadioButton());
            this->RedS = (gcnew System::Windows::Forms::RadioButton());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->Computer_Red = (gcnew System::Windows::Forms::RadioButton());
            this->RedHuman = (gcnew System::Windows::Forms::RadioButton());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
            this->RedTurn = (gcnew System::Windows::Forms::RadioButton());
            this->BlueTurn = (gcnew System::Windows::Forms::RadioButton());
            this->label5 = (gcnew System::Windows::Forms::Label());

            this->groupBox3->SuspendLayout();
            this->groupBox1->SuspendLayout();
            this->groupBox5->SuspendLayout();
            this->tableLayoutPanel1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->groupBox6->SuspendLayout();
            this->groupBox4->SuspendLayout();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
            this->label1->Location = System::Drawing::Point(12, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(353, 48);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Welcome to SOS!";
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->radioButton10);
            this->groupBox3->Controls->Add(this->radioButton9);
            this->groupBox3->Location = System::Drawing::Point(417, 17);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(302, 39);
            this->groupBox3->TabIndex = 28;
            this->groupBox3->TabStop = false;
            // 
            // radioButton10
            // 
            this->radioButton10->AutoSize = true;
            this->radioButton10->Location = System::Drawing::Point(172, 10);
            this->radioButton10->Name = L"radioButton10";
            this->radioButton10->Size = System::Drawing::Size(116, 20);
            this->radioButton10->TabIndex = 15;
            this->radioButton10->TabStop = true;
            this->radioButton10->Text = L"General Game";
            this->radioButton10->UseVisualStyleBackColor = true;
            // 
            // radioButton9
            // 
            this->radioButton9->AutoSize = true;
            this->radioButton9->Location = System::Drawing::Point(15, 10);
            this->radioButton9->Name = L"radioButton9";
            this->radioButton9->Size = System::Drawing::Size(110, 20);
            this->radioButton9->TabIndex = 14;
            this->radioButton9->TabStop = true;
            this->radioButton9->Text = L"Simple Game";
            this->radioButton9->UseVisualStyleBackColor = true;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(62, 156);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(76, 16);
            this->label3->TabIndex = 32;
            this->label3->Text = L"Blue Player";
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->textBox2);
            this->groupBox1->Controls->Add(this->groupBox5);
            this->groupBox1->Controls->Add(this->BluePoints);
            this->groupBox1->Controls->Add(this->BlueComputer);
            this->groupBox1->Controls->Add(this->BlueHuman);
            this->groupBox1->Location = System::Drawing::Point(39, 181);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(160, 204);
            this->groupBox1->TabIndex = 33;
            this->groupBox1->TabStop = false;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(93, 169);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(33, 22);
            this->textBox2->TabIndex = 34;
            this->textBox2->Text = L"0";
            // 
            // groupBox5
            // 
            this->groupBox5->Controls->Add(this->BlueO);
            this->groupBox5->Controls->Add(this->BlueS);
            this->groupBox5->Location = System::Drawing::Point(28, 51);
            this->groupBox5->Name = L"groupBox5";
            this->groupBox5->Size = System::Drawing::Size(98, 71);
            this->groupBox5->TabIndex = 11;
            this->groupBox5->TabStop = false;
            // 
            // BlueO
            // 
            this->BlueO->AutoSize = true;
            this->BlueO->Location = System::Drawing::Point(18, 36);
            this->BlueO->Name = L"BlueO";
            this->BlueO->Size = System::Drawing::Size(38, 20);
            this->BlueO->TabIndex = 8;
            this->BlueO->TabStop = true;
            this->BlueO->Text = L"O";
            this->BlueO->UseVisualStyleBackColor = true;
            // 
            // BlueS
            // 
            this->BlueS->AutoSize = true;
            this->BlueS->Location = System::Drawing::Point(19, 0);
            this->BlueS->Name = L"BlueS";
            this->BlueS->Size = System::Drawing::Size(37, 20);
            this->BlueS->TabIndex = 7;
            this->BlueS->TabStop = true;
            this->BlueS->Text = L"S";
            this->BlueS->UseVisualStyleBackColor = true;
            // 
            // BluePoints
            // 
            this->BluePoints->AutoSize = true;
            this->BluePoints->Location = System::Drawing::Point(23, 175);
            this->BluePoints->Name = L"BluePoints";
            this->BluePoints->Size = System::Drawing::Size(47, 16);
            this->BluePoints->TabIndex = 10;
            this->BluePoints->Text = L"Points:";
            // 
            // BlueComputer
            // 
            this->BlueComputer->AutoSize = true;
            this->BlueComputer->Location = System::Drawing::Point(26, 122);
            this->BlueComputer->Name = L"BlueComputer";
            this->BlueComputer->Size = System::Drawing::Size(86, 20);
            this->BlueComputer->TabIndex = 9;
            this->BlueComputer->TabStop = true;
            this->BlueComputer->Text = L"Computer";
            this->BlueComputer->UseVisualStyleBackColor = true;
            // 
            // BlueHuman
            // 
            this->BlueHuman->AutoSize = true;
            this->BlueHuman->Location = System::Drawing::Point(26, 12);
            this->BlueHuman->Name = L"BlueHuman";
            this->BlueHuman->Size = System::Drawing::Size(71, 20);
            this->BlueHuman->TabIndex = 6;
            this->BlueHuman->TabStop = true;
            this->BlueHuman->Text = L"Human";
            this->BlueHuman->UseVisualStyleBackColor = true;
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->Location = System::Drawing::Point(52, 524);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(114, 20);
            this->checkBox1->TabIndex = 34;
            this->checkBox1->Text = L"Record Game";
            this->checkBox1->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->AutoSize = true;
            this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
            this->tableLayoutPanel1->ColumnCount = 6;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                12.5F)));
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton16, 7, 1);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton15, 6, 1);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton14, 5, 1);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton13, 4, 1);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton12, 3, 1);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton3, 2, 0);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton2, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton4, 3, 0);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton5, 4, 0);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton6, 5, 0);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton7, 6, 0);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton8, 7, 0);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton9, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton10, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton11, 2, 1);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton17, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton18, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton19, 2, 2);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton20, 3, 2);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton21, 4, 2);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton22, 5, 2);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton23, 6, 2);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton24, 7, 2);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton25, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton26, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton27, 2, 3);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton28, 3, 3);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton29, 4, 3);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton30, 5, 3);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton31, 6, 3);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton32, 7, 3);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton33, 0, 4);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton34, 1, 4);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton35, 2, 4);
            this->tableLayoutPanel1->Controls->Add(this->SOSbutton36, 3, 4);
            this->tableLayoutPanel1->Location = System::Drawing::Point(307, 73);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 6;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(487, 476);
            this->tableLayoutPanel1->TabIndex = 35;
            // 
            // SOSbutton1
            // 
            this->SOSbutton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SOSbutton1->Location = System::Drawing::Point(6, 6);
            this->SOSbutton1->Name = L"SOSbutton1";
            this->SOSbutton1->Size = System::Drawing::Size(71, 69);
            this->SOSbutton1->TabIndex = 9;
            this->SOSbutton1->UseVisualStyleBackColor = true;
            this->SOSbutton1->Click += gcnew System::EventHandler(this, &Form1::SOSbutton1_Click);
            // 
            // SOSbutton2
            // 
            this->SOSbutton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SOSbutton2->Location = System::Drawing::Point(86, 6);
            this->SOSbutton2->Name = L"SOSbutton2";
            this->SOSbutton2->Size = System::Drawing::Size(71, 69);
            this->SOSbutton2->TabIndex = 1;
            this->SOSbutton2->UseVisualStyleBackColor = true;
            this->SOSbutton2->Click += gcnew System::EventHandler(this, &Form1::SOSbutton2_Click);
            // 
            // SOSbutton3
            // 
            this->SOSbutton3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SOSbutton3->Location = System::Drawing::Point(166, 6);
            this->SOSbutton3->Name = L"SOSbutton3";
            this->SOSbutton3->Size = System::Drawing::Size(71, 69);
            this->SOSbutton3->TabIndex = 2;
            this->SOSbutton3->UseVisualStyleBackColor = true;
            this->SOSbutton3->Click += gcnew System::EventHandler(this, &Form1::SOSbutton3_Click);
            // 
            // SOSbutton4
            // 
            this->SOSbutton4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SOSbutton4->Location = System::Drawing::Point(246, 6);
            this->SOSbutton4->Name = L"SOSbutton4";
            this->SOSbutton4->Size = System::Drawing::Size(71, 69);
            this->SOSbutton4->TabIndex = 3;
            this->SOSbutton4->UseVisualStyleBackColor = true;
            this->SOSbutton4->Click += gcnew System::EventHandler(this, &Form1::SOSbutton4_Click);
            // 
            // SOSbutton5
            // 
            this->SOSbutton5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton5->Location = System::Drawing::Point(326, 6);
            this->SOSbutton5->Name = L"SOSbutton5";
            this->SOSbutton5->Size = System::Drawing::Size(71, 69);
            this->SOSbutton5->TabIndex = 4;
            this->SOSbutton5->UseVisualStyleBackColor = true;
            // 
            // SOSbutton6
            // 
            this->SOSbutton6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SOSbutton6->Location = System::Drawing::Point(406, 6);
            this->SOSbutton6->Name = L"SOSbutton6";
            this->SOSbutton6->Size = System::Drawing::Size(75, 69);
            this->SOSbutton6->TabIndex = 5;
            this->SOSbutton6->UseVisualStyleBackColor = true;
            // 
            // SOSbutton7
            // 
            this->SOSbutton7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SOSbutton7->Location = System::Drawing::Point(6, 84);
            this->SOSbutton7->Name = L"SOSbutton7";
            this->SOSbutton7->Size = System::Drawing::Size(71, 69);
            this->SOSbutton7->TabIndex = 6;
            this->SOSbutton7->UseVisualStyleBackColor = true;
            // 
            // SOSbutton8
            // 
            this->SOSbutton8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SOSbutton8->Location = System::Drawing::Point(86, 84);
            this->SOSbutton8->Name = L"SOSbutton8";
            this->SOSbutton8->Size = System::Drawing::Size(71, 69);
            this->SOSbutton8->TabIndex = 7;
            this->SOSbutton8->UseVisualStyleBackColor = true;
            // 
            // SOSbutton9
            // 
            this->SOSbutton9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SOSbutton9->Location = System::Drawing::Point(166, 84);
            this->SOSbutton9->Name = L"SOSbutton9";
            this->SOSbutton9->Size = System::Drawing::Size(71, 69);
            this->SOSbutton9->TabIndex = 8;
            this->SOSbutton9->UseVisualStyleBackColor = true;
            // 
            // SOSbutton10
            // 
            this->SOSbutton10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton10->Location = System::Drawing::Point(246, 84);
            this->SOSbutton10->Name = L"SOSbutton10";
            this->SOSbutton10->Size = System::Drawing::Size(71, 69);
            this->SOSbutton10->TabIndex = 10;
            this->SOSbutton10->UseVisualStyleBackColor = true;
            // 
            // SOSbutton11
            // 
            this->SOSbutton11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton11->Location = System::Drawing::Point(326, 84);
            this->SOSbutton11->Name = L"SOSbutton11";
            this->SOSbutton11->Size = System::Drawing::Size(71, 69);
            this->SOSbutton11->TabIndex = 11;
            this->SOSbutton11->UseVisualStyleBackColor = true;
            // 
            // SOSbutton12
            // 
            this->SOSbutton12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton12->Location = System::Drawing::Point(406, 84);
            this->SOSbutton12->Name = L"SOSbutton12";
            this->SOSbutton12->Size = System::Drawing::Size(75, 69);
            this->SOSbutton12->TabIndex = 12;
            this->SOSbutton12->UseVisualStyleBackColor = true;
            // 
            // SOSbutton13
            // 
            this->SOSbutton13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton13->Location = System::Drawing::Point(6, 162);
            this->SOSbutton13->Name = L"SOSbutton13";
            this->SOSbutton13->Size = System::Drawing::Size(71, 69);
            this->SOSbutton13->TabIndex = 13;
            this->SOSbutton13->UseVisualStyleBackColor = true;
            // 
            // SOSbutton14
            // 
            this->SOSbutton14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton14->Location = System::Drawing::Point(86, 162);
            this->SOSbutton14->Name = L"SOSbutton14";
            this->SOSbutton14->Size = System::Drawing::Size(71, 69);
            this->SOSbutton14->TabIndex = 14;
            this->SOSbutton14->UseVisualStyleBackColor = true;
            // 
            // SOSbutton15
            // 
            this->SOSbutton15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton15->Location = System::Drawing::Point(166, 162);
            this->SOSbutton15->Name = L"SOSbutton15";
            this->SOSbutton15->Size = System::Drawing::Size(71, 69);
            this->SOSbutton15->TabIndex = 15;
            this->SOSbutton15->UseVisualStyleBackColor = true;
            //this->SOSbutton15->Click += gcnew System::EventHandler(this, &Form1::SOSbutton15_Click);
            // 
            // SOSbutton16
            // 
            this->SOSbutton16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton16->Location = System::Drawing::Point(246, 162);
            this->SOSbutton16->Name = L"SOSbutton16";
            this->SOSbutton16->Size = System::Drawing::Size(71, 69);
            this->SOSbutton16->TabIndex = 16;
            this->SOSbutton16->UseVisualStyleBackColor = true;
            //this->SOSbutton16->Click += gcnew System::EventHandler(this, &Form1::SOSbutton16_Click);
            // 
            // SOSbutton17
            // 
            this->SOSbutton17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton17->Location = System::Drawing::Point(326, 162);
            this->SOSbutton17->Name = L"SOSbutton17";
            this->SOSbutton17->Size = System::Drawing::Size(71, 69);
            this->SOSbutton17->TabIndex = 17;
            this->SOSbutton17->UseVisualStyleBackColor = true;
            // 
            // SOSbutton18
            // 
            this->SOSbutton18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton18->Location = System::Drawing::Point(406, 162);
            this->SOSbutton18->Name = L"SOSbutton18";
            this->SOSbutton18->Size = System::Drawing::Size(75, 69);
            this->SOSbutton18->TabIndex = 18;
            this->SOSbutton18->UseVisualStyleBackColor = true;
            // 
            // SOSbutton19
            // 
            this->SOSbutton19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton19->Location = System::Drawing::Point(6, 240);
            this->SOSbutton19->Name = L"SOSbutton19";
            this->SOSbutton19->Size = System::Drawing::Size(71, 69);
            this->SOSbutton19->TabIndex = 19;
            this->SOSbutton19->UseVisualStyleBackColor = true;
            // 
            // SOSbutton20
            // 
            this->SOSbutton20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton20->Location = System::Drawing::Point(86, 240);
            this->SOSbutton20->Name = L"SOSbutton20";
            this->SOSbutton20->Size = System::Drawing::Size(71, 69);
            this->SOSbutton20->TabIndex = 20;
            this->SOSbutton20->UseVisualStyleBackColor = true;
            // 
            // SOSbutton21
            // 
            this->SOSbutton21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton21->Location = System::Drawing::Point(166, 240);
            this->SOSbutton21->Name = L"SOSbutton21";
            this->SOSbutton21->Size = System::Drawing::Size(71, 69);
            this->SOSbutton21->TabIndex = 21;
            this->SOSbutton21->UseVisualStyleBackColor = true;
            // 
            // SOSbutton22
            // 
            this->SOSbutton22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton22->Location = System::Drawing::Point(246, 240);
            this->SOSbutton22->Name = L"SOSbutton22";
            this->SOSbutton22->Size = System::Drawing::Size(71, 69);
            this->SOSbutton22->TabIndex = 22;
            this->SOSbutton22->UseVisualStyleBackColor = true;
            // 
            // SOSbutton23
            // 
            this->SOSbutton23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton23->Location = System::Drawing::Point(326, 240);
            this->SOSbutton23->Name = L"SOSbutton23";
            this->SOSbutton23->Size = System::Drawing::Size(71, 69);
            this->SOSbutton23->TabIndex = 23;
            this->SOSbutton23->UseVisualStyleBackColor = true;
            // 
            // SOSbutton24
            // 
            this->SOSbutton24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton24->Location = System::Drawing::Point(406, 240);
            this->SOSbutton24->Name = L"SOSbutton24";
            this->SOSbutton24->Size = System::Drawing::Size(75, 69);
            this->SOSbutton24->TabIndex = 24;
            this->SOSbutton24->UseVisualStyleBackColor = true;
            // 
            // SOSbutton25
            // 
            this->SOSbutton25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton25->Location = System::Drawing::Point(6, 318);
            this->SOSbutton25->Name = L"SOSbutton25";
            this->SOSbutton25->Size = System::Drawing::Size(71, 69);
            this->SOSbutton25->TabIndex = 25;
            this->SOSbutton25->UseVisualStyleBackColor = true;
            // 
            // SOSbutton26
            // 
            this->SOSbutton26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton26->Location = System::Drawing::Point(86, 318);
            this->SOSbutton26->Name = L"SOSbutton26";
            this->SOSbutton26->Size = System::Drawing::Size(71, 69);
            this->SOSbutton26->TabIndex = 26;
            this->SOSbutton26->UseVisualStyleBackColor = true;
            // 
            // SOSbutton27
            // 
            this->SOSbutton27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton27->Location = System::Drawing::Point(166, 318);
            this->SOSbutton27->Name = L"SOSbutton27";
            this->SOSbutton27->Size = System::Drawing::Size(71, 69);
            this->SOSbutton27->TabIndex = 27;
            this->SOSbutton27->UseVisualStyleBackColor = true;
            // 
            // SOSbutton28
            // 
            this->SOSbutton28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton28->Location = System::Drawing::Point(246, 318);
            this->SOSbutton28->Name = L"SOSbutton28";
            this->SOSbutton28->Size = System::Drawing::Size(71, 69);
            this->SOSbutton28->TabIndex = 29;
            this->SOSbutton28->UseVisualStyleBackColor = true;
            // 
            // SOSbutton29
            // 
            this->SOSbutton29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton29->Location = System::Drawing::Point(326, 318);
            this->SOSbutton29->Name = L"SOSbutton29";
            this->SOSbutton29->Size = System::Drawing::Size(71, 69);
            this->SOSbutton29->TabIndex = 31;
            this->SOSbutton29->UseVisualStyleBackColor = true;
            // 
            // SOSbutton30
            // 
            this->SOSbutton30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton30->Location = System::Drawing::Point(406, 318);
            this->SOSbutton30->Name = L"SOSbutton30";
            this->SOSbutton30->Size = System::Drawing::Size(75, 69);
            this->SOSbutton30->TabIndex = 32;
            this->SOSbutton30->UseVisualStyleBackColor = true;
            // 
            // SOSbutton31
            // 
            this->SOSbutton31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton31->Location = System::Drawing::Point(6, 396);
            this->SOSbutton31->Name = L"SOSbutton31";
            this->SOSbutton31->Size = System::Drawing::Size(71, 74);
            this->SOSbutton31->TabIndex = 30;
            this->SOSbutton31->UseVisualStyleBackColor = true;
            // 
            // SOSbutton32
            // 
            this->SOSbutton32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton32->Location = System::Drawing::Point(86, 396);
            this->SOSbutton32->Name = L"SOSbutton32";
            this->SOSbutton32->Size = System::Drawing::Size(71, 74);
            this->SOSbutton32->TabIndex = 28;
            this->SOSbutton32->UseVisualStyleBackColor = true;
            // 
            // SOSbutton33
            // 
            this->SOSbutton33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SOSbutton33->Location = System::Drawing::Point(166, 396);
            this->SOSbutton33->Name = L"SOSbutton33";
            this->SOSbutton33->Size = System::Drawing::Size(71, 74);
            this->SOSbutton33->TabIndex = 33;
            this->SOSbutton33->UseVisualStyleBackColor = true;
            // 
            // SOSbutton34
            // 
            this->SOSbutton34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton34->Location = System::Drawing::Point(246, 396);
            this->SOSbutton34->Name = L"SOSbutton34";
            this->SOSbutton34->Size = System::Drawing::Size(71, 74);
            this->SOSbutton34->TabIndex = 34;
            this->SOSbutton34->UseVisualStyleBackColor = true;
            // 
            // SOSbutton35
            // 
            this->SOSbutton35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
            this->SOSbutton35->Location = System::Drawing::Point(326, 396);
            this->SOSbutton35->Name = L"SOSbutton35";
            this->SOSbutton35->Size = System::Drawing::Size(71, 74);
            this->SOSbutton35->TabIndex = 35;
            this->SOSbutton35->UseVisualStyleBackColor = true;
            // 
            // SOSbutton36
            // 
            this->SOSbutton36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SOSbutton36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SOSbutton36->Location = System::Drawing::Point(406, 396);
            this->SOSbutton36->Name = L"SOSbutton36";
            this->SOSbutton36->Size = System::Drawing::Size(75, 74);
            this->SOSbutton36->TabIndex = 36;
            this->SOSbutton36->UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(745, 30);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(181, 16);
            this->label2->TabIndex = 36;
            this->label2->Text = L"Board Size(between 3 and 6):";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(943, 27);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(47, 22);
            this->textBox1->TabIndex = 37;
            this->textBox1->Text = L"6";
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(915, 156);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(75, 16);
            this->label4->TabIndex = 38;
            this->label4->Text = L"Red Player";
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->groupBox6);
            this->groupBox2->Controls->Add(this->textBox3);
            this->groupBox2->Controls->Add(this->Computer_Red);
            this->groupBox2->Controls->Add(this->RedHuman);
            this->groupBox2->Location = System::Drawing::Point(887, 181);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(159, 204);
            this->groupBox2->TabIndex = 39;
            this->groupBox2->TabStop = false;
            // 
            // groupBox6
            // 
            this->groupBox6->Controls->Add(this->RedO);
            this->groupBox6->Controls->Add(this->RedS);
            this->groupBox6->Location = System::Drawing::Point(41, 48);
            this->groupBox6->Name = L"groupBox6";
            this->groupBox6->Size = System::Drawing::Size(79, 74);
            this->groupBox6->TabIndex = 35;
            this->groupBox6->TabStop = false;
            // 
            // RedO
            // 
            this->RedO->AutoSize = true;
            this->RedO->Location = System::Drawing::Point(9, 45);
            this->RedO->Name = L"RedO";
            this->RedO->Size = System::Drawing::Size(38, 20);
            this->RedO->TabIndex = 12;
            this->RedO->TabStop = true;
            this->RedO->Text = L"O";
            this->RedO->UseVisualStyleBackColor = true;
            // 
            // RedS
            // 
            this->RedS->AutoSize = true;
            this->RedS->Location = System::Drawing::Point(9, 10);
            this->RedS->Name = L"RedS";
            this->RedS->Size = System::Drawing::Size(37, 20);
            this->RedS->TabIndex = 11;
            this->RedS->TabStop = true;
            this->RedS->Text = L"S";
            this->RedS->UseVisualStyleBackColor = true;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(98, 171);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(33, 22);
            this->textBox3->TabIndex = 34;
            this->textBox3->Text = L"0";
            // 
            // Computer_Red
            // 
            this->Computer_Red->AutoSize = true;
            this->Computer_Red->Location = System::Drawing::Point(35, 128);
            this->Computer_Red->Name = L"Computer_Red";
            this->Computer_Red->Size = System::Drawing::Size(86, 20);
            this->Computer_Red->TabIndex = 13;
            this->Computer_Red->TabStop = true;
            this->Computer_Red->Text = L"Computer";
            this->Computer_Red->UseVisualStyleBackColor = true;
            // 
            // RedHuman
            // 
            this->RedHuman->AutoSize = true;
            this->RedHuman->Location = System::Drawing::Point(35, 18);
            this->RedHuman->Name = L"RedHuman";
            this->RedHuman->Size = System::Drawing::Size(71, 20);
            this->RedHuman->TabIndex = 10;
            this->RedHuman->TabStop = true;
            this->RedHuman->Text = L"Human";
            this->RedHuman->UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(925, 454);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(108, 48);
            this->button2->TabIndex = 40;
            this->button2->Text = L"button2";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // groupBox4
            // 
            this->groupBox4->Controls->Add(this->RedTurn);
            this->groupBox4->Controls->Add(this->BlueTurn);
            this->groupBox4->Controls->Add(this->label5);
            this->groupBox4->Location = System::Drawing::Point(307, 562);
            this->groupBox4->Name = L"groupBox4";
            this->groupBox4->Size = System::Drawing::Size(475, 35);
            this->groupBox4->TabIndex = 41;
            this->groupBox4->TabStop = false;
            // 
            // RedTurn
            // 
            this->RedTurn->AutoSize = true;
            this->RedTurn->Location = System::Drawing::Point(341, 7);
            this->RedTurn->Name = L"RedTurn";
            this->RedTurn->Size = System::Drawing::Size(54, 20);
            this->RedTurn->TabIndex = 31;
            this->RedTurn->TabStop = true;
            this->RedTurn->Text = L"Red";
            this->RedTurn->UseVisualStyleBackColor = true;
            // 
            // BlueTurn
            // 
            this->BlueTurn->AutoSize = true;
            this->BlueTurn->Location = System::Drawing::Point(169, 7);
            this->BlueTurn->Name = L"BlueTurn";
            this->BlueTurn->Size = System::Drawing::Size(55, 20);
            this->BlueTurn->TabIndex = 30;
            this->BlueTurn->TabStop = true;
            this->BlueTurn->Text = L"Blue";
            this->BlueTurn->UseVisualStyleBackColor = true;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(32, 7);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(85, 16);
            this->label5->TabIndex = 28;
            this->label5->Text = L"Current Turn: ";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1158, 614);
            this->Controls->Add(this->groupBox4);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Controls->Add(this->checkBox1);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->groupBox3);
            this->Controls->Add(this->label1);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->groupBox3->ResumeLayout(false);
            this->groupBox3->PerformLayout();
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox5->ResumeLayout(false);
            this->groupBox5->PerformLayout();
            this->tableLayoutPanel1->ResumeLayout(false);
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->groupBox6->ResumeLayout(false);
            this->groupBox6->PerformLayout();
            this->groupBox4->ResumeLayout(false);
            this->groupBox4->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        int Blue_Score = 0;
        int Red_Score = 0;
        int matrixRow = 3;
        int matrixCol = 9;
        char symbol;
        String^ Type_Game;
        //need this many? 
        
        void GameType()
        {
            if (radioButton9->Checked == true && radioButton10->Checked == false)
            {
                Type_Game = "Simple";
                if (BlueHuman->Checked == true && RedHuman->Checked == true)
                {
                    Two_Player_Game();
                }
                if ((BlueHuman->Checked == true && RedHuman->Checked == false) ||
                    (BlueHuman->Checked == false && RedHuman->Checked == true))
                {
                    Computer_Game();
                }
            }
            if (radioButton9->Checked == false && radioButton10->Checked == true)
            {
                Type_Game = "General";
                if (BlueHuman->Checked == true && RedHuman->Checked == true)
                {
                    Two_Player_Game();
                }
                if ((BlueHuman->Checked == true && RedHuman->Checked == false) ||
                    (BlueHuman->Checked == false && RedHuman->Checked == true))
                {
                    Computer_Game();
                }
            }

        }

        void Computer_Game()
        {
            int begin = rand() % 2 + 1;
            if (begin == 1)
                BlueTurn->Checked = true;
            if (begin == 2)
                RedTurn->Checked = true;
            if (Type_Game = "General") {}
            if (Type_Game = "Simple") {}


        }

        void Two_Player_Game()
        {
            int begin = rand() % 2 + 1;
            if (begin == 1)
                BlueTurn->Checked = true;
            if (begin == 2)
                RedTurn->Checked = true;
            if (Type_Game = "General") {}
            if (Type_Game = "Simple") {}

        }

        void Enable_False()
        {

            SOSbutton1->Enabled = false;
            SOSbutton2->Enabled = false;
            SOSbutton3->Enabled = false;
            SOSbutton4->Enabled = false;
            SOSbutton5->Enabled = false;
            SOSbutton6->Enabled = false;
            SOSbutton7->Enabled = false;
            SOSbutton8->Enabled = false;
            SOSbutton9->Enabled = false;
        }

        /*
      bool all_enabled()
      {
          for each (Control var in  tableLayoutPanel1)
          {

          }

      }
      */

        /*void Score()//not done{

          int num = Convert::ToInt32(textBox1->Text);
          switch (num) {
              //case(3):

          }

      }
      */

        void GeneralWinner()//not done
        {
            if (Type_Game == "General") {
                int a = Convert::ToInt32(textBox2->Text);
                int b = Convert::ToInt32(textBox3->Text);
                if (a > b)
                {
                    MessageBox::Show("Blue Player Wins!!!", "SOS", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                if (b > a) {
                    MessageBox::Show("Red Player Wins!!!", "SOS", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
            }
            if (Type_Game == "Simple") {


            }
        }

       
        

    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(textBox1->Text)) {
            textBox1->Text = "3";
        }
        int num = Convert::ToInt32(textBox1->Text);

        if (num == 3) {
            ;
            //int matrixRow = 9, matrixCol = 3;
            for (int i = matrixRow - 1; i == 0; i--) {
                for (int j = matrixCol - 1; j == 0; j--) {
                    b[i, j]->Enabled = false;
                    b[i, j]->Visible = false;
                }
            }
            tableLayoutPanel1->ColumnCount = num;
            tableLayoutPanel1->RowCount = num;

        }
        if (num == 4) {
            for (int i = 0; i == 6; i++) {
                b2[i]->Enabled = true;
                b2[i]->Visible = true;
            }
            for (int i = 7; i == 26; i++) {
                b2[i]->Enabled = false;
                b2[i]->Visible = false;
            }
            tableLayoutPanel1->ColumnCount = num;
            tableLayoutPanel1->RowCount = num;
        }
        if (num == 5) {
            for (int i = 26; i == 16; i--) {
                b2[i]->Enabled = false;
                b2[i]->Visible = false;
            }
            for (int i = 15; i == 0; i--) {
                b2[i]->Enabled = true;
                b2[i]->Visible = true;
            }
            tableLayoutPanel1->ColumnCount = num;
            tableLayoutPanel1->RowCount = num;

        }
        if (num == 6) {
            for (int i = matrixRow - 1; i == 0; i--) {
                for (int j = matrixCol - 1; j == 0; j--) {
                    b[i, j]->Enabled = true;
                    b[i, j]->Visible = true;
                }
            }
            tableLayoutPanel1->ColumnCount = num;
            tableLayoutPanel1->RowCount = num;
        }
        if (num >= 7)
        {
            textBox1->Text = "6";
        }
    }
  
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void SOSbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueS->Checked == true) {
            SOSbutton1->Enabled = true;
            SOSbutton1->Text = "S";

        }
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueO->Checked == true) {
            SOSbutton1->Enabled = true;
            SOSbutton1->Text = "O";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedS->Checked == true) {
            SOSbutton1->Enabled = true;
            SOSbutton1->Text = "S";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedO->Checked == true) {
            SOSbutton1->Enabled = true;
            SOSbutton1->Text = "O";

        }
    }
    private: System::Void SOSbutton2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueS->Checked == true) {
            SOSbutton2->Enabled = true;
            SOSbutton2->Text = "S";

        }
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueO->Checked == true) {
            SOSbutton2->Enabled = true;
            SOSbutton2->Text = "O";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedS->Checked == true) {
            SOSbutton2->Enabled = true;
            SOSbutton2->Text = "S";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedO->Checked == true) {
            SOSbutton2->Enabled = true;
            SOSbutton2->Text = "O";

        }
    }
    private: System::Void SOSbutton3_Click(System::Object^ sender, System::EventArgs^ e) {
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueS->Checked == true) {
            SOSbutton3->Enabled = true;
            SOSbutton3->Text = "S";

        }
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueO->Checked == true) {
            SOSbutton3->Enabled = true;
            SOSbutton3->Text = "O";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedS->Checked == true) {
            SOSbutton3->Enabled = true;
            SOSbutton3->Text = "S";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedO->Checked == true) {
            SOSbutton3->Enabled = true;
            SOSbutton3->Text = "O";

        }
    }
    private: System::Void SOSbutton4_Click(System::Object^ sender, System::EventArgs^ e) {
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueS->Checked == true) {
            SOSbutton4->Enabled = true;
            SOSbutton4->Text = "S";

        }
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueO->Checked == true) {
            SOSbutton4->Enabled = true;
            SOSbutton4->Text = "O";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedS->Checked == true) {
            SOSbutton4->Enabled = true;
            SOSbutton4->Text = "S";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedO->Checked == true) {
            SOSbutton4->Enabled = true;
            SOSbutton4->Text = "O";

        }
    }
    private: System::Void SOSbutton5_Click(System::Object^ sender, System::EventArgs^ e) {
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueS->Checked == true) {
            SOSbutton5->Enabled = true;
            SOSbutton5->Text = "S";

        }
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueO->Checked == true) {
            SOSbutton5->Enabled = true;
            SOSbutton5->Text = "O";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedS->Checked == true) {
            SOSbutton5->Enabled = true;
            SOSbutton5->Text = "S";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedO->Checked == true) {
            SOSbutton5->Enabled = true;
            SOSbutton5->Text = "O";

        }
    }
    private: System::Void SOSbutton6_Click(System::Object^ sender, System::EventArgs^ e) {
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueS->Checked == true) {
            SOSbutton6->Enabled = true;
            SOSbutton6->Text = "S";

        }
        if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueO->Checked == true) {
            SOSbutton6->Enabled = true;
            SOSbutton6->Text = "O";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedS->Checked == true) {
            SOSbutton6->Enabled = true;
            SOSbutton6->Text = "S";

        }
        if (RedTurn->Checked == true && RedHuman->Checked == true && RedO->Checked == true) {
            SOSbutton6->Enabled = true;
            SOSbutton6->Text = "O";

        }
    }
    private: System::Void SOSbutton7_Click(System::Object^ sender, System::EventArgs^ e) {
      if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueS->Checked == true) {
          SOSbutton7->Enabled = true;
          SOSbutton7->Text = "S";

      }
      if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueO->Checked == true) {
          SOSbutton7->Enabled = true;
          SOSbutton7->Text = "O";

      }
      if (RedTurn->Checked == true && RedHuman->Checked == true && RedS->Checked == true) {
          SOSbutton7->Enabled = true;
          SOSbutton7->Text = "S";

      }
      if (RedTurn->Checked == true && RedHuman->Checked == true && RedO->Checked == true) {
          SOSbutton7->Enabled = true;
          SOSbutton7->Text = "O";

      }
  }
    private: System::Void SOSbutton8_Click(System::Object^ sender, System::EventArgs^ e) {
      if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueS->Checked == true) {
          SOSbutton8->Enabled = true;
          SOSbutton8->Text = "S";

      }
      if (BlueTurn->Checked == true && BlueHuman->Checked == true && BlueO->Checked == true) {
          SOSbutton8->Enabled = true;
          SOSbutton8->Text = "O";

      }
      if (RedTurn->Checked == true && RedHuman->Checked == true && RedS->Checked == true) {
          SOSbutton8->Enabled = true;
          SOSbutton8->Text = "S";

      }
      if (RedTurn->Checked == true && RedHuman->Checked == true && RedO->Checked == true) {
          SOSbutton8->Enabled = true;
          SOSbutton8->Text = "O";

      }
  }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        button2->Text = "Hello";
        }

};
}
