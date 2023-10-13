#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "FirstForm.h"
#include "Registr.h"
#include "MainTask.h"
namespace CursovoiProject20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FirstForm
	/// </summary>
	public ref class FirstForm : public System::Windows::Forms::Form
	{
	public:
		FirstForm(void)
		{


			InitializeComponent();


		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FirstForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FirstForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Honeydew;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FirstForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			resources->ApplyResources(this->comboBox1, L"comboBox1");
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FirstForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// linkLabel1
			// 
			resources->ApplyResources(this->linkLabel1, L"linkLabel1");
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->TabStop = true;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &FirstForm::linkLabel1_LinkClicked);
			// 
			// radioButton1
			// 
			resources->ApplyResources(this->radioButton1, L"radioButton1");
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &FirstForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			resources->ApplyResources(this->radioButton2, L"radioButton2");
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &FirstForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			resources->ApplyResources(this->radioButton3, L"radioButton3");
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &FirstForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			resources->ApplyResources(this->radioButton4, L"radioButton4");
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &FirstForm::radioButton4_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Blue;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FirstForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FirstForm::button3_Click);
			// 
			// FirstForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"FirstForm";
			this->Load += gcnew System::EventHandler(this, &FirstForm::FirstForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int num;

	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		Registr^ f = gcnew Registr;
		f->Show();

	}
	private: System::Void FirstForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		
		comboBox1->Items->Add("Английский (США)");
		comboBox1->Items->Add("Русский");
		comboBox1->Items->Add("Белорусский");
		std::ifstream lang("language.txt");
		std::ifstream col("color.txt");
		int c = 0;
		if (col.is_open())
		{
			col >> c;
		}
		if (c == 1)
		{
			this->BackColor = Color::LightYellow;
			this->label1->ForeColor = Color::Black;
			this->label2->ForeColor = Color::Black;
			this->label3->ForeColor = Color::Black;
			this->label4->ForeColor = Color::Black;
			this->groupBox1->ForeColor = Color::Black;
		}
		if (c == 2)
		{
			this->BackColor = Color::Crimson;
			this->label1->ForeColor = Color::White;
			this->label2->ForeColor = Color::White;
			this->label3->ForeColor = Color::White;
			this->label4->ForeColor = Color::White;
			this->groupBox1->ForeColor = Color::White;
		}
		if (c == 3)
		{
			this->BackColor = Color::Black;
			this->label1->ForeColor = Color::White;
			this->label2->ForeColor = Color::White;
			this->label3->ForeColor = Color::White;
			this->label4->ForeColor = Color::White;
			this->groupBox1->ForeColor = Color::White;
		}
		if (c == 4)
		{
			this->BackColor = DefaultBackColor;
			this->label1->ForeColor = Color::Black;
			this->label2->ForeColor = Color::Black;
			this->label3->ForeColor = Color::Black;
			this->label4->ForeColor = Color::Black;
			this->groupBox1->ForeColor = Color::Black;
		}
		int a = 0;
		if (lang.is_open())
		{
			lang >> a;
		}
		if (a == 1)
		{
			this->label1->Text = "Welcome! Login to continue working";
			this->label2->Text = "Login";
			this->label3->Text = "Password";
			this->label4->Text = "Language";
			this->linkLabel1->Text = "Don't have an account? Register!";
			this->groupBox1->Text = "Background color";
			this->radioButton1->Text = "Yellow";
			this->radioButton2->Text = "Red";
			this->radioButton3->Text = "Black";
			this->radioButton4->Text = "Default";
			this->button1->Text = "Login";
			this->button3->Text = "Exit";
			this->Text = "Main window";
		}
		if (a == 2)
		{
			this->label1->Text = "Добро пожаловать! Авторизуйтесь для продолжения работы";
			this->label2->Text = "Логин";
			this->label3->Text = "Пароль";
			this->label4->Text = "Язык";
			this->linkLabel1->Text = "Нет аккаунта? Зарегистрируйтесь!";
			this->groupBox1->Text = "Цвет фона";
			this->radioButton1->Text = "Желтый";
			this->radioButton2->Text = "Красный";
			this->radioButton3->Text = "Чёрный";
			this->radioButton4->Text = "По умолчанию";
			this->button1->Text = "Вход";
			this->button3->Text = "Выход";
			this->Text = "Главное окно";
		}
		if (a == 3)
		{
			this->label1->Text = "Сардэчна запрашаем! Аўтарызуйцеся для працягу працы";
			this->label2->Text = "Лагін";
			this->label3->Text = "Пароль";
			this->label4->Text = "Мова";
			this->linkLabel1->Text = "Няма акаўента? Зарэгіструйцеся!";
			this->groupBox1->Text = "Колер фону";
			this->radioButton1->Text = "Жоўты";
			this->radioButton2->Text = "Чырвоны";
			this->radioButton3->Text = "Чорны";
			this->radioButton4->Text = "Па змаўчанні";
			this->button1->Text = "Уваход";
			this->button3->Text = "Вынахад";
			this->Text = "Галоўнае акно";
		}
	}
	public:
		std::string MarshalString(String^ s, std::string& os)
		{
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return os;
		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ login = textBox1->Text;
		String^ password = textBox2->Text;
		std::ifstream lang("language.txt");
		std::ifstream log("log.txt", std::ios::in);
		std::ifstream pass("pass.txt", std::ios::in);
		std::string tmp, tmp2;
		std::string a = "";
		std::string a1 = MarshalString(login, a);
		std::string b1 = MarshalString(password, a);
		int m = 0;
		if (lang.is_open())
		{
			lang >> m;
		}
		lang.close();
		if (m == 1)
		{
			if (!log)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (m == 2)
		{
			if (!log)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (m == 3)
		{
			if (!log)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (log.is_open())
		{
			while (!log.eof())
			{
				log >> tmp;
			}
		}
		log.close();
		if (m == 1)
		{
			if (!pass)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (m == 2)
		{
			if (!pass)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (m == 3)
		{
			if (!pass)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if (pass.is_open())
		{
			while (!pass.eof())
			{
				pass >> tmp2;
			}
		}
		pass.close();
		if (m == 1)
		{
			if (a1 == tmp && b1 == tmp2)
			{
				MessageBox::Show(this, "Login successfully!", "Work day started", MessageBoxButtons::OK);
				MainTask^ f2 = gcnew MainTask;
				f2->Show();
			}
			else if (b1 != tmp2 && a1 == tmp)
			{
				MessageBox::Show(this, "Enter password", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (b1 == tmp2 && a1 != tmp)
			{
				MessageBox::Show(this, "Enter login", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				MessageBox::Show(this, "Account not found! Check if the username and password are correct", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		if (m == 2)
		{
			if (a1 == tmp && b1 == tmp2)
			{
				MessageBox::Show(this, "Вход успешно выполнен!", "Рабочий день начат", MessageBoxButtons::OK);
				MainTask^ f2 = gcnew MainTask;
				f2->Show();
			}
			else if (b1 != tmp2 && a1 == tmp)
			{
				MessageBox::Show(this, "Введите пароль", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (b1 == tmp2 && a1 != tmp)
			{
				MessageBox::Show(this, "Введите логин", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				MessageBox::Show(this, "Аккаунт не найден! Проверьте правильность логина и пароля", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		if (m == 3)
		{
			if (a1 == tmp && b1 == tmp2)
			{
				MessageBox::Show(this, "Уваход паспяхова выкананы!", "Рабочы дзень пачаты", MessageBoxButtons::OK);
				MainTask^ f2 = gcnew MainTask;
				f2->Show();
			}
			else if (b1 != tmp2 && a1 == tmp)
			{
				MessageBox::Show(this, "Увядзіце пароль", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (b1 == tmp2 && a1 != tmp)
			{
				MessageBox::Show(this, "Увядзіце лагін", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				MessageBox::Show(this, "Акаўнт не знойдзены! Праверце правільнасць лагіна і пароля", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		num = 1;
		this->BackColor = Color::LightYellow;
		this->label1->ForeColor = Color::Black;
		this->label2->ForeColor = Color::Black;
		this->label3->ForeColor = Color::Black;
		this->label4->ForeColor = Color::Black;
		this->groupBox1->ForeColor = Color::Black;
		std::ofstream col("color.txt", std::ios::out);
		if (!col)
		{
			MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (col.is_open())
		{
			col << num << std::endl;
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		num = 2;
		this->BackColor = Color::Crimson;
		this->label1->ForeColor = Color::White;
		this->label2->ForeColor = Color::White;
		this->label3->ForeColor = Color::White;
		this->label4->ForeColor = Color::White;
		this->groupBox1->ForeColor = Color::White;
		std::ofstream col("color.txt", std::ios::out);
		if (!col)
		{
			MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (col.is_open())
		{
			col << num << std::endl;
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		num = 3;
		this->BackColor = Color::Black;
		this->label1->ForeColor = Color::White;
		this->label2->ForeColor = Color::White;
		this->label3->ForeColor = Color::White;
		this->label4->ForeColor = Color::White;
		this->groupBox1->ForeColor = Color::White;
		std::ofstream col("color.txt", std::ios::out);
		if (!col)
		{
			MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (col.is_open())
		{
			col << num << std::endl;
		}
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		num = 4;
		this->BackColor = DefaultBackColor;
		this->label1->ForeColor = Color::Black;
		this->label2->ForeColor = Color::Black;
		this->label3->ForeColor = Color::Black;
		this->label4->ForeColor = Color::Black;
		this->groupBox1->ForeColor = Color::Black;
		std::ofstream col("color.txt", std::ios::out);
		if (!col)
		{
			MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (col.is_open())
		{
			col << num << std::endl;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int a = 0;
		std::ifstream lang("language.txt");
		if (lang.is_open())
		{
			lang >> a;
		}
		if (a == 1)
		{
			MessageBox::Show(this, "Application developed by Alexander Dekanchuk T-218 at 0:07 06/19/2023. In the application, we will create a mixture (metal alloy) from scrap metal and adding lime / combustion / alloying mixture to it. All data is recorded in separate files: the log.txt and pass.txt files store passwords and user logins, the DayJob.txt file stores the weight of the vat and the desired charge weight during the working day, stores all the detailed information about the creation of the charge: its composition and weight. Stores the user's progress report. Have fun using the application and support the developer with a good mark :)", "Information", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "Приложение разработано Александром Деканчуком Т-218 в 0:07 19.06.2023. В приложении мы будем создавать шихту (сплав металлов) из металлолома и добавления в него извести/горения/легирующей смеси. Все данные записываются в отдельные файлы: файл log.txt и pass.txt сохраняют пароли и логины пользователей, файл DayJob.txt хранит вес чана и желаемый вес шихты в течении рабочего дня, хранит всю подробную информацию о создании шихты: его состав и вес. Хранит отчет пользователя о проделанной работе. Удачного пользования приложением и поддержите разработчика хорошей отметкой :) ", "Справка", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "Прыкладанне распрацавана Аляксандрам Дзеканчуком Т-218 у 0:07 19.06.2023. У дадатку мы будзем ствараць шыхту (сплаў металаў) з металалому і дадання ў яго вапны/гарэння/легіруючай сумесі. Усе дадзеныя запісваюцца ў асобныя файлы: файл log.txt і pass.txt захоўваюць паролі і лагіны карыстачоў, файл weight.txt захоўвае вагу чана і жаданая вага шыхты на працягу працоўнага дня, захоўвае ўсю падрабязную інфармацыю аб стварэнні шыхты: яго склад і вага. Захоўвае справаздачу карыстальніка аб праведзенай працы. Удалага карыстання дадаткам і падтрымайце распрацоўшчыка добрай адзнакай :)", "Даведка", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int a = 0;
		std::ifstream lang("language.txt");
		if (lang.is_open())
		{
			lang >> a;
		}
		if (a == 1)
		{
			MessageBox::Show(this, "With love, your Alexander...", "Exit", MessageBoxButtons::OK);
		}
		if (a == 2)
		{
			MessageBox::Show(this, "С любовью, ваш Александр...", "Выход", MessageBoxButtons::OK);
		}
		if (a == 3)
		{
			MessageBox::Show(this, "З любоўю, ваш Аляксандр...", "Вынахад", MessageBoxButtons::OK);
		}
		this->Close();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (comboBox1->SelectedIndex == 0)
		{
			this->label1->Text = "Welcome! Login to continue working";
			this->label2->Text = "Login";
			this->label3->Text = "Password";
			this->label4->Text = "Language";
			this->linkLabel1->Text = "Don't have an account? Register!";
			this->groupBox1->Text = "Background color";
			this->radioButton1->Text = "Yellow";
			this->radioButton2->Text = "Red";
			this->radioButton3->Text = "Black";
			this->radioButton4->Text = "Default";
			this->button1->Text = "Login";
			this->button3->Text = "Exit";
			this->Text = "Main window";
			std::ofstream lang("language.txt");
			if (!lang)
			{
				MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (lang.is_open())
			{
				lang << 1;
			}
			lang.close();

		}
		if (comboBox1->SelectedIndex == 1)
		{
			this->label1->Text = "Добро пожаловать! Авторизуйтесь для продолжения работы";
			this->label2->Text = "Логин";
			this->label3->Text = "Пароль";
			this->label4->Text = "Язык";
			this->linkLabel1->Text = "Нет аккаунта? Зарегистрируйтесь!";
			this->groupBox1->Text = "Цвет фона";
			this->radioButton1->Text = "Желтый";
			this->radioButton2->Text = "Красный";
			this->radioButton3->Text = "Чёрный";
			this->radioButton4->Text = "По умолчанию";
			this->button1->Text = "Вход";
			this->button3->Text = "Выход";
			this->Text = "Главное окно";
			std::ofstream lang("language.txt");
			if (!lang)
			{
				MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (lang.is_open())
			{
				lang << 2;
			}
			lang.close();
		}
		if (comboBox1->SelectedIndex == 2)
		{
			this->label1->Text = "Сардэчна запрашаем! Аўтарызуйцеся для працягу працы";
			this->label2->Text = "Лагін";
			this->label3->Text = "Пароль";
			this->label4->Text = "Мова";
			this->linkLabel1->Text = "Няма акаўента? Зарэгіструйцеся!";
			this->groupBox1->Text = "Колер фону";
			this->radioButton1->Text = "Жоўты";
			this->radioButton2->Text = "Чырвоны";
			this->radioButton3->Text = "Чорны";
			this->radioButton4->Text = "Па змаўчанні";
			this->button1->Text = "Уваход";
			this->button3->Text = "Вынахад";
			this->Text = "Галоўнае акно";
			std::ofstream lang("language.txt");
			if (!lang)
			{
				MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (lang.is_open())
			{
				lang << 3;
			}
			lang.close();
		}
	}
	};
}
