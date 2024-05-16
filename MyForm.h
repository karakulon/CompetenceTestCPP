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
	private: System::Windows::Forms::Button^ btn_exit;
	public:
		User^ user = gcnew User("", 0, 0);
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			collection->Add(gcnew Question("что такое компиляция", "А) Перевод кода из высокого уровня в низкий\n\nB) Запуск программы\n\nС) Язык программиирования\n\nD) Создание функции", "A", "B", "C", "D", 'A', 0, 'e'));
			collection->Add(gcnew Question("На каком языке написан C++", "A) C#\n\nB) Python\n\nC) C\n\nD) Scratch", "A", "B", "C", "D", 'C', 0, 'e'));
			collection->Add(gcnew Question("В каком году появился C++", "A) 1964\n\nB) 1980\n\nC) 1984\n\nD) 1983", "A", "B", "C", "D", 'D', 0, 'm'));
			collection->Add(gcnew Question("Что быстрее  преобразует код в native", "A) Интерпретатор\n\nB) Компилятор\n\nC) Одинаково\n\nD) Ни один из них", "A", "B", "C", "D", 'B', 0, 'e'));
			collection->Add(gcnew Question("Что такое ООП", "A) Область определения площади\n\nB) Объектно-ориентрованное программирование\n\nC) Ориентированное-объектовое программировние\n\nD) Не знаю", "A", "B", "C", "D", 'B', 0, 'e'));
			collection->Add(gcnew Question("Что такое ООП", "A) Область определения площади\n\nB) Объектно-ориентрованное программирование\n\nC) Ориентированное-объектовое программировние\n\nD) Не знаю", "A", "B", "C", "D", 'B', 0, 'h'));
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_answer_A
			// 
			this->btn_answer_A->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_answer_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_answer_A->Location = System::Drawing::Point(140, 460);
			this->btn_answer_A->Name = L"btn_answer_A";
			this->btn_answer_A->Size = System::Drawing::Size(116, 56);
			this->btn_answer_A->TabIndex = 0;
			this->btn_answer_A->Text = L"A";
			this->btn_answer_A->UseVisualStyleBackColor = true;
			this->btn_answer_A->Visible = false;
			this->btn_answer_A->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_answer_A_MouseClick);
			// 
			// VariousOfAnswers_label
			// 
			this->VariousOfAnswers_label->AutoSize = true;
			this->VariousOfAnswers_label->Location = System::Drawing::Point(134, 136);
			this->VariousOfAnswers_label->Name = L"VariousOfAnswers_label";
			this->VariousOfAnswers_label->Size = System::Drawing::Size(0, 32);
			this->VariousOfAnswers_label->TabIndex = 7;
			this->VariousOfAnswers_label->Visible = false;
			// 
			// Question_label
			// 
			this->Question_label->Location = System::Drawing::Point(285, 19);
			this->Question_label->Name = L"Question_label";
			this->Question_label->Size = System::Drawing::Size(276, 50);
			this->Question_label->TabIndex = 8;
			this->Question_label->Text = L"вопрос";
			this->Question_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Question_label->Visible = false;
			// 
			// btn_answer_B
			// 
			this->btn_answer_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_answer_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_answer_B->Location = System::Drawing::Point(280, 460);
			this->btn_answer_B->Name = L"btn_answer_B";
			this->btn_answer_B->Size = System::Drawing::Size(116, 56);
			this->btn_answer_B->TabIndex = 0;
			this->btn_answer_B->Text = L"B";
			this->btn_answer_B->UseVisualStyleBackColor = true;
			this->btn_answer_B->Visible = false;
			this->btn_answer_B->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_answer_B_MouseClick);
			// 
			// btn_answer_D
			// 
			this->btn_answer_D->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_answer_D->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_answer_D->Location = System::Drawing::Point(560, 460);
			this->btn_answer_D->Name = L"btn_answer_D";
			this->btn_answer_D->Size = System::Drawing::Size(113, 56);
			this->btn_answer_D->TabIndex = 0;
			this->btn_answer_D->Text = L"D";
			this->btn_answer_D->UseVisualStyleBackColor = true;
			this->btn_answer_D->Visible = false;
			this->btn_answer_D->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_answer_D_MouseClick);
			// 
			// btn_answer_C
			// 
			this->btn_answer_C->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_answer_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_answer_C->Location = System::Drawing::Point(420, 460);
			this->btn_answer_C->Name = L"btn_answer_C";
			this->btn_answer_C->Size = System::Drawing::Size(118, 56);
			this->btn_answer_C->TabIndex = 0;
			this->btn_answer_C->Text = L"C";
			this->btn_answer_C->UseVisualStyleBackColor = true;
			this->btn_answer_C->Visible = false;
			this->btn_answer_C->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_answer_C_MouseClick);
			// 
			// btn_start
			// 
			this->btn_start->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_start->Location = System::Drawing::Point(664, 460);
			this->btn_start->Name = L"btn_start";
			this->btn_start->Size = System::Drawing::Size(164, 65);
			this->btn_start->TabIndex = 0;
			this->btn_start->TabStop = false;
			this->btn_start->Text = L"начать ";
			this->btn_start->UseVisualStyleBackColor = true;
			this->btn_start->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_start_MouseClick);
			// 
			// input_username_box
			// 
			this->input_username_box->Location = System::Drawing::Point(257, 262);
			this->input_username_box->Multiline = true;
			this->input_username_box->Name = L"input_username_box";
			this->input_username_box->Size = System::Drawing::Size(259, 50);
			this->input_username_box->TabIndex = 13;
			// 
			// start_label
			// 
			this->start_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->start_label->AutoSize = true;
			this->start_label->BackColor = System::Drawing::SystemColors::Control;
			this->start_label->ForeColor = System::Drawing::SystemColors::ControlText;
			this->start_label->Location = System::Drawing::Point(295, 218);
			this->start_label->Name = L"start_label";
			this->start_label->Size = System::Drawing::Size(247, 32);
			this->start_label->TabIndex = 14;
			this->start_label->Text = L"введите свое имя";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(150, 120);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 32);
			this->label1->TabIndex = 15;
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Crimson;
			this->btn_exit->Location = System::Drawing::Point(757, 11);
			this->btn_exit->Margin = System::Windows::Forms::Padding(2);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(72, 58);
			this->btn_exit->TabIndex = 16;
			this->btn_exit->Text = L"X";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(840, 537);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->start_label);
			this->Controls->Add(this->input_username_box);
			this->Controls->Add(this->btn_start);
			this->Controls->Add(this->btn_answer_D);
			this->Controls->Add(this->btn_answer_B);
			this->Controls->Add(this->Question_label);
			this->Controls->Add(this->VariousOfAnswers_label);
			this->Controls->Add(this->btn_answer_A);
			this->Controls->Add(this->btn_answer_C);
			this->ForeColor = System::Drawing::SystemColors::WindowText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Competence test";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btn_answer_A_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (counter >= 5) 
	{
		this->label1->Text = user->nickname + "  \n" + "Ваш результат\n" + user->score.ToString() + "/" + counter.ToString();
		this->label1->Visible = true;
		this->btn_answer_A->Visible = false;
		this->btn_answer_B->Visible = false;
		this->btn_answer_C->Visible = false;
		this->btn_answer_D->Visible = false;
		this->VariousOfAnswers_label->Visible = false;
		this->Question_label->Visible = false;
	}
	else
	{
		if (this->btn_answer_A->Text[0] == collection[counter]->trueSolution)
		{
			this->btn_exit->Text = "V";
			user->score++;
		}
		counter++;
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
	}
}
private: System::Void btn_answer_B_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (counter >= 5)
	{
		this->label1->Text = user->nickname + "  \n" + "Ваш результат\n" + user->score.ToString() + "/" + counter.ToString();
		this->label1->Visible = true;
		this->btn_answer_A->Visible = false;
		this->btn_answer_B->Visible = false;
		this->btn_answer_C->Visible = false;
		this->btn_answer_D->Visible = false;
		this->VariousOfAnswers_label->Visible = false;
		this->Question_label->Visible = false;
	}
	else 
	{
		if (this->btn_answer_B->Text[0] == collection[counter]->trueSolution)
		{
			this->btn_exit->Text = "V";
			user->score++;
		}
		counter++;
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
	}
}
private: System::Void btn_answer_C_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (counter >= 5)
	{
		this->label1->Text = user->nickname + "  \n" + "Ваш результат\n" + user->score.ToString() + "/" + counter.ToString();
		this->label1->Visible = true;
		this->btn_answer_A->Visible = false;
		this->btn_answer_B->Visible = false;
		this->btn_answer_C->Visible = false;
		this->btn_answer_D->Visible = false;
		this->VariousOfAnswers_label->Visible = false;
		this->Question_label->Visible = false;
	}
	else
	{
		if (this->btn_answer_C->Text[0] == collection[counter]->trueSolution)
		{
			this->btn_exit->Text = "V";
			user->score++;
		}
		counter++;
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
	}
}
private: System::Void btn_answer_D_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (counter >= 5)
	{
		this->label1->Text = user->nickname + "  \n" + "Ваш результат\n" + user->score.ToString() + "/" + counter.ToString();
		this->label1->Visible = true;
		this->btn_answer_A->Visible = false;
		this->btn_answer_B->Visible = false;
		this->btn_answer_C->Visible = false;
		this->btn_answer_D->Visible = false;
		this->VariousOfAnswers_label->Visible = false;
		this->Question_label->Visible = false;
	}
	else
	{
		if (this->btn_answer_D->Text[0] == collection[counter]->trueSolution)
		{
			this->btn_exit->Text = "V";
			user->score++;
		}
		counter++;
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
	}
}
private: System::Void btn_start_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
		this->start_label->Visible = false;
		this->input_username_box->Visible = false;
		this->btn_start->Enabled = false;
		this->btn_start->Visible = false;
		this->btn_answer_A->Visible = true;
		this->btn_answer_B->Visible = true;
		this->btn_answer_C->Visible = true;
		this->btn_answer_D->Visible = true;
		this->VariousOfAnswers_label->Visible = true;
		this->Question_label->Visible = true;
		this->VariousOfAnswers_label->Text = collection[counter]->description;
	}
}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
