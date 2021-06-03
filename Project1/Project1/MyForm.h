#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: Bunifu::UI::WinForms::BunifuButton::BunifuButton^ bunifuButton1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			Bunifu::UI::WinForms::BunifuButton::BunifuButton::StateProperties^ stateProperties2 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton::StateProperties());
			this->bunifuButton1 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton());
			this->SuspendLayout();
			// 
			// bunifuButton1
			// 
			this->bunifuButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton1.BackgroundImage")));
			this->bunifuButton1->ButtonText = L"Bunifu Button";
			this->bunifuButton1->ButtonTextMarginLeft = 0;
			this->bunifuButton1->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(161)));
			this->bunifuButton1->DisabledFillColor = System::Drawing::Color::Gray;
			this->bunifuButton1->DisabledForecolor = System::Drawing::Color::White;
			this->bunifuButton1->ForeColor = System::Drawing::Color::White;
			this->bunifuButton1->IconLeftCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuButton1->IconPadding = 10;
			this->bunifuButton1->IconRightCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuButton1->IdleBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->bunifuButton1->IdleBorderRadius = 1;
			this->bunifuButton1->IdleBorderThickness = 0;
			this->bunifuButton1->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->bunifuButton1->IdleIconLeftImage = nullptr;
			this->bunifuButton1->IdleIconRightImage = nullptr;
			this->bunifuButton1->Location = System::Drawing::Point(198, 56);
			this->bunifuButton1->Name = L"bunifuButton1";
			stateProperties2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			stateProperties2->BorderRadius = 1;
			stateProperties2->BorderThickness = 1;
			stateProperties2->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			stateProperties2->IconLeftImage = nullptr;
			stateProperties2->IconRightImage = nullptr;
			this->bunifuButton1->onHoverState = stateProperties2;
			this->bunifuButton1->Size = System::Drawing::Size(105, 50);
			this->bunifuButton1->TabIndex = 0;
			this->bunifuButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 253);
			this->Controls->Add(this->bunifuButton1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
