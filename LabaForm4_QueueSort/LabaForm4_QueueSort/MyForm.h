#pragma once
#include "stdafx.h"
#include "Queue.h"
TQueue * quArr1 = new TQueue [10];
string * ar = NULL;
string str1;
int size, l, m;

namespace LabaForm4_QueueSort {

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

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button3;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 57);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(439, 46);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(25, 129);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(439, 46);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(21, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Исходный массив:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(21, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Результат:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(491, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"По шагам";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(491, 129);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 45);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Конечный результат";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(24, 194);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(603, 156);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(491, 47);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 35);
			this->button3->TabIndex = 7;
			this->button3->Text = L"ОК";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 380);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //По шагам
			 Sort(str1,m,ar,size,quArr1,l,1);
			 l++;
			 System::String ^ st;
			 int len, t, k = 0;
			 for (int j = 0; j < 10; j++)
			 {
				 for(int i = 0; i < size; i++)
				 {
						 dataGridView1->Rows[i]->Cells[j]->Value = "";
				 }
				 t = 0;
				 while (quArr1[j].isEmpty() == 0)
				 {
					ar[k] = quArr1[j].Get();
					st = "";
					len = ar[k].length();
					for(int i = 0; i < len; i++)
					{
						st += (wchar_t)ar[k][i];
					}
					dataGridView1->Rows[t++]->Cells[j]->Value = st;
					k++;
				}
			 }
			 if (l == -1)
			 {
				 button2_Click(sender,  e);
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Конечный результат
			 Sort(str1,m,ar,size,quArr1,l,0);
			 System::String ^ st = "";
			 int len;
			 for(int i = 0; i < size; i++)
			 {
				 len = ar[i].length();
				 for(int j = 0; j < len; j++)
				 {
					st += (wchar_t)ar[i][j];
				 }
				 st += " ";
			 }
			 textBox2->Text = st;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //ОК
			 textBox2->Enabled = true;
			 dataGridView1->Enabled = true;
			 System::String ^ st = textBox1->Text;
			 str1 = "";
			 int len = st->Length;
			 for (int i = 0; i < len; i++)
			 {
				 str1 += (char)st[i];
			 }
			 l = 0;
			 size = 0;
			 if (ar != NULL)
			 {
				 delete [] ar;
			 }
			 ar = NULL;
			 ar = new string [(str1.length() / 2) + 1];
			 strToArr (str1, ar, size);
			 dataGridView1->RowCount = size;
			 dataGridView1->ColumnCount = 10;
			 for(int i = 0; i < 10; i++)
			 {
				 dataGridView1->Columns[i]->HeaderText=Convert::ToString(i);
				 for(int j = 0; j < size; j++)
				 {
					 dataGridView1->Rows[j]->Cells[i]->Value = "";
				 }
			 }
			 m = 0;
			 for (int i = 0; i < size; i++)
			 {
				 if (ar[i].length() > m)
				 {
					 m = ar[i].length();
				 }
			 }
		 }
};
}
