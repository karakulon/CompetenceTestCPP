#pragma once
 #include "User.h"
 #include "Question.h"
 #include <vector>
 #include <string>

namespace CompetenceTest {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;



	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int counter = 0;
		List<Question^>^ collection = gcnew List<Question^>();
		User^ user = gcnew User("", 0, 0);
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			collection->Add(gcnew Question("что такое компиляция", "А) Перевод кода из высокого уровня в низкий\n\nB) Запуск программы\n\nС) Язык программиирования\n\nD) Создание функции", "A", "B", "C", "D", "A", 0, 'e'));
			collection->Add(gcnew Question("На каком языке написан C++", "A) C#\n\nB) Python\n\nC) C\n\nD) Scratch", "A", "B", "C", "D", "C", 0, 'e'));
			collection->Add(gcnew Question("В каком году появился C++", "A) 1964\n\nB) 1980\n\nC) 1984\n\nD) 1983", "A", "B", "C", "D", "D", 0, 'm'));
			collection->Add(gcnew Question("Что быстрее  преобразует код в native", "A) Интерпретатор\n\nB) Компилятор\n\nC) Одинаково\n\nD) Ни один из них", "A", "B", "C", "D", "B", 0, 'e'));
			collection->Add(gcnew Question("Что такое ООП", "A) Область определения площади\n\nB) Объектно-ориентрованное программирование\n\nC) Ориентированное-объектовое программировние\n\nD) Не знаю", "A", "B", "C", "D", "B", 0, 'e'));
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
	private: System::Windows::Forms::Button^ btn_answer_A;
	protected:

	protected:


	private: System::Windows::Forms::Label^ VariousOfAnswers_label;




	private: System::Windows::Forms::Label^ Question_label;
	private: System::Windows::Forms::Button^ btn_answer_B;
	private: System::Windows::Forms::Button^ btn_answer_D;



	private: System::Windows::Forms::Button^ btn_answer_C;
	private: System::Windows::Forms::Button^ btn_start;
	private: System::Windows::Forms::TextBox^ input_username_box;


	private: System::Windows::Forms::Label^ start_label;





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		/// 
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ label1;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_answer_A = (gcnew System::Windows::Forms::Button());
			this->VariousOfAnswers_label = (gcnew System::Windows::Forms::Label());
			this->Question_label = (gcnew System::Windows::Forms::Label());
			this->btn_answer_B = (gcnew System::Windows::Forms::Button());
			this->btn_answer_D = (gcnew System::Windows::Forms::Button());
			this->btn_answer_C = (gcnew System::Windows::Forms::Button());
			this->btn_start = (gcnew System::Windows::Forms::Button());
			this->input_username_box = (gcnew System::Windows::Forms::TextBox());
			this->start_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_answer_A
			// 
			this->btn_answer_A->Location = System::Drawing::Point(0, 0);
			this->btn_answer_A->Margin = System::Windows::Forms::Padding(4);
			this->btn_answer_A->Name = L"btn_answer_A";
			this->btn_answer_A->Size = System::Drawing::Size(0, 0);
			this->btn_answer_A->TabIndex = 4;
			this->btn_answer_A->Text = L"A";
			this->btn_answer_A->UseVisualStyleBackColor = true;
			this->btn_answer_A->Click += gcnew System::EventHandler(this, &MyForm::btn_answer_A_Click);
			// 
			// VariousOfAnswers_label
			// 
			this->VariousOfAnswers_label->AutoSize = true;
			this->VariousOfAnswers_label->Location = System::Drawing::Point(0, 0);
			this->VariousOfAnswers_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->VariousOfAnswers_label->Name = L"VariousOfAnswers_label";
			this->VariousOfAnswers_label->Size = System::Drawing::Size(0, 32);
			this->VariousOfAnswers_label->TabIndex = 7;
			// 
			// Question_label
			// 
			this->Question_label->Location = System::Drawing::Point(0, 0);
			this->Question_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Question_label->Name = L"Question_label";
			this->Question_label->Size = System::Drawing::Size(0, 0);
			this->Question_label->TabIndex = 8;
			this->Question_label->Text = L"вопрос";
			// 
			// btn_answer_B
			// 
			this->btn_answer_B->Location = System::Drawing::Point(0, 0);
			this->btn_answer_B->Margin = System::Windows::Forms::Padding(4);
			this->btn_answer_B->Name = L"btn_answer_B";
			this->btn_answer_B->Size = System::Drawing::Size(0, 0);
			this->btn_answer_B->TabIndex = 9;
			this->btn_answer_B->Text = L"B";
			this->btn_answer_B->UseVisualStyleBackColor = true;
			this->btn_answer_B->Click += gcnew System::EventHandler(this, &MyForm::btn_answer_B_Click);
			// 
			// btn_answer_D
			// 
			this->btn_answer_D->Location = System::Drawing::Point(0, 0);
			this->btn_answer_D->Margin = System::Windows::Forms::Padding(4);
			this->btn_answer_D->Name = L"btn_answer_D";
			this->btn_answer_D->Size = System::Drawing::Size(0, 0);
			this->btn_answer_D->TabIndex = 10;
			this->btn_answer_D->Text = L"D";
			this->btn_answer_D->UseVisualStyleBackColor = true;
			this->btn_answer_D->Click += gcnew System::EventHandler(this, &MyForm::btn_answer_D_Click);
			// 
			// btn_answer_C
			// 
			this->btn_answer_C->Location = System::Drawing::Point(0, 0);
			this->btn_answer_C->Margin = System::Windows::Forms::Padding(4);
			this->btn_answer_C->Name = L"btn_answer_C";
			this->btn_answer_C->Size = System::Drawing::Size(0, 0);
			this->btn_answer_C->TabIndex = 11;
			this->btn_answer_C->Text = L"C";
			this->btn_answer_C->UseVisualStyleBackColor = true;
			this->btn_answer_C->Click += gcnew System::EventHandler(this, &MyForm::btn_answer_C_Click);
			// 
			// btn_start
			// 
			this->btn_start->Location = System::Drawing::Point(966, 594);
			this->btn_start->Margin = System::Windows::Forms::Padding(4);
			this->btn_start->Name = L"btn_start";
			this->btn_start->Size = System::Drawing::Size(239, 84);
			this->btn_start->TabIndex = 12;
			this->btn_start->Text = L"начать ";
			this->btn_start->UseVisualStyleBackColor = true;
			this->btn_start->Click += gcnew System::EventHandler(this, &MyForm::btn_start_Click);
			// 
			// input_username_box
			// 
			this->input_username_box->Location = System::Drawing::Point(345, 315);
			this->input_username_box->Margin = System::Windows::Forms::Padding(4);
			this->input_username_box->Multiline = true;
			this->input_username_box->Name = L"input_username_box";
			this->input_username_box->Size = System::Drawing::Size(475, 63);
			this->input_username_box->TabIndex = 13;
			// 
			// start_label
			// 
			this->start_label->AutoSize = true;
			this->start_label->BackColor = System::Drawing::SystemColors::Control;
			this->start_label->ForeColor = System::Drawing::SystemColors::ControlText;
			this->start_label->Location = System::Drawing::Point(436, 251);
			this->start_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->start_label->Name = L"start_label";
			this->start_label->Size = System::Drawing::Size(247, 32);
			this->start_label->TabIndex = 14;
			this->start_label->Text = L"введите свое имя";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 0);
			this->label1->TabIndex = 15;
			this->label1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1222, 694);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->start_label);
			this->Controls->Add(this->input_username_box);
			this->Controls->Add(this->btn_start);
			this->Controls->Add(this->btn_answer_C);
			this->Controls->Add(this->btn_answer_D);
			this->Controls->Add(this->btn_answer_B);
			this->Controls->Add(this->Question_label);
			this->Controls->Add(this->VariousOfAnswers_label);
			this->Controls->Add(this->btn_answer_A);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Competence test";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btn_answer_A_Click(System::Object^ sender, System::EventArgs^ e) {
	if (counter >= 5) 
	{
		this->label1->Text = user->nickname + "  \n" + "Ваш результат\n" + user->score.ToString() + "/" + counter.ToString();
		this->label1->Location = System::Drawing::Point(150, 126);
		this->label1->Size = System::Drawing::Size(300, 300);

		this->btn_answer_A->Location = System::Drawing::Point(0, 0);
		this->btn_answer_A->Size = System::Drawing::Size(0, 0);

		this->btn_answer_B->Location = System::Drawing::Point(0, 0);
		this->btn_answer_B->Size = System::Drawing::Size(0, 0);

		this->btn_answer_C->Location = System::Drawing::Point(0, 0);
		this->btn_answer_C->Size = System::Drawing::Size(0, 0);

		this->btn_answer_D->Location = System::Drawing::Point(0, 0);
		this->btn_answer_D->Size = System::Drawing::Size(0, 0);

		this->Question_label->Location = System::Drawing::Point(0, 0);
		this->Question_label->Size = System::Drawing::Size(0, 0);

		this->VariousOfAnswers_label->Location = System::Drawing::Point(0, 0);
		this->VariousOfAnswers_label->Size = System::Drawing::Size(0, 0);
		this->VariousOfAnswers_label->Text = L"";

	}
	else
	{
		if(this->btn_answer_A->Text == collection[counter]->trueSolution)
		{
			user->score++;
		}
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
		counter++;
	}
}
private: System::Void btn_answer_B_Click(System::Object^ sender, System::EventArgs^ e) {
	if (counter >= 5)
	{
		this->label1->Text = user->nickname + "  \n" + "Ваш результат\n" + user->score.ToString() + "/" + counter.ToString();
		this->label1->Location = System::Drawing::Point(150, 126);
		this->label1->Size = System::Drawing::Size(300, 300);
		this->btn_answer_A->Location = System::Drawing::Point(0, 0);
		this->btn_answer_A->Size = System::Drawing::Size(0, 0);

		this->btn_answer_B->Location = System::Drawing::Point(0, 0);
		this->btn_answer_B->Size = System::Drawing::Size(0, 0);

		this->btn_answer_C->Location = System::Drawing::Point(0, 0);
		this->btn_answer_C->Size = System::Drawing::Size(0, 0);

		this->btn_answer_D->Location = System::Drawing::Point(0, 0);
		this->btn_answer_D->Size = System::Drawing::Size(0, 0);

		this->Question_label->Location = System::Drawing::Point(0, 0);
		this->Question_label->Size = System::Drawing::Size(0, 0);

		this->VariousOfAnswers_label->Location = System::Drawing::Point(0, 0);
		this->VariousOfAnswers_label->Size = System::Drawing::Size(0, 0);
		this->VariousOfAnswers_label->Text = L"";

	}
	else 
	{
		if (this->btn_answer_B->Text == collection[counter]->trueSolution)
		{
			user->score++;
		}
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
		counter++;
	}
}
private: System::Void btn_answer_C_Click(System::Object^ sender, System::EventArgs^ e) {
	if (counter >= 5)
	{
		this->label1->Text = user->nickname + "  \n" + "Ваш результат\n" + user->score.ToString() + "/" + counter.ToString();
		this->label1->Location = System::Drawing::Point(150, 126);
		this->label1->Size = System::Drawing::Size(300, 300);

		this->btn_answer_A->Location = System::Drawing::Point(0, 0);
		this->btn_answer_A->Size = System::Drawing::Size(0, 0);

		this->btn_answer_B->Location = System::Drawing::Point(0, 0);
		this->btn_answer_B->Size = System::Drawing::Size(0, 0);

		this->btn_answer_C->Location = System::Drawing::Point(0, 0);
		this->btn_answer_C->Size = System::Drawing::Size(0, 0);

		this->btn_answer_D->Location = System::Drawing::Point(0, 0);
		this->btn_answer_D->Size = System::Drawing::Size(0, 0);

		this->Question_label->Location = System::Drawing::Point(0, 0);
		this->Question_label->Size = System::Drawing::Size(0, 0);

		this->VariousOfAnswers_label->Location = System::Drawing::Point(0, 0);
		this->VariousOfAnswers_label->Size = System::Drawing::Size(0, 0);
		this->VariousOfAnswers_label->Text = L"";
	}
	else
	{
		if (this->btn_answer_C->Text == collection[counter]->trueSolution)
		{
			user->score++;
		}
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
		counter++;
	}
}
private: System::Void btn_answer_D_Click(System::Object^ sender, System::EventArgs^ e) {
	if (counter >= 5)
	{
		this->label1->Text = user->nickname + "  \n" + "Ваш результат\n" + user->score.ToString() + "/" + counter.ToString();
		this->label1->Location = System::Drawing::Point(150, 126);
		this->label1->Size = System::Drawing::Size(300, 300);

		this->btn_answer_A->Location = System::Drawing::Point(0, 0);
		this->btn_answer_A->Size = System::Drawing::Size(0, 0);

		this->btn_answer_B->Location = System::Drawing::Point(0, 0);
		this->btn_answer_B->Size = System::Drawing::Size(0, 0);

		this->btn_answer_C->Location = System::Drawing::Point(0, 0);
		this->btn_answer_C->Size = System::Drawing::Size(0, 0);

		this->btn_answer_D->Location = System::Drawing::Point(0, 0);
		this->btn_answer_D->Size = System::Drawing::Size(0, 0);

		this->Question_label->Location = System::Drawing::Point(0, 0);
		this->Question_label->Size = System::Drawing::Size(0, 0);

		this->VariousOfAnswers_label->Location = System::Drawing::Point(0, 0);
		this->VariousOfAnswers_label->Size = System::Drawing::Size(0, 0);
		this->VariousOfAnswers_label->Text = L"";
	}
	else
	{
		if (this->btn_answer_D->Text == collection[counter]->trueSolution)
		{
			user->score++;
		}
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
		counter++;
	}
}
private: System::Void btn_start_Click(System::Object^ sender, System::EventArgs^ e) {
	if(this->input_username_box->Text->Length > 12)
	{
		this->start_label->Text = L"имя слишком длинное";
		this->start_label->BackColor = System::Drawing::SystemColors::MenuHighlight;
	}
	if (this->input_username_box->Text->Length <= 3)
	{
		this->start_label->Text = L"имя слишком короткое";
		this->start_label->BackColor = System::Drawing::SystemColors::MenuHighlight;
	}
	if (this->input_username_box->Text->Length > 3 && this->input_username_box->Text->Length <= 12)
	{		
		user->nickname = this->input_username_box->Text;
		this->start_label->Location = System::Drawing::Point(0, 0);
		this->start_label->Size = System::Drawing::Size(0, 0);
		this->start_label->Text = L"";
		
		this->input_username_box->Location = System::Drawing::Point(0, 0);
		this->input_username_box->Size = System::Drawing::Size(0, 0);

		this->btn_start->Location = System::Drawing::Point(0, 0);
		this->btn_start->Size = System::Drawing::Size(0, 0);

		this->btn_answer_A->Location = System::Drawing::Point(70, 250);
		this->btn_answer_A->Size = System::Drawing::Size(70, 30);

		this->btn_answer_B->Location = System::Drawing::Point(150, 250);
		this->btn_answer_B->Size = System::Drawing::Size(70, 30);

		this->btn_answer_C->Location = System::Drawing::Point(230, 250);
		this->btn_answer_C->Size = System::Drawing::Size(70, 30);

		this->btn_answer_D->Location = System::Drawing::Point(310, 250);
		this->btn_answer_D->Size = System::Drawing::Size(70, 30);
		
		this->Question_label->Location = System::Drawing::Point(190, 10);
		this->Question_label->Size = System::Drawing::Size(200, 50);
		this->Question_label->Text = collection[0]->mainquestion;

		this->VariousOfAnswers_label->Location = System::Drawing::Point(70, 80);
		this->VariousOfAnswers_label->Size = System::Drawing::Size(600, 600);
		this->VariousOfAnswers_label->Text = collection[0]->description;
		counter += 1;
	}
}
};
}
