#include <msclr/marshal_cppstd.h>
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
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int counter = 0;
		int counterForfile = 0;
		List<Question^>^ collection = gcnew List<Question^>();
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_admin;
	private: System::Windows::Forms::Label^ createA;

	private: System::Windows::Forms::Label^ createB;

	private: System::Windows::Forms::Label^ createC;

	private: System::Windows::Forms::Label^ createD;

	private: System::Windows::Forms::Label^ create_trueSolution;
	private: System::Windows::Forms::TextBox^ textBoxforCreateA;

	private: System::Windows::Forms::TextBox^ textBoxforCreateB;
	private: System::Windows::Forms::TextBox^ textBoxforCreateC;
	private: System::Windows::Forms::TextBox^ textBoxforCreateD;
	private: System::Windows::Forms::TextBox^ textBoxforCreateTrueSolution;
	private: System::Windows::Forms::TextBox^ textBoxForCreateMainQuestion;
	private: System::Windows::Forms::Label^ createMainQuestion;
	private: System::Windows::Forms::Button^ btn_createQuestion;













	public:
		User^ user = gcnew User("", 0, 0);
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			
			
			String^ mainquestion;
			String^ A;
			String^ B;
			String^ C;
			String^ D;
			String^ truesolution;
			string line;
			std::ifstream data;
			data.open("data.txt");
			while (getline(data, line))
			{
				counterForfile++;
				switch (counterForfile)
				{
					case 1: mainquestion = marshal_as<String^>(line);
						break;
					case 2: A = marshal_as<String^>(line);
						break;
					case 3: B = marshal_as<String^>(line);
						break;
					case 4: C = marshal_as<String^>(line);
						break;
					case 5: D = marshal_as<String^>(line);
						break;
					case 6: truesolution = marshal_as<String^>(line);
						collection->Add(gcnew Question(mainquestion, A + "\n" + B + "\n" + C + "\n" + D, 'A'));
						counterForfile = 0;
						break;
				}
			}
			data.close();
			collection->Add(gcnew Question("что такое компиляция", "А) Перевод кода из высокого уровня в низкий\n\nB) Запуск программы\n\nС) Язык программиирования\n\nD) Создание функции", 'A'));
			collection->Add(gcnew Question("На каком языке написан C++", "A) C#\n\nB) Python\n\nC) C\n\nD) Scratch", 'C'));
			collection->Add(gcnew Question("В каком году появился C++", "A) 1964\n\nB) 1980\n\nC) 1984\n\nD) 1983", 'D'));
			collection->Add(gcnew Question("Что быстрее  преобразует код в native", "A) Интерпретатор\n\nB) Компилятор\n\nC) Одинаково\n\nD) Ни один из них", 'B'));
			collection->Add(gcnew Question("Что такое ООП", "A) Область определения площади\n\nB) Объектно-ориентрованное программирование\n\nC) Ориентированное-объектовое программировние\n\nD) Не знаю", 'B'));
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
	private: System::Windows::Forms::Label^ score_label;
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
			this->score_label = (gcnew System::Windows::Forms::Label());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_admin = (gcnew System::Windows::Forms::Button());
			this->createA = (gcnew System::Windows::Forms::Label());
			this->createB = (gcnew System::Windows::Forms::Label());
			this->createC = (gcnew System::Windows::Forms::Label());
			this->createD = (gcnew System::Windows::Forms::Label());
			this->create_trueSolution = (gcnew System::Windows::Forms::Label());
			this->textBoxforCreateA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxforCreateB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxforCreateC = (gcnew System::Windows::Forms::TextBox());
			this->textBoxforCreateD = (gcnew System::Windows::Forms::TextBox());
			this->textBoxforCreateTrueSolution = (gcnew System::Windows::Forms::TextBox());
			this->textBoxForCreateMainQuestion = (gcnew System::Windows::Forms::TextBox());
			this->createMainQuestion = (gcnew System::Windows::Forms::Label());
			this->btn_createQuestion = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_answer_A
			// 
			this->btn_answer_A->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_answer_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_answer_A->Location = System::Drawing::Point(204, 594);
			this->btn_answer_A->Margin = System::Windows::Forms::Padding(4);
			this->btn_answer_A->Name = L"btn_answer_A";
			this->btn_answer_A->Size = System::Drawing::Size(169, 72);
			this->btn_answer_A->TabIndex = 0;
			this->btn_answer_A->Text = L"A";
			this->btn_answer_A->UseVisualStyleBackColor = true;
			this->btn_answer_A->Visible = false;
			this->btn_answer_A->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_answer_A_MouseClick);
			// 
			// VariousOfAnswers_label
			// 
			this->VariousOfAnswers_label->AutoSize = true;
			this->VariousOfAnswers_label->Location = System::Drawing::Point(195, 176);
			this->VariousOfAnswers_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->VariousOfAnswers_label->Name = L"VariousOfAnswers_label";
			this->VariousOfAnswers_label->Size = System::Drawing::Size(0, 31);
			this->VariousOfAnswers_label->TabIndex = 7;
			this->VariousOfAnswers_label->Visible = false;
			// 
			// Question_label
			// 
			this->Question_label->Location = System::Drawing::Point(415, 25);
			this->Question_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Question_label->Name = L"Question_label";
			this->Question_label->Size = System::Drawing::Size(401, 65);
			this->Question_label->TabIndex = 8;
			this->Question_label->Text = L"вопрос";
			this->Question_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Question_label->Visible = false;
			// 
			// btn_answer_B
			// 
			this->btn_answer_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_answer_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_answer_B->Location = System::Drawing::Point(407, 594);
			this->btn_answer_B->Margin = System::Windows::Forms::Padding(4);
			this->btn_answer_B->Name = L"btn_answer_B";
			this->btn_answer_B->Size = System::Drawing::Size(169, 72);
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
			this->btn_answer_D->Location = System::Drawing::Point(815, 594);
			this->btn_answer_D->Margin = System::Windows::Forms::Padding(4);
			this->btn_answer_D->Name = L"btn_answer_D";
			this->btn_answer_D->Size = System::Drawing::Size(164, 72);
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
			this->btn_answer_C->Location = System::Drawing::Point(611, 594);
			this->btn_answer_C->Margin = System::Windows::Forms::Padding(4);
			this->btn_answer_C->Name = L"btn_answer_C";
			this->btn_answer_C->Size = System::Drawing::Size(172, 72);
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
			this->btn_start->Location = System::Drawing::Point(966, 594);
			this->btn_start->Margin = System::Windows::Forms::Padding(4);
			this->btn_start->Name = L"btn_start";
			this->btn_start->Size = System::Drawing::Size(239, 84);
			this->btn_start->TabIndex = 0;
			this->btn_start->TabStop = false;
			this->btn_start->Text = L"начать ";
			this->btn_start->UseVisualStyleBackColor = true;
			this->btn_start->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_start_MouseClick);
			// 
			// input_username_box
			// 
			this->input_username_box->Location = System::Drawing::Point(423, 340);
			this->input_username_box->Margin = System::Windows::Forms::Padding(4);
			this->input_username_box->Name = L"input_username_box";
			this->input_username_box->Size = System::Drawing::Size(357, 38);
			this->input_username_box->TabIndex = 13;
			// 
			// start_label
			// 
			this->start_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->start_label->AutoSize = true;
			this->start_label->BackColor = System::Drawing::SystemColors::Control;
			this->start_label->ForeColor = System::Drawing::SystemColors::ControlText;
			this->start_label->Location = System::Drawing::Point(476, 294);
			this->start_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->start_label->Name = L"start_label";
			this->start_label->Size = System::Drawing::Size(236, 31);
			this->start_label->TabIndex = 14;
			this->start_label->Text = L"введите свое имя";
			// 
			// score_label
			// 
			this->score_label->AutoSize = true;
			this->score_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.57143F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->score_label->Location = System::Drawing::Point(303, 176);
			this->score_label->Name = L"score_label";
			this->score_label->Size = System::Drawing::Size(0, 63);
			this->score_label->TabIndex = 15;
			this->score_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Crimson;
			this->btn_exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_exit->Location = System::Drawing::Point(1101, 14);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(105, 75);
			this->btn_exit->TabIndex = 16;
			this->btn_exit->Text = L"X";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// btn_admin
			// 
			this->btn_admin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_admin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_admin->Location = System::Drawing::Point(966, 594);
			this->btn_admin->Margin = System::Windows::Forms::Padding(4);
			this->btn_admin->Name = L"btn_admin";
			this->btn_admin->Size = System::Drawing::Size(239, 84);
			this->btn_admin->TabIndex = 17;
			this->btn_admin->Text = L"продолжить";
			this->btn_admin->UseVisualStyleBackColor = true;
			this->btn_admin->Visible = false;
			this->btn_admin->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_admin_MouseClick);
			// 
			// createA
			// 
			this->createA->AutoSize = true;
			this->createA->Location = System::Drawing::Point(87, 105);
			this->createA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->createA->Name = L"createA";
			this->createA->Size = System::Drawing::Size(234, 31);
			this->createA->TabIndex = 18;
			this->createA->Text = L"Вариант ответа A";
			this->createA->Visible = false;
			// 
			// createB
			// 
			this->createB->AutoSize = true;
			this->createB->Location = System::Drawing::Point(87, 192);
			this->createB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->createB->Name = L"createB";
			this->createB->Size = System::Drawing::Size(234, 31);
			this->createB->TabIndex = 19;
			this->createB->Text = L"Вариант ответа B";
			this->createB->Visible = false;
			// 
			// createC
			// 
			this->createC->AutoSize = true;
			this->createC->Location = System::Drawing::Point(87, 279);
			this->createC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->createC->Name = L"createC";
			this->createC->Size = System::Drawing::Size(236, 31);
			this->createC->TabIndex = 20;
			this->createC->Text = L"Вариант ответа C";
			this->createC->Visible = false;
			// 
			// createD
			// 
			this->createD->AutoSize = true;
			this->createD->Location = System::Drawing::Point(87, 370);
			this->createD->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->createD->Name = L"createD";
			this->createD->Size = System::Drawing::Size(236, 31);
			this->createD->TabIndex = 21;
			this->createD->Text = L"Вариант ответа D";
			this->createD->Visible = false;
			// 
			// create_trueSolution
			// 
			this->create_trueSolution->AutoSize = true;
			this->create_trueSolution->Location = System::Drawing::Point(87, 453);
			this->create_trueSolution->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->create_trueSolution->Name = L"create_trueSolution";
			this->create_trueSolution->Size = System::Drawing::Size(587, 31);
			this->create_trueSolution->TabIndex = 22;
			this->create_trueSolution->Text = L"Правильный вариант ответа(Буква латиница)";
			this->create_trueSolution->Visible = false;
			// 
			// textBoxforCreateA
			// 
			this->textBoxforCreateA->Location = System::Drawing::Point(96, 140);
			this->textBoxforCreateA->Margin = System::Windows::Forms::Padding(4);
			this->textBoxforCreateA->Multiline = true;
			this->textBoxforCreateA->Name = L"textBoxforCreateA";
			this->textBoxforCreateA->Size = System::Drawing::Size(532, 48);
			this->textBoxforCreateA->TabIndex = 23;
			this->textBoxforCreateA->Visible = false;
			// 
			// textBoxforCreateB
			// 
			this->textBoxforCreateB->Location = System::Drawing::Point(93, 227);
			this->textBoxforCreateB->Margin = System::Windows::Forms::Padding(4);
			this->textBoxforCreateB->Multiline = true;
			this->textBoxforCreateB->Name = L"textBoxforCreateB";
			this->textBoxforCreateB->Size = System::Drawing::Size(532, 48);
			this->textBoxforCreateB->TabIndex = 24;
			this->textBoxforCreateB->Visible = false;
			// 
			// textBoxforCreateC
			// 
			this->textBoxforCreateC->Location = System::Drawing::Point(96, 314);
			this->textBoxforCreateC->Margin = System::Windows::Forms::Padding(4);
			this->textBoxforCreateC->Multiline = true;
			this->textBoxforCreateC->Name = L"textBoxforCreateC";
			this->textBoxforCreateC->Size = System::Drawing::Size(532, 48);
			this->textBoxforCreateC->TabIndex = 25;
			this->textBoxforCreateC->Visible = false;
			// 
			// textBoxforCreateD
			// 
			this->textBoxforCreateD->Location = System::Drawing::Point(96, 401);
			this->textBoxforCreateD->Margin = System::Windows::Forms::Padding(4);
			this->textBoxforCreateD->Multiline = true;
			this->textBoxforCreateD->Name = L"textBoxforCreateD";
			this->textBoxforCreateD->Size = System::Drawing::Size(532, 48);
			this->textBoxforCreateD->TabIndex = 26;
			this->textBoxforCreateD->Visible = false;
			// 
			// textBoxforCreateTrueSolution
			// 
			this->textBoxforCreateTrueSolution->Location = System::Drawing::Point(96, 488);
			this->textBoxforCreateTrueSolution->Margin = System::Windows::Forms::Padding(4);
			this->textBoxforCreateTrueSolution->Multiline = true;
			this->textBoxforCreateTrueSolution->Name = L"textBoxforCreateTrueSolution";
			this->textBoxforCreateTrueSolution->Size = System::Drawing::Size(55, 48);
			this->textBoxforCreateTrueSolution->TabIndex = 27;
			this->textBoxforCreateTrueSolution->Visible = false;
			// 
			// textBoxForCreateMainQuestion
			// 
			this->textBoxForCreateMainQuestion->Location = System::Drawing::Point(93, 53);
			this->textBoxForCreateMainQuestion->Margin = System::Windows::Forms::Padding(4);
			this->textBoxForCreateMainQuestion->Multiline = true;
			this->textBoxForCreateMainQuestion->Name = L"textBoxForCreateMainQuestion";
			this->textBoxForCreateMainQuestion->Size = System::Drawing::Size(532, 48);
			this->textBoxForCreateMainQuestion->TabIndex = 28;
			this->textBoxForCreateMainQuestion->Visible = false;
			// 
			// createMainQuestion
			// 
			this->createMainQuestion->AutoSize = true;
			this->createMainQuestion->Location = System::Drawing::Point(92, 18);
			this->createMainQuestion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->createMainQuestion->Name = L"createMainQuestion";
			this->createMainQuestion->Size = System::Drawing::Size(217, 31);
			this->createMainQuestion->TabIndex = 29;
			this->createMainQuestion->Text = L"Главный вопрос";
			this->createMainQuestion->Visible = false;
			// 
			// btn_createQuestion
			// 
			this->btn_createQuestion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_createQuestion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_createQuestion->Location = System::Drawing::Point(966, 594);
			this->btn_createQuestion->Margin = System::Windows::Forms::Padding(4);
			this->btn_createQuestion->Name = L"btn_createQuestion";
			this->btn_createQuestion->Size = System::Drawing::Size(239, 84);
			this->btn_createQuestion->TabIndex = 30;
			this->btn_createQuestion->Text = L"создать";
			this->btn_createQuestion->UseVisualStyleBackColor = true;
			this->btn_createQuestion->Visible = false;
			this->btn_createQuestion->Click += gcnew System::EventHandler(this, &MyForm::btn_createQuestion_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1222, 694);
			this->Controls->Add(this->btn_createQuestion);
			this->Controls->Add(this->createMainQuestion);
			this->Controls->Add(this->textBoxForCreateMainQuestion);
			this->Controls->Add(this->textBoxforCreateTrueSolution);
			this->Controls->Add(this->textBoxforCreateD);
			this->Controls->Add(this->textBoxforCreateC);
			this->Controls->Add(this->textBoxforCreateB);
			this->Controls->Add(this->textBoxforCreateA);
			this->Controls->Add(this->create_trueSolution);
			this->Controls->Add(this->createD);
			this->Controls->Add(this->createC);
			this->Controls->Add(this->createB);
			this->Controls->Add(this->createA);
			this->Controls->Add(this->btn_admin);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->score_label);
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
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Competence test";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btn_answer_A_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (counter >= collection->Count - 1)
	{
		if (this->btn_answer_A->Text[0] == collection[counter]->trueSolution)
		{
			user->score++;
		}
		this->score_label->Text = user->username + "  \n\n" + "Ваш результат:\n" + user->score.ToString() + "/" + collection->Count.ToString();
		this->score_label->Visible = true;
		this->btn_answer_A->Visible = false;
		this->btn_answer_B->Visible = false;
		this->btn_answer_C->Visible = false;
		this->btn_answer_D->Visible = false;
		this->VariousOfAnswers_label->Visible = false;
		this->Question_label->Visible = false;
		user->SaveScoreNS();
	}
	else
	{
		if (this->btn_answer_A->Text[0] == collection[counter]->trueSolution)
		{
			user->score++;
		}
		counter++;
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
	}
}
private: System::Void btn_answer_B_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (counter >= collection->Count - 1)
	{
		if (this->btn_answer_B->Text[0] == collection[counter]->trueSolution)
		{
			user->score++;
		}
		this->score_label->Text = user->username + "  \n\n" + "Ваш результат:\n" + user->score.ToString() + "/" + collection->Count.ToString();;
		this->score_label->Visible = true;
		this->btn_answer_A->Visible = false;
		this->btn_answer_B->Visible = false;
		this->btn_answer_C->Visible = false;
		this->btn_answer_D->Visible = false;
		this->VariousOfAnswers_label->Visible = false;
		this->Question_label->Visible = false;
		user->SaveScoreNS();
	}
	else 
	{
		if (this->btn_answer_B->Text[0] == collection[counter]->trueSolution)
		{
			user->score++;
		}
		counter++;
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
	}
}
private: System::Void btn_answer_C_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (counter >= collection->Count - 1)
	{
		if (this->btn_answer_C->Text[0] == collection[counter]->trueSolution)
		{
			user->score++;
		}
		this->score_label->Text = user->username + "  \n\n" + "Ваш результат:\n" + user->score.ToString() + "/" + collection->Count.ToString();;
		this->score_label->Visible = true;
		this->btn_answer_A->Visible = false;
		this->btn_answer_B->Visible = false;
		this->btn_answer_C->Visible = false;
		this->btn_answer_D->Visible = false;
		this->VariousOfAnswers_label->Visible = false;
		this->Question_label->Visible = false;
		user->SaveScoreNS();
	}
	else
	{
		if (this->btn_answer_C->Text[0] == collection[counter]->trueSolution)
		{
			user->score++;
		}
		counter++;
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
	}
}
private: System::Void btn_answer_D_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (counter >= collection->Count - 1)
	{
		if (this->btn_answer_D->Text[0] == collection[counter]->trueSolution)
		{
			user->score++;
		}
		this->score_label->Text = user->username + "  \n\n" + "Ваш результат:\n" + user->score.ToString() + "/" + collection->Count.ToString();;
		this->score_label->Visible = true;
		this->btn_answer_A->Visible = false;
		this->btn_answer_B->Visible = false;
		this->btn_answer_C->Visible = false;
		this->btn_answer_D->Visible = false;
		this->VariousOfAnswers_label->Visible = false;
		this->Question_label->Visible = false;
		user->SaveScoreNS();
	}
	else
	{
		if (this->btn_answer_D->Text[0] == collection[counter]->trueSolution)
		{
			user->score++;
		}
		counter++;
		this->VariousOfAnswers_label->Text = collection[counter]->description;
		this->Question_label->Text = collection[counter]->mainquestion;
	}
}
	private: System::Void btn_start_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (this->input_username_box->Text == "admin")
		{
			this->btn_start->Visible = false;
			this->btn_admin->Visible = true;
			this->input_username_box->Text = "";
			this->start_label->Text = "введите пароль";
		}
		else
		{
			if (this->input_username_box->Text->Length > 12)
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
				user->username = this->input_username_box->Text;
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
				this->Question_label->Text = collection[counter]->mainquestion;
				this->VariousOfAnswers_label->Text = collection[counter]->description;
			}
		}
	}
	private: System::Void btn_admin_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (input_username_box->Text != "1111") 
		{
			this->start_label->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->start_label->Text = "неверный пароль";
		}
		else
		{
			this->btn_admin->Visible = false;
			this->start_label->Visible = false;
			this->input_username_box->Visible = false;
			this->btn_createQuestion->Visible = true;
			this->createMainQuestion->Visible = true;
			this->createA->Visible = true;
			this->createB->Visible = true;
			this->createC->Visible = true;
			this->createD->Visible = true;
			this->create_trueSolution->Visible = true;
			this->textBoxforCreateA->Visible = true;
			this->textBoxforCreateB->Visible = true;
			this->textBoxforCreateC->Visible = true;
			this->textBoxforCreateD->Visible = true;
			this->textBoxforCreateTrueSolution->Visible = true;
			this->textBoxForCreateMainQuestion->Visible = true;
		}
	}
	private: System::Void btn_exit_Click(System::Object ^ sender, System::EventArgs ^ e) {
		this->Close();
	}
	private: System::Void btn_createQuestion_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		string mainquestion = "";
		string A = "";
		string B = "";
		string C = "";
		string D = "";
		string truesolution = "";
		for each (char letter in this->textBoxForCreateMainQuestion->Text)
		{
			mainquestion.push_back(letter);
		}
		for each (char letter in this->textBoxforCreateA->Text)
		{
			A.push_back(letter);
		}
		for each (char letter in this->textBoxforCreateB->Text)
		{
			B.push_back(letter);
		}
		for each (char letter in this->textBoxforCreateC->Text)
		{
			C.push_back(letter);
		}
		for each (char letter in this->textBoxforCreateD->Text)
		{
			D.push_back(letter);
		}
		for each (char letter in this->textBoxforCreateTrueSolution->Text)
		{
			truesolution.push_back(letter);
		}
		ofstream data;
		data.open("data.txt", std::ios::app);
		data << mainquestion + "\n" + "A) " + A + "\n" + "B) " + B + "\n" + "C) " + C + "\n" + "D) " + D + "\n" + truesolution << endl;
		data.close();
		this->Close();
	}
};
}
