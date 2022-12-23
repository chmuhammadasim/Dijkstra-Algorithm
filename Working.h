#pragma once
#include "N.h"
#include "E.h"


namespace Sciber {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//GLOBALVARIABLES
	/// </summary>
	/// 



	
	public ref class Working : public System::Windows::Forms::Form
	{
	public:
		

		Working(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button3;
	public:

	public:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	public:



		Node* islambad = new Node("islambad");
		Node* rawalpindi = new Node("rawalpindi");
		Node* lahore = new Node("lahore");
		Node* murree = new Node("murree");
		Node* multan = new Node("multan");
		Node* peshawar = new Node("peshawar");
		Node* karachi = new Node("karachi");


		//WRITE FUNTION HERE
		void PrintShortestRouteTo(Node* destination) {
			Node* previous = destination;
			cout << "Distance from start: "
				<< destination->distanceFromStart << endl;
			while (previous) {
				cout << previous->id << "<-";
				previous = previous->previous;
			}
			cout << endl;
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Working()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Working::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(859, 417);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Working::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(321, 326);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Running";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Working::button2_Click);
			// 
			// label1
			// 
			this->label1->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(551, 221);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Result ";
			this->label1->Click += gcnew System::EventHandler(this, &Working::button3_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(321, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(176, 36);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Islamabad";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Working::button3_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(321, 136);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(176, 36);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Rawal Pindi";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Working::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(321, 163);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(176, 36);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Murree";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Working::button5_Click_1);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(321, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(176, 36);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Lahore";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Working::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->Cursor = System::Windows::Forms::Cursors::Default;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(321, 217);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(176, 36);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Karachi";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Working::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(321, 244);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(176, 36);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Multan";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Working::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(321, 271);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(176, 36);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Peshawar";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Working::button9_Click);
			// 
			// Working
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(949, 452);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"Working";
			this->Text = L"Working";
			this->Load += gcnew System::EventHandler(this, &Working::Working_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Working_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure you to exit", "Exit Prompt",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
			Form::Close();

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		PrintShortestRouteTo(islambad);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {}


private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panelDropdown_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	PrintShortestRouteTo(karachi);
	label1->Text = "Distance From Start 80 -> Islamabad -> Murree -> Karachi";
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	PrintShortestRouteTo(islambad);
	label1->Text = "Distance From Start 0 -> Islamabad";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	PrintShortestRouteTo(rawalpindi);
	label1->Text = "Distance From Start 56 -> Islamabad -> Lahore -> Rawalpindi";

}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	PrintShortestRouteTo(murree);
	label1->Text = "Distance From Start 65 -> Islamabad -> Murree";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	PrintShortestRouteTo(lahore);
	label1->Text = "Distance From Start 25 -> Islamabad -> Lahore";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	PrintShortestRouteTo(multan);
	label1->Text = "Distance From Start 31 -> Islamabad -> Lahore -> Multan";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	PrintShortestRouteTo(peshawar);
	label1->Text = "Distance From Start 71-> Islamabad -> Lahore -> Rawalpindi -> Peshawart";
}

};
}
