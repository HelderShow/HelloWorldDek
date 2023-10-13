#pragma once
#include <fstream>
namespace CursovoiProject20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Registr
	/// </summary>
	public ref class Registr : public System::Windows::Forms::Form
	{
	public:	
		Registr(void)
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
		~Registr()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(82, 65);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 37);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(82, 130);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 37);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(82, 200);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(213, 37);
			this->textBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Aquamarine;
			this->button1->Location = System::Drawing::Point(82, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Регистрация";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Registr::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Логин";
			this->label1->Click += gcnew System::EventHandler(this, &Registr::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(79, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Пароль";
			this->label2->Click += gcnew System::EventHandler(this, &Registr::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(79, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Повторите пароль";
			this->label3->Click += gcnew System::EventHandler(this, &Registr::label3_Click);
			// 
			// Registr
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 353);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Registr";
			this->Text = L"Регистрация";
			this->Load += gcnew System::EventHandler(this, &Registr::Registr_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::string MarshalString(String^ s, std::string& os)
		{
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return os;
		}
		void Login_Password(String^ login, String^ password, String^ password2)
		{
			std::ofstream log("log.txt", std::ios::app);
			std::string a = "";
			std::string a1 = MarshalString(login, a);
			std::ifstream lang("language.txt");
			int m = 0;
			if (lang.is_open())
			{
				lang >> m;
			}
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
				log << a1 << std::endl;
			}
			log.close();
			std::ofstream pass("pass.txt", std::ios::app);
			std::string b = MarshalString(password, a);
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
			if (password == password2 && textBox1->Text != " ")
			{
				if (pass.is_open())
				{
					pass << b << std::endl;
				}
				pass.close();
				if (m == 1)
				{
					MessageBox::Show(this, "Account created successfully!", "Warning", MessageBoxButtons::OK);
				}
				if (m == 2)
				{
					MessageBox::Show(this, "Аккаунт успешно создан!", "Внимание", MessageBoxButtons::OK);
				}
				if (m == 3)
				{
					MessageBox::Show(this, "Акаўнт паспяхова створаны!", "Увага", MessageBoxButtons::OK);
				}
			}
			else if (textBox1->Text == " " || textBox2->Text == " " || textBox2->Text == " ")
			{
				if (m == 1)
				{
					MessageBox::Show(this, "Fill out the form to the end!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				if (m == 2)
				{
					MessageBox::Show(this, "Заполните форму до конца!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				if (m == 3)
				{
					MessageBox::Show(this, "Запоўніце форму да канца!", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else if (textBox1->Text != " " && textBox2->Text == " " || textBox2->Text == " ")
			{
				if (m == 1)
				{
					MessageBox::Show(this, "Fill out the form to the end!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				if (m == 2)
				{
					MessageBox::Show(this, "Заполните форму до конца!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				if (m == 3)
				{
					MessageBox::Show(this, "Запоўніце форму да канца!", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else if (password != password2)
			{
				if (m == 1)
				{
					MessageBox::Show(this, "Password mismatch! Repeat one more time.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				if (m == 2)
				{
					MessageBox::Show(this, "Пароли не совпадают! Повторите ещё раз.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				if (m == 3)
				{
					MessageBox::Show(this, "Паролі не супадаюць! Паўтарыце яшчэ раз.", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
private: System::Void Registr_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		int n = 0;
		std::ifstream col("color.txt");
		if (!col)
		{
			MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
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
		}
		if (n == 2)
		{
			this->BackColor = Color::Crimson;
			this->label1->ForeColor = Color::White;
			this->label2->ForeColor = Color::White;
			this->label3->ForeColor = Color::White;
		}
		if (n == 3)
		{
			this->BackColor = Color::Black;
			this->label1->ForeColor = Color::White;
			this->label2->ForeColor = Color::White;
			this->label3->ForeColor = Color::White;
		}
		if (n == 4)
		{
			this->BackColor = DefaultBackColor;
			this->label1->ForeColor = Color::Black;
			this->label2->ForeColor = Color::Black;
			this->label3->ForeColor = Color::Black;
		}
		std::ifstream lang("language.txt");
		int a = 0;
		if (lang.is_open())
		{
			lang >> a;
		}
		if (a == 1)
		{
			this->label1->Text = "Login";
			this->label2->Text = "Password";
			this->label3->Text = "Repeat password";
			this->button1->Text = "Register";
			this->Text = "Registration";
		}
		if (a == 2)
		{
			this->label1->Text = "Логин";
			this->label2->Text = "Пароль";
			this->label3->Text = "Повторите пароль";
			this->button1->Text = "Зарегистрироваться";
			this->Text = "Регистрация";
		}
		if (a == 3)
		{
			this->label1->Text = "Лагін";
			this->label2->Text = "Пароль";
			this->label3->Text = "Паўтарыце пароль";
			this->button1->Text = "Зарэгістравацца";
			this->Text = "Рэгістрацыя";
		}
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ login = textBox1->Text;
	String^ password = textBox2->Text;
	String^ password2 = textBox3->Text;
	Login_Password(login, password, password2);
}
};

}
