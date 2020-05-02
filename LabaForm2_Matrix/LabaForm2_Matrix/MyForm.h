#pragma once
#include "stdafx.h"
#include "TMatrix.h"
namespace LabaForm2_Matrix {

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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(16, 137);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(232, 204);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Enabled = false;
			this->dataGridView2->Location = System::Drawing::Point(367, 137);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(224, 204);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Enabled = false;
			this->dataGridView3->Location = System::Drawing::Point(684, 137);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(221, 204);
			this->dataGridView3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(285, 137);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 46);
			this->button1->TabIndex = 3;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(285, 215);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 46);
			this->button2->TabIndex = 4;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(285, 295);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 46);
			this->button3->TabIndex = 5;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(177, 50);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(208, 22);
			this->textBox1->TabIndex = 6;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(413, 48);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 7;
			this->button4->Text = L"¬вести";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 50);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"¬ведите размер";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(617, 215);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 39);
			this->label2->TabIndex = 9;
			this->label2->Text = L"=";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(933, 478);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int size;

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 size = Convert::ToInt32(textBox1->Text);
				 
				 button1->Enabled=true;
				 button2->Enabled=true;
				 button3->Enabled=true;
				 dataGridView1->Enabled=true;
				 dataGridView2->Enabled=true;
				 dataGridView3->Enabled=true;

				 dataGridView1->RowCount = size;
				 dataGridView1->ColumnCount = size;
				 dataGridView2->RowCount = size;
				 dataGridView2->ColumnCount = size;
				 dataGridView3->RowCount = size;
				 dataGridView3->ColumnCount = size;
				 
				 dataGridView3->ReadOnly = true;

				 for(int i=0;i<size;i++)
					 for(int j=0;j<size;j++)
					 {
						 dataGridView1->Rows[i]->Cells[j]->Value=0;
						 dataGridView2->Rows[i]->Cells[j]->Value=0;
						 dataGridView3->Rows[i]->Cells[j]->Value=0;
					 }
				for(int i=0;i<size;i++)
					 for(int j=0;j<i;j++)
					 {
						 dataGridView1->Rows[i]->Cells[j]->ReadOnly=true;
						 dataGridView2->Rows[i]->Cells[j]->ReadOnly=true;
						 //dataGridView3->Rows[i]->Cells[j]->ReadOnly=true;
					 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //dataGridView3->ReadOnly = false;
			 //size = Convert::ToInt32(textBox1->Text);
			 TMatrix<int> a(size), b(size), c(size);
			 for (int i=0;i<size;i++)
				 {
					 for (int j=0;j<size;j++)
					 {
						 a[i][j]=Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
						 b[i][j]=Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
					 }
				 }
				 c=a+b;
				 for (int i=0;i<size;i++)
				 {
					 for (int j=0;j<size;j++)
					 {
						 dataGridView3->Rows[i]->Cells[j]->Value = c[i][j];
						 
					 }
				 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 TMatrix<int> a(size), b(size), c(size);
			 for (int i=0;i<size;i++)
				 {
					 for (int j=0;j<size;j++)
					 {
						 a[i][j]=Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
						 b[i][j]=Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
					 }
				 }
				 c=a-b;
				 for (int i=0;i<size;i++)
				 {
					 for (int j=0;j<size;j++)
					 {
						 dataGridView3->Rows[i]->Cells[j]->Value = c[i][j];
						 
					 }
				 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 TMatrix<int> a(size), b(size), c(size);
			 for (int i=0;i<size;i++)
				 {
					 for (int j=0;j<size;j++)
					 {
						 a[i][j]=Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
						 b[i][j]=Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
					 }
				 }
				 c=a*b;
				 for (int i=0;i<size;i++)
				 {
					 for (int j=0;j<size;j++)
					 {
						 dataGridView3->Rows[i]->Cells[j]->Value = c[i][j];
						 
					 }
				 }
		 }

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
};
}
