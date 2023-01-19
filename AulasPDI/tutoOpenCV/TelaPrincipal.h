#pragma once
#include <opencv2/opencv.hpp>
//#include <opencv2/tracking.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <windows.h>
#include <string.h>
#include <iostream>
#include <string>
#include <vcclr.h>
#include <msclr\marshal_cppstd.h>
#include "TesteVideos.h"
#include <vector>

namespace AulasPDI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;
	using namespace cv;
	using std::string;
	using std::getline;
	using std::cout;
	using std::cout;
	using std::cin;
	using std::endl;

	/// <summary>
	/// Sum�rio para TelaPrincipal
	/// </summary>
	Mat original = imread("lena.jpg");
	Mat histograma(256, 256, CV_8U, Scalar(255));
	Mat histImagem(256, 256, CV_8U, Scalar(255));
	//Mat modificando;
	Mat backupImage;
	int mouseX, mouseY;
	vector <Mat> imagens;
	int indice = 0;

	public ref class TelaPrincipal : public System::Windows::Forms::Form
	{
	public:
		TelaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o c�digo do construtor aqui
			//
			
		}
		

	protected:
		/// <summary>
		/// Limpar os recursos que est�o sendo usados.
		/// </summary>
		~TelaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:



	private: TesteVideos *testeVideos;










	private: System::Windows::Forms::OpenFileDialog^ ofd1;
	private: System::Windows::Forms::ToolStripMenuItem^ resoTool;
	private: System::Windows::Forms::ToolStripMenuItem^ nomeTool;






	private: System::Windows::Forms::ToolStripMenuItem^ toolMouse;
	private: System::Windows::Forms::ToolStrip^ toolBotoes;
	private: System::Windows::Forms::ToolStripButton^ btCamera;
	private: System::Windows::Forms::ToolStripButton^ btImagem;
	private: System::Windows::Forms::ToolStripDropDownButton^ btCanais;
	private: System::Windows::Forms::ToolStripMenuItem^ xYZToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hSVToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hSLToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lUVToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lABToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ yCRCBToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ grayscaleToolStripMenuItem;





	private: System::Windows::Forms::ToolStripDropDownButton^ btFBlur;
	private: System::Windows::Forms::ToolStripMenuItem^ btFB1;
	private: System::Windows::Forms::ToolStripMenuItem^ btFB2;
	private: System::Windows::Forms::ToolStripMenuItem^ btFB3;
	private: System::Windows::Forms::ToolStripMenuItem^ btFB4;
	private: System::Windows::Forms::ToolStripButton^ btHistograma;
	private: System::Windows::Forms::ToolStripButton^ btReabrir;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ btRestaurar;
	private: System::Windows::Forms::ToolStripDropDownButton^ btPassaAlta;
	private: System::Windows::Forms::ToolStripMenuItem^ btLaplace;
	public: System::Windows::Forms::ListBox^ listHist�rico;
	private:

	private: System::Windows::Forms::ToolStripButton^ btHistorico;
	private: System::Windows::Forms::ToolStripDropDownButton^ btAlgebricas;
	private: System::Windows::Forms::ToolStripMenuItem^ btAdicao;
	private: System::Windows::Forms::ToolStripMenuItem^ btSubtracao;
	private: System::Windows::Forms::ToolStripMenuItem^ btMultiplicacao;
	private: System::Windows::Forms::ToolStripMenuItem^ btDivisao;
	private: System::Windows::Forms::OpenFileDialog^ ofd2;
	private: System::Windows::Forms::ToolStripMenuItem^ add19;
	private: System::Windows::Forms::ToolStripMenuItem^ add28;
	private: System::Windows::Forms::ToolStripMenuItem^ add37;
	private: System::Windows::Forms::ToolStripMenuItem^ add46;
	private: System::Windows::Forms::ToolStripMenuItem^ add55;
	private: System::Windows::Forms::ToolStripMenuItem^ add64;
	private: System::Windows::Forms::ToolStripMenuItem^ add73;
	private: System::Windows::Forms::ToolStripMenuItem^ add82;
	private: System::Windows::Forms::ToolStripMenuItem^ add91;
	private: System::Windows::Forms::ToolStripDropDownButton^ btBrilho;
	private: System::Windows::Forms::ToolStripMenuItem^ btAumBrilho;
	private: System::Windows::Forms::ToolStripMenuItem^ btDimBrilho;
	private: System::Windows::Forms::ToolStripDropDownButton^ btContraste;
	private: System::Windows::Forms::ToolStripMenuItem^ tbAumCon;
	private: System::Windows::Forms::ToolStripMenuItem^ btDimCon;
private: System::Windows::Forms::ToolStripButton^ btInvert;
private: System::Windows::Forms::ToolStripDropDownButton^ btLimiarizacao;
private: System::Windows::Forms::ToolStripMenuItem^ thBinario;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
private: System::Windows::Forms::ToolStripMenuItem^ bin�rioInvertidoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ truncadoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ toZeroToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ toZeroInvertidoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem9;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem10;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem11;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem12;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem13;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem14;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem15;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem16;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem17;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem18;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem19;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem20;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem21;
private: System::Windows::Forms::ToolStripMenuItem^ adaptiveToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ btCanny;
private: System::Windows::Forms::ToolStripButton^ btMerge;
private: System::Windows::Forms::ToolStripButton^ btROI;
private: System::Windows::Forms::ToolStripButton^ btErosion;
private: System::Windows::Forms::ToolStripButton^ btDilatar;
private: System::Windows::Forms::ToolStripDropDownButton^ btMorfologicas;
private: System::Windows::Forms::ToolStripMenuItem^ btOpening;
private: System::Windows::Forms::ToolStripMenuItem^ btClosing;
private: System::Windows::Forms::ToolStripMenuItem^ btGrandienteMorf;
private: System::Windows::Forms::ToolStripMenuItem^ btTopHat;
private: System::Windows::Forms::ToolStripMenuItem^ btBlackHat;
private: System::Windows::Forms::ToolStripDropDownButton^ btContornos;
private: System::Windows::Forms::ToolStripMenuItem^ btFind;
private: System::Windows::Forms::ToolStripButton^ btInRange;
private: System::Windows::Forms::ToolStripButton^ btTracking;
private: System::Windows::Forms::ToolStripButton^ btSplit;





















































	protected:

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Vari�vel de designer necess�ria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necess�rio para suporte ao Designer - n�o modifique 
		/// o conte�do deste m�todo com o editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->nomeTool = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resoTool = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolMouse = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ofd1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolBotoes = (gcnew System::Windows::Forms::ToolStrip());
			this->btCamera = (gcnew System::Windows::Forms::ToolStripButton());
			this->btImagem = (gcnew System::Windows::Forms::ToolStripButton());
			this->btHistograma = (gcnew System::Windows::Forms::ToolStripButton());
			this->btCanais = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->xYZToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hSVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hSLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lUVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lABToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yCRCBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grayscaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btBrilho = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->btAumBrilho = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btDimBrilho = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btContraste = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->tbAumCon = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btDimCon = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btInvert = (gcnew System::Windows::Forms::ToolStripButton());
			this->btSplit = (gcnew System::Windows::Forms::ToolStripButton());
			this->btMerge = (gcnew System::Windows::Forms::ToolStripButton());
			this->btROI = (gcnew System::Windows::Forms::ToolStripButton());
			this->btFBlur = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->btFB1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btFB2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btFB3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btFB4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btLimiarizacao = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->thBinario = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bin�rioInvertidoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->truncadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toZeroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toZeroInvertidoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adaptiveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btPassaAlta = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->btLaplace = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btCanny = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btErosion = (gcnew System::Windows::Forms::ToolStripButton());
			this->btDilatar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btMorfologicas = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->btOpening = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btClosing = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btGrandienteMorf = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btTopHat = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btBlackHat = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btAlgebricas = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->btAdicao = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->add19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->add28 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->add37 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->add46 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->add55 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->add64 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->add73 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->add82 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->add91 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btSubtracao = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btMultiplicacao = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btDivisao = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btContornos = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->btFind = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btInRange = (gcnew System::Windows::Forms::ToolStripButton());
			this->btTracking = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->btReabrir = (gcnew System::Windows::Forms::ToolStripButton());
			this->btRestaurar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btHistorico = (gcnew System::Windows::Forms::ToolStripButton());
			this->listHist�rico = (gcnew System::Windows::Forms::ListBox());
			this->ofd2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->toolBotoes->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Gainsboro;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nomeTool, this->resoTool,
					this->toolMouse
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 537);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// nomeTool
			// 
			this->nomeTool->Name = L"nomeTool";
			this->nomeTool->Size = System::Drawing::Size(115, 20);
			this->nomeTool->Text = L"Nome da imagem";
			this->nomeTool->Visible = false;
			// 
			// resoTool
			// 
			this->resoTool->Name = L"resoTool";
			this->resoTool->Size = System::Drawing::Size(139, 20);
			this->resoTool->Text = L"Resolu��o da imagem:";
			this->resoTool->Visible = false;
			// 
			// toolMouse
			// 
			this->toolMouse->Name = L"toolMouse";
			this->toolMouse->Size = System::Drawing::Size(55, 20);
			this->toolMouse->Text = L"Mouse";
			this->toolMouse->Visible = false;
			// 
			// ofd1
			// 
			this->ofd1->FileName = L"openFileDialog1";
			this->ofd1->Filter = L"Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG";
			// 
			// toolBotoes
			// 
			this->toolBotoes->BackColor = System::Drawing::Color::Gainsboro;
			this->toolBotoes->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolBotoes->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(24) {
				this->btCamera, this->btImagem,
					this->btHistograma, this->btCanais, this->btBrilho, this->btContraste, this->btInvert, this->btSplit, this->btMerge, this->btROI,
					this->btFBlur, this->btLimiarizacao, this->btPassaAlta, this->btErosion, this->btDilatar, this->btMorfologicas, this->btAlgebricas,
					this->btContornos, this->btInRange, this->btTracking, this->toolStripSeparator1, this->btReabrir, this->btRestaurar, this->btHistorico
			});
			this->toolBotoes->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;
			this->toolBotoes->Location = System::Drawing::Point(0, 0);
			this->toolBotoes->Name = L"toolBotoes";
			this->toolBotoes->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolBotoes->Size = System::Drawing::Size(784, 67);
			this->toolBotoes->TabIndex = 2;
			// 
			// btCamera
			// 
			this->btCamera->Name = L"btCamera";
			this->btCamera->Size = System::Drawing::Size(52, 19);
			this->btCamera->Text = L"Camera";
			this->btCamera->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btCamera->ToolTipText = L"Abrir Camera";
			this->btCamera->Click += gcnew System::EventHandler(this, &TelaPrincipal::btCamera_Click);
			// 
			// btImagem
			// 
			this->btImagem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btImagem->Name = L"btImagem";
			this->btImagem->Size = System::Drawing::Size(55, 19);
			this->btImagem->Text = L"Imagem";
			this->btImagem->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btImagem->ToolTipText = L"Abrir imagem";
			this->btImagem->Click += gcnew System::EventHandler(this, &TelaPrincipal::btImagem_Click);
			// 
			// btHistograma
			// 
			this->btHistograma->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btHistograma->Name = L"btHistograma";
			this->btHistograma->Size = System::Drawing::Size(73, 19);
			this->btHistograma->Text = L"Histograma";
			this->btHistograma->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btHistograma->ToolTipText = L"Mostrar histograma da imagem";
			this->btHistograma->Click += gcnew System::EventHandler(this, &TelaPrincipal::btHistograma_Click);
			// 
			// btCanais
			// 
			this->btCanais->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->xYZToolStripMenuItem,
					this->hSVToolStripMenuItem, this->hSLToolStripMenuItem, this->lUVToolStripMenuItem, this->lABToolStripMenuItem, this->yCRCBToolStripMenuItem,
					this->grayscaleToolStripMenuItem
			});
			this->btCanais->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btCanais->Name = L"btCanais";
			this->btCanais->Size = System::Drawing::Size(55, 19);
			this->btCanais->Text = L"Canais";
			this->btCanais->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btCanais->ToolTipText = L"Convers�o de canais";
			// 
			// xYZToolStripMenuItem
			// 
			this->xYZToolStripMenuItem->Name = L"xYZToolStripMenuItem";
			this->xYZToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->xYZToolStripMenuItem->Text = L"XYZ";
			this->xYZToolStripMenuItem->Click += gcnew System::EventHandler(this, &TelaPrincipal::xYZToolStripMenuItem_Click_1);
			// 
			// hSVToolStripMenuItem
			// 
			this->hSVToolStripMenuItem->Name = L"hSVToolStripMenuItem";
			this->hSVToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->hSVToolStripMenuItem->Text = L"HSV";
			this->hSVToolStripMenuItem->Click += gcnew System::EventHandler(this, &TelaPrincipal::hSVToolStripMenuItem_Click);
			// 
			// hSLToolStripMenuItem
			// 
			this->hSLToolStripMenuItem->Name = L"hSLToolStripMenuItem";
			this->hSLToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->hSLToolStripMenuItem->Text = L"HSL";
			this->hSLToolStripMenuItem->Click += gcnew System::EventHandler(this, &TelaPrincipal::hSLToolStripMenuItem_Click);
			// 
			// lUVToolStripMenuItem
			// 
			this->lUVToolStripMenuItem->Name = L"lUVToolStripMenuItem";
			this->lUVToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->lUVToolStripMenuItem->Text = L"LUV";
			this->lUVToolStripMenuItem->Click += gcnew System::EventHandler(this, &TelaPrincipal::lUVToolStripMenuItem_Click);
			// 
			// lABToolStripMenuItem
			// 
			this->lABToolStripMenuItem->Name = L"lABToolStripMenuItem";
			this->lABToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->lABToolStripMenuItem->Text = L"LAB";
			this->lABToolStripMenuItem->Click += gcnew System::EventHandler(this, &TelaPrincipal::lABToolStripMenuItem_Click);
			// 
			// yCRCBToolStripMenuItem
			// 
			this->yCRCBToolStripMenuItem->Name = L"yCRCBToolStripMenuItem";
			this->yCRCBToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->yCRCBToolStripMenuItem->Text = L"YCRCB";
			this->yCRCBToolStripMenuItem->Click += gcnew System::EventHandler(this, &TelaPrincipal::yCRCBToolStripMenuItem_Click);
			// 
			// grayscaleToolStripMenuItem
			// 
			this->grayscaleToolStripMenuItem->Name = L"grayscaleToolStripMenuItem";
			this->grayscaleToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->grayscaleToolStripMenuItem->Text = L"Grayscale";
			this->grayscaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &TelaPrincipal::grayscaleToolStripMenuItem_Click);
			// 
			// btBrilho
			// 
			this->btBrilho->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->btAumBrilho,
					this->btDimBrilho
			});
			this->btBrilho->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btBrilho->Name = L"btBrilho";
			this->btBrilho->Size = System::Drawing::Size(51, 19);
			this->btBrilho->Text = L"Brilho";
			this->btBrilho->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btBrilho->ToolTipText = L"Alterar brilho da imagem";
			// 
			// btAumBrilho
			// 
			this->btAumBrilho->Name = L"btAumBrilho";
			this->btAumBrilho->Size = System::Drawing::Size(161, 22);
			this->btAumBrilho->Text = L"Aumentar brilho";
			this->btAumBrilho->Click += gcnew System::EventHandler(this, &TelaPrincipal::btAumBrilho_Click);
			// 
			// btDimBrilho
			// 
			this->btDimBrilho->Name = L"btDimBrilho";
			this->btDimBrilho->Size = System::Drawing::Size(161, 22);
			this->btDimBrilho->Text = L"Diminuir brilho";
			this->btDimBrilho->Click += gcnew System::EventHandler(this, &TelaPrincipal::btDimBrilho_Click);
			// 
			// btContraste
			// 
			this->btContraste->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tbAumCon,
					this->btDimCon
			});
			this->btContraste->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btContraste->Name = L"btContraste";
			this->btContraste->Size = System::Drawing::Size(71, 19);
			this->btContraste->Text = L"Contraste";
			this->btContraste->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btContraste->ToolTipText = L"Alterar contraste da imagem";
			// 
			// tbAumCon
			// 
			this->tbAumCon->Name = L"tbAumCon";
			this->tbAumCon->Size = System::Drawing::Size(179, 22);
			this->tbAumCon->Text = L"Aumentar contraste";
			this->tbAumCon->Click += gcnew System::EventHandler(this, &TelaPrincipal::tbAumCon_Click);
			// 
			// btDimCon
			// 
			this->btDimCon->Name = L"btDimCon";
			this->btDimCon->Size = System::Drawing::Size(179, 22);
			this->btDimCon->Text = L"Diminuir contraste";
			this->btDimCon->Click += gcnew System::EventHandler(this, &TelaPrincipal::btDimCon_Click);
			// 
			// btInvert
			// 
			this->btInvert->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btInvert->Name = L"btInvert";
			this->btInvert->Size = System::Drawing::Size(51, 19);
			this->btInvert->Text = L"Inverter";
			this->btInvert->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btInvert->ToolTipText = L"Inverter cores da imagem";
			this->btInvert->Click += gcnew System::EventHandler(this, &TelaPrincipal::btInvert_Click);
			// 
			// btSplit
			// 
			this->btSplit->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btSplit->Name = L"btSplit";
			this->btSplit->Size = System::Drawing::Size(34, 19);
			this->btSplit->Text = L"Split";
			this->btSplit->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btSplit->ToolTipText = L"Separar canais da imagem";
			this->btSplit->Click += gcnew System::EventHandler(this, &TelaPrincipal::btSplit_Click);
			// 
			// btMerge
			// 
			this->btMerge->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btMerge->Name = L"btMerge";
			this->btMerge->Size = System::Drawing::Size(45, 19);
			this->btMerge->Text = L"Merge";
			this->btMerge->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btMerge->ToolTipText = L"Unir canais de imagens";
			this->btMerge->Click += gcnew System::EventHandler(this, &TelaPrincipal::btMerge_Click);
			// 
			// btROI
			// 
			this->btROI->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btROI->Name = L"btROI";
			this->btROI->Size = System::Drawing::Size(30, 19);
			this->btROI->Text = L"ROI";
			this->btROI->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btROI->ToolTipText = L"Selecionar regi�o de interesse na imagem";
			this->btROI->Click += gcnew System::EventHandler(this, &TelaPrincipal::btROI_Click);
			// 
			// btFBlur
			// 
			this->btFBlur->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->btFB1, this->btFB2,
					this->btFB3, this->btFB4
			});
			this->btFBlur->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btFBlur->Name = L"btFBlur";
			this->btFBlur->Size = System::Drawing::Size(78, 19);
			this->btFBlur->Text = L"Suaviza��o";
			this->btFBlur->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btFBlur->ToolTipText = L"Filtros de Blur";
			// 
			// btFB1
			// 
			this->btFB1->Name = L"btFB1";
			this->btFB1->Size = System::Drawing::Size(121, 22);
			this->btFB1->Text = L"Blur";
			this->btFB1->Click += gcnew System::EventHandler(this, &TelaPrincipal::btFB1_Click);
			// 
			// btFB2
			// 
			this->btFB2->Name = L"btFB2";
			this->btFB2->Size = System::Drawing::Size(121, 22);
			this->btFB2->Text = L"Gaussian";
			this->btFB2->Click += gcnew System::EventHandler(this, &TelaPrincipal::btFB2_Click);
			// 
			// btFB3
			// 
			this->btFB3->Name = L"btFB3";
			this->btFB3->Size = System::Drawing::Size(121, 22);
			this->btFB3->Text = L"Median";
			this->btFB3->Click += gcnew System::EventHandler(this, &TelaPrincipal::btFB3_Click);
			// 
			// btFB4
			// 
			this->btFB4->Name = L"btFB4";
			this->btFB4->Size = System::Drawing::Size(121, 22);
			this->btFB4->Text = L"Bilateral";
			this->btFB4->Click += gcnew System::EventHandler(this, &TelaPrincipal::btFB4_Click);
			// 
			// btLimiarizacao
			// 
			this->btLimiarizacao->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->thBinario,
					this->bin�rioInvertidoToolStripMenuItem, this->truncadoToolStripMenuItem, this->toZeroToolStripMenuItem, this->toZeroInvertidoToolStripMenuItem,
					this->adaptiveToolStripMenuItem
			});
			this->btLimiarizacao->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btLimiarizacao->Name = L"btLimiarizacao";
			this->btLimiarizacao->Size = System::Drawing::Size(86, 19);
			this->btLimiarizacao->Text = L"Limiariza��o";
			this->btLimiarizacao->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btLimiarizacao->ToolTipText = L"Limiariza��o";
			// 
			// thBinario
			// 
			this->thBinario->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5
			});
			this->thBinario->Name = L"thBinario";
			this->thBinario->Size = System::Drawing::Size(163, 22);
			this->thBinario->Text = L"Bin�rio";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem2->Text = L"50";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem3->Text = L"100";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem4->Text = L"150";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem5->Text = L"200";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem5_Click);
			// 
			// bin�rioInvertidoToolStripMenuItem
			// 
			this->bin�rioInvertidoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem6,
					this->toolStripMenuItem7, this->toolStripMenuItem8, this->toolStripMenuItem9
			});
			this->bin�rioInvertidoToolStripMenuItem->Name = L"bin�rioInvertidoToolStripMenuItem";
			this->bin�rioInvertidoToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->bin�rioInvertidoToolStripMenuItem->Text = L"Bin�rio invertido";
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem6->Text = L"50";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem6_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem7->Text = L"100";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem7_Click);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem8->Text = L"150";
			this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem8_Click);
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem9->Text = L"200";
			this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem9_Click);
			// 
			// truncadoToolStripMenuItem
			// 
			this->truncadoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem10,
					this->toolStripMenuItem11, this->toolStripMenuItem12, this->toolStripMenuItem13
			});
			this->truncadoToolStripMenuItem->Name = L"truncadoToolStripMenuItem";
			this->truncadoToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->truncadoToolStripMenuItem->Text = L"Truncado";
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem10->Text = L"50";
			this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem10_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem11->Text = L"100";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem11_Click);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem12->Text = L"150";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem13->Text = L"200";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem13_Click);
			// 
			// toZeroToolStripMenuItem
			// 
			this->toZeroToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem14,
					this->toolStripMenuItem15, this->toolStripMenuItem16, this->toolStripMenuItem17
			});
			this->toZeroToolStripMenuItem->Name = L"toZeroToolStripMenuItem";
			this->toZeroToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->toZeroToolStripMenuItem->Text = L"To Zero";
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem14->Text = L"50";
			this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem14_Click);
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem15->Text = L"100";
			this->toolStripMenuItem15->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem15_Click);
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem16->Text = L"150";
			this->toolStripMenuItem16->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem16_Click);
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem17->Text = L"200";
			this->toolStripMenuItem17->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem17_Click);
			// 
			// toZeroInvertidoToolStripMenuItem
			// 
			this->toZeroInvertidoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem18,
					this->toolStripMenuItem19, this->toolStripMenuItem20, this->toolStripMenuItem21
			});
			this->toZeroInvertidoToolStripMenuItem->Name = L"toZeroInvertidoToolStripMenuItem";
			this->toZeroInvertidoToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->toZeroInvertidoToolStripMenuItem->Text = L"To Zero invertido";
			// 
			// toolStripMenuItem18
			// 
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem18->Text = L"50";
			this->toolStripMenuItem18->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem18_Click);
			// 
			// toolStripMenuItem19
			// 
			this->toolStripMenuItem19->Name = L"toolStripMenuItem19";
			this->toolStripMenuItem19->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem19->Text = L"100";
			this->toolStripMenuItem19->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem19_Click);
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem20->Text = L"150";
			this->toolStripMenuItem20->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem20_Click);
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem21->Text = L"200";
			this->toolStripMenuItem21->Click += gcnew System::EventHandler(this, &TelaPrincipal::toolStripMenuItem21_Click);
			// 
			// adaptiveToolStripMenuItem
			// 
			this->adaptiveToolStripMenuItem->Name = L"adaptiveToolStripMenuItem";
			this->adaptiveToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->adaptiveToolStripMenuItem->Text = L"Adaptive";
			this->adaptiveToolStripMenuItem->Click += gcnew System::EventHandler(this, &TelaPrincipal::adaptiveToolStripMenuItem_Click);
			// 
			// btPassaAlta
			// 
			this->btPassaAlta->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->btLaplace,
					this->btCanny
			});
			this->btPassaAlta->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btPassaAlta->Name = L"btPassaAlta";
			this->btPassaAlta->Size = System::Drawing::Size(119, 19);
			this->btPassaAlta->Text = L"Detec��o de borda";
			this->btPassaAlta->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btPassaAlta->ToolTipText = L"Aplicar filtros de detec��o de borda e passa alta";
			// 
			// btLaplace
			// 
			this->btLaplace->Name = L"btLaplace";
			this->btLaplace->Size = System::Drawing::Size(114, 22);
			this->btLaplace->Text = L"Laplace";
			this->btLaplace->Click += gcnew System::EventHandler(this, &TelaPrincipal::btLaplace_Click);
			// 
			// btCanny
			// 
			this->btCanny->Name = L"btCanny";
			this->btCanny->Size = System::Drawing::Size(114, 22);
			this->btCanny->Text = L"Canny";
			this->btCanny->Click += gcnew System::EventHandler(this, &TelaPrincipal::btCanny_Click);
			// 
			// btErosion
			// 
			this->btErosion->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btErosion->Name = L"btErosion";
			this->btErosion->Size = System::Drawing::Size(46, 19);
			this->btErosion->Text = L"Eros�o";
			this->btErosion->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btErosion->ToolTipText = L"Erodir a imagem";
			this->btErosion->Click += gcnew System::EventHandler(this, &TelaPrincipal::btErosion_Click);
			// 
			// btDilatar
			// 
			this->btDilatar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btDilatar->Name = L"btDilatar";
			this->btDilatar->Size = System::Drawing::Size(60, 19);
			this->btDilatar->Text = L"Dilata��o";
			this->btDilatar->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btDilatar->ToolTipText = L"Dilatar a imagem";
			this->btDilatar->Click += gcnew System::EventHandler(this, &TelaPrincipal::btDilatar_Click);
			// 
			// btMorfologicas
			// 
			this->btMorfologicas->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->btOpening,
					this->btClosing, this->btGrandienteMorf, this->btTopHat, this->btBlackHat
			});
			this->btMorfologicas->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btMorfologicas->Name = L"btMorfologicas";
			this->btMorfologicas->Size = System::Drawing::Size(149, 19);
			this->btMorfologicas->Text = L"Opera��es morfol�gicas";
			this->btMorfologicas->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btMorfologicas->ToolTipText = L"Aplicar opera��es morfol�gicas";
			// 
			// btOpening
			// 
			this->btOpening->Name = L"btOpening";
			this->btOpening->Size = System::Drawing::Size(194, 22);
			this->btOpening->Text = L"Opening";
			this->btOpening->Click += gcnew System::EventHandler(this, &TelaPrincipal::btOpening_Click);
			// 
			// btClosing
			// 
			this->btClosing->Name = L"btClosing";
			this->btClosing->Size = System::Drawing::Size(194, 22);
			this->btClosing->Text = L"Closing";
			this->btClosing->Click += gcnew System::EventHandler(this, &TelaPrincipal::btClosing_Click);
			// 
			// btGrandienteMorf
			// 
			this->btGrandienteMorf->Name = L"btGrandienteMorf";
			this->btGrandienteMorf->Size = System::Drawing::Size(194, 22);
			this->btGrandienteMorf->Text = L"Gradiente Morfol�gico";
			this->btGrandienteMorf->Click += gcnew System::EventHandler(this, &TelaPrincipal::btGrandienteMorf_Click);
			// 
			// btTopHat
			// 
			this->btTopHat->Name = L"btTopHat";
			this->btTopHat->Size = System::Drawing::Size(194, 22);
			this->btTopHat->Text = L"Top-hat";
			this->btTopHat->ToolTipText = L"Aplicar Top-hat (original-aberta)";
			this->btTopHat->Click += gcnew System::EventHandler(this, &TelaPrincipal::btTopHat_Click);
			// 
			// btBlackHat
			// 
			this->btBlackHat->Name = L"btBlackHat";
			this->btBlackHat->Size = System::Drawing::Size(194, 22);
			this->btBlackHat->Text = L"Black-hat";
			this->btBlackHat->ToolTipText = L"Aplicar Top-hat (fechamento-original)";
			this->btBlackHat->Click += gcnew System::EventHandler(this, &TelaPrincipal::btBlackHat_Click);
			// 
			// btAlgebricas
			// 
			this->btAlgebricas->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->btAdicao,
					this->btSubtracao, this->btMultiplicacao, this->btDivisao
			});
			this->btAlgebricas->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btAlgebricas->Name = L"btAlgebricas";
			this->btAlgebricas->Size = System::Drawing::Size(75, 19);
			this->btAlgebricas->Text = L"Alg�bricas";
			this->btAlgebricas->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btAlgebricas->ToolTipText = L"Opera��es alg�bricas com imagens";
			// 
			// btAdicao
			// 
			this->btAdicao->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->add19, this->add28,
					this->add37, this->add46, this->add55, this->add64, this->add73, this->add82, this->add91
			});
			this->btAdicao->Name = L"btAdicao";
			this->btAdicao->Size = System::Drawing::Size(146, 22);
			this->btAdicao->Text = L"Adi��o";
			// 
			// add19
			// 
			this->add19->Name = L"add19";
			this->add19->Size = System::Drawing::Size(109, 22);
			this->add19->Text = L"0.1/0,9";
			this->add19->Click += gcnew System::EventHandler(this, &TelaPrincipal::add19_Click);
			// 
			// add28
			// 
			this->add28->Name = L"add28";
			this->add28->Size = System::Drawing::Size(109, 22);
			this->add28->Text = L"0.2/0.8";
			this->add28->Click += gcnew System::EventHandler(this, &TelaPrincipal::add28_Click);
			// 
			// add37
			// 
			this->add37->Name = L"add37";
			this->add37->Size = System::Drawing::Size(109, 22);
			this->add37->Text = L"0.3/0,7";
			this->add37->Click += gcnew System::EventHandler(this, &TelaPrincipal::add37_Click);
			// 
			// add46
			// 
			this->add46->Name = L"add46";
			this->add46->Size = System::Drawing::Size(109, 22);
			this->add46->Text = L"0.4/0,6";
			this->add46->Click += gcnew System::EventHandler(this, &TelaPrincipal::add46_Click);
			// 
			// add55
			// 
			this->add55->Name = L"add55";
			this->add55->Size = System::Drawing::Size(109, 22);
			this->add55->Text = L"0.5/0.5";
			this->add55->Click += gcnew System::EventHandler(this, &TelaPrincipal::add55_Click);
			// 
			// add64
			// 
			this->add64->Name = L"add64";
			this->add64->Size = System::Drawing::Size(109, 22);
			this->add64->Text = L"0.6/0,4";
			this->add64->Click += gcnew System::EventHandler(this, &TelaPrincipal::add64_Click);
			// 
			// add73
			// 
			this->add73->Name = L"add73";
			this->add73->Size = System::Drawing::Size(109, 22);
			this->add73->Text = L"0.7/0,3";
			this->add73->Click += gcnew System::EventHandler(this, &TelaPrincipal::add73_Click);
			// 
			// add82
			// 
			this->add82->Name = L"add82";
			this->add82->Size = System::Drawing::Size(109, 22);
			this->add82->Text = L"0.8/0.2";
			this->add82->Click += gcnew System::EventHandler(this, &TelaPrincipal::add82_Click);
			// 
			// add91
			// 
			this->add91->Name = L"add91";
			this->add91->Size = System::Drawing::Size(109, 22);
			this->add91->Text = L"0.9/0.1";
			this->add91->Click += gcnew System::EventHandler(this, &TelaPrincipal::add91_Click);
			// 
			// btSubtracao
			// 
			this->btSubtracao->Name = L"btSubtracao";
			this->btSubtracao->Size = System::Drawing::Size(146, 22);
			this->btSubtracao->Text = L"Subtra��o";
			this->btSubtracao->Click += gcnew System::EventHandler(this, &TelaPrincipal::btSubtracao_Click);
			// 
			// btMultiplicacao
			// 
			this->btMultiplicacao->Name = L"btMultiplicacao";
			this->btMultiplicacao->Size = System::Drawing::Size(146, 22);
			this->btMultiplicacao->Text = L"Multiplica��o";
			this->btMultiplicacao->Click += gcnew System::EventHandler(this, &TelaPrincipal::btMultiplicacao_Click);
			// 
			// btDivisao
			// 
			this->btDivisao->Name = L"btDivisao";
			this->btDivisao->Size = System::Drawing::Size(146, 22);
			this->btDivisao->Text = L"Divis�o";
			this->btDivisao->Click += gcnew System::EventHandler(this, &TelaPrincipal::btDivisao_Click);
			// 
			// btContornos
			// 
			this->btContornos->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->btFind });
			this->btContornos->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btContornos->Name = L"btContornos";
			this->btContornos->Size = System::Drawing::Size(76, 19);
			this->btContornos->Text = L"Contornos";
			this->btContornos->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btContornos->ToolTipText = L"Contornos";
			// 
			// btFind
			// 
			this->btFind->Name = L"btFind";
			this->btFind->Size = System::Drawing::Size(180, 22);
			this->btFind->Text = L"Desenhar contornos";
			this->btFind->ToolTipText = L"Desenhar contornos";
			this->btFind->Click += gcnew System::EventHandler(this, &TelaPrincipal::btFind_Click);
			// 
			// btInRange
			// 
			this->btInRange->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btInRange->Name = L"btInRange";
			this->btInRange->Size = System::Drawing::Size(54, 19);
			this->btInRange->Text = L"InRange";
			this->btInRange->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btInRange->ToolTipText = L"Intervalo de faixas";
			this->btInRange->Click += gcnew System::EventHandler(this, &TelaPrincipal::btInRange_Click);
			// 
			// btTracking
			// 
			this->btTracking->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btTracking->Name = L"btTracking";
			this->btTracking->Size = System::Drawing::Size(55, 19);
			this->btTracking->Text = L"Tracking";
			this->btTracking->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btTracking->ToolTipText = L"Tracking de objetos";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 23);
			// 
			// btReabrir
			// 
			this->btReabrir->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btReabrir->Name = L"btReabrir";
			this->btReabrir->Size = System::Drawing::Size(79, 19);
			this->btReabrir->Text = L"Reabir Janela";
			this->btReabrir->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btReabrir->ToolTipText = L"Reabir janela imagem fechada";
			this->btReabrir->Click += gcnew System::EventHandler(this, &TelaPrincipal::btReabrir_Click);
			// 
			// btRestaurar
			// 
			this->btRestaurar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btRestaurar->Name = L"btRestaurar";
			this->btRestaurar->Size = System::Drawing::Size(107, 19);
			this->btRestaurar->Text = L"Restaurar imagem";
			this->btRestaurar->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btRestaurar->ToolTipText = L"Restaurar imagem a original";
			this->btRestaurar->Click += gcnew System::EventHandler(this, &TelaPrincipal::btRestaurar_Click);
			// 
			// btHistorico
			// 
			this->btHistorico->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btHistorico->Name = L"btHistorico";
			this->btHistorico->Size = System::Drawing::Size(59, 19);
			this->btHistorico->Text = L"Hist�rico";
			this->btHistorico->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->btHistorico->ToolTipText = L"Clique para ver o hist�rico de a��es";
			this->btHistorico->Click += gcnew System::EventHandler(this, &TelaPrincipal::btHistorico_Click);
			// 
			// listHist�rico
			// 
			this->listHist�rico->Dock = System::Windows::Forms::DockStyle::Right;
			this->listHist�rico->FormattingEnabled = true;
			this->listHist�rico->HorizontalScrollbar = true;
			this->listHist�rico->Location = System::Drawing::Point(404, 67);
			this->listHist�rico->Name = L"listHist�rico";
			this->listHist�rico->ScrollAlwaysVisible = true;
			this->listHist�rico->Size = System::Drawing::Size(380, 470);
			this->listHist�rico->TabIndex = 3;
			this->listHist�rico->Visible = false;
			// 
			// ofd2
			// 
			this->ofd2->FileName = L"openFileDialog2";
			this->ofd2->Filter = L"Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG";
			// 
			// TelaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->listHist�rico);
			this->Controls->Add(this->toolBotoes);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"TelaPrincipal";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MeuPS";
			this->Load += gcnew System::EventHandler(this, &TelaPrincipal::TelaPrincipal_Load);
			this->MouseHover += gcnew System::EventHandler(this, &TelaPrincipal::TelaPrincipal_MouseHover);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPrincipal::TelaPrincipal_MouseMove);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolBotoes->ResumeLayout(false);
			this->toolBotoes->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TelaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
		//abertura do programa
		System::Windows::Forms::Form^ spl = gcnew Form();
		spl->StartPosition = FormStartPosition::CenterScreen;
		spl->BackColor = Color::Green;
		spl->TransparencyKey = Color::Green;
		spl->Width = 713;
		spl->Height = 630;
		spl->BackgroundImage = Image::FromFile("fundo.png");
		spl->TopMost = true;
		spl->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		/*spl->Show();
		Sleep(4500);*/
		spl->Close();
		testeVideos = new TesteVideos();
		testeVideos->modificando = original;//linkando a imagem para n�o perder referencia
		imagens.push_back(original);
		//imshow("inicio", imagens[0]);
		//indice++;

		/* colocando a lena de fundo */
		Image^ imgFundo = Image::FromFile("lena.jpg");
		TelaPrincipal::BackgroundImage = imgFundo;
		testeVideos->salvamostra(testeVideos->modificando, 0);
		/*imshow("Imagem", testeVideos->modificando); estava com essas duas linhas de c�digos antes na inicializacao
		imwrite("Imagem.jpg", original);*///lena deve existir na pasta do projeto se n vai dar erro
		
		//Carregar icones do projeto
		btCamera->Text = "";
		btCamera->Image = Image::FromFile("icones/camera.png");
		btImagem->Text = "";
		btImagem->Image = Image::FromFile("icones/imagem.png");
		btCanais->Text = "";
		btCanais->Image = Image::FromFile("icones/canais.png");
		btFBlur->Text = "";
		btFBlur->Image = Image::FromFile("icones/blur.png");
		btHistograma->Text = "";
		btHistograma->Image = Image::FromFile("icones/histogram.png");
		btReabrir->Text = "";
		btReabrir->Image = Image::FromFile("icones/window.png");
		btRestaurar->Text = "";
		btRestaurar->Image = Image::FromFile("icones/restaurar.png");
		btHistorico->Text = "";
		btHistorico->Image = Image::FromFile("icones/history.png");
		btAlgebricas->Text = "";
		btAlgebricas->Image = Image::FromFile("icones/mathematic.png");
		btBrilho->Text = "";
		btBrilho->Image = Image::FromFile("icones/brilho.png");
		btContraste->Text = "";
		btContraste->Image = Image::FromFile("icones/contrast.png");
		btInvert->Text = "";
		btInvert->Image = Image::FromFile("icones/invert.png");
		btLimiarizacao->Text = "";
		btLimiarizacao->Image = Image::FromFile("icones/threshold.png");
		btPassaAlta->Text = "";
		btPassaAlta->Image = Image::FromFile("icones/borderdetection.png");
		btMerge->Text = "";
		btMerge->Image = Image::FromFile("icones/merge.png");
		btROI->Text = "";
		btROI->Image = Image::FromFile("icones/roi.png");
		btErosion->Text = "";
		btErosion->Image = Image::FromFile("icones/erosion.png");
		btDilatar->Text = "";
		btDilatar->Image = Image::FromFile("icones/dilation.png");
		btMorfologicas->Text = "";
		btMorfologicas->Image = Image::FromFile("icones/gradientmorph.png");
		btContornos->Text = "";
		btContornos->Image = Image::FromFile("icones/contornos.png");
		btInRange->Text = "";
		btInRange->Image = Image::FromFile("icones/InRange.png");
		btTracking->Text = "";
		btTracking->Image = Image::FromFile("icones/watershed.png");

		//Texto de boas vindas e dicas
		/*System::Windows::Forms::MessageBox::Show("Bem vindo ao meu editor ! " +
		"Para acessar histogramas e filtros de canais selecione Canais->algum dos m�todos" + 
			" e veja a imagem da Lena convertida, ou abra uma imagem desejada e ent�o converta. " +
		"Para acessar filtros de passa baixa/alta, binariza��o e laplace clique no icone de c�mera abaixo" +
		" e captura uma imagem utilizando espa�o.");*/
	}

	private: System::Void undoTo() {
		indice--;
		testeVideos->SalvarImg(imagens[indice]);
		testeVideos->LerImg();
		testeVideos->MostrarImg(testeVideos->modificando);
		listHist�rico->Items->Add("Desfez �ltima modifica��o da imagem");
		//testeVideos->modificando = imagens[indice];
		//testeVideos->salvamostra(testeVideos->modificando, 0);
		/*indice = distance(imagens.begin(), imagens.end());
		testeVideos->modificando = imagens[indice];*/
	}

	public: System::Void salvarEstado() {
		imagens.push_back(testeVideos->modificando);
		indice++;
	}

	public: MatND geraHistograma(const Mat imagem, Mat* Histograma) {
		MatND hist;
		int channels[] = { 0, 1 };
		int histSize[1];
		float hranges[2] = { 0, 255 };
		const float* ranges[1];
		double maxVal = 0, minVal = 0;
		ranges[0] = hranges;

		histSize[0] = 256;
		calcHist(&imagem, 1, channels, Mat(), hist, 1, histSize, ranges);
		minMaxLoc(hist, &minVal, &maxVal, 0, 0);
		int hpt = static_cast<int>(0.9 * histSize[0]);
		for (int h = 0; h < histSize[0]; h++) {
			float binVal = hist.at<float>(h);
			int intensity = static_cast<int>(binVal * hpt / maxVal);
			line(*Histograma, cv::Point(h, histSize[0]),
				cv::Point(h, histSize[0] - intensity),
				Scalar::all(0));
		}
		return hist;
	}

	private: System::Void Converter() {
		Mat canais[3];
		split(testeVideos->modificando, canais);
		//imshow("Imagem", img); //imagem convertida pode ser mostrada na tela principal
		testeVideos->salvamostra(testeVideos->modificando, 0);//salvar e mostrar imagem
		//imwrite("Imagem.jpg", img);//salva a  imagem
		//abaixo atualizando fundo para a imagem convertida
		/*Image^ imgGerada = Image::FromFile("Imagem.jpg");
		TelaPrincipal::BackgroundImage = imgGerada;*/
		imshow("Canal 0", canais[0]);
		imwrite("Img-Canal0.png", canais[0]);
		imshow("Canal 1", canais[1]);
		imwrite("Img-Canal1.png", canais[1]);
		imshow("Canal 2", canais[2]);
		imwrite("Img-Canal2.png", canais[2]);

		for (int c = 0; c < 3; c++) {//para cada canal faca
			MatND gHist = geraHistograma(canais[c], &histograma);
			System::String^ textoForm = System::String::Concat("H-Canal ", c);
			std::string textJanela = msclr::interop::marshal_as<std::string>(textoForm);
			imshow(textJanela, histograma);
			imwrite(textJanela + ".jpg", histograma);
		}
		//salvar imagens
		System::Windows::Forms::MessageBox::Show("Imagens convertidas salvas na pasta do projeto");
		salvarEstado();
	}

	private: System::Void mostrarHistograma(cv::Mat imagem) {//gera histograma da imagem de parametro
		MatND imgHist = geraHistograma(imagem, &histImagem);
		imshow("Histograma imagem", histImagem);
		imwrite("Histograma-imagem.jpg", histImagem);
	}

	private: System::Void TelaPrincipal_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		toolMouse->Visible = true;
		toolMouse->Text = "Mouse em X: " + e->Location.X.ToString() + " Y-" + e->Location.Y.ToString();
	}

	private: System::Void TelaPrincipal::TelaPrincipal_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void btCamera_Click(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->abrirCamera();
		testeVideos->MostrarImg(testeVideos->modificando);
		listHist�rico->Items->Add("Abriu a camera");
	}

	private: System::Void filenameToMat(System::String ^ nome, Mat dst) {
		dst = imread((char*)(void*)Marshal::StringToHGlobalAnsi(nome));
	}

	private: System::Void btImagem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TelaPrincipal::ofd1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			imagens.clear();
			original = imread((char*)(void*)Marshal::StringToHGlobalAnsi(TelaPrincipal::ofd1->FileName));
			testeVideos->modificando = original;
			TelaPrincipal::nomeTool->Visible = true;
			TelaPrincipal::nomeTool->Text = TelaPrincipal::ofd1->FileName;
			//original = imread(str2);
			//img = imread(str2);//ler imagem selecionada
			//System::Windows::Forms::MessageBox::Show("Imagem carregada");
			Image^ imgFundo = Image::FromFile(TelaPrincipal::ofd1->FileName);
			testeVideos->salvamostra(testeVideos->modificando, 0);//salvando na pasta do projeto a imagem como imagem.jpg
			//TelaPrincipal::BackgroundImage = Image::FromFile(TelaPrincipal::ofd1->FileName);
			TelaPrincipal::BackgroundImage = imgFundo;
			//int iWidth = imgFundo->Width;
			//int iHeight = imgFundo->Height;
			TelaPrincipal::resoTool->Text = "Width: " + imgFundo->Width.ToString() + " Height: " + imgFundo->Height.ToString();
			TelaPrincipal::resoTool->Visible = true;
			//TelaPrincipal::Width = imgFundo->Width; ajustar ao tamanho da imagem
			//TelaPrincipal::Height = imgFundo->Height;
			listHist�rico->Items->Add("Abriu imagem: " + ofd1->FileName);
			indice = 0;
			imagens.push_back(original);
		}
		else {
			System::Windows::Forms::MessageBox::Show("Opera��o cancelada");
		}
	}

	private: System::Void xYZToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->LerImg();
		cvtColor(testeVideos->modificando, testeVideos->modificando, COLOR_BGR2XYZ);
		TelaPrincipal::Converter();
		listHist�rico->Items->Add("Converteu para XYZ");
	}

	private: System::Void hSVToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->LerImg();
		//testeVideos->modificando.convertTo(testeVideos->modificando, -1, 1, 95);
		cvtColor(testeVideos->modificando, testeVideos->modificando, COLOR_BGR2HSV);
		TelaPrincipal::Converter();
		listHist�rico->Items->Add("Converteu para HSV");
	}

	private: System::Void hSLToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->LerImg();
		cvtColor(testeVideos->modificando, testeVideos->modificando, COLOR_BGR2HLS);
		TelaPrincipal::Converter();
		listHist�rico->Items->Add("Converteu para HSL");
	}

	private: System::Void lUVToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->LerImg();
		cvtColor(testeVideos->modificando, testeVideos->modificando, COLOR_BGR2Luv);
		TelaPrincipal::Converter();
		listHist�rico->Items->Add("Converteu para LUV");
	}

	private: System::Void lABToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->LerImg();
		cvtColor(testeVideos->modificando, testeVideos->modificando, COLOR_BGR2Lab);
		TelaPrincipal::Converter();
		listHist�rico->Items->Add("Converteu para LAB");
	}

	private: System::Void yCRCBToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->LerImg();
		cvtColor(testeVideos->modificando, testeVideos->modificando, COLOR_BGR2YCrCb);
		TelaPrincipal::Converter();
		listHist�rico->Items->Add("Converteu para YCRCB");
	}

	private: System::Void grayscaleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->LerImg();
		cvtColor(testeVideos->modificando, testeVideos->modificando, COLOR_BGR2GRAY);
		listHist�rico->Items->Add("Converteu para Grayscale");

		Mat canais[1];
		split(testeVideos->modificando, canais);
		testeVideos->salvamostra(testeVideos->modificando, 0);//salvar e mostrar imagem
		Image^ imgGerada = Image::FromFile("Imagem.jpg");
		TelaPrincipal::BackgroundImage = imgGerada;
		imshow("Canal 0", canais[0]);
		imwrite("Img-Canal0.png", canais[0]);

		for (int c = 0; c < 1; c++) {//para cada canal faca
			MatND gHist = geraHistograma(canais[c], &histograma);
			System::String^ textoForm = System::String::Concat("H-Canal ", c);
			std::string textJanela = msclr::interop::marshal_as<std::string>(textoForm);
			imshow(textJanela, histograma);
			imwrite(textJanela + ".jpg", histograma);
		}
		//salvar imagens
		System::Windows::Forms::MessageBox::Show("Imagens convertidas salvas na pasta do projeto");
	}

	private: System::Void btFB1_Click(System::Object^ sender, System::EventArgs^ e) {
		//habilitar filtros blur na imagem
		//testeVideos->modificando = testeVideos->modificando;
		//imshow("Imagem", testeVideos->modificando);
		testeVideos->TracksEFiltros("Imagem", 0);
		listHist�rico->Items->Add("Aplicou blur");
		salvarEstado();
		//imshow("Imagem", testeVideos->modificando);
		//modificando = testeVideos->modificando;
	}

	private: System::Void btFB2_Click(System::Object^ sender, System::EventArgs^ e) {
		//habilitar filtros blur na imagem
		//testeVideos->modificando = testeVideos->modificando;
		//imshow("Imagem", testeVideos->modificando);
		testeVideos->TracksEFiltros("Imagem", 1);
		listHist�rico->Items->Add("Aplicou Gaussian blur");
		salvarEstado();
	}

	private: System::Void btFB3_Click(System::Object^ sender, System::EventArgs^ e) {
		//habilitar filtros blur na imagem
		//testeVideos->modificando = testeVideos->modificando;
		//imshow("Imagem", testeVideos->modificando);
		testeVideos->TracksEFiltros("Imagem", 2);
		listHist�rico->Items->Add("Aplicou Median");
		//medianBlur(testeVideos->modificando, testeVideos->modificando, 7);
		//testeVideos->salvamostra(testeVideos->modificando, 0);
		salvarEstado();
	}

	private: System::Void btFB4_Click(System::Object^ sender, System::EventArgs^ e) {
		//habilitar filtros blur na imagem
		//testeVideos->modificando = testeVideos->modificando;
		//imshow("Imagem", testeVideos->modificando);
		testeVideos->TracksEFiltros("Imagem", 3);
		listHist�rico->Items->Add("Aplicou Bilateral filter");
		salvarEstado();
	}

	private: System::Void btHistograma_Click(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->LerImg();
		mostrarHistograma(testeVideos->modificando);
		listHist�rico->Items->Add("Vizualizou o histograma da imagem");
	}

	private: System::Void btReabrir_Click(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->LerImg();
		//imshow("Imagem", testeVideos->modificando);
		testeVideos->salvamostra(testeVideos->modificando,0);
		listHist�rico->Items->Add("Reabriu a janela");
	}

	private: System::Void btRestaurar_Click(System::Object^ sender, System::EventArgs^ e) {
		/*testeVideos->modificando = original;
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Restaurou a imagem para a original");*/
		if (indice - 1 < 0) {
			System::Windows::Forms::MessageBox::Show("Imagem original");
		}
		else {
			undoTo();
		}
	}

	private: System::Void btLaplace_Click(System::Object^ sender, System::EventArgs^ e) {
		testeVideos->passaAlta(1);
		listHist�rico->Items->Add("Aplicou Laplace");
		salvarEstado();
	}

	private: System::Void btHistorico_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listHist�rico->Visible == false)
			listHist�rico->Items->Add("Vizualizou o hist�rico");
		listHist�rico->Visible = !listHist�rico->Visible;
	}

	private: System::Void adicao(float p1, float p2) {
		if (TelaPrincipal::ofd2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try {
				testeVideos->algebrica = imread((char*)(void*)Marshal::StringToHGlobalAnsi(TelaPrincipal::ofd2->FileName));
				//salvar na pasta do projeto
				imwrite("Adicao.jpg", testeVideos->algebrica);
				//Image^ imgAdicao = Image::FromFile(TelaPrincipal::ofd2->FileName);
				listHist�rico->Items->Add("Abriu imagem de adicao: " + ofd2->FileName);
				Mat resultante;
				testeVideos->LerImg();
				addWeighted(testeVideos->modificando, p1, testeVideos->algebrica, p2, 0, resultante);
				//imshow("Soma", resultante);
				testeVideos->modificando = resultante;
				testeVideos->salvamostra(testeVideos->modificando, 0);
				salvarEstado();
			}
			catch (std::exception& ex) {
				string excp = ex.what();
				System::String^ texto = gcnew System::String(excp.c_str());
				System::Windows::Forms::MessageBox::Show("As imagens devem ter a mesma dimens�o para serem somadas");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Opera��o cancelada");
		}
	}

	private: System::Void btSubtracao_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TelaPrincipal::ofd2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try {
				testeVideos->algebrica = imread((char*)(void*)Marshal::StringToHGlobalAnsi(TelaPrincipal::ofd2->FileName));
				//salvar na pasta do projeto
				imwrite("Subtracao.jpg", testeVideos->algebrica);
				listHist�rico->Items->Add("Abriu imagem de subtracao: " + ofd2->FileName);
				Mat resultante;
				testeVideos->LerImg();
				subtract(testeVideos->modificando, testeVideos->algebrica, resultante);
				testeVideos->modificando = resultante;
				//addWeighted(testeVideos->modificando, 0.5, testeVideos->algebrica, 0.5, 0, resultante);
				//imshow("Subtracao", resultante);
				testeVideos->salvamostra(testeVideos->modificando, 0);
				salvarEstado();
			}
			catch (std::exception& ex) {
				string excp = ex.what();
				System::String^ texto = gcnew System::String(excp.c_str());
				System::Windows::Forms::MessageBox::Show("As imagens devem ter a mesma dimens�o para serem subtra�das");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Opera��o cancelada");
		}
	}

	private: System::Void btMultiplicacao_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TelaPrincipal::ofd2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try {
				testeVideos->algebrica = imread((char*)(void*)Marshal::StringToHGlobalAnsi(TelaPrincipal::ofd2->FileName));
				//salvar na pasta do projeto
				imwrite("Multiplicacao.jpg", testeVideos->algebrica);
				listHist�rico->Items->Add("Abriu imagem de multiplicacao: " + ofd2->FileName);
				Mat resultante;
				testeVideos->LerImg();
				multiply(testeVideos->modificando, testeVideos->algebrica, resultante, 0.01);
				testeVideos->modificando = resultante;
				testeVideos->salvamostra(testeVideos->modificando, 0);
				salvarEstado();
			}
			catch (std::exception& ex) {
				string excp = ex.what();
				System::String^ texto = gcnew System::String(excp.c_str());
				System::Windows::Forms::MessageBox::Show("As imagens devem ter a mesma dimens�o para serem multiplicadas");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Opera��o cancelada");
		}
	}

	private: System::Void btDivisao_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TelaPrincipal::ofd2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try {
				testeVideos->algebrica = imread((char*)(void*)Marshal::StringToHGlobalAnsi(TelaPrincipal::ofd2->FileName));
				//salvar na pasta do projeto
				imwrite("Divisao.jpg", testeVideos->algebrica);
				listHist�rico->Items->Add("Abriu imagem de divisao: " + ofd2->FileName);
				Mat resultante;
				testeVideos->LerImg();
				divide(testeVideos->modificando, testeVideos->algebrica, resultante, 1);
				testeVideos->modificando = resultante;
				testeVideos->salvamostra(testeVideos->modificando, 0);
				salvarEstado();
			}
			catch (std::exception& ex) {
				string excp = ex.what();
				System::String^ texto = gcnew System::String(excp.c_str());
				System::Windows::Forms::MessageBox::Show("As imagens devem ter a mesma dimens�o para serem divididas");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Opera��o cancelada");
		}
	}

	private: System::Void add19_Click(System::Object^ sender, System::EventArgs^ e) {
		adicao(0.1, 0.9);
		listHist�rico->Items->Add("Adicionou uma imagem com 90% opacidade");
	}

	private: System::Void add28_Click(System::Object^ sender, System::EventArgs^ e) {
		adicao(0.2, 0.8);
		listHist�rico->Items->Add("Adicionou uma imagem com 80% opacidade");
	}

	private: System::Void add37_Click(System::Object^ sender, System::EventArgs^ e) {
		adicao(0.3, 0.7);
		listHist�rico->Items->Add("Adicionou uma imagem com 70% opacidade");
	}

	private: System::Void add46_Click(System::Object^ sender, System::EventArgs^ e) {
		adicao(0.4, 0.6);
		listHist�rico->Items->Add("Adicionou uma imagem com 60% opacidade");
	}

	private: System::Void add55_Click(System::Object^ sender, System::EventArgs^ e) {
		adicao(0.5, 0.5);
		listHist�rico->Items->Add("Adicionou uma imagem com 50% opacidade");
	}

	private: System::Void add64_Click(System::Object^ sender, System::EventArgs^ e) {
		adicao(0.6, 0.4);
		listHist�rico->Items->Add("Adicionou uma imagem com 40% opacidade");
	}

	private: System::Void add73_Click(System::Object^ sender, System::EventArgs^ e) {
		adicao(0.7, 0.3);
		listHist�rico->Items->Add("Adicionou uma imagem com 30% opacidade");
	}

	private: System::Void add82_Click(System::Object^ sender, System::EventArgs^ e) {
		adicao(0.8, 0.2);
		listHist�rico->Items->Add("Adicionou uma imagem com 20% opacidade");
	}

	private: System::Void add91_Click(System::Object^ sender, System::EventArgs^ e) {
		adicao(0.9, 0.1);
		listHist�rico->Items->Add("Adicionou uma imagem com 10% opacidade");
	}

	private: System::Void btAumBrilho_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat brl;
		testeVideos->modificando.convertTo(brl, -1, 1, +10);
		testeVideos->modificando = brl;
		testeVideos->salvamostra(testeVideos->modificando, 0);
		//testeVideos->LerImg();
		listHist�rico->Items->Add("Aumentou 10 de brilho a imagem");
		salvarEstado();
	}

	private: System::Void btDimBrilho_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat brl;
		testeVideos->modificando.convertTo(brl, -1, 1, -10);
		testeVideos->modificando = brl;
		testeVideos->salvamostra(testeVideos->modificando, 0);
		//testeVideos->LerImg();
		listHist�rico->Items->Add("Diminuiu 10 de brilho a imagem");
		salvarEstado();
	}

	private: System::Void tbAumCon_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat cnt;
		testeVideos->modificando.convertTo(cnt, -1, 1.1, 0);
		testeVideos->modificando = cnt;
		testeVideos->salvamostra(testeVideos->modificando, 0);
		//testeVideos->LerImg();
		listHist�rico->Items->Add("Aumentou contraste da imagem");
		salvarEstado();
	}

	private: System::Void btDimCon_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat cnt;
		testeVideos->modificando.convertTo(cnt, -1, 0.9, 0);
		testeVideos->modificando = cnt;
		testeVideos->salvamostra(testeVideos->modificando, 0);
		//testeVideos->LerImg();
		listHist�rico->Items->Add("Diminuiu contraste da imagem");
		salvarEstado();
	}

	private: System::Void btInvert_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat invertida;
		bitwise_not(testeVideos->modificando,invertida);
		testeVideos->modificando = invertida;
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Inverteu imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 50, 255, 0);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 50 threshold bin�rio na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 100, 255, 0);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 100 threshold bin�rio na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);//(investigar) talvez n seja necessario deixar em grayscale
		threshold(testeVideos->modificando, testeVideos->modificando, 150, 255, THRESH_BINARY);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 150 threshold bin�rio na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 200, 255, 0);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 200 threshold bin�rio na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 50, 255, 1);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 50 threshold bin�rio invertido na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 100, 255, 1);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 100 threshold bin�rio invertido na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem8_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 150, 255, 1);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 150 threshold bin�rio invertido na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem9_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 200, 255, 1);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 200 threshold bin�rio invertido na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem10_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 50, 255, 2);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 50 threshold truncado na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem11_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 100, 255, 2);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 100 threshold truncado na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem12_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 150, 255, 2);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 150 threshold truncado na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem13_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 200, 255, 2);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 200 threshold truncado na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem14_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 50, 255, 3);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 50 threshold To Zero na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem15_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 100, 255, 3);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 100 threshold To Zero na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem16_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 150, 255, 3);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 150 threshold To Zero na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem17_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 200, 255, 3);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 200 threshold To Zero na imagem");
		salvarEstado();
	}

	private: System::Void adaptiveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		adaptiveThreshold(testeVideos->modificando, testeVideos->modificando, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 3+1*2, 0);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou adaptive threshold na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem21_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 200, 255, 4);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 200 threshold To Zero invertido na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem20_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 150, 255, 4);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 150 threshold To Zero invertido na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem19_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 100, 255, 4);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 100 threshold To Zero invertido na imagem");
		salvarEstado();
	}

	private: System::Void toolStripMenuItem18_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_gray;
		cvtColor(testeVideos->modificando, src_gray, COLOR_BGR2GRAY);
		threshold(testeVideos->modificando, testeVideos->modificando, 50, 255, 4);
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou 50 threshold To Zero invertido na imagem");
		salvarEstado();
	}

	private: System::Void btCanny_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat canny;
		Canny(testeVideos->modificando, canny, 50, 150, 3);
		testeVideos->modificando = canny;
		testeVideos->salvamostra(testeVideos->modificando, 0);
		listHist�rico->Items->Add("Aplicou detec��o de borda Canny na imagem");
		salvarEstado();
		/*testeVideos->LerImg();
		testeVideos->MostrarImg(testeVideos->modificando);*/
	}

	private: System::Void btMerge_Click(System::Object^ sender, System::EventArgs^ e) {
		vector <Mat> canais(3);
		Mat junta;
		//cvtColor(testeVideos->modificando, canais[0], COLOR_BGR2GRAY);
		/*canais[0] = imread("Img-Canal0.png", CV_LOAD_IMAGE_GRAYSCALE);
		canais[1] = imread("Img-Canal1.png", CV_LOAD_IMAGE_GRAYSCALE);
		canais[2] = imread("Img-Canal2.png", CV_LOAD_IMAGE_GRAYSCALE);*/
		OpenFileDialog^ fileCanal1 = gcnew OpenFileDialog;
		OpenFileDialog^ fileCanal2 = gcnew OpenFileDialog;
		OpenFileDialog^ fileCanal3 = gcnew OpenFileDialog;
		fileCanal1->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG";
		fileCanal2->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG";
		fileCanal3->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG";

		if(fileCanal1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			if(fileCanal2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				if (fileCanal3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					testeVideos->modificando = imread((char*)(void*)Marshal::StringToHGlobalAnsi(fileCanal1->FileName));
					cvtColor(testeVideos->modificando, canais[0], COLOR_BGR2GRAY);
					testeVideos->modificando = imread((char*)(void*)Marshal::StringToHGlobalAnsi(fileCanal2->FileName));
					cvtColor(testeVideos->modificando, canais[1], COLOR_BGR2GRAY);
					testeVideos->modificando = imread((char*)(void*)Marshal::StringToHGlobalAnsi(fileCanal3->FileName));
					cvtColor(testeVideos->modificando, canais[2], COLOR_BGR2GRAY);
					merge(canais, junta);
					testeVideos->modificando = junta;
					testeVideos->salvamostra(testeVideos->modificando, 0);
					listHist�rico->Items->Add("Uniu 3 canais a uma imagem, Arquivo 1: " + fileCanal1->FileName
						+ "Arquivo 2: " + fileCanal2->FileName
						+ "Arquivo 3: " + fileCanal3->FileName);
					salvarEstado();
				}else
					System::Windows::Forms::MessageBox::Show("Opera��o cancelada");
			else
				System::Windows::Forms::MessageBox::Show("Opera��o cancelada");
		else
			System::Windows::Forms::MessageBox::Show("Opera��o cancelada");
	}

	private: System::Void btROI_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat selecao = testeVideos->modificando;
		Rect rct = selectROI("Imagem", selecao, false, false);
		//Rect a = Rect(rct.x, rct.y, rct.width, rct.height);
		//Mat teste = Mat(testeVideos->modificando, rct); 
		imwrite("Imagem.jpg", testeVideos->modificando(rct));
		testeVideos->LerImg();
		testeVideos->MostrarImg(testeVideos->modificando);
		listHist�rico->Items->Add("Selecionou uma regi�o de interesse, tamanho: X:"+rct.width.ToString()+" Y:"+rct.height.ToString());
		salvarEstado();
	}

	private: System::Void btErosion_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Mat result;
			//Mat m = Mat::ones(2, 2, CV_8U);
			Mat m = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, 1));
			Mat backup = testeVideos->modificando;
			erode(testeVideos->modificando, result, m, cv::Point(-1, 1), 1);
			testeVideos->modificando = result;
			testeVideos->salvamostra(testeVideos->modificando, 0);
			listHist�rico->Items->Add("Erodiu a imagem");
			Mat diffE = backup - testeVideos->modificando;
			imshow("diff", diffE);
			imwrite("diff-erosao.png", diffE);
			salvarEstado();
		}
		catch (std::exception& ex) {
			string excp = ex.what();
			System::String^ texto = gcnew System::String(excp.c_str());
			System::Windows::Forms::MessageBox::Show("Erro: " + texto);
		}
	} 

	private: System::Void btDilatar_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Mat result;
			//Mat m = Mat::ones(2, 2, CV_8U);
			Mat m = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, 1));
			Mat backup = testeVideos->modificando;
			dilate(testeVideos->modificando, result, m, cv::Point(-1, 1), 1);
			testeVideos->modificando = result;
			testeVideos->salvamostra(testeVideos->modificando, 0);
			listHist�rico->Items->Add("Dilatou a imagem");
			Mat diffD = testeVideos->modificando - backup;
			imshow("diff", diffD);
			imwrite("diff-dilatacao.png", diffD);
			salvarEstado();
		}
		catch (std::exception& ex) {
			string excp = ex.what();
			System::String^ texto = gcnew System::String(excp.c_str());
			System::Windows::Forms::MessageBox::Show("Erro: " + texto);
		}
	}

	private: System::Void btGrandienteMorf_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Mat resultErode, resultDila, resultSub;
		Mat elemento = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, 1));//criando elemento
		erode(testeVideos->modificando, resultErode, elemento, cv::Point(-1, 1), 1);//erodir imagem inicial
		dilate(testeVideos->modificando, resultDila, elemento, cv::Point(-1, 1), 1);//dilatar original
		resultSub = resultDila - resultErode;//subtracao
		testeVideos->salvamostra(resultSub, 0);
		testeVideos->LerImg();
		imshow("Imagem", resultSub);
		listHist�rico->Items->Add("Aplicou um gradiente morfol�gico a imagem");*/
		Mat grdnt;
		Mat elemento = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, -1));
		morphologyEx(testeVideos->modificando, grdnt, MORPH_GRADIENT, elemento, cv::Point(-1, -1), 3);
		testeVideos->salvamostra(grdnt, 0);
		testeVideos->LerImg();
		listHist�rico->Items->Add("Aplicou um gradiente morfol�gico a imagem");
	}

	private: System::Void btOpening_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Mat resultErode, resultDila;
		Mat elemento = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, 1));//criando elemento
		erode(testeVideos->modificando, resultErode, elemento, cv::Point(-1, 1), 1);//erodir imagem inicial
		dilate(resultErode, resultDila, elemento, cv::Point(-1, 1), 1);//depois dilatar o resultado
		testeVideos->salvamostra(resultDila, 0);
		testeVideos->LerImg();
		imshow("Imagem", testeVideos->modificando);
		listHist�rico->Items->Add("Aplicou opening (abertura) a imagem");*/
		Mat opng;
		Mat elemento = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, -1));
		morphologyEx(testeVideos->modificando, opng, MORPH_OPEN, elemento, cv::Point(-1, -1), 3);
		testeVideos->salvamostra(opng, 0);
		testeVideos->LerImg();
		listHist�rico->Items->Add("Aplicou opening (abertura) a imagem");
		salvarEstado();
	}

	private: System::Void btClosing_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Mat resultErode, resultDila;
		Mat elemento = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, 1));//criando elemento
		dilate(testeVideos->modificando, resultDila, elemento, cv::Point(-1, 1), 1);//dilatar imagem inicial
		erode(resultDila, resultErode, elemento, cv::Point(-1, 1), 1);//depois erodir o resultado
		testeVideos->salvamostra(resultErode, 0);
		testeVideos->LerImg();
		imshow("Imagem", testeVideos->modificando);
		listHist�rico->Items->Add("Aplicou closing (fechamento) a imagem");*/
		Mat clsng;
		Mat elemento = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, -1));
		morphologyEx(testeVideos->modificando, clsng, MORPH_CLOSE, elemento, cv::Point(-1, -1), 3);
		testeVideos->salvamostra(clsng, 0);
		testeVideos->LerImg();
		listHist�rico->Items->Add("Aplicou closing (fechamento) a imagem");
		salvarEstado();
	}

	private: System::Void btTopHat_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Mat resultErode, resultDila, resultSub;
		//opening
		Mat elemento = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, 1));//criando elemento
		Mat inicial = testeVideos->modificando;
		erode(testeVideos->modificando, resultErode, elemento, cv::Point(-1, 1), 1);//erodir imagem inicial
		dilate(resultErode, resultDila, elemento, cv::Point(-1, 1), 1);//depois dilatar o resultado
		//subtracao da imagem aberta da original
		resultSub = inicial - resultDila;
		testeVideos->salvamostra(resultDila, 0);
		testeVideos->LerImg();
		imshow("Imagem", testeVideos->modificando);
		listHist�rico->Items->Add("Aplicou Top-hat a imagem");*/
		Mat tpHat;
		Mat elemento = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, -1));
		morphologyEx(testeVideos->modificando, tpHat, MORPH_TOPHAT, elemento, cv::Point(-1, -1), 5);
		testeVideos->salvamostra(tpHat, 0);
		testeVideos->LerImg();
		listHist�rico->Items->Add("Aplicou Top-hat a imagem");
		salvarEstado();
	}

	private: System::Void btBlackHat_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		Mat resultErode, resultDila, resultSub;
		Mat elemento = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, 1));//criando elemento
		Mat inicial = testeVideos->modificando;
		dilate(testeVideos->modificando, resultDila, elemento, cv::Point(-1, 1), 1);//dilatar imagem inicial
		erode(resultDila, resultErode, elemento, cv::Point(-1, 1), 1);//depois erodir o resultado
		//subtracao da imagem aberta da original
		resultSub = resultErode - inicial;
		testeVideos->salvamostra(resultSub, 0);
		testeVideos->LerImg();
		imshow("Imagem", testeVideos->modificando);
		listHist�rico->Items->Add("Aplicou Black-hat a imagem");*/
		Mat blkHat;
		Mat elemento = getStructuringElement(MORPH_ELLIPSE, cv::Size(2, 2), cv::Point(-1, -1));
		morphologyEx(testeVideos->modificando,blkHat,MORPH_BLACKHAT,elemento, cv::Point(-1, -1), 5);
		testeVideos->salvamostra(blkHat, 0);
		testeVideos->LerImg();
		listHist�rico->Items->Add("Aplicou Black-hat a imagem");
		salvarEstado();
	}

	private: System::Void btFind_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat canny;
		RNG rng;
		Canny(testeVideos->modificando, canny, 50, 150, 3);
		vector<vector<cv::Point> > contours;
		vector<Vec4i> hierarchy;
		findContours(canny, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
		Mat drawing = Mat::zeros(canny.size(), CV_8UC3);
		for (int i = 0; i < contours.size(); i++) {
			Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
			drawContours(drawing, contours, i, color, 1, 8, hierarchy, 0, cv::Point());
		}
		/*namedWindow("Contornos",1);
		imshow("Contornos",drawing);*/
		vector<Vec3f> circles;
		testeVideos->modificando = drawing;
		testeVideos->salvamostra(testeVideos->modificando, 0);
		salvarEstado();
		System::Windows::Forms::MessageBox::Show("galinhas: " + contours.size().ToString());
	}

	private: System::Void btInRange_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat gray,result;
		cvtColor(testeVideos->modificando, gray, CV_BGR2GRAY);
		Scalar min_vals(250, 0, 0);
		Scalar max_vals(255, 0, 0);
		inRange(testeVideos->modificando, min_vals, max_vals, testeVideos->modificando);
		testeVideos->MostrarImg(testeVideos->modificando);
		salvarEstado();
	}

	private: System::Void btSplit_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Mat canais[3];
			split(testeVideos->modificando, canais);
			testeVideos->modificando = canais[2];
			testeVideos->salvamostra(testeVideos->modificando, 0);
		}
		catch (std::exception& ex) {
			string excp = ex.what();
			System::String^ texto = gcnew System::String(excp.c_str());
			System::Windows::Forms::MessageBox::Show("Erro: " + texto);
		}
	}
};
}
