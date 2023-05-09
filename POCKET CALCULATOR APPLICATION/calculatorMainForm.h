#pragma once

namespace POCKETCALCULATORAPPLICATION {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for calculatorMainForm
	/// </summary>
	public ref class calculatorMainForm : public System::Windows::Forms::Form
	{
	public:
		calculatorMainForm(void)
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
		~calculatorMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnPoint;
	private: System::Windows::Forms::Button^ btnEqual;
	protected:

	protected:












	private: System::Windows::Forms::Button^ btnDel;
	private: System::Windows::Forms::Button^ btnMultiply;

	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnDivide;




	private: System::Windows::Forms::Button^ btnMinus;


	private: System::Windows::Forms::Button^ btnAC;
	private: System::Windows::Forms::Button^ btnSqrt;
	private: System::Windows::Forms::Button^ btnFactorial;
	private: System::Windows::Forms::Button^ btnPower;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(calculatorMainForm::typeid));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnPoint = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDel = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnAC = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnFactorial = (gcnew System::Windows::Forms::Button());
			this->btnPower = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(444, 68);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->UseWaitCursor = true;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &calculatorMainForm::txtDisplay_TextChanged);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 101);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(69, 44);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &calculatorMainForm::NumericValues);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(87, 101);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(69, 44);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &calculatorMainForm::NumericValues);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(162, 101);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(69, 44);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &calculatorMainForm::NumericValues);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 151);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(69, 44);
			this->btn4->TabIndex = 5;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &calculatorMainForm::NumericValues);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(87, 151);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(69, 44);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &calculatorMainForm::NumericValues);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(162, 151);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(69, 44);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &calculatorMainForm::NumericValues);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 201);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(69, 44);
			this->btn1->TabIndex = 8;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &calculatorMainForm::NumericValues);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(87, 201);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(69, 44);
			this->btn2->TabIndex = 9;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &calculatorMainForm::NumericValues);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(162, 201);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(69, 44);
			this->btn3->TabIndex = 10;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &calculatorMainForm::NumericValues);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 251);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(69, 44);
			this->btn0->TabIndex = 11;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &calculatorMainForm::NumericValues);
			// 
			// btnPoint
			// 
			this->btnPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPoint->Location = System::Drawing::Point(87, 248);
			this->btnPoint->Name = L"btnPoint";
			this->btnPoint->Size = System::Drawing::Size(69, 44);
			this->btnPoint->TabIndex = 12;
			this->btnPoint->Text = L".";
			this->btnPoint->UseVisualStyleBackColor = true;
			this->btnPoint->Click += gcnew System::EventHandler(this, &calculatorMainForm::btnPoint_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->Location = System::Drawing::Point(162, 251);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(294, 44);
			this->btnEqual->TabIndex = 13;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			// 
			// btnDel
			// 
			this->btnDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDel->Location = System::Drawing::Point(237, 101);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(69, 44);
			this->btnDel->TabIndex = 14;
			this->btnDel->Text = L"DEL";
			this->btnDel->UseVisualStyleBackColor = true;
			this->btnDel->Click += gcnew System::EventHandler(this, &calculatorMainForm::btnDel_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(237, 151);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(69, 44);
			this->btnMultiply->TabIndex = 15;
			this->btnMultiply->Text = L"x";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &calculatorMainForm::arithmeticOperators);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(237, 201);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(69, 44);
			this->btnPlus->TabIndex = 16;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &calculatorMainForm::arithmeticOperators);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(312, 151);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(69, 44);
			this->btnDivide->TabIndex = 17;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &calculatorMainForm::arithmeticOperators);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(312, 201);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(69, 44);
			this->btnMinus->TabIndex = 18;
			this->btnMinus->Text = L"-\r\n";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &calculatorMainForm::arithmeticOperators);
			// 
			// btnAC
			// 
			this->btnAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAC->Location = System::Drawing::Point(312, 101);
			this->btnAC->Name = L"btnAC";
			this->btnAC->Size = System::Drawing::Size(69, 44);
			this->btnAC->TabIndex = 19;
			this->btnAC->Text = L"AC";
			this->btnAC->UseVisualStyleBackColor = true;
			this->btnAC->Click += gcnew System::EventHandler(this, &calculatorMainForm::btnAC_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSqrt->Location = System::Drawing::Point(387, 101);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(69, 44);
			this->btnSqrt->TabIndex = 20;
			this->btnSqrt->Text = L"sqrt";
			this->btnSqrt->UseVisualStyleBackColor = true;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &calculatorMainForm::btnSqrt_Click);
			// 
			// btnFactorial
			// 
			this->btnFactorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFactorial->Location = System::Drawing::Point(387, 151);
			this->btnFactorial->Name = L"btnFactorial";
			this->btnFactorial->Size = System::Drawing::Size(69, 44);
			this->btnFactorial->TabIndex = 21;
			this->btnFactorial->Text = L"!";
			this->btnFactorial->UseVisualStyleBackColor = true;
			// 
			// btnPower
			// 
			this->btnPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPower->Location = System::Drawing::Point(387, 201);
			this->btnPower->Name = L"btnPower";
			this->btnPower->Size = System::Drawing::Size(69, 44);
			this->btnPower->TabIndex = 22;
			this->btnPower->Text = L"x^";
			this->btnPower->UseVisualStyleBackColor = true;
			// 
			// calculatorMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 304);
			this->Controls->Add(this->btnPower);
			this->Controls->Add(this->btnFactorial);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btnAC);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnDel);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnPoint);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txtDisplay);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(486, 343);
			this->MinimumSize = System::Drawing::Size(486, 343);
			this->Name = L"calculatorMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Click += gcnew System::EventHandler(this, &calculatorMainForm::arithmeticOperators);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double operand1, operand2, answer;
		String^ ioperator;


/// NumbericValues is an event handler for all the numerical values
	private: System::Void NumericValues(System::Object^ sender, System::EventArgs^ e) {
		Button^ number = safe_cast<Button^>(sender);

		if (txtDisplay->Text == "0")
		{
			txtDisplay->Text = number->Text;
		}
		else
		{
			txtDisplay->Text = txtDisplay->Text + number->Text;
		}
	}

//arithmeticOperators is an even handler for all the arithmatic operators.
private: System::Void arithmeticOperators(System::Object^ sender, System::EventArgs^ e) {

	Button^ Operator = safe_cast<Button^>(sender); 

	operand1 = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = " ";
	ioperator = Operator->Text;

	txtDisplay->Text = operand1 + ioperator + operand2;
}

private: System::Void btnDel_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}
private: System::Void btnPoint_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";

	}
}
private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisplay->Text == "")
	{
		txtDisplay->Text = "0";

	}
}
private: System::Void btnAC_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void btnSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "sqrt";
}
};
}
