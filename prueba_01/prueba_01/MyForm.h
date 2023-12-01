#pragma once

#include <Windows.h>
#include <list>
#include "msclr/marshal_cppstd.h"// Incluimos la libreriapara convertir de std::string a String^
#include "Libro.h"
#include "MyForm1.h"

namespace prueba01 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace MySql::Data;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		String^ tit_str = "";

	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btLoadLibros;
	protected:

	protected:


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txServer;
	private: System::Windows::Forms::TextBox^ txUser;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txPassword;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txDatabase;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::TextBox^ txPort;

	private: System::Windows::Forms::Label^ label6;






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:

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
			this->btLoadLibros = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txServer = (gcnew System::Windows::Forms::TextBox());
			this->txUser = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txDatabase = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txPort = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btLoadLibros
			// 
			this->btLoadLibros->Location = System::Drawing::Point(56, 145);
			this->btLoadLibros->Name = L"btLoadLibros";
			this->btLoadLibros->Size = System::Drawing::Size(187, 31);
			this->btLoadLibros->TabIndex = 0;
			this->btLoadLibros->Text = L"Carga libros";
			this->btLoadLibros->UseVisualStyleBackColor = true;
			this->btLoadLibros->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 187);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(401, 205);
			this->dataGridView1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Servidor:";
			// 
			// txServer
			// 
			this->txServer->Location = System::Drawing::Point(103, 10);
			this->txServer->Name = L"txServer";
			this->txServer->Size = System::Drawing::Size(193, 20);
			this->txServer->TabIndex = 4;
			this->txServer->Text = L"192.168.1.63";
			// 
			// txUser
			// 
			this->txUser->Location = System::Drawing::Point(103, 62);
			this->txUser->Name = L"txUser";
			this->txUser->Size = System::Drawing::Size(193, 20);
			this->txUser->TabIndex = 6;
			this->txUser->Text = L"root";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Usuario:";
			// 
			// txPassword
			// 
			this->txPassword->Location = System::Drawing::Point(103, 88);
			this->txPassword->Name = L"txPassword";
			this->txPassword->Size = System::Drawing::Size(193, 20);
			this->txPassword->TabIndex = 8;
			this->txPassword->Text = L"Patata_123";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Contraseña:";
			// 
			// txDatabase
			// 
			this->txDatabase->Location = System::Drawing::Point(103, 114);
			this->txDatabase->Name = L"txDatabase";
			this->txDatabase->Size = System::Drawing::Size(193, 20);
			this->txDatabase->TabIndex = 10;
			this->txDatabase->Text = L"Pantallas";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Base de datos:";
			// 
			// txPort
			// 
			this->txPort->Location = System::Drawing::Point(103, 36);
			this->txPort->Name = L"txPort";
			this->txPort->Size = System::Drawing::Size(77, 20);
			this->txPort->TabIndex = 14;
			this->txPort->Text = L"3307";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Puerto:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(436, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 29);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Ver detalles";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(623, 13);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 207);
			this->textBox1->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 468);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txPort);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txDatabase);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txUser);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txServer);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btLoadLibros);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::String^ getConnStr() {
		String^ connStr = "server=" + txServer->Text;
		if (!String::IsNullOrEmpty(txPort->Text)) {
			connStr += ";port=" + txPort->Text;
		}
		connStr += ";user=" + txUser->Text + ";password=" + txPassword->Text + ";database=" + txDatabase->Text;
		return connStr;
	}

	private: MySqlConnection^ getOpenConnection() {
		MySqlConnection^ connSQL;
		String^ connStr = getConnStr();
		connSQL = gcnew MySqlConnection(connStr);
		connSQL->Open();
		return connSQL;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ connSQL = getOpenConnection();

		MySqlCommand^ cmdSQL = gcnew MySqlCommand("SELECT LIBRO_ID, TITULO FROM LIBROS", connSQL);

		MySqlDataReader^ rdr = cmdSQL->ExecuteReader();

		DataTable^ dt = gcnew DataTable();

		dt->Load(rdr);

		dataGridView1->DataSource = dt;

		rdr->Close();
		connSQL->Close();
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int numSeleccionadas = dataGridView1->SelectedRows->Count;
		if (1 == numSeleccionadas) {
			int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
			int libro_id = (int) dataGridView1->Rows[rowIndex]->Cells[0]->Value;
			libroDetalles(libro_id);
		}
	}

    private: void libroDetalles(int libro_id) {
		MySqlConnection^ connSQL = getOpenConnection();
		MySqlCommand^ cmdSQL = gcnew MySqlCommand("SELECT LIBRO_ID, TITULO, AUTOR, PRECIO FROM LIBROS WHERE LIBRO_ID = " + libro_id, connSQL);
		MySqlDataReader^ rdr = cmdSQL->ExecuteReader();
		if (rdr->HasRows) {
			rdr->Read();
			int lib_id = rdr->GetInt32(0);
			String^ titulo = rdr->GetString(1);
			String^ autor = rdr->GetString(2);
			double precio = rdr->GetDouble(3);
			MyForm1^ mf1 = gcnew MyForm1();
			mf1->setTitulo(titulo);
			mf1->setAutor(titulo);
			mf1->setPrecio(precio);
			mf1->ShowDialog();
			if (mf1->Tag->ToString() == "xxx") {
				tit_str += "\r\n" + titulo;
				textBox1->Text = tit_str;
			}
			
		}
	}
	

};


}
