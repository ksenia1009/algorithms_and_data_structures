#include "stdafx.h"
#include "Arifm.h"
#pragma once

using namespace std;
using namespace System;

void MarshalString(String^ s, string& os)
	{
		using namespace Runtime::InteropServices;
		const char* chars = (const char*) (Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
}

namespace LabaForm3_Polis {

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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(36, 54);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(312, 65);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(36, 155);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(312, 68);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(115, 264);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(208, 21);
			this->textBox3->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(478, 54);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 157;
			this->dataGridView1->Size = System::Drawing::Size(147, 227);
			this->dataGridView1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(368, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 45);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Ок";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(368, 166);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 45);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(36, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Арифметическое выражение";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(33, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Полиз";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(33, 264);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Результат:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(475, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Таблица переменных";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 313);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Enabled=true;			 
			 button2->Enabled=true;
			 String^ SystStr = textBox1->Text;
			 string str = "";
			 MarshalString(SystStr,str);
			 Arifm ar(str);
			 textBox2->Text = gcnew System::String((ar.getPoliz()).c_str());
			 dataGridView1->Enabled=true;
			 dataGridView1->ColumnCount=2;
			 dataGridView1->RowCount=ar.getCountTable();
			 dataGridView1->Columns[0]->HeaderText="Имя";
			 dataGridView1->Columns[1]->HeaderText="Значение";
			 for(int i=0;i<ar.getCountTable();i++)
			 {
				 dataGridView1->Rows[i]->Cells[0]->ReadOnly = true;
				 dataGridView1->Rows[i]->Cells[0]->Value = gcnew System::String((ar[i].getName()).c_str());
				 dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToDouble(ar[i].getValue());
			 }
			 for(int i=0;i<ar.getCountTable();i++)
			 {
				 double a = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
				 if (a!=0)
				 {
					 dataGridView1->Rows[i]->Cells[1]->ReadOnly = true;
				 }
			 }
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Enabled = true;
			 String^ SystS = textBox1->Text;
			 string str1 = "";
			 MarshalString(SystS,str1);
			 Arifm arifm(str1);
			 for(int i=0;i<arifm.getCountTable();i++)
			 {
				String^ SystS1 = Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value);
				string s = "";
				MarshalString(SystS1,s);
				double d = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
				arifm.setValue(s,d);
			 }
			 double rez;
			 rez = arifm.getValue();
			 textBox3->Text = Convert::ToString(rez);
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
