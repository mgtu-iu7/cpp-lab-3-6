#pragma once

namespace Проект3 {

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(41, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(188, 106);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(72, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {



				 Graphics ^ g = pictureBox1->CreateGraphics();
				 Pen^ p = gcnew Pen(Color::Blue, 1.0f);
				 Point pt1 = Point(10, 10);
				 Point pt2 = Point(100, 10);
				 Point pt3 = Point(100, 60);
				 Point pt4 = Point(10, 60);
				 Point pt5 = Point(100, 20);
				 Point pt6 = Point(140, 20);
				 Point pt7 = Point(140, 58);
				 Point pt8 = Point(100, 58);
				 Point pt9 = Point(110, 30);
				 Point pt10 = Point(120, 30);
				 Point pt11 = Point(120, 50);
				 Point pt12 = Point(110, 50);
				 g->DrawLine(p, pt1, pt2);
				 g->DrawLine(p, pt2, pt3);
				 g->DrawLine(p, pt3, pt4);
				 g->DrawLine(p, pt4, pt1);
				 g->DrawLine(p, pt5, pt6);
				 g->DrawLine(p, pt6, pt7);
				 g->DrawLine(p, pt7, pt8);
				 g->DrawLine(p, pt8, pt5);
				 g->DrawLine(p, pt9, pt10);
				 g->DrawLine(p, pt10, pt11);
				 g->DrawLine(p, pt11, pt12);
				 g->DrawLine(p, pt12, pt9);
				 g->DrawEllipse(p, Rectangle(15, 60, 15, 15));
				 g->DrawEllipse(p, Rectangle(90, 60, 15, 15));
				 g->DrawEllipse(p, Rectangle(111, 39, 3, 3));
	}
	};
}
