#pragma once

namespace prueba01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{

	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbTitulo;
	private: System::Windows::Forms::Label^ lbAutor;
	protected:

	private: System::Windows::Forms::Label^ lbPrecio;
	private: System::Windows::Forms::Button^ btClose;
	private: System::Windows::Forms::Button^ btBuy;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbTitulo = (gcnew System::Windows::Forms::Label());
			this->lbAutor = (gcnew System::Windows::Forms::Label());
			this->lbPrecio = (gcnew System::Windows::Forms::Label());
			this->btClose = (gcnew System::Windows::Forms::Button());
			this->btBuy = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbTitulo
			// 
			this->lbTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitulo->Location = System::Drawing::Point(32, 14);
			this->lbTitulo->Name = L"lbTitulo";
			this->lbTitulo->Size = System::Drawing::Size(506, 30);
			this->lbTitulo->TabIndex = 0;
			this->lbTitulo->Text = L"Título";
			this->lbTitulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbAutor
			// 
			this->lbAutor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAutor->ForeColor = System::Drawing::Color::Blue;
			this->lbAutor->Location = System::Drawing::Point(32, 61);
			this->lbAutor->Name = L"lbAutor";
			this->lbAutor->Size = System::Drawing::Size(506, 30);
			this->lbAutor->TabIndex = 1;
			this->lbAutor->Text = L"Autor";
			this->lbAutor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbPrecio
			// 
			this->lbPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPrecio->ForeColor = System::Drawing::Color::Red;
			this->lbPrecio->Location = System::Drawing::Point(32, 113);
			this->lbPrecio->Name = L"lbPrecio";
			this->lbPrecio->Size = System::Drawing::Size(506, 30);
			this->lbPrecio->TabIndex = 2;
			this->lbPrecio->Text = L"Precio";
			this->lbPrecio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btClose
			// 
			this->btClose->Location = System::Drawing::Point(99, 169);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(130, 44);
			this->btClose->TabIndex = 3;
			this->btClose->Text = L"Cerrar";
			this->btClose->UseVisualStyleBackColor = true;
			this->btClose->Click += gcnew System::EventHandler(this, &MyForm1::btClose_Click);
			// 
			// btBuy
			// 
			this->btBuy->Location = System::Drawing::Point(310, 169);
			this->btBuy->Name = L"btBuy";
			this->btBuy->Size = System::Drawing::Size(130, 44);
			this->btBuy->TabIndex = 4;
			this->btBuy->Text = L"Comprar";
			this->btBuy->UseVisualStyleBackColor = true;
			this->btBuy->Click += gcnew System::EventHandler(this, &MyForm1::btBuy_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 261);
			this->Controls->Add(this->btBuy);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->lbPrecio);
			this->Controls->Add(this->lbAutor);
			this->Controls->Add(this->lbTitulo);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);

		}
#pragma endregion

	public: void setTitulo(String^ titulo) {
		lbTitulo->Text = titulo;
	}

	public: void setAutor(String^ autor) {
		lbAutor->Text = autor;
	}

	public: void setPrecio(double precio) {
		lbPrecio->Text = "" + precio;
	}

	private: System::Void btClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


private: System::Void btBuy_Click(System::Object^ sender, System::EventArgs^ e) {
	btBuy->Tag = "xxx";
	this->Close();

}
};
}
