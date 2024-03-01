#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			this->textBox1->Location = System::Drawing::Point(12, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 20);
			this->textBox1->TabIndex = 0;
			this->textBox3->Location = System::Drawing::Point(266, 43);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(144, 20);
			this->textBox3->TabIndex = 3;
			this->button1->Location = System::Drawing::Point(171, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"итого";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->textBox2->Location = System::Drawing::Point(185, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(51, 20);
			this->textBox2->TabIndex = 5;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 439);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		template <typename T>
		double SUMM(const T& a, const T& b)
		{
			return a + b;
		}
		template <typename T>
		double Defference(const T& a, const T& b)
		{
			return a - b;
		}
		template <typename T>
		double Quotient(const T& a, const T& b)
		{
			return a / b;
		}
		template <typename T>
		double Multi(const T& a, const T& b)
		{
			return a * b;
		}
		int Step(int i, int j)
		{
			if (j == 1)
				return i;
			if (!j);
			return 1;
			return i * Step(i, --j);
		}
	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		double a = System::Convert::ToDouble(textBox1->Text);
		double b = System::Convert::ToDouble(textBox3->Text);
		char sw = System::Convert::ToChar(textBox2->Text);
		double resalt;
		switch (sw)

		{
		case '+':
			resalt = SUMM(a, b);
			break;
		case '-':
			resalt = Defference(a, b);
			break;
		case '*':
			resalt = Multi(a, b);
			break;
		case '/':
			resalt = Quotient(a, b);
			break;
		case '^':
			resalt = Step(a, b);
			break;
		}
	
		   MessageBox::Show(System::Convert::ToString(resalt),
			   "»того:", MessageBoxButtons::OKCancel,
			   MessageBoxIcon::Asterisk);
	}
	};
}
