#pragma once
#include <iostream>
#include <fstream>
#include <ctime>
#include "FinalForm.h"
namespace CursovoiProject20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainTask
	/// </summary>
	public ref class MainTask : public System::Windows::Forms::Form
	{
	public:
		MainTask(void)
		{
			
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainTask()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Ivory;
			this->button1->Location = System::Drawing::Point(607, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ОК";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainTask::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(607, 37);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(207, 39);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(602, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите вес чана (кг)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(516, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(399, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите планируемый вес шихты (кг)";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MainTask::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(607, 37);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(207, 39);
			this->textBox2->TabIndex = 4;
			this->textBox2->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Ivory;
			this->button2->Location = System::Drawing::Point(607, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 39);
			this->button2->TabIndex = 5;
			this->button2->Text = L"ОК";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainTask::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(6, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(161, 28);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainTask::comboBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(22, 138);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(282, 306);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Металлолом";
			this->groupBox1->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Aquamarine;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(12, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 24);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Добавить ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainTask::button3_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Aquamarine;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(12, 268);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(113, 24);
			this->button9->TabIndex = 16;
			this->button9->Text = L"Добавить ";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainTask::button9_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Aquamarine;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 180);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 24);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Добавить ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainTask::button4_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->comboBox3);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(6, 208);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(270, 65);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Металлы";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(190, 26);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(59, 27);
			this->textBox5->TabIndex = 14;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(6, 26);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(161, 28);
			this->comboBox3->TabIndex = 6;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(6, 120);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(270, 65);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Чугунный лом";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(190, 27);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(59, 27);
			this->textBox4->TabIndex = 11;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(6, 26);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(161, 28);
			this->comboBox2->TabIndex = 6;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainTask::comboBox2_SelectedIndexChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(6, 29);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(270, 65);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Железный лом";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(181, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 20);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Вес (кг)";
			this->label8->Click += gcnew System::EventHandler(this, &MainTask::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(205, -19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 16);
			this->label7->TabIndex = 8;
			this->label7->Text = L"% в шихте";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(190, 26);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(59, 27);
			this->textBox3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Вес чана: ";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(90, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(11, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"-";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Суммарный вес: ";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(133, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"0";
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &MainTask::label6_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button12);
			this->groupBox6->Controls->Add(this->button11);
			this->groupBox6->Controls->Add(this->button10);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->textBox9);
			this->groupBox6->Controls->Add(this->textBox8);
			this->groupBox6->Controls->Add(this->label10);
			this->groupBox6->Controls->Add(this->textBox7);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox6->Location = System::Drawing::Point(310, 139);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(370, 169);
			this->groupBox6->TabIndex = 13;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Легирующая смесь";
			this->groupBox6->Visible = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Aquamarine;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(235, 103);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(113, 24);
			this->button12->TabIndex = 19;
			this->button12->Text = L"Добавить ";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainTask::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Aquamarine;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(235, 66);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(113, 24);
			this->button11->TabIndex = 18;
			this->button11->Text = L"Добавить ";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainTask::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Aquamarine;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(235, 27);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(113, 24);
			this->button10->TabIndex = 17;
			this->button10->Text = L"Добавить ";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainTask::button10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(6, 105);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 16);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Цинк (%)";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(157, 105);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(72, 22);
			this->textBox9->TabIndex = 4;
			this->textBox9->Text = L"0,2";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(157, 66);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(72, 22);
			this->textBox8->TabIndex = 3;
			this->textBox8->Text = L"0,5";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(6, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 16);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Марганец (%)";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(157, 28);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(72, 22);
			this->textBox7->TabIndex = 1;
			this->textBox7->Text = L"1";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MainTask::textBox7_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(6, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 16);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Хром (%)";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button13);
			this->groupBox7->Controls->Add(this->textBox11);
			this->groupBox7->Controls->Add(this->label14);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox7->Location = System::Drawing::Point(686, 139);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(370, 82);
			this->groupBox7->TabIndex = 14;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Известь";
			this->groupBox7->Visible = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Aquamarine;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(235, 27);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(113, 24);
			this->button13->TabIndex = 18;
			this->button13->Text = L"Добавить ";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MainTask::button13_Click);
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(157, 29);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(72, 22);
			this->textBox11->TabIndex = 3;
			this->textBox11->Text = L"6";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(6, 32);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 16);
			this->label14->TabIndex = 0;
			this->label14->Text = L"CaO и MgO(%)";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button14);
			this->groupBox8->Controls->Add(this->textBox10);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox8->Location = System::Drawing::Point(686, 226);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(370, 82);
			this->groupBox8->TabIndex = 15;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Добавка горения";
			this->groupBox8->Visible = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Aquamarine;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(235, 27);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(113, 24);
			this->button14->TabIndex = 18;
			this->button14->Text = L"Добавить ";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MainTask::button14_Click);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(157, 29);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(72, 22);
			this->textBox10->TabIndex = 3;
			this->textBox10->Text = L"0,01";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(6, 32);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 16);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Горение(%)";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Ivory;
			this->button5->Location = System::Drawing::Point(664, 82);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 39);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Сгенерировать";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainTask::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Ivory;
			this->button6->Location = System::Drawing::Point(536, 311);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(314, 39);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Закончить рабочий день";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainTask::button6_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Ivory;
			this->button8->Location = System::Drawing::Point(664, 82);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 39);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Сгенерировать";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainTask::button8_Click);
			// 
			// MainTask
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1133, 473);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button2);
			this->Name = L"MainTask";
			this->Text = L"Рабочее окно";
			this->Load += gcnew System::EventHandler(this, &MainTask::MainTask_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:	double weight = 0, weight2 = 0, finalWeight = 0;
	public: int count = 0, count2 = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::ifstream lang("language.txt");
		int a = 0;
		if (lang.is_open())
		{
			lang >> a;
		}
		lang.close();
		try
		{
			weight = Convert::ToDouble(textBox1->Text);
			label1->Hide();
			button1->Hide();
			textBox1->Hide();
			label2->Show();
			button2->Show();
			textBox2->Show();
			button5->Hide();
		}
		catch (System::FormatException^ e)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Wrong format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Неверный формат!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Няправільны фармат!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		std::ifstream lang("language.txt");
		int a = 0;
		if (lang.is_open())
		{
			lang >> a;
		}
		lang.close();
		try
		{
			weight2 = Convert::ToDouble(textBox2->Text);
			std::ofstream weights("DayJob.txt", std::ios::app | std::ios::out);
			if (weight2 - weight >= 100)
			{
				if (a == 1)
				{
					MessageBox::Show(this, "The planned weight cannot be more than the weight of the vat! Correction automatically applied", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				if (a == 2)
				{
					MessageBox::Show(this, "Планируемый вес не может быть больше веса чана! Автоматически применено исправление", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				if (a == 3)
				{
					MessageBox::Show(this, "Запланаваны вага не можа быць больш вагі чана! Аўтаматычна прыменена выпраўленне", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				weight2 = weight2-weight;
			}
			if (a == 1)
			{
				MessageBox::Show(this, "Weight determined!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Вес определен!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Вага вызначана!", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			label4->Text = Convert::ToString(weight);
			if (weights.is_open())
			{
				if (a == 1)
				{
					weights << "Working day: Vat weight / Planned charge weight " << weight << " / " << weight2 << std::endl;
				}
				if (a == 2)
				{
					weights << "Рабочий день: Вес чана/Планируемый вес шихты - " << weight << " / " << weight2 << std::endl;
				}
				if (a == 3)
				{
					weights << "Працоўны дзень: Вага чана / Планаваная вага шыхты " << weight << " / " << weight2 << std::endl;
				}
			}
			weights.close();;
			label2->Hide();
			button2->Hide();
			button5->Hide();
			button8->Hide();
			textBox2->Hide();
			label3->Show();
			label4->Show();
			label5->Show();
			label6->Show();
			groupBox1->Show();
			groupBox6->Show();
			groupBox7->Show();
			groupBox8->Show();
			button3->Show();
			button6->Show();
		}
		catch (System::FormatException^ e)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Wrong format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Неверный формат!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Няправільны фармат!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
private: System::Void MainTask_Load(System::Object^ sender, System::EventArgs^ e) 
{
	std::ifstream lang("language.txt");
	int a = 0;
	if (lang.is_open())
	{
		lang >> a;
	}
	if (a == 1)
	{
		comboBox1->Items->Add("Shavings");
		comboBox1->Items->Add("Scale");
		comboBox1->Items->Add("Casting waste");
		comboBox2->Items->Add("Pipe scrap");
		comboBox2->Items->Add("Waste with phosphorus");
		comboBox3->Items->Add("Copper");
		comboBox3->Items->Add("Bronze");
		comboBox3->Items->Add("Brass");
		comboBox3->Items->Add("Aluminum");
	}
	if (a == 2)
	{
		comboBox1->Items->Add("Стружка");
		comboBox1->Items->Add("Окалина");
		comboBox1->Items->Add("Отходы литья");
		comboBox2->Items->Add("Лом труб");
		comboBox2->Items->Add("Отходы с фосфором");
		comboBox3->Items->Add("Медь");
		comboBox3->Items->Add("Бронза");
		comboBox3->Items->Add("Латунь");
		comboBox3->Items->Add("Алюминий");
	}
	if (a == 3)
	{
		comboBox1->Items->Add("Стружка");
		comboBox1->Items->Add("Акаліна");
		comboBox1->Items->Add("Адходы ліцця");
		comboBox2->Items->Add("Лом труб");
		comboBox2->Items->Add("Адходы з фосфарам");
		comboBox3->Items->Add("Медзь");
		comboBox3->Items->Add("Бронза");
		comboBox3->Items->Add("Латунь");
		comboBox3->Items->Add("Алюміній");
	}
	if (a == 1)
	{
		this->label1->Text = "Enter the weight of the vat (kg)";
		this->label2->Text = "Enter the planned charge weight (kg)";
		this->label3->Text = "Vat weight: ";
		this->label5->Text = "Total weight: ";
		this->label6->Text = "0";
		this->label8->Text = "Weight (kg)";
		this->label9->Text = "Chrome(%)";
		this->label10->Text = "Manganese(%)";
		this->label11->Text = "Zinc(%)";
		this->label12->Text = "Combustion(%)";
		this->label14->Text = "CaO and MgO(%)";
		this->groupBox1->Text = "Scrap metal";
		this->groupBox2->Text = "Iron scrap";
		this->groupBox3->Text = "Cast iron scrap";
		this->groupBox4->Text = "Metals";
		this->groupBox6->Text = "Alloy mixture";
		this->groupBox7->Text = "Lime";
		this->groupBox8->Text = "Burning additive";
		this->button3->Text = "Enter";
		this->button4->Text = "Enter";
		this->button5->Text = "Generate";
		this->button6->Text = "Finish the work day";
		this->button8->Text = "Generate";
		this->button9->Text = "Enter";
		this->button10->Text = "Enter";
		this->button11->Text = "Enter";
		this->button12->Text = "Enter";
		this->button13->Text = "Enter";
		this->button14->Text = "Enter";
		this->Text = "Working window";
	}
	if (a == 2)
	{
		this->label1->Text = "Введите вес чана (кг)";
		this->label2->Text = "Введите планируемый вес шихты (кг)";
		this->label3->Text = "Вес чана: ";
		this->label5->Text = "Суммарный вес: ";
		this->label6->Text = "0";
		this->label8->Text = "Вес (кг)";
		this->label9->Text = "Хром(%)";
		this->label10->Text = "Марганец(%)";
		this->label11->Text = "Цинк(%)";
		this->label12->Text = "Горение(%)";
		this->label14->Text = "CaO и MgO(%)";
		this->groupBox1->Text = "Металлолом";
		this->groupBox2->Text = "Железный лом";
		this->groupBox3->Text = "Чугунный лом";
		this->groupBox4->Text = "Металлы";
		this->groupBox6->Text = "Легирующая смесь";
		this->groupBox7->Text = "Известь";
		this->groupBox8->Text = "Добавка горения";
		this->button3->Text = "Добавить";
		this->button4->Text = "Добавить";
		this->button5->Text = "Сгенерировать";
		this->button6->Text = "Закончить рабочий день";
		this->button8->Text = "Сгенерировать";
		this->button9->Text = "Добавить";
		this->button10->Text = "Добавить";
		this->button11->Text = "Добавить";
		this->button12->Text = "Добавить";
		this->button13->Text = "Добавить";
		this->button14->Text = "Добавить";
		this->Text = "Рабочее окно";
	}
	if (a == 3)
	{
		this->label1->Text = "Увядзіце вагу чана (кг)";
		this->label2->Text = "Увядзіце планаваную вагу шыхты (кг)";
		this->label3->Text = "Вага чана: ";
		this->label5->Text = "Сумарная вага: ";
		this->label6->Text = "0";
		this->label8->Text = "Вага (кг)";
		this->label9->Text = "Хром(%)";
		this->label10->Text = "Марганец(%)";
		this->label11->Text = "Цынк(%)";
		this->label12->Text = "Гарэнне(%)";
		this->label14->Text = "CaO і MgO(%)";
		this->groupBox1->Text = "Металалом";
		this->groupBox2->Text = "Жалезны лом";
		this->groupBox3->Text = "Чыгунны лом";
		this->groupBox4->Text = "Металы";
		this->groupBox6->Text = "Легіруючая сумесь";
		this->groupBox7->Text = "Вапна";
		this->groupBox8->Text = "Дадатак гарэння";
		this->button3->Text = "Дадаць";
		this->button4->Text = "Дадаць";
		this->button5->Text = "Згенераваць";
		this->button6->Text = "Скончыць працоўны дзень";
		this->button8->Text = "Згенераваць";
		this->button9->Text = "Дадаць";
		this->button10->Text = "Дадаць";
		this->button11->Text = "Дадаць";
		this->button12->Text = "Дадаць";
		this->button13->Text = "Дадаць";
		this->button14->Text = "Дадаць";
		this->Text = "Працоўнае акно";
	}
	lang.close();
	int n = 0;
	std::ifstream col("color.txt");
	if (col.is_open())
	{
		col >> n;
	}
	if (n == 1)
	{
		this->BackColor = Color::LightYellow;
		this->label1->ForeColor = Color::Black;
		this->label2->ForeColor = Color::Black;
		this->label3->ForeColor = Color::Black;
		this->label4->ForeColor = Color::Black;
		this->label5->ForeColor = Color::Black;
		this->label6->ForeColor = Color::Black;
		this->label7->ForeColor = Color::Black;
		this->label8->ForeColor = Color::Black;
		this->label9->ForeColor = Color::Black;
		this->label10->ForeColor = Color::Black;
		this->label11->ForeColor = Color::Black;
		this->label12->ForeColor = Color::Black;
		this->label14->ForeColor = Color::Black;
		this->groupBox1->ForeColor = Color::Black;
		this->groupBox2->ForeColor = Color::Black;
		this->groupBox3->ForeColor = Color::Black;
		this->groupBox4->ForeColor = Color::Black;
		this->groupBox6->ForeColor = Color::Black;
		this->groupBox7->ForeColor = Color::Black;
		this->groupBox8->ForeColor = Color::Black;
		this->button3->ForeColor = Color::Black;
		this->button4->ForeColor = Color::Black;
		this->button9->ForeColor = Color::Black;
		this->button10->ForeColor = Color::Black;
		this->button11->ForeColor = Color::Black;
		this->button12->ForeColor = Color::Black;
		this->button13->ForeColor = Color::Black;
		this->button14->ForeColor = Color::Black;
		
	}
	if (n == 2)
	{
		this->BackColor = Color::Crimson;
		this->label1->ForeColor = Color::White;
		this->label2->ForeColor = Color::White;
		this->label3->ForeColor = Color::White;
		this->label4->ForeColor = Color::White;
		this->label5->ForeColor = Color::White;
		this->label6->ForeColor = Color::White;
		this->label7->ForeColor = Color::White;
		this->label8->ForeColor = Color::White;
		this->label9->ForeColor = Color::White;
		this->label10->ForeColor = Color::White;
		this->label11->ForeColor = Color::White;
		this->label12->ForeColor = Color::White;
		this->label14->ForeColor = Color::White;
		this->groupBox1->ForeColor = Color::White;
		this->groupBox2->ForeColor = Color::White;
		this->groupBox3->ForeColor = Color::White;
		this->groupBox4->ForeColor = Color::White;
		this->groupBox6->ForeColor = Color::White;
		this->groupBox7->ForeColor = Color::White;
		this->groupBox8->ForeColor = Color::White;
		this->button3->ForeColor = Color::Black;
		this->button4->ForeColor = Color::Black;
		this->button9->ForeColor = Color::Black;
		this->button10->ForeColor = Color::Black;
		this->button11->ForeColor = Color::Black;
		this->button12->ForeColor = Color::Black;
		this->button13->ForeColor = Color::Black;
		this->button14->ForeColor = Color::Black;
		
	}
	if (n == 3)
	{
		this->BackColor = Color::Black;
		this->label1->ForeColor = Color::White;
		this->label2->ForeColor = Color::White;
		this->label3->ForeColor = Color::White;
		this->label4->ForeColor = Color::White;
		this->label5->ForeColor = Color::White;
		this->label6->ForeColor = Color::White;
		this->label7->ForeColor = Color::White;
		this->label8->ForeColor = Color::White;
		this->label9->ForeColor = Color::White;
		this->label10->ForeColor = Color::White;
		this->label11->ForeColor = Color::White;
		this->label12->ForeColor = Color::White;
		this->label14->ForeColor = Color::White;
		this->groupBox1->ForeColor = Color::White;
		this->groupBox2->ForeColor = Color::White;
		this->groupBox3->ForeColor = Color::White;
		this->groupBox4->ForeColor = Color::White;
		this->groupBox6->ForeColor = Color::White;
		this->groupBox7->ForeColor = Color::White;
		this->groupBox8->ForeColor = Color::White;
		this->button3->ForeColor = Color::Black;
		this->button4->ForeColor = Color::Black;
		this->button9->ForeColor = Color::Black;
		this->button10->ForeColor = Color::Black;
		this->button11->ForeColor = Color::Black;
		this->button12->ForeColor = Color::Black;
		this->button13->ForeColor = Color::Black;
		this->button14->ForeColor = Color::Black;
		
	}
	if (n == 4)
	{
		this->BackColor = DefaultBackColor;
		this->label1->ForeColor = Color::Black;
		this->label2->ForeColor = Color::Black;
		this->label3->ForeColor = Color::Black;
		this->label4->ForeColor = Color::Black;
		this->label5->ForeColor = Color::Black;
		this->label6->ForeColor = Color::Black;
		this->label7->ForeColor = Color::Black;
		this->label8->ForeColor = Color::Black;
		this->label9->ForeColor = Color::Black;
		this->label10->ForeColor = Color::Black;
		this->label11->ForeColor = Color::Black;
		this->label12->ForeColor = Color::Black;
		this->label14->ForeColor = Color::Black;
		this->groupBox1->ForeColor = Color::Black;
		this->groupBox2->ForeColor = Color::Black;
		this->groupBox3->ForeColor = Color::Black;
		this->groupBox4->ForeColor = Color::Black;
		this->groupBox6->ForeColor = Color::Black;
		this->groupBox7->ForeColor = Color::Black;
		this->groupBox8->ForeColor = Color::Black;
		this->button3->ForeColor = Color::Black;
		this->button4->ForeColor = Color::Black;
		this->button9->ForeColor = Color::Black;
		this->button10->ForeColor = Color::Black;
		this->button11->ForeColor = Color::Black;
		this->button12->ForeColor = Color::Black;
		this->button13->ForeColor = Color::Black;
		this->button14->ForeColor = Color::Black;
		
	}
}

private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	int a = 0;
	std::ifstream lang("language.txt");
	if (lang.is_open())
	{
		lang >> a;
	}
	lang.close();
	try 
	{
		double scrapIron = Convert::ToDouble(textBox3->Text);
		if (scrapIron >= weight && weight-scrapIron <= 100)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Too high weight! Metal weight changed automatically", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Слишком высокий вес! Автоматически изменен вес металла", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Занадта высокая вага! Аўтаматычна зменены вага металу", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			scrapIron = 0 + double(rand() % (10 - 0 + 1));
		}
		std::ofstream file("DayJob.txt", std::ios::app | std::ios::out);
		if (!file)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (file.is_open())
		{
			if (a == 1)
			{
				file << "Metal: ";
			}
			if (a == 2)
			{
				file << "Металл: ";
			}
			if (a == 3)
			{
				file << "Метал: ";
			}
		}
		if (comboBox1->SelectedIndex == 0)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Added shavings", Convert::ToString(scrapIron), MessageBoxButtons::OK);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Добавлена стружка", Convert::ToString(scrapIron), MessageBoxButtons::OK);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Дададзена стружка", Convert::ToString(scrapIron), MessageBoxButtons::OK);
			}
			if (file.is_open())
			{
				if (a == 1)
				{
					file << "Shavings - " << scrapIron << "kg; ";
				}
				if (a == 2 || a == 3)
				{
					file << "Стружка - " << scrapIron << "кг; ";
				}
			}
			file.close();
			
		}
		if (comboBox1->SelectedIndex == 1)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Added scale", Convert::ToString(scrapIron), MessageBoxButtons::OK);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Добавлена окалина", Convert::ToString(scrapIron), MessageBoxButtons::OK);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Дададзена акаліна", Convert::ToString(scrapIron), MessageBoxButtons::OK);
			}
			if (file.is_open())
			{
				if (a == 1)
				{
					file << "Scale - " << scrapIron << "kg; ";
				}
				if (a == 2)
				{
					file << "Окалина - " << scrapIron << "кг; ";
				}
				if (a == 3)
				{
					file << "Акаліна - " << scrapIron << "кг; ";
				}
			}
			file.close();

		}
		if (comboBox1->SelectedIndex == 2)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Added casting waste", Convert::ToString(scrapIron), MessageBoxButtons::OK);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Добавлена отходы литья", Convert::ToString(scrapIron), MessageBoxButtons::OK);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Дададзена адходы ліцця", Convert::ToString(scrapIron), MessageBoxButtons::OK);
			}
			if (file.is_open())
			{
				if (a == 1)
				{
					file << "Casting waste - " << scrapIron << "kg; ";
				}
				if (a == 2)
				{
					file << "Отходы литья - " << scrapIron << "кг; ";
				}
				if (a == 3)
				{
					file << "Aдходы ліцця - " << scrapIron << "кг; ";
				}
			}
			file.close();
		}
		finalWeight += scrapIron;
		
	
	}
	catch (System::ArgumentNullException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "The lines are not filled!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Строки не заполнены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Радкі не запоўненыя!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::FormatException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Wrong format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Неверный формат!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Няправільны фармат!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::OverflowException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Too big values!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Слишком большие значения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Занадта вялікія значэнні!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	
	label6->Text = Convert::ToString(finalWeight);

}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double RandWeight = 100 + double(rand() % (2000 - 0 + 1));
	textBox1->Text = Convert::ToString(RandWeight);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double RandWeight = 100 + double(rand() % (2000 - 0 + 1));
	textBox2->Text = Convert::ToString(RandWeight);
}



private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int a = 0;
	std::ifstream lang("language.txt");
	std::ofstream file("DayJob.txt", std::ios::app | std::ios::out);
	if (!file)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	if (lang.is_open())
	{
		lang >> a;
	}
	lang.close();
	if (count2 == 0)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "There are no additives in the mix! ", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Отсутствуют добавки в шихте! ", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Адсутнічаюць дабаўкі ў шыхце! ", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else
	{
		if (a == 1)
		{
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to end the work day?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				if (a == 1)
				{
					MessageBox::Show(this, "All information is recorded in the DayJob.txt file about your working day. Thank you for your work! Please write a report on your work ", "The work day is over!", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				}
				if (a == 2)
				{
					MessageBox::Show(this, "Вся информация записана в файле DayJob.txt о вашем рабочем дне. Спасибо за работу! Пожалуйста, напишите отчёт о своей работе ", "Рабочий день окончен!", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				}
				if (a == 3)
				{
					MessageBox::Show(this, "Уся інфармацыя запісана ў файле DayJob.txt аб вашым працоўным дні. Дзякуй за працу! Калі ласка, напішыце справаздачу аб сваёй працы ", "Рабочы дзень скончаны!", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				}
				FinalForm^ f = gcnew FinalForm;
				f->Show();
				this->Close();
			}
			else
			{
				this->Close();
			}
		}
		if (a == 2)
		{
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Вы уверены, что хотите закончить рабочий день?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				if (a == 1)
				{
					MessageBox::Show(this, "All information is recorded in the DayJob.txt file about your working day. Thank you for your work! Please write a report on your work ", "The work day is over!", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				}
				if (a == 2)
				{
					MessageBox::Show(this, "Вся информация записана в файле DayJob.txt о вашем рабочем дне. Спасибо за работу! Пожалуйста, напишите отчёт о своей работе ", "Рабочий день окончен!", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				}
				if (a == 3)
				{
					MessageBox::Show(this, "Уся інфармацыя запісана ў файле DayJob.txt аб вашым працоўным дні. Дзякуй за працу! Калі ласка, напішыце справаздачу аб сваёй працы ", "Рабочы дзень скончаны!", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				}
				FinalForm^ f = gcnew FinalForm;
				f->Show();
				this->Close();
			}
		}
		if (a == 3)
		{
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Вы ўпэўненыя, што хочаце скончыць працоўны дзень?", "Увага", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				if (a == 1)
				{
					MessageBox::Show(this, "All information is recorded in the DayJob.txt file about your working day. Thank you for your work! Please write a report on your work ", "The work day is over!", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				}
				if (a == 2)
				{
					MessageBox::Show(this, "Вся информация записана в файле DayJob.txt о вашем рабочем дне. Спасибо за работу! Пожалуйста, напишите отчёт о своей работе ", "Рабочий день окончен!", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				}
				if (a == 3)
				{
					MessageBox::Show(this, "Уся інфармацыя запісана ў файле DayJob.txt аб вашым працоўным дні. Дзякуй за працу! Калі ласка, напішыце справаздачу аб сваёй працы ", "Рабочы дзень скончаны!", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				}
				FinalForm^ f = gcnew FinalForm;
				f->Show();
				this->Close();
			}
		}
		if (file.is_open())
		{
			if(a == 1)
		    {
			   file << "Total charge weight: " << finalWeight << std::endl;
		    }
			if (a == 2)
			{
				file << "Суммарный вес шихты: " << finalWeight << std::endl;
			}
			if (a == 3)
			{
				file << "Сумарная вага шыхты: " << finalWeight << std::endl;
			}
		}
		file.close();
	}
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int a = 0;
	std::ifstream lang("language.txt");
	if (lang.is_open())
	{
		lang >> a;
	}
	lang.close();
	try
	{
		double scrapIron2 = Convert::ToDouble(textBox4->Text);
		if (scrapIron2 >= weight && weight - scrapIron2 <= 100)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Too high weight! Metal weight changed automatically", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Слишком высокий вес! Автоматически изменен вес металла", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Занадта высокая вага! Аўтаматычна зменены вага металу", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			scrapIron2 = 0 + double(rand() % (10 - 0 + 1));
		}
		std::ofstream file("DayJob.txt", std::ios::app | std::ios::out);
		if (!file)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (file.is_open())
		{
			if (a == 1)
			{
				file << "Metal: ";
			}
			if (a == 2)
			{
				file << "Металл: ";
			}
			if (a == 3)
			{
				file << "Метал: ";
			}
		}
		if (comboBox2->SelectedIndex == 0)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Added scrap pipes", Convert::ToString(scrapIron2), MessageBoxButtons::OK);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Добавлен лом труб", Convert::ToString(scrapIron2), MessageBoxButtons::OK);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Дададзены лом труб", Convert::ToString(scrapIron2), MessageBoxButtons::OK);
			}
			if (file.is_open())
			{
				if (a == 1)
				{
					file << "Scrap pipes - " << scrapIron2 << "kg; ";
				}
				if (a == 2)
				{
					file << "Лом труб - " << scrapIron2 << "кг; ";
				}
				if (a == 3)
				{
					file << "Лом труб - " << scrapIron2 << "кг; ";
				}
			}
			file.close();

		}
		if (comboBox2->SelectedIndex == 1)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Added waste with phosphorus", Convert::ToString(scrapIron2), MessageBoxButtons::OK);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Добавлены отходы с фосфором", Convert::ToString(scrapIron2), MessageBoxButtons::OK);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Дададзены адходы з фосфарам", Convert::ToString(scrapIron2), MessageBoxButtons::OK);
			}
			if (file.is_open())
			{
				if (a == 1)
				{
					file << "Waste with phosphorus - " << scrapIron2 << "kg; ";
				}
				if (a == 1)
				{
					file << "Отходы с фосфором - " << scrapIron2 << "кг; ";
				}
				if (a == 1)
				{
					file << "Aдходы з фосфарам - " << scrapIron2 << "кг; ";
				}
			}
			file.close();

		}
		finalWeight += scrapIron2;
		
	}
	catch (System::ArgumentNullException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "The lines are not filled!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Строки не заполнены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Радкі не запоўненыя!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::FormatException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Wrong format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Неверный формат!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Няправільны фармат!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::OverflowException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Too big values!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Слишком большие значения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Занадта вялікія значэнні!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	label6->Text = Convert::ToString(finalWeight);

	
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int a = 0;
	std::ifstream lang("language.txt");
	if (lang.is_open())
	{
		lang >> a;
	}
	lang.close();
	try
	{
		double Irons = Convert::ToDouble(textBox5->Text);
		if (Irons >= weight && weight - Irons <= 100)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Too high weight! Metal weight changed automatically", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Слишком высокий вес! Автоматически изменен вес металла", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Занадта высокая вага! Аўтаматычна зменены вага металу", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			Irons = 0 + double(rand() % (10 - 0 + 1));
		}
		std::ofstream file("DayJob.txt", std::ios::app | std::ios::out);
		if (!file)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (file.is_open())
		{
			if (a == 1)
			{
				file << "Metal: ";
			}
			if (a == 2)
			{
				file << "Металл: ";
			}
			if (a == 3)
			{
				file << "Метал: ";
			}
		}
		if (comboBox3->SelectedIndex == 0)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Added copper", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Добавлена медь", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Дададзена медзь", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (file.is_open())
			{
				if (a == 1)
				{
					file << "Copper - " << Irons << "kg; ";
				}
				if (a == 2)
				{
					file << "Медь - " << Irons << "кг; ";
				}
				if (a == 3)
				{
					file << "Медзь - " << Irons << "кг; ";
				}
			}
			file.close();

		}
		if (comboBox3->SelectedIndex == 1)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Added bronze", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Добавлена бронза", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Дададзена бронза", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (file.is_open())
			{
				if (a == 1)
				{
					file << "Bronze - " << Irons << "kg; ";
				}
				if (a == 2)
				{
					file << "Бронза - " << Irons << "кг; ";
				}
				if (a == 3)
				{
					file << "Бронза - " << Irons << "кг; ";
				}

			}
			file.close();

		}
		if (comboBox3->SelectedIndex == 2)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Added brass", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Добавлена латунь", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Дададзена латунь", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (file.is_open())
			{
				if (a == 1)
				{
					file << "Brass - " << Irons << "kg; ";
				}
				if (a == 2 || a == 3)
				{
					file << "Латунь - " << Irons << "кг; ";
				}
				
			}
			file.close();
		}
		if (comboBox3->SelectedIndex == 3)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Added aluminum", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Добавлен алюминий", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Дададзены алюміній", Convert::ToString(Irons), MessageBoxButtons::OK);
			}
			if (file.is_open())
			{
				if (a == 1)
				{
					file << "Aluminum - " << Irons << "kg; ";
				}
				if (a == 2)
				{
					file << "Алюминий - " << Irons << "кг; ";
				}
				if (a == 3)
				{
					file << "Aлюміній - " << Irons << "кг; ";
				}
			}
			file.close();
		}
		finalWeight += Irons;
		

	}
	catch (System::ArgumentNullException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "The lines are not filled!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Строки не заполнены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Радкі не запоўненыя!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::FormatException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Wrong format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Неверный формат!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Няправільны фармат!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::OverflowException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Too big values!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Слишком большие значения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Занадта вялікія значэнні!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	label6->Text = Convert::ToString(finalWeight);
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
{
	count2 += 1;
	double f = 0;
	int a = 0;
	std::ifstream lang("language.txt");
	if (lang.is_open())
	{
		lang >> a;
	}
	lang.close();
	try
	{
		double Chrome = Convert::ToDouble(textBox7->Text);
		std::ofstream file("DayJob.txt", std::ios::app | std::ios::out);
		if (!file)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		f = finalWeight * (Chrome / 100);
		finalWeight += f;
		if (file.is_open())
		{
			if (a == 1)
			{
				file << std::endl << "Added to the vat alloying mixture: Chromium - " << f << "kg " << Chrome << " (%); " << std::endl;
			}
			if (a == 2)
			{
				file << std::endl << "Добавлено в чан легирующая смесь: Хром - " << f << "кг " << Chrome << " (%); " << std::endl;
			}
			if (a == 3)
			{
				file << std::endl << "Дададзено ў чан легуючая сумесь: Хром - " << f << "кг " << Chrome << " (%); " << std::endl;
			}
		}
		if (finalWeight >= weight)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Total weight too high! Repeat charge entry", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Слишком высокий суммарный вес! Повторите ввод шихты", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Занадта высокая сумарная вага! Паўторыце ўвод шыхты", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			finalWeight = 0;
		}

	}
	catch (System::ArgumentNullException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "The lines are not filled!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Строки не заполнены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Радкі не запоўненыя!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::FormatException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Wrong format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Неверный формат!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Няправільны фармат!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::OverflowException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Too big values!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Слишком большие значения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Занадта вялікія значэнні!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	label6->Text = Convert::ToString(finalWeight);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) 
{
	count2 += 1;
	double f = 0;
	int a = 0;
	std::ifstream lang("language.txt");
	if (lang.is_open())
	{
		lang >> a;
	}
	lang.close();
	try
	{

		double Marganec = Convert::ToDouble(textBox8->Text);
		std::ofstream file("DayJob.txt", std::ios::app | std::ios::out);
		if (!file)
		{

			if (a == 1)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		f = finalWeight * (Marganec / 100);
		finalWeight += f;
		if (file.is_open())
		{
			if (a == 1)
			{
				file << std::endl << "Added to the vat alloying mixture: Manganese - " << f << "kg " << Marganec << " (%); " << std::endl;
			}
			if (a == 2)
			{
				file << std::endl << "Добавлено в чан легирующая смесь: Марганец - " << f << "кг " << Marganec << " (%); " << std::endl;
			}
			if (a == 3)
			{
				file << std::endl << "Паведамленні ў чан легавальная сумесь: Марганец - " << f << "кг " << Marganec << " (%); " << std::endl;
			}
		}
		
		if (finalWeight >= weight)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Total weight too high! Repeat charge entry", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Слишком высокий суммарный вес! Повторите ввод шихты", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Занадта высокая сумарная вага! Паўторыце ўвод шыхты", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			finalWeight = 0;
		}

	}
	catch (System::ArgumentNullException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "The lines are not filled!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Строки не заполнены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Радкі не запоўненыя!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::FormatException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Wrong format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Неверный формат!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Няправільны фармат!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::OverflowException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Too big values!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Слишком большие значения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Занадта вялікія значэнні!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	label6->Text = Convert::ToString(finalWeight);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
{
	count2 += 1;
	double f = 0;
	int a = 0;
	std::ifstream lang("language.txt");
	if (lang.is_open())
	{
		lang >> a;
	}
	lang.close();
	try
	{
		double Zink = Convert::ToDouble(textBox9->Text);
		std::ofstream file("DayJob.txt", std::ios::app | std::ios::out);
		if (!file)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		f = finalWeight * (Zink / 100);
		finalWeight += f;
		if (file.is_open())
		{
			if (a == 1)
			{
				file << std::endl << "Added to the vat alloying mixture: Zinc - " << f << "kg " << Zink << " (%); " << std::endl;
			}
			if (a == 2)
			{
				file << std::endl << "Добавлено в чан легирующая смесь: Цинк - " << f << "кг " << Zink << " (%); " << std::endl;
			}
			if (a == 3)
			{
				file << std::endl << "Паведамленні ў чан легіруючая сумесь: Цынк - " << f << "кг " << Zink << " (%); " << std::endl;
			}
		}
		if (finalWeight >= weight)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Total weight too high! Repeat charge entry", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Слишком высокий суммарный вес! Повторите ввод шихты", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Занадта высокая сумарная вага! Паўторыце ўвод шыхты", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			finalWeight = 0;
		}

	}
	catch (System::ArgumentNullException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "The lines are not filled!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Строки не заполнены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Радкі не запоўненыя!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::FormatException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Wrong format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Неверный формат!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Няправільны фармат!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::OverflowException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Too big values!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Слишком большие значения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Занадта вялікія значэнні!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	label6->Text = Convert::ToString(finalWeight);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) 
{
	count2 += 1;
	double f = 0;
	int a = 0;
	std::ifstream lang("language.txt");
	if (lang.is_open())
	{
		lang >> a;
	}
	lang.close();
	try
	{
		double Lime = Convert::ToDouble(textBox11->Text);
		std::ofstream file("DayJob.txt", std::ios::app | std::ios::out);
		if (!file)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		f = finalWeight * (Lime / 100);
		finalWeight += f;
		if (file.is_open())
		{
			if (a == 1)
			{
				file << std::endl << "Lime added to vat: MgO and CaO - " << f << "kg " << Lime << " (%); " << std::endl;
			}
			if (a == 2)
			{
				file << std::endl << "Добавлена в чан известь: MgO и CaO - " << f << "кг " << Lime << " (%); " << std::endl;
			}
			if (a == 3)
			{
				file << std::endl << "Дададзена ў чан вапна: MgO і CaO - " << f << "кг " << Lime << " (%); " << std::endl;
			}
		}
		if (finalWeight >= weight)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Total weight too high! Repeat charge entry", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Слишком высокий суммарный вес! Повторите ввод шихты", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Занадта высокая сумарная вага! Паўторыце ўвод шыхты", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			finalWeight = 0;
		}

	}
	catch (System::ArgumentNullException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "The lines are not filled!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Строки не заполнены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Радкі не запоўненыя!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::FormatException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Wrong format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Неверный формат!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Няправільны фармат!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::OverflowException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Too big values!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Слишком большие значения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Занадта вялікія значэнні!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	label6->Text = Convert::ToString(finalWeight);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) 
{
	count2 += 1;
	int a = 0;
	std::ifstream lang("language.txt");
	if (lang.is_open())
	{
		lang >> a;
	}
	lang.close();
	try
	{
		double f = 0;
		double Combustion = Convert::ToDouble(textBox10->Text);
		std::ofstream file("DayJob.txt", std::ios::app | std::ios::out);
		if (!file)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		f = finalWeight * (Combustion / 100);
		finalWeight += f;
		if (file.is_open())
		{
			if (a == 1)
			{
				file << std::endl << "Added to vat burning - " << f << "kg " << Combustion << " (%); " << std::endl;
			}
			if (a == 2)
			{
				file << std::endl << "Добавлено в чан горение - " << f << "кг " << Combustion << " (%); " << std::endl;
			}
			if (a == 3)
			{
				file << std::endl << "Дададзено ў чан гарэнне - " << f << "кг " << Combustion << " (%); " << std::endl;
			}
		}
		if (finalWeight >= weight)
		{
			if (a == 1)
			{
				MessageBox::Show(this, "Total weight too high! Repeat charge entry", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 2)
			{
				MessageBox::Show(this, "Слишком высокий суммарный вес! Повторите ввод шихты", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			if (a == 3)
			{
				MessageBox::Show(this, "Занадта высокая сумарная вага! Паўторыце ўвод шыхты", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			finalWeight = 0;
		}

	}
	catch (System::ArgumentNullException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "The lines are not filled!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Строки не заполнены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Радкі не запоўненыя!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::FormatException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Wrong format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Неверный формат!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Няправільны фармат!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::OverflowException^ e)
	{
		if (a == 1)
		{
			MessageBox::Show(this, "Too big values!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Слишком большие значения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Занадта вялікія значэнні!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	label6->Text = Convert::ToString(finalWeight);
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
