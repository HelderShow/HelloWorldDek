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
	/// Сводка для FinalForm
	/// </summary>
	public ref class FinalForm : public System::Windows::Forms::Form
	{
	public:
		FinalForm(void)
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
		~FinalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(571, 219);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Ivory;
			this->button1->Location = System::Drawing::Point(238, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Отправить отчёт";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FinalForm::button1_Click);
			// 
			// FinalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 288);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"FinalForm";
			this->Text = L"Окно заполнения отчёта";
			this->Load += gcnew System::EventHandler(this, &FinalForm::FinalForm_Load);
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int m = 0;
		std::ifstream lang("language.txt");
		if (lang.is_open())
		{
			lang >> m;
		}
		try
		{
			String^ info = textBox1->Text;
			std::ofstream file("DayJob.txt", std::ios::app | std::ios::out);
			std::string a = "";
			std::string a1 = MarshalString(info, a);
			if (!file)
			{
				if (m == 1)
				{
					if (!file)
					{
						MessageBox::Show(this, "Error opening file!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				if (m == 2)
				{
					if (!file)
					{
						MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				if (m == 3)
				{
					if (!file)
					{
						MessageBox::Show(this, "Памылка адкрыцця файла!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}
			if (file.is_open())
			{
				file << a1 << std::endl;
			}
			file.close();
			this->Close();

		}
		catch (System::ArgumentNullException^ e)
		{
			if (m == 1)
			{
				MessageBox::Show(this, "The lines are not filled!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (m == 2)
			{
				MessageBox::Show(this, "Строки не заполнены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			if (m == 3)
			{
				MessageBox::Show(this, "Радкі не запоўненыя!", "Памылка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void FinalForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		int n = 0, a = 0;
		std::ifstream col("color.txt");
		if (col.is_open())
		{
			col >> n;
		}
		if (n == 1)
		{
			this->BackColor = Color::LightYellow;
			
		}
		if (n == 2)
		{
			this->BackColor = Color::Crimson;
			
		}
		if (n == 3)
		{
			this->BackColor = Color::Black;
		
		}
		if (n == 4)
		{
			this->BackColor = DefaultBackColor;
			
		}
		std::ifstream lang("language.txt");
		if (lang.is_open())
		{
			lang >> a;
		}
		lang.close();
		if (a == 1)
		{
			this->Text = "Report completion window";
			this->button1->Text = "Submit a report";
		}
		if (a == 2)
		{
			this->Text = "Окно заполнения отчёта";
			this->button1->Text = "Отправить отчёт";
		}
		if (a == 3)
		{
			this->Text = "Акно запаўнення справаздачы";
			this->button1->Text = "Адправіць справаздачу";
		}
	}
	};
}
