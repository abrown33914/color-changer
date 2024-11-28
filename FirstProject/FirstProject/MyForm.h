#pragma once

namespace FirstProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ title;
    protected:
    private:
        System::Windows::Forms::Button^ colorButton;
    private: System::Windows::Forms::Button^ quitButton;

    private: System::Windows::Forms::Button^ messageButton;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->title = (gcnew System::Windows::Forms::Label());
            this->colorButton = (gcnew System::Windows::Forms::Button());
            this->quitButton = (gcnew System::Windows::Forms::Button());
            this->messageButton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // title
            // 
            this->title->AutoSize = true;
            this->title->Font = (gcnew System::Drawing::Font(L"SimSun", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->title->Location = System::Drawing::Point(56, 56);
            this->title->Name = L"title";
            this->title->Size = System::Drawing::Size(153, 24);
            this->title->TabIndex = 0;
            this->title->Text = L"Hi there...";
            this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // colorButton
            // 
            this->colorButton->BackColor = System::Drawing::Color::White;
            this->colorButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->colorButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->colorButton->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->colorButton->Location = System::Drawing::Point(44, 111);
            this->colorButton->Name = L"colorButton";
            this->colorButton->Size = System::Drawing::Size(75, 46);
            this->colorButton->TabIndex = 1;
            this->colorButton->Text = L"Press me";
            this->colorButton->UseVisualStyleBackColor = false;
            this->colorButton->Click += gcnew System::EventHandler(this, &MyForm::colorButton_Click);
            // 
            // quitButton
            // 
            this->quitButton->BackColor = System::Drawing::Color::White;
            this->quitButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->quitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->quitButton->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->quitButton->Location = System::Drawing::Point(138, 111);
            this->quitButton->Name = L"quitButton";
            this->quitButton->Size = System::Drawing::Size(71, 46);
            this->quitButton->TabIndex = 2;
            this->quitButton->Text = L"Good bye!";
            this->quitButton->UseVisualStyleBackColor = false;
            this->quitButton->Click += gcnew System::EventHandler(this, &MyForm::quitButton_Click);
            // 
            // messageButton
            // 
            this->messageButton->BackColor = System::Drawing::Color::Transparent;
            this->messageButton->FlatAppearance->BorderSize = 0;
            this->messageButton->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->messageButton->ForeColor = System::Drawing::Color::Black;
            this->messageButton->Location = System::Drawing::Point(235, 194);
            this->messageButton->Name = L"messageButton";
            this->messageButton->Size = System::Drawing::Size(25, 28);
            this->messageButton->TabIndex = 3;
            this->messageButton->Text = L"\?";
            this->messageButton->UseVisualStyleBackColor = false;
            this->messageButton->Click += gcnew System::EventHandler(this, &MyForm::messageButton_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->ClientSize = System::Drawing::Size(266, 229);
            this->Controls->Add(this->messageButton);
            this->Controls->Add(this->quitButton);
            this->Controls->Add(this->colorButton);
            this->Controls->Add(this->title);
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        // Method for color changing button
    private: System::Void colorButton_Click(System::Object^ sender, System::EventArgs^ e)
    {
        // Create a Random object to generate random numbers
        Random^ rand = gcnew Random();
        // Generate random RGB values (0-255)
        int red = rand->Next(256);   
        int green = rand->Next(256); 
        int blue = rand->Next(256);  
        // Create a random color using RGB values
        Color randomColor = Color::FromArgb(red, green, blue);
        // Change the form's background color to the generated color
        this->BackColor = randomColor;
    }

           // Method for goodbye button
    private: System::Void quitButton_Click(System::Object^ sender, System::EventArgs^ e) {
        // Exit the application
        Application::Exit();
    }

        // Method for message button
    private: System::Void messageButton_Click(System::Object^ sender, System::EventArgs^ e) {
        // Display a computer science joke in a message box
        MessageBox::Show("Why do programmers prefer dark mode?\nBecause the light attracts bugs!",
            "Computer Science Joke",
            MessageBoxButtons::OK,
            MessageBoxIcon::Information);
    }

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }

};
}
