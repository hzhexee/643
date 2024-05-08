#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal_windows.h>
#include <msclr/marshal.h>
#include <algorithm>
#include <sstream>

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	vector<int> readIntegersFromFile(const string& filePath) {
		vector<int> integerContents;
		ifstream inputFile(filePath);

		string line;
		while (getline(inputFile, line)) {
			istringstream iss(line);
			int num;
			while (iss >> num) {
				integerContents.push_back(num);
			}
		}

		inputFile.close();
		return integerContents;
	}

	int compareArrays(vector<int> arr1, vector<int> arr2) {
		int count = 0;
		for (int i = 0; i < 8; ++i) {
			if (arr1[i] == arr2[i]) {
				++count;
			}
		}
		return count;
	}

	vector<int> answers = { 0, 0, 0, 0, 0, 0, 0, 0 };

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::RadioButton^ radioButton17;
	private: System::Windows::Forms::RadioButton^ radioButton18;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RadioButton^ radioButton19;
	private: System::Windows::Forms::RadioButton^ radioButton20;
	private: System::Windows::Forms::RadioButton^ radioButton21;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RadioButton^ radioButton22;
	private: System::Windows::Forms::RadioButton^ radioButton23;
	private: System::Windows::Forms::RadioButton^ radioButton24;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(540, 385);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(532, 359);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Титульная страница";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->label1->Location = System::Drawing::Point(8, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Тестовое приложение";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(422, 124);
			this->button1->TabIndex = 0;
			this->button1->Text = L"СТАРТ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->radioButton4);
			this->tabPage2->Controls->Add(this->radioButton5);
			this->tabPage2->Controls->Add(this->radioButton6);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->radioButton3);
			this->tabPage2->Controls->Add(this->radioButton2);
			this->tabPage2->Controls->Add(this->radioButton1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(532, 359);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Страница 1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoCheck = false;
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(22, 119);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(85, 17);
			this->radioButton4->TabIndex = 8;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_MouseCaptureChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoCheck = false;
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(113, 119);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(85, 17);
			this->radioButton5->TabIndex = 7;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_MouseCaptureChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoCheck = false;
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(204, 119);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(85, 17);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"radioButton6";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_MouseCaptureChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Вопрос 2";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoCheck = false;
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(204, 50);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 17);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_MouseCaptureChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoCheck = false;
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(113, 50);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_MouseCaptureChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoCheck = false;
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(22, 50);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_MouseCaptureChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Вопрос 1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(22, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 90);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Следующая страница";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->radioButton7);
			this->tabPage3->Controls->Add(this->radioButton8);
			this->tabPage3->Controls->Add(this->radioButton9);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->radioButton10);
			this->tabPage3->Controls->Add(this->radioButton11);
			this->tabPage3->Controls->Add(this->radioButton12);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(532, 359);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Страница 2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoCheck = false;
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(18, 66);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(85, 17);
			this->radioButton7->TabIndex = 16;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"radioButton7";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_MouseCaptureChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoCheck = false;
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(109, 66);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(85, 17);
			this->radioButton8->TabIndex = 15;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"radioButton8";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton8_MouseCaptureChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoCheck = false;
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(200, 66);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(85, 17);
			this->radioButton9->TabIndex = 14;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"radioButton9";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton9_MouseCaptureChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Вопрос 4";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoCheck = false;
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(12, 130);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(91, 17);
			this->radioButton10->TabIndex = 12;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"radioButton10";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton10_MouseCaptureChanged);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoCheck = false;
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(109, 130);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(91, 17);
			this->radioButton11->TabIndex = 11;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"radioButton11";
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton11_MouseCaptureChanged);
			// 
			// radioButton12
			// 
			this->radioButton12->AutoCheck = false;
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(200, 130);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(91, 17);
			this->radioButton12->TabIndex = 10;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"radioButton12";
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton12_MouseCaptureChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Вопрос 3";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(22, 183);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(230, 90);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Следующая страница";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->radioButton13);
			this->tabPage4->Controls->Add(this->radioButton14);
			this->tabPage4->Controls->Add(this->radioButton15);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->radioButton16);
			this->tabPage4->Controls->Add(this->radioButton17);
			this->tabPage4->Controls->Add(this->radioButton18);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(532, 359);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Страница 3";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoCheck = false;
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(22, 60);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(91, 17);
			this->radioButton13->TabIndex = 16;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"radioButton13";
			this->radioButton13->UseVisualStyleBackColor = true;
			this->radioButton13->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton13_MouseCaptureChanged);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoCheck = false;
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(113, 60);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(91, 17);
			this->radioButton14->TabIndex = 15;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"radioButton14";
			this->radioButton14->UseVisualStyleBackColor = true;
			this->radioButton14->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton14_MouseCaptureChanged);
			// 
			// radioButton15
			// 
			this->radioButton15->AutoCheck = false;
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(204, 60);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(91, 17);
			this->radioButton15->TabIndex = 14;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"radioButton15";
			this->radioButton15->UseVisualStyleBackColor = true;
			this->radioButton15->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton15_MouseCaptureChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Вопрос 6";
			// 
			// radioButton16
			// 
			this->radioButton16->AutoCheck = false;
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(22, 126);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(91, 17);
			this->radioButton16->TabIndex = 12;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"radioButton16";
			this->radioButton16->UseVisualStyleBackColor = true;
			this->radioButton16->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton16_MouseCaptureChanged);
			// 
			// radioButton17
			// 
			this->radioButton17->AutoCheck = false;
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(113, 126);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(91, 17);
			this->radioButton17->TabIndex = 11;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"radioButton17";
			this->radioButton17->UseVisualStyleBackColor = true;
			this->radioButton17->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton17_MouseCaptureChanged);
			// 
			// radioButton18
			// 
			this->radioButton18->AutoCheck = false;
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(204, 126);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(91, 17);
			this->radioButton18->TabIndex = 10;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L"radioButton18";
			this->radioButton18->UseVisualStyleBackColor = true;
			this->radioButton18->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton18_MouseCaptureChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(19, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Вопрос 5";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(22, 183);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(230, 90);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Следующая страница";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->radioButton19);
			this->tabPage5->Controls->Add(this->radioButton20);
			this->tabPage5->Controls->Add(this->radioButton21);
			this->tabPage5->Controls->Add(this->label8);
			this->tabPage5->Controls->Add(this->radioButton22);
			this->tabPage5->Controls->Add(this->radioButton23);
			this->tabPage5->Controls->Add(this->radioButton24);
			this->tabPage5->Controls->Add(this->label9);
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(532, 359);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Страница 4";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->AutoCheck = false;
			this->radioButton19->AutoSize = true;
			this->radioButton19->Location = System::Drawing::Point(22, 67);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(91, 17);
			this->radioButton19->TabIndex = 16;
			this->radioButton19->TabStop = true;
			this->radioButton19->Text = L"radioButton19";
			this->radioButton19->UseVisualStyleBackColor = true;
			this->radioButton19->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton19_MouseCaptureChanged);
			// 
			// radioButton20
			// 
			this->radioButton20->AutoCheck = false;
			this->radioButton20->AutoSize = true;
			this->radioButton20->Location = System::Drawing::Point(113, 67);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(91, 17);
			this->radioButton20->TabIndex = 15;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"radioButton20";
			this->radioButton20->UseVisualStyleBackColor = true;
			this->radioButton20->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton20_MouseCaptureChanged);
			// 
			// radioButton21
			// 
			this->radioButton21->AutoCheck = false;
			this->radioButton21->AutoSize = true;
			this->radioButton21->Location = System::Drawing::Point(204, 67);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(91, 17);
			this->radioButton21->TabIndex = 14;
			this->radioButton21->TabStop = true;
			this->radioButton21->Text = L"radioButton21";
			this->radioButton21->UseVisualStyleBackColor = true;
			this->radioButton21->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton21_MouseCaptureChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 97);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Вопрос 8";
			// 
			// radioButton22
			// 
			this->radioButton22->AutoCheck = false;
			this->radioButton22->AutoSize = true;
			this->radioButton22->Location = System::Drawing::Point(22, 133);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(91, 17);
			this->radioButton22->TabIndex = 12;
			this->radioButton22->TabStop = true;
			this->radioButton22->Text = L"radioButton22";
			this->radioButton22->UseVisualStyleBackColor = true;
			this->radioButton22->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton22_MouseCaptureChanged);
			// 
			// radioButton23
			// 
			this->radioButton23->AutoCheck = false;
			this->radioButton23->AutoSize = true;
			this->radioButton23->Location = System::Drawing::Point(113, 133);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(91, 17);
			this->radioButton23->TabIndex = 11;
			this->radioButton23->TabStop = true;
			this->radioButton23->Text = L"radioButton23";
			this->radioButton23->UseVisualStyleBackColor = true;
			this->radioButton23->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton23_MouseCaptureChanged);
			// 
			// radioButton24
			// 
			this->radioButton24->AutoCheck = false;
			this->radioButton24->AutoSize = true;
			this->radioButton24->Location = System::Drawing::Point(204, 133);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(91, 17);
			this->radioButton24->TabIndex = 10;
			this->radioButton24->TabStop = true;
			this->radioButton24->Text = L"radioButton24";
			this->radioButton24->UseVisualStyleBackColor = true;
			this->radioButton24->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::radioButton24_MouseCaptureChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(19, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Вопрос 7";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(22, 183);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(230, 90);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Следующая страница";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			this->button5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button5_MouseClick);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label12);
			this->tabPage6->Controls->Add(this->label11);
			this->tabPage6->Controls->Add(this->label10);
			this->tabPage6->Controls->Add(this->button6);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(532, 359);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Результат";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label12->Location = System::Drawing::Point(60, 108);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 31);
			this->label12->TabIndex = 4;
			this->label12->Text = L"из 8";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label11->Location = System::Drawing::Point(37, 108);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 31);
			this->label11->TabIndex = 3;
			this->label11->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label10->Location = System::Drawing::Point(16, 21);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(430, 31);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Количество правильных ответов:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(22, 183);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(230, 90);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Перепройти тест";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 346);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabPage2;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabPage3;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabPage4;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabPage5;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabPage6;
}
//
// Page 1
//
private: System::Void radioButton1_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton2->Visible = false;
	this->radioButton3->Visible = false;
	radioButton1->Checked = true;
	int rButton1 = 1;
	answers[0] = rButton1;
}
private: System::Void radioButton2_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton1->Visible = false;
	this->radioButton3->Visible = false;
	radioButton2->Checked = true;
	int rButton2 = 2;
	answers[0] = rButton2;
}
private: System::Void radioButton3_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton1->Visible = false;
	this->radioButton2->Visible = false;
	radioButton3->Checked = true;
	int rButton3 = 3;
	answers[0] = rButton3;
}
private: System::Void radioButton4_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton5->Visible = false;
	this->radioButton6->Visible = false;
	radioButton4->Checked = true;
	int rButton1 = 1;
	answers[1] = rButton1;
}
private: System::Void radioButton5_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton4->Visible = false;
	this->radioButton6->Visible = false;
	radioButton5->Checked = true;
	int rButton2 = 2;
	answers[1] = rButton2;
}
private: System::Void radioButton6_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton4->Visible = false;
	this->radioButton5->Visible = false;
	radioButton6->Checked = true;
	int rButton3 = 3;
	answers[1] = rButton3;
}
//
// Page 2
//
private: System::Void radioButton7_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton8->Visible = false;
	this->radioButton9->Visible = false;
	radioButton7->Checked = true;
	int rButton1 = 1;
	answers[2] = rButton1;
}
private: System::Void radioButton8_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton7->Visible = false;
	this->radioButton9->Visible = false;
	radioButton8->Checked = true;
	int rButton2 = 2;
	answers[2] = rButton2;
}
private: System::Void radioButton9_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton7->Visible = false;
	this->radioButton8->Visible = false;
	radioButton9->Checked = true;
	int rButton3 = 3;
	answers[2] = rButton3;
}
private: System::Void radioButton10_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton11->Visible = false;
	this->radioButton12->Visible = false;
	radioButton10->Checked = true;
	int rButton1 = 1;
	answers[3] = rButton1;
}
private: System::Void radioButton11_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton10->Visible = false;
	this->radioButton12->Visible = false;
	radioButton11->Checked = true;
	int rButton2 = 2;
	answers[3] = rButton2;
}
private: System::Void radioButton12_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton10->Visible = false;
	this->radioButton11->Visible = false;
	radioButton12->Checked = true;
	int rButton3 = 3;
	answers[3] = rButton3;
}
//
// Page 3
//
private: System::Void radioButton13_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton14->Visible = false;
	this->radioButton15->Visible = false;
	radioButton13->Checked = true;
	int rButton1 = 1;
	answers[4] = rButton1;
}
private: System::Void radioButton14_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton13->Visible = false;
	this->radioButton15->Visible = false;
	radioButton14->Checked = true;
	int rButton2 = 2;
	answers[4] = rButton2;
}
private: System::Void radioButton15_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton13->Visible = false;
	this->radioButton14->Visible = false;
	radioButton15->Checked = true;
	int rButton3 = 3;
	answers[4] = rButton3;
}
private: System::Void radioButton16_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton17->Visible = false;
	this->radioButton18->Visible = false;
	radioButton16->Checked = true;
	int rButton1 = 1;
	answers[5] = rButton1;
}
private: System::Void radioButton17_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton16->Visible = false;
	this->radioButton18->Visible = false;
	radioButton17->Checked = true;
	int rButton2 = 2;
	answers[5] = rButton2;
}
private: System::Void radioButton18_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton16->Visible = false;
	this->radioButton17->Visible = false;
	radioButton18->Checked = true;
	int rButton3 = 3;
	answers[5] = rButton3;
}
//
// Page 4
//

private: System::Void radioButton19_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton20->Visible = false;
	this->radioButton21->Visible = false;
	radioButton19->Checked = true;
	int rButton1 = 1;
	answers[6] = rButton1;
}
private: System::Void radioButton20_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton19->Visible = false;
	this->radioButton21->Visible = false;
	radioButton20->Checked = true;
	int rButton2 = 2;
	answers[6] = rButton2;
}
private: System::Void radioButton21_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton19->Visible = false;
	this->radioButton20->Visible = false;
	radioButton21->Checked = true;
	int rButton3 = 3;
	answers[6] = rButton3;
}
private: System::Void radioButton22_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton23->Visible = false;
	this->radioButton24->Visible = false;
	radioButton22->Checked = true;
	int rButton1 = 1;
	answers[7] = rButton1;
}
private: System::Void radioButton23_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton22->Visible = false;
	this->radioButton24->Visible = false;
	radioButton23->Checked = true;
	int rButton2 = 2;
	answers[7] = rButton2;
}
private: System::Void radioButton24_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton22->Visible = false;
	this->radioButton23->Visible = false;
	radioButton24->Checked = true;
	int rButton3 = 3;
	answers[7] = rButton3;
}
private: System::Void button5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	vector<int> trueAnswers = readIntegersFromFile("C:\\a\\answers.txt");
	int rightAnswers = compareArrays(answers, trueAnswers);
	label11->Text = rightAnswers.ToString();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	answers.erase(answers.begin(), answers.end());
	answers = { 0, 0, 0, 0, 0, 0, 0, 0 };
	label11->Text = "0";
	tabControl1->SelectedTab = tabPage1;
	radioButton1->Visible = true;
	radioButton2->Visible = true;
	radioButton3->Visible = true;
	radioButton4->Visible = true;
	radioButton5->Visible = true;
	radioButton6->Visible = true;
	radioButton7->Visible = true;
	radioButton8->Visible = true;
	radioButton9->Visible = true;
	radioButton10->Visible = true;
	radioButton11->Visible = true;
	radioButton12->Visible = true;
	radioButton13->Visible = true;
	radioButton14->Visible = true;
	radioButton15->Visible = true;
	radioButton16->Visible = true;
	radioButton17->Visible = true;
	radioButton18->Visible = true;
	radioButton19->Visible = true;
	radioButton20->Visible = true;
	radioButton21->Visible = true;
	radioButton22->Visible = true;
	radioButton23->Visible = true;
	radioButton24->Visible = true;
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	radioButton4->Checked = false;
	radioButton5->Checked = false;
	radioButton6->Checked = false;
	radioButton7->Checked = false;
	radioButton8->Checked = false;
	radioButton9->Checked = false;
	radioButton10->Checked = false;
	radioButton11->Checked = false;
	radioButton12->Checked = false;
	radioButton13->Checked = false;
	radioButton14->Checked = false;
	radioButton15->Checked = false;
	radioButton16->Checked = false;
	radioButton17->Checked = false;
	radioButton18->Checked = false;
	radioButton19->Checked = false;
	radioButton20->Checked = false;
	radioButton21->Checked = false;
	radioButton22->Checked = false;
	radioButton23->Checked = false;
	radioButton24->Checked = false;
}
};
}
