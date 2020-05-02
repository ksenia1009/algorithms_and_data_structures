//#include "stdafx.h"
#pragma once
#include "TSet.h"
#include <string>
#include <msclr\marshal_cppstd.h>


namespace LabaForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ text1;
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  unSize;
	private: System::Windows::Forms::TextBox^  Add1;
	private: System::Windows::Forms::TextBox^  Add2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->unSize = (gcnew System::Windows::Forms::TextBox());
			this->Add1 = (gcnew System::Windows::Forms::TextBox());
			this->Add2 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(419, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(419, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(240, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(35, 297);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(641, 58);
			this->textBox3->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(258, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(258, 9);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Ok";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"1-е подмножество";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"2-е подмножество";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Результат";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Размер универса";
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(338, 156);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Удалить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(338, 85);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Удалить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(258, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// unSize
			// 
			this->unSize->Location = System::Drawing::Point(138, 12);
			this->unSize->Name = L"unSize";
			this->unSize->Size = System::Drawing::Size(100, 20);
			this->unSize->TabIndex = 15;
			// 
			// Add1
			// 
			this->Add1->Enabled = false;
			this->Add1->Location = System::Drawing::Point(39, 87);
			this->Add1->Name = L"Add1";
			this->Add1->Size = System::Drawing::Size(211, 20);
			this->Add1->TabIndex = 16;
			// 
			// Add2
			// 
			this->Add2->Enabled = false;
			this->Add2->Location = System::Drawing::Point(39, 158);
			this->Add2->Name = L"Add2";
			this->Add2->Size = System::Drawing::Size(211, 20);
			this->Add2->TabIndex = 17;
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(100, 228);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 23);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Объединение";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(238, 228);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(94, 23);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Пересечение";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(374, 228);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(94, 23);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Дополнение 1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Enabled = false;
			this->button9->Location = System::Drawing::Point(502, 228);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(94, 23);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Дополнение 2";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(711, 374);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->Add2);
			this->Controls->Add(this->Add1);
			this->Controls->Add(this->unSize);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		TSet * a ;
		TSet * b ;
		TSet * res ;
		unsigned sizeUn;
	
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (Add1->Text != "" && unSize->Text != "" && System::Convert::ToInt32(unSize->Text) != 0)
		{
			unsigned sizeUn;
			sizeUn = System::Convert::ToInt32(unSize->Text);
			if (textBox1->Text == "") {
				res = new TSet(sizeUn, SystemToStl(Add1->Text));
				this->textBox1->Text = msclr::interop::marshal_as <System::String^>(res->getNumbers());
				delete res;
			}
			else
			{
				std::string str = SystemToStl((Add1->Text) + " " + textBox1->Text);
				res = new TSet (sizeUn, str);
				this->textBox1->Text = msclr::interop::marshal_as <System::String^>(res->getNumbers());
				delete res;
			}
		}
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (Add2->Text != "" && unSize->Text != "" && System::Convert::ToInt32(unSize->Text) != 0)
		{
			
			sizeUn = System::Convert::ToInt32(unSize->Text);
			if (textBox2->Text == "") {
				res = new TSet(sizeUn, SystemToStl(Add2->Text));
				this->textBox2->Text = msclr::interop::marshal_as <System::String^>(res->getNumbers());
				delete res;
			}
			else
			{
				std::string str = SystemToStl((Add2->Text) + " " + textBox2->Text);
				res = new TSet(sizeUn, str);
				this->textBox2->Text = msclr::interop::marshal_as <System::String^>(res->getNumbers());
				delete res;
			}
		}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (unSize->Text != "")
	{
		this->unSize->Enabled = false;
		sizeUn = System::Convert::ToInt32(unSize->Text);
		this->Add1->Enabled = true;
		this->Add2->Enabled = true;
		this->textBox1->Enabled = true;
		this->textBox2->Enabled = true;
		this->textBox3->Enabled = true;
		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button4->Enabled = true;
		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;
		this->button8->Enabled = true;
		this->button9->Enabled = true;
	}
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (unSize->Text != "" && textBox2->Text != "")
		textBox2->Text = "";
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (unSize->Text != "" && textBox1->Text != "")
		textBox1->Text = "";
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "" && System::Convert::ToInt32(unSize->Text) != 0)
			 {
				 sizeUn = System::Convert::ToInt32(unSize->Text);
				 a = new TSet (sizeUn, SystemToStl(textBox1->Text));
				 b = new TSet (sizeUn, SystemToStl(textBox2->Text));
				 res = new TSet(sizeUn);
				 *res = *a + *b;
				 textBox3->Text = msclr::interop::marshal_as <System::String^>(res->getNumbers());
				 delete a, b, res;
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "" && System::Convert::ToInt32(unSize->Text) != 0)
			 {
				 sizeUn = System::Convert::ToInt32(unSize->Text);
				 a = new TSet (sizeUn, SystemToStl(textBox1->Text));
				 b = new TSet (sizeUn, SystemToStl(textBox2->Text));
				 res = new TSet(sizeUn);
				 *res = *a * *b;
				 textBox3->Text = msclr::interop::marshal_as <System::String^>(res->getNumbers());
				 delete a, b, res;
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "" && System::Convert::ToInt32(unSize->Text) != 0)
			 {
				 sizeUn = System::Convert::ToInt32(unSize->Text);
				 a = new TSet (sizeUn, SystemToStl(textBox1->Text));				 
				 res = new TSet(sizeUn);
				 *res = !*a ;
				 textBox3->Text = msclr::interop::marshal_as <System::String^>(res->getNumbers());
				 delete a, res;
			 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "" && System::Convert::ToInt32(unSize->Text) != 0)
			 {
				 sizeUn = System::Convert::ToInt32(unSize->Text);
				 b = new TSet (sizeUn, SystemToStl(textBox2->Text));				 
				 res = new TSet(sizeUn);
				 *res = !*b ;
				 textBox3->Text = msclr::interop::marshal_as <System::String^>(res->getNumbers());
				 delete b, res;
			 }
		 }
};
}
