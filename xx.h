//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct 12 10:19:42 2016 by ROOT version 5.32/00
// from TTree ZPKUCandidates/ZPKU Candidates
// found on file: WW.root
//////////////////////////////////////////////////////////

#ifndef xx_h
#define xx_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TLorentzVector.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxpassFilter_HBHE = 1;
const Int_t kMaxpassFilter_HBHEIso = 1;
const Int_t kMaxpassFilter_globalTightHalo = 1;
const Int_t kMaxpassFilter_ECALDeadCell = 1;
const Int_t kMaxpassFilter_GoodVtx = 1;
const Int_t kMaxpassFilter_EEBadSc = 1;
const Int_t kMaxpassFilter_badMuon = 1;
const Int_t kMaxpassFilter_badChargedHadron = 1;

class xx {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           nevent;
   Int_t           nVtx;
   Double_t        theWeight;
   Double_t        nump;
   Double_t        numm;
   Double_t        npT;
   Int_t           lep;
   Double_t        ptVlep;
   Double_t        ptVlepJEC;
   Double_t        yVlepJEC;
   Double_t        phiVlepJEC;
   Double_t        massVlepJEC;
   Double_t        mtVlepJECnew;
   Double_t        Mla;
   Double_t        Mla_f;
   Double_t        Mva;
   Double_t        Mva_f;
   Int_t           nlooseeles;
   Int_t           nloosemus;
   Double_t        genphoton_pt[6];
   Double_t        genphoton_eta[6];
   Double_t        genphoton_phi[6];
   Double_t        genmuon_pt[6];
   Double_t        genmuon_eta[6];
   Double_t        genmuon_phi[6];
   Double_t        genelectron_pt[6];
   Double_t        genelectron_eta[6];
   Double_t        genelectron_phi[6];
   Double_t        photon_pt[6];
   Double_t        photon_eta[6];
   Double_t        photon_phi[6];
   Double_t        photon_e[6];
   Bool_t          photon_pev[6];
   Bool_t          photon_pevnew[6];
   Bool_t          photon_ppsv[6];
   Bool_t          photon_iseb[6];
   Bool_t          photon_isee[6];
   Double_t        photon_hoe[6];
   Double_t        photon_sieie[6];
   Double_t        photon_sieie2[6];
   Double_t        photon_chiso[6];
   Double_t        photon_nhiso[6];
   Double_t        photon_phoiso[6];
   Int_t           photon_istrue[6];
   Int_t           photon_isprompt[6];
   Double_t        photon_drla[6];
   Double_t        photon_mla[6];
   Double_t        photon_mva[6];
   Bool_t          passEleVeto;
   Bool_t          passEleVetonew;
   Bool_t          passPixelSeedVeto;
   Double_t        photonet;
   Double_t        photonet_f;
   Double_t        photoneta;
   Double_t        photoneta_f;
   Double_t        photonphi;
   Double_t        photonphi_f;
   Double_t        photone;
   Double_t        photone_f;
   Double_t        photonsieie;
   Double_t        photonsieie_f;
   Double_t        photonphoiso;
   Double_t        photonphoiso_f;
   Double_t        photonchiso;
   Double_t        photonchiso_f;
   Double_t        photonnhiso;
   Double_t        photonnhiso_f;
   Int_t           iphoton;
   Int_t           iphoton_f;
   Double_t        drla;
   Double_t        drla_f;
   Int_t           isTrue;
   Int_t           isprompt;
   Int_t           ispromptLep;
   Double_t        ak4jet_pt[6];
   Double_t        ak4jet_eta[6];
   Double_t        ak4jet_phi[6];
   Double_t        ak4jet_e[6];
   Double_t        ak4jet_csv[6];
   Double_t        ak4jet_icsv[6];
   Double_t        jet1pt;
   Double_t        jet1pt_f;
   Double_t        jet1eta;
   Double_t        jet1eta_f;
   Double_t        jet1phi;
   Double_t        jet1phi_f;
   Double_t        jet1e;
   Double_t        jet1e_f;
   Double_t        jet1csv;
   Double_t        jet1csv_f;
   Double_t        jet1icsv;
   Double_t        jet1icsv_f;
   Double_t        jet2pt;
   Double_t        jet2pt_f;
   Double_t        jet2eta;
   Double_t        jet2eta_f;
   Double_t        jet2phi;
   Double_t        jet2phi_f;
   Double_t        jet2e;
   Double_t        jet2e_f;
   Double_t        jet2csv;
   Double_t        jet2csv_f;
   Double_t        jet2icsv;
   Double_t        jet2icsv_f;
   Double_t        drj1a;
   Double_t        drj1a_f;
   Double_t        drj2a;
   Double_t        drj2a_f;
   Double_t        drj1l;
   Double_t        drj1l_f;
   Double_t        drj2l;
   Double_t        drj2l_f;
   Double_t        Mjj;
   Double_t        Mjj_f;
   Double_t        deltaeta;
   Double_t        deltaeta_f;
   Double_t        zepp;
   Double_t        zepp_f;
   Double_t        ptlep1;
   Double_t        etalep1;
   Double_t        philep1;
   Double_t        j1metPhi;
   Double_t        j1metPhi_f;
   Double_t        j2metPhi;
   Double_t        j2metPhi_f;
   Double_t        METraw_et;
   Double_t        METraw_phi;
   Double_t        METraw_sumEt;
   Double_t        genMET;
   Double_t        MET_et;
   Double_t        MET_phi;
   Double_t        MET_sumEt;
   Double_t        MET_corrPx;
   Double_t        MET_corrPy;
   Int_t           HLT_Ele1;
   Int_t           HLT_Ele2;
   Int_t           HLT_Mu1;
   Int_t           HLT_Mu2;
   Int_t           HLT_Mu3;
   Bool_t          passFilter_HBHE;
   Bool_t          passFilter_HBHEIso;
   Bool_t          passFilter_globalTightHalo;
   Bool_t          passFilter_ECALDeadCell;
   Bool_t          passFilter_GoodVtx;
   Bool_t          passFilter_EEBadSc;
   Bool_t          passFilter_badMuon;
   Bool_t          passFilter_badChargedHadron;
   Double_t        lumiWeight;
   Double_t        pileupWeight;
   Double_t        Dphiwajj;
   Double_t        Dphiwajj_f;
   Int_t           jet1pf;
   Int_t           jet2pf;
   Bool_t          photonhaspixelseed;
   Bool_t          photonhaspixelseed_f;
   Bool_t          photonpasseleveto;
   Bool_t          photonpasseleveto_f;
   Double_t        photonsceta;
   Double_t        photonsceta_f;
   Double_t        photonscphi;
   Double_t        photonscphi_f;
   Double_t        L1prefiring;
   Double_t        L1prefiringup;
   Double_t        L1prefiringdown;

   TBranch        *b_L1prefiringup;
   TBranch        *b_L1prefiringdown;
   TBranch        *b_L1prefiring;
   TBranch        *b_photonsceta;
   TBranch        *b_photonsceta_f;
   TBranch        *b_photonscphi;
   TBranch        *b_photonscphi_f;
   TBranch        *b_photonpasseleveto;
   TBranch        *b_photonpasseleveto_f;
   TBranch        *b_photonhaspixelseed;
   TBranch        *b_photonhaspixelseed_f;
   TBranch        *b_jet1pf;
   TBranch        *b_jet2pf;
   TBranch        *b_Dphiwajj;
   TBranch        *b_Dphiwajj_f;
   TBranch        *b_nevent;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_theWeight;   //!
   TBranch        *b_nump;   //!
   TBranch        *b_numm;   //!
   TBranch        *b_npT;   //!
   TBranch        *b_lep;   //!
   TBranch        *b_ptVlep;   //!
   TBranch        *b_ptVlepJEC;   //!
   TBranch        *b_yVlepJEC;   //!
   TBranch        *b_phiVlepJEC;   //!
   TBranch        *b_massVlepJEC;   //!
   TBranch        *b_mtVlepJECnew;   //!
   TBranch        *b_Mla;   //!
   TBranch        *b_Mla_f;   //!
   TBranch        *b_Mva;   //!
   TBranch        *b_Mva_f;   //!
   TBranch        *b_nlooseeles;   //!
   TBranch        *b_nloosemus;   //!
   TBranch        *b_genphoton_pt;   //!
   TBranch        *b_genphoton_eta;   //!
   TBranch        *b_genphoton_phi;   //!
   TBranch        *b_genmuon_pt;   //!
   TBranch        *b_genmuon_eta;   //!
   TBranch        *b_genmuon_phi;   //!
   TBranch        *b_genelectron_pt;   //!
   TBranch        *b_genelectron_eta;   //!
   TBranch        *b_genelectron_phi;   //!
   TBranch        *b_photon_pt;   //!
   TBranch        *b_photon_eta;   //!
   TBranch        *b_photon_phi;   //!
   TBranch        *b_photon_e;   //!
   TBranch        *b_photon_pev;   //!
   TBranch        *b_photon_pevnew;   //!
   TBranch        *b_photon_ppsv;   //!
   TBranch        *b_photon_iseb;   //!
   TBranch        *b_photon_isee;   //!
   TBranch        *b_photon_hoe;   //!
   TBranch        *b_photon_sieie;   //!
   TBranch        *b_photon_sieie2;   //!
   TBranch        *b_photon_chiso;   //!
   TBranch        *b_photon_nhiso;   //!
   TBranch        *b_photon_phoiso;   //!
   TBranch        *b_photon_istrue;   //!
   TBranch        *b_photon_isprompt;   //!
   TBranch        *b_photon_drla;   //!
   TBranch        *b_photon_mla;   //!
   TBranch        *b_photon_mva;   //!
   TBranch        *b_passEleVeto;   //!
   TBranch        *b_passEleVetonew;   //!
   TBranch        *b_passPixelSeedVeto;   //!
   TBranch        *b_photonet;   //!
   TBranch        *b_photonet_f;   //!
   TBranch        *b_photoneta;   //!
   TBranch        *b_photoneta_f;   //!
   TBranch        *b_photonphi;   //!
   TBranch        *b_photonphi_f;   //!
   TBranch        *b_photone;   //!
   TBranch        *b_photone_f;   //!
   TBranch        *b_photonsieie;   //!
   TBranch        *b_photonsieie_f;   //!
   TBranch        *b_photonphoiso;   //!
   TBranch        *b_photonphoiso_f;   //!
   TBranch        *b_photonchiso;   //!
   TBranch        *b_photonchiso_f;   //!
   TBranch        *b_photonnhiso;   //!
   TBranch        *b_photonnhiso_f;   //!
   TBranch        *b_iphoton;   //!
   TBranch        *b_iphoton_f;   //!
   TBranch        *b_drla;   //!
   TBranch        *b_drla_f;   //!
   TBranch        *b_isTrue;   //!
   TBranch        *b_isprompt;   //!
   TBranch        *b_ispromptLep;   //!
   TBranch        *b_ak4jet_pt;   //!
   TBranch        *b_ak4jet_eta;   //!
   TBranch        *b_ak4jet_phi;   //!
   TBranch        *b_ak4jet_e;   //!
   TBranch        *b_ak4jet_csv;   //!
   TBranch        *b_ak4jet_icsv;   //!
   TBranch        *b_jet1pt;   //!
   TBranch        *b_jet1pt_f;   //!
   TBranch        *b_jet1eta;   //!
   TBranch        *b_jet1eta_f;   //!
   TBranch        *b_jet1phi;   //!
   TBranch        *b_jet1phi_f;   //!
   TBranch        *b_jet1e;   //!
   TBranch        *b_jet1e_f;   //!
   TBranch        *b_jet1csv;   //!
   TBranch        *b_jet1csv_f;   //!
   TBranch        *b_jet1icsv;   //!
   TBranch        *b_jet1icsv_f;   //!
   TBranch        *b_jet2pt;   //!
   TBranch        *b_jet2pt_f;   //!
   TBranch        *b_jet2eta;   //!
   TBranch        *b_jet2eta_f;   //!
   TBranch        *b_jet2phi;   //!
   TBranch        *b_jet2phi_f;   //!
   TBranch        *b_jet2e;   //!
   TBranch        *b_jet2e_f;   //!
   TBranch        *b_jet2csv;   //!
   TBranch        *b_jet2csv_f;   //!
   TBranch        *b_jet2icsv;   //!
   TBranch        *b_jet2icsv_f;   //!
   TBranch        *b_drj1a;   //!
   TBranch        *b_drj1a_f;   //!
   TBranch        *b_drj2a;   //!
   TBranch        *b_drj2a_f;   //!
   TBranch        *b_drj1l;   //!
   TBranch        *b_drj1l_f;   //!
   TBranch        *b_drj2l;   //!
   TBranch        *b_drj2l_f;   //!
   TBranch        *b_Mjj;   //!
   TBranch        *b_Mjj_f;   //!
   TBranch        *b_deltaeta;   //!
   TBranch        *b_deltaeta_f;   //!
   TBranch        *b_zepp;   //!
   TBranch        *b_zepp_f;   //!
   TBranch        *b_ptlep1;   //!
   TBranch        *b_etalep1;   //!
   TBranch        *b_philep1;   //!
   TBranch        *b_j1metPhi;   //!
   TBranch        *b_j1metPhi_f;   //!
   TBranch        *b_j2metPhi;   //!
   TBranch        *b_j2metPhi_f;   //!
   TBranch        *b_METraw_et;   //!
   TBranch        *b_METraw_phi;   //!
   TBranch        *b_METraw_sumEt;   //!
   TBranch        *b_genMET;   //!
   TBranch        *b_MET_et;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_MET_sumEt;   //!
   TBranch        *b_MET_corrPx;   //!
   TBranch        *b_MET_corrPy;   //!
   TBranch        *b_HLT_Ele1;   //!
   TBranch        *b_HLT_Ele2;   //!
   TBranch        *b_HLT_Mu1;   //!
   TBranch        *b_HLT_Mu2;   //!
   TBranch        *b_HLT_Mu3;   //!
   TBranch        *b_passFilter_HBHE_;   //!
   TBranch        *b_passFilter_HBHEIso_;   //!
   TBranch        *b_passFilter_globalTightHalo_;   //!
   TBranch        *b_passFilter_ECALDeadCell_;   //!
   TBranch        *b_passFilter_GoodVtx_;   //!
   TBranch        *b_passFilter_EEBadSc_;   //!
   TBranch        *b_passFilter_badMuon_;   //!
   TBranch        *b_passFilter_badChargedHadron_;   //!
   TBranch        *b_lumiWeight;   //!
   TBranch        *b_pileupWeight;   //!


   TString m_dataset;
   xx(TTree *tree=0, TString dataset="");


   virtual ~xx();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

virtual Double_t beff(Double_t x);
virtual Double_t ceff(Double_t x);
virtual Double_t leff(Double_t x);
virtual Double_t central_b_scale(Double_t x);
virtual Double_t central_c_scale(Double_t x);
virtual Double_t central_l_scale(Double_t x);
virtual Double_t up_b_scale(Double_t x);
virtual Double_t up_c_scale(Double_t x);
virtual Double_t up_l_scale(Double_t x);
virtual Double_t down_b_scale(Double_t x);
virtual Double_t down_c_scale(Double_t x);
virtual Double_t down_l_scale(Double_t x);

void endJob();
   private:
   TTree *ExTree;
   TFile *fout; 
double WGmass;
   double scalef;
   double scale_sys_up;
   double scale_sys_low;
};

#endif

#ifdef xx_cxx
xx::xx(TTree *tree, TString dataset) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("WW.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("WW.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("WW.root:/treeDumper");
      dir->GetObject("PKUCandidates",tree);

   }
//Qiang
   m_dataset=dataset;
//Li
   Init(tree);
}

xx::~xx()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t xx::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t xx::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void xx::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fout = new TFile(m_dataset, "RECREATE");
   ExTree = new TTree("demo","demo");
 
   ExTree->Branch("L1prefiringup", &L1prefiringup, "L1prefiringup/D");
   ExTree->Branch("L1prefiringdown", &L1prefiringdown, "L1prefiringdown/D");
   ExTree->Branch("L1prefiring", &L1prefiring, "L1prefiring/D");
   ExTree->Branch("WGmass", &WGmass, "WGmass/D");
   ExTree->Branch("photonpasseleveto",&photonpasseleveto,"photonpasseleveto/O");
   ExTree->Branch("photonhaspixelseed",&photonhaspixelseed, "photonhaspixelseed/O");
   ExTree->Branch("ispromptLep",&ispromptLep, "ispromptLep/I");
   ExTree->Branch("isprompt",&isprompt, "isprompt/I");
   ExTree->Branch("photonet", &photonet, "photonet/D");
   ExTree->Branch("photoneta", &photoneta, "photoneta/D");
   ExTree->Branch("photonsceta", &photonsceta, "photonsceta/D");
//   ExTree->Branch("photonphi", &photonphi, "photonphi/D");
//   ExTree->Branch("photone", &photone, "photone/D");
   ExTree->Branch("photonsieie",&photonsieie,"photonsieie/D");
   ExTree->Branch("drla",&drla,"drla/D");
   ExTree->Branch("scalef",&scalef,"scalef/D");
   ExTree->Branch("scale_sys_up",&scale_sys_up,"scale_sys_up/D");
   ExTree->Branch("scale_sys_low",&scale_sys_low,"scale_sys_low/D");
   ExTree->Branch("nVtx", &nVtx, "nVtx/I");
   ExTree->Branch("theWeight", &theWeight, "theWeight/D");
   ExTree->Branch("lumiWeight", &lumiWeight, "lumiWeight/D");
   ExTree->Branch("pileupWeight", &pileupWeight, "pileupWeight/D");
   ExTree->Branch("ptVlepJEC", &ptVlepJEC, "ptVlepJEC/D");
//   ExTree->Branch("yVlepJEC",&yVlepJEC,"yVlepJEC/D");
//   ExTree->Branch("phiVlepJEC",&phiVlepJEC,"phiVlepJEC/D");
//   ExTree->Branch("massVlepJEC",&massVlepJEC,"massVlepJEC/D");
   ExTree->Branch("mtVlepJECnew", &mtVlepJECnew, "mtVlepJECnew/D");
//   ExTree->Branch("HLT_Ele1", &HLT_Ele1, "HLT_Ele1/I");
   ExTree->Branch("HLT_Ele2", &HLT_Ele2, "HLT_Ele2/I");
//   ExTree->Branch("HLT_Mu1", &HLT_Mu1, "HLT_Mu1/I");
   ExTree->Branch("HLT_Mu2", &HLT_Mu2, "HLT_Mu2/I");
   ExTree->Branch("HLT_Mu3", &HLT_Mu3, "HLT_Mu3/I");
   ExTree->Branch("nump", &nump, "nump/D");
   ExTree->Branch("numm", &numm, "numm/D");
   ExTree->Branch("npT", &npT, "npT/D");
   ExTree->Branch("lep", &lep, "lep/I");
   ExTree->Branch("ptlep1", &ptlep1, "ptlep1/D");
   ExTree->Branch("etalep1", &etalep1, "etalep1/D");
   ExTree->Branch("nlooseeles", &nlooseeles, "nlooseeles/I");
   ExTree->Branch("nloosemus", &nloosemus, "nloosemus/I");
   ExTree->Branch("MET_et", &MET_et, "MET_et/D");
   ExTree->Branch("jet1pt", &jet1pt, "jet1pt/D");
   ExTree->Branch("jet1eta", &jet1eta, "jet1eta/D");
//   ExTree->Branch("jet1phi",&jet1phi,"jet1phi/D");
//   ExTree->Branch("jet1e",&jet1e,"jet1e/D");
   ExTree->Branch("jet2pt", &jet2pt, "jet2pt/D");
   ExTree->Branch("jet2eta", &jet2eta, "jet2eta/D");
//   ExTree->Branch("jet2phi",&jet2phi,"jet2phi/D");
//   ExTree->Branch("jet2e",&jet2e,"jet2e/D");
   ExTree->Branch("Mjj", &Mjj, "Mjj/D");
   ExTree->Branch("Mla",&Mla,"Mla/D");
   ExTree->Branch("zepp", &zepp, "zepp/D");
   ExTree->Branch("deltaeta", &deltaeta, "deltaeta/D");
   ExTree->Branch("drj1a", &drj1a, "drj1a/D");
   ExTree->Branch("drj2a", &drj2a, "drj2a/D");
   ExTree->Branch("drj1l", &drj1l, "drj1l/D");
   ExTree->Branch("drj2l", &drj2l, "drj2l/D");
   ExTree->Branch("j1metPhi",&j1metPhi,"j1metPhi/D");
   ExTree->Branch("j2metPhi",&j2metPhi,"j2metPhi/D");
   ExTree->Branch("Dphiwajj",&Dphiwajj,"Dphiwajj/D");
   ExTree->Branch("jet1icsv",&jet1icsv,"jet1icsv/D");
   ExTree->Branch("jet2icsv",&jet2icsv,"jet2icsv/D");
   ExTree->Branch("ptVlep",&ptVlep,"ptVlep/D");


   fChain->SetBranchAddress("L1prefiringup", &L1prefiringup, &b_L1prefiringup);
   fChain->SetBranchAddress("L1prefiringdown", &L1prefiringdown, &b_L1prefiringdown);
   fChain->SetBranchAddress("L1prefiring", &L1prefiring, &b_L1prefiring);
   fChain->SetBranchAddress("ptVlepJEC", &ptVlepJEC, &b_ptVlepJEC); 
   fChain->SetBranchAddress("photonsceta", &photonsceta, &b_photonsceta);
   fChain->SetBranchAddress("photonsceta_f", &photonsceta_f, &b_photonsceta_f);
   fChain->SetBranchAddress("photonscphi", &photonscphi, &b_photonscphi);
   fChain->SetBranchAddress("photonscphi_f", &photonscphi_f, &b_photonscphi_f);
   fChain->SetBranchAddress("photonpasseleveto",&photonpasseleveto,&b_photonpasseleveto);
   fChain->SetBranchAddress("photonhaspixelseed",&photonhaspixelseed,&b_photonhaspixelseed);
   fChain->SetBranchAddress("jet1pf",&jet1pf,&b_jet1pf);
   fChain->SetBranchAddress("jet2pf",&jet2pf,&b_jet2pf);
   fChain->SetBranchAddress("Dphiwajj_f",&Dphiwajj_f,&b_Dphiwajj_f);
   fChain->SetBranchAddress("Dphiwajj",&Dphiwajj,&b_Dphiwajj);
   fChain->SetBranchAddress("nevent", &nevent, &b_nevent);
   fChain->SetBranchAddress("nVtx", &nVtx, &b_nVtx);
   fChain->SetBranchAddress("theWeight", &theWeight, &b_theWeight);
   fChain->SetBranchAddress("nump", &nump, &b_nump);
   fChain->SetBranchAddress("numm", &numm, &b_numm);
   fChain->SetBranchAddress("npT", &npT, &b_npT);
   fChain->SetBranchAddress("lep", &lep, &b_lep);
   fChain->SetBranchAddress("ptVlep", &ptVlep, &b_ptVlep);
   fChain->SetBranchAddress("ptVlepJEC", &ptVlepJEC, &b_ptVlepJEC);
   fChain->SetBranchAddress("yVlepJEC", &yVlepJEC, &b_yVlepJEC);
   fChain->SetBranchAddress("phiVlepJEC", &phiVlepJEC, &b_phiVlepJEC);
   fChain->SetBranchAddress("massVlepJEC", &massVlepJEC, &b_massVlepJEC);
   fChain->SetBranchAddress("mtVlepJECnew", &mtVlepJECnew, &b_mtVlepJECnew);
   fChain->SetBranchAddress("Mla", &Mla, &b_Mla);
   fChain->SetBranchAddress("Mla_f", &Mla_f, &b_Mla_f);
   fChain->SetBranchAddress("Mva", &Mva, &b_Mva);
   fChain->SetBranchAddress("Mva_f", &Mva_f, &b_Mva_f);
   fChain->SetBranchAddress("nlooseeles", &nlooseeles, &b_nlooseeles);
   fChain->SetBranchAddress("nloosemus", &nloosemus, &b_nloosemus);
   fChain->SetBranchAddress("genphoton_pt", genphoton_pt, &b_genphoton_pt);
   fChain->SetBranchAddress("genphoton_eta", genphoton_eta, &b_genphoton_eta);
   fChain->SetBranchAddress("genphoton_phi", genphoton_phi, &b_genphoton_phi);
   fChain->SetBranchAddress("genmuon_pt", genmuon_pt, &b_genmuon_pt);
   fChain->SetBranchAddress("genmuon_eta", genmuon_eta, &b_genmuon_eta);
   fChain->SetBranchAddress("genmuon_phi", genmuon_phi, &b_genmuon_phi);
   fChain->SetBranchAddress("genelectron_pt", genelectron_pt, &b_genelectron_pt);
   fChain->SetBranchAddress("genelectron_eta", genelectron_eta, &b_genelectron_eta);
   fChain->SetBranchAddress("genelectron_phi", genelectron_phi, &b_genelectron_phi);
   fChain->SetBranchAddress("photon_pt", photon_pt, &b_photon_pt);
   fChain->SetBranchAddress("photon_eta", photon_eta, &b_photon_eta);
   fChain->SetBranchAddress("photon_phi", photon_phi, &b_photon_phi);
   fChain->SetBranchAddress("photon_e", photon_e, &b_photon_e);
   fChain->SetBranchAddress("photon_pev", photon_pev, &b_photon_pev);
   fChain->SetBranchAddress("photon_pevnew", photon_pevnew, &b_photon_pevnew);
   fChain->SetBranchAddress("photon_ppsv", photon_ppsv, &b_photon_ppsv);
   fChain->SetBranchAddress("photon_iseb", photon_iseb, &b_photon_iseb);
   fChain->SetBranchAddress("photon_isee", photon_isee, &b_photon_isee);
   fChain->SetBranchAddress("photon_hoe", photon_hoe, &b_photon_hoe);
   fChain->SetBranchAddress("photon_sieie", photon_sieie, &b_photon_sieie);
   fChain->SetBranchAddress("photon_sieie2", photon_sieie2, &b_photon_sieie2);
   fChain->SetBranchAddress("photon_chiso", photon_chiso, &b_photon_chiso);
   fChain->SetBranchAddress("photon_nhiso", photon_nhiso, &b_photon_nhiso);
   fChain->SetBranchAddress("photon_phoiso", photon_phoiso, &b_photon_phoiso);
   fChain->SetBranchAddress("photon_istrue", photon_istrue, &b_photon_istrue);
   fChain->SetBranchAddress("photon_isprompt", photon_isprompt, &b_photon_isprompt);
   fChain->SetBranchAddress("photon_drla", photon_drla, &b_photon_drla);
   fChain->SetBranchAddress("photon_mla", photon_mla, &b_photon_mla);
   fChain->SetBranchAddress("photon_mva", photon_mva, &b_photon_mva);
   fChain->SetBranchAddress("passEleVeto", &passEleVeto, &b_passEleVeto);
   fChain->SetBranchAddress("passEleVetonew", &passEleVetonew, &b_passEleVetonew);
   fChain->SetBranchAddress("passPixelSeedVeto", &passPixelSeedVeto, &b_passPixelSeedVeto);
   fChain->SetBranchAddress("photonet", &photonet, &b_photonet);
   fChain->SetBranchAddress("photonet_f", &photonet_f, &b_photonet_f);
   fChain->SetBranchAddress("photoneta", &photoneta, &b_photoneta);
   fChain->SetBranchAddress("photoneta_f", &photoneta_f, &b_photoneta_f);
   fChain->SetBranchAddress("photonphi", &photonphi, &b_photonphi);
   fChain->SetBranchAddress("photonphi_f", &photonphi_f, &b_photonphi_f);
   fChain->SetBranchAddress("photone", &photone, &b_photone);
   fChain->SetBranchAddress("photone_f", &photone_f, &b_photone_f);
   fChain->SetBranchAddress("photonsieie", &photonsieie, &b_photonsieie);
   fChain->SetBranchAddress("photonsieie_f", &photonsieie_f, &b_photonsieie_f);
   fChain->SetBranchAddress("photonphoiso", &photonphoiso, &b_photonphoiso);
   fChain->SetBranchAddress("photonphoiso_f", &photonphoiso_f, &b_photonphoiso_f);
   fChain->SetBranchAddress("photonchiso", &photonchiso, &b_photonchiso);
   fChain->SetBranchAddress("photonchiso_f", &photonchiso_f, &b_photonchiso_f);
   fChain->SetBranchAddress("photonnhiso", &photonnhiso, &b_photonnhiso);
   fChain->SetBranchAddress("photonnhiso_f", &photonnhiso_f, &b_photonnhiso_f);
   fChain->SetBranchAddress("iphoton", &iphoton, &b_iphoton);
   fChain->SetBranchAddress("iphoton_f", &iphoton_f, &b_iphoton_f);
   fChain->SetBranchAddress("drla", &drla, &b_drla);
   fChain->SetBranchAddress("drla_f", &drla_f, &b_drla_f);
   fChain->SetBranchAddress("isTrue", &isTrue, &b_isTrue);
   fChain->SetBranchAddress("isprompt", &isprompt, &b_isprompt);
   fChain->SetBranchAddress("ispromptLep", &ispromptLep, &b_ispromptLep);
   fChain->SetBranchAddress("ak4jet_pt", ak4jet_pt, &b_ak4jet_pt);
   fChain->SetBranchAddress("ak4jet_eta", ak4jet_eta, &b_ak4jet_eta);
   fChain->SetBranchAddress("ak4jet_phi", ak4jet_phi, &b_ak4jet_phi);
   fChain->SetBranchAddress("ak4jet_e", ak4jet_e, &b_ak4jet_e);
   fChain->SetBranchAddress("ak4jet_csv", ak4jet_csv, &b_ak4jet_csv);
   fChain->SetBranchAddress("ak4jet_icsv", ak4jet_icsv, &b_ak4jet_icsv);
   fChain->SetBranchAddress("jet1pt", &jet1pt, &b_jet1pt);
   fChain->SetBranchAddress("jet1pt_f", &jet1pt_f, &b_jet1pt_f);
   fChain->SetBranchAddress("jet1eta", &jet1eta, &b_jet1eta);
   fChain->SetBranchAddress("jet1eta_f", &jet1eta_f, &b_jet1eta_f);
   fChain->SetBranchAddress("jet1phi", &jet1phi, &b_jet1phi);
   fChain->SetBranchAddress("jet1phi_f", &jet1phi_f, &b_jet1phi_f);
   fChain->SetBranchAddress("jet1e", &jet1e, &b_jet1e);
   fChain->SetBranchAddress("jet1e_f", &jet1e_f, &b_jet1e_f);
   fChain->SetBranchAddress("jet1csv", &jet1csv, &b_jet1csv);
   fChain->SetBranchAddress("jet1csv_f", &jet1csv_f, &b_jet1csv_f);
   fChain->SetBranchAddress("jet1icsv", &jet1icsv, &b_jet1icsv);
   fChain->SetBranchAddress("jet1icsv_f", &jet1icsv_f, &b_jet1icsv_f);
   fChain->SetBranchAddress("jet2pt", &jet2pt, &b_jet2pt);
   fChain->SetBranchAddress("jet2pt_f", &jet2pt_f, &b_jet2pt_f);
   fChain->SetBranchAddress("jet2eta", &jet2eta, &b_jet2eta);
   fChain->SetBranchAddress("jet2eta_f", &jet2eta_f, &b_jet2eta_f);
   fChain->SetBranchAddress("jet2phi", &jet2phi, &b_jet2phi);
   fChain->SetBranchAddress("jet2phi_f", &jet2phi_f, &b_jet2phi_f);
   fChain->SetBranchAddress("jet2e", &jet2e, &b_jet2e);
   fChain->SetBranchAddress("jet2e_f", &jet2e_f, &b_jet2e_f);
   fChain->SetBranchAddress("jet2csv", &jet2csv, &b_jet2csv);
   fChain->SetBranchAddress("jet2csv_f", &jet2csv_f, &b_jet2csv_f);
   fChain->SetBranchAddress("jet2icsv", &jet2icsv, &b_jet2icsv);
   fChain->SetBranchAddress("jet2icsv_f", &jet2icsv_f, &b_jet2icsv_f);
   fChain->SetBranchAddress("drj1a", &drj1a, &b_drj1a);
   fChain->SetBranchAddress("drj1a_f", &drj1a_f, &b_drj1a_f);
   fChain->SetBranchAddress("drj2a", &drj2a, &b_drj2a);
   fChain->SetBranchAddress("drj2a_f", &drj2a_f, &b_drj2a_f);
   fChain->SetBranchAddress("drj1l", &drj1l, &b_drj1l);
   fChain->SetBranchAddress("drj1l_f", &drj1l_f, &b_drj1l_f);
   fChain->SetBranchAddress("drj2l", &drj2l, &b_drj2l);
   fChain->SetBranchAddress("drj2l_f", &drj2l_f, &b_drj2l_f);
   fChain->SetBranchAddress("Mjj", &Mjj, &b_Mjj);
   fChain->SetBranchAddress("Mjj_f", &Mjj_f, &b_Mjj_f);
   fChain->SetBranchAddress("deltaeta", &deltaeta, &b_deltaeta);
   fChain->SetBranchAddress("deltaeta_f", &deltaeta_f, &b_deltaeta_f);
   fChain->SetBranchAddress("zepp", &zepp, &b_zepp);
   fChain->SetBranchAddress("zepp_f", &zepp_f, &b_zepp_f);
   fChain->SetBranchAddress("ptlep1", &ptlep1, &b_ptlep1);
   fChain->SetBranchAddress("etalep1", &etalep1, &b_etalep1);
   fChain->SetBranchAddress("philep1", &philep1, &b_philep1);
   fChain->SetBranchAddress("j1metPhi", &j1metPhi, &b_j1metPhi);
   fChain->SetBranchAddress("j1metPhi_f", &j1metPhi_f, &b_j1metPhi_f);
   fChain->SetBranchAddress("j2metPhi", &j2metPhi, &b_j2metPhi);
   fChain->SetBranchAddress("j2metPhi_f", &j2metPhi_f, &b_j2metPhi_f);
   fChain->SetBranchAddress("METraw_et", &METraw_et, &b_METraw_et);
   fChain->SetBranchAddress("METraw_phi", &METraw_phi, &b_METraw_phi);
   fChain->SetBranchAddress("METraw_sumEt", &METraw_sumEt, &b_METraw_sumEt);
   fChain->SetBranchAddress("genMET", &genMET, &b_genMET);
   fChain->SetBranchAddress("MET_et", &MET_et, &b_MET_et);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
   fChain->SetBranchAddress("MET_corrPx", &MET_corrPx, &b_MET_corrPx);
   fChain->SetBranchAddress("MET_corrPy", &MET_corrPy, &b_MET_corrPy);
   fChain->SetBranchAddress("HLT_Ele1", &HLT_Ele1, &b_HLT_Ele1);
   fChain->SetBranchAddress("HLT_Ele2", &HLT_Ele2, &b_HLT_Ele2);
   fChain->SetBranchAddress("HLT_Mu1", &HLT_Mu1, &b_HLT_Mu1);
   fChain->SetBranchAddress("HLT_Mu2", &HLT_Mu2, &b_HLT_Mu2);
   fChain->SetBranchAddress("HLT_Mu3", &HLT_Mu3, &b_HLT_Mu3);
   fChain->SetBranchAddress("passFilter_HBHE", &passFilter_HBHE, &b_passFilter_HBHE_);
   fChain->SetBranchAddress("passFilter_HBHEIso", &passFilter_HBHEIso, &b_passFilter_HBHEIso_);
   fChain->SetBranchAddress("passFilter_globalTightHalo", &passFilter_globalTightHalo, &b_passFilter_globalTightHalo_);
   fChain->SetBranchAddress("passFilter_ECALDeadCell", &passFilter_ECALDeadCell, &b_passFilter_ECALDeadCell_);
   fChain->SetBranchAddress("passFilter_GoodVtx", &passFilter_GoodVtx, &b_passFilter_GoodVtx_);
   fChain->SetBranchAddress("passFilter_EEBadSc", &passFilter_EEBadSc, &b_passFilter_EEBadSc_);
   fChain->SetBranchAddress("passFilter_badMuon", &passFilter_badMuon, &b_passFilter_badMuon_);
   fChain->SetBranchAddress("passFilter_badChargedHadron", &passFilter_badChargedHadron, &b_passFilter_badChargedHadron_);
   fChain->SetBranchAddress("lumiWeight", &lumiWeight, &b_lumiWeight);
   fChain->SetBranchAddress("pileupWeight", &pileupWeight, &b_pileupWeight);
   Notify();
}








Bool_t xx::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void xx::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

//Qiang
void xx::endJob() {
   fout->cd();
   ExTree->Write();
   fout->Write();
   fout->Close();
   delete fout;
}
//Li

Int_t xx::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}

	Double_t xx::beff(Double_t x)  //befficiency   x=pt
		{
		if(x>=20 && x<30)return 0.485341;
		if(x>=30 && x<50)return 0.596646;
		if(x>=50 && x<70)return 0.630344;
		if(x>=70 && x<100)return 0.643833;
		if(x>=100 && x<140)return 0.641825;
		if(x>=140 && x<200)return 0.629161;
		if(x>=200 && x<300)return 0.59098;
		if(x>=300 && x<600)return 0.532817;
		if(x>=600 && x<1000)return 0.461068;
		if(x>=1000 && x<3000)return 0.410098;
		else return 0.5;
		} 
	Double_t xx::ceff(Double_t x)  //befficiency   x=pt
		{
		if(x>=20 && x<30)return 0.101911;
		if(x>=30 && x<50)return 0.125278;
		if(x>=50 && x<70)return 0.122174;
		if(x>=70 && x<100)return 0.129021;
		if(x>=100 && x<140)return 0.134605;
		if(x>=140 && x<200)return 0.137201;
		if(x>=200 && x<300)return 0.130896;
		if(x>=300 && x<600)return 0.128562;
		if(x>=600 && x<1000)return 0.136062;
		if(x>=1000 && x<3000)return 0.138842;
		else return 0.1;
		} 
	Double_t xx::leff(Double_t x)  //befficiency   x=pt
		{
		if(x>=20 && x<200)return 0.0111077;
		if(x>=200 && x<500)return 0.0171203;
		if(x>=500 && x<1000)return 0.0299113;
		if(x>=1000 && x<3000)return 0.042927;
		else return 0.02;
		} 


	Double_t xx::central_b_scale(Double_t x) //central scale   x=pt partonflavour b=5  c=4 
		{
		if(x>20 && x<1000)return 0.561694*((1.+(0.31439*x))/(1.+(0.17756*x)));
		else return 1;
		}
	Double_t xx::central_c_scale(Double_t x) //central scale   x=pt partonflavour b=5  c=4 
		{
		if(x>20 && x<1000)return 0.561694*((1.+(0.31439*x))/(1.+(0.17756*x)));
		else return 1;
		}
	Double_t xx::central_l_scale(Double_t x) //central scale   x=pt partonflavour b=5  c=4 
		{
		if(x>20 && x<1000)return 1.0589+0.000382569*x+-2.4252e-07*x*x+2.20966e-10*x*x*x;
		else return 1;
		}


	Double_t xx::up_b_scale(Double_t x) //up scale   x=pt partonflavour b=5  c=4 
		{
		if(x>=20 && x<30)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.040213499218225479;
		if(x>=30 && x<50)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.014046305790543556;
		if(x>=50 && x<70)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.012372690252959728;
		if(x>=70 && x<100)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.012274007312953472;
		if(x>=100 && x<140)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.011465910822153091;
		if(x>=140 && x<200)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.012079551815986633;
		if(x>=200 && x<300)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.014995276927947998;
		if(x>=300 && x<600)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.021414462476968765;
		if(x>=600 && x<1000)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.032377112656831741;
		else return 1;
		}
	Double_t xx::up_c_scale(Double_t x) //up scale   x=pt partonflavour b=5  c=4 
		{
		if(x>=20 && x<30)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.12064050137996674;
		if(x>=30 && x<50)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.042138919234275818;
		if(x>=50 && x<70)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.03711806982755661;
		if(x>=70 && x<100)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.036822021007537842;
		if(x>=100 && x<140)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.034397732466459274;
		if(x>=140 && x<200)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.0362386554479599;
		if(x>=200 && x<300)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.044985830783843994;
		if(x>=300 && x<600)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.064243391156196594;
		if(x>=600 && x<1000)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))+0.097131341695785522;
		else return 1;
		}
	Double_t xx::up_l_scale(Double_t x) //up scale   x=pt partonflavour b=5  c=4 
		{
		if(x>=20 && x<1000)return (1.0589+0.000382569*x+-2.4252e-07*x*x+2.20966e-10*x*x*x)*(1+(0.100485+3.95509e-05*x+-4.90326e-08*x*x));
		else return 1;
		}


	Double_t xx::down_b_scale(Double_t x)  //down scale   x=pt partonflavour b=5  c=4 
		{
		if(x>=20 && x<30)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.040213499218225479;
		if(x>=30 && x<50)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.014046305790543556;
		if(x>=50 && x<70)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.012372690252959728;
		if(x>=70 && x<100)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.012274007312953472;
		if(x>=100 && x<140)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.011465910822153091;
		if(x>=140 && x<200)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.012079551815986633;
		if(x>=200 && x<300)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.014995276927947998;
		if(x>=300 && x<600)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.021414462476968765;
		if(x>=600 && x<1000)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.032377112656831741;
		else return 1;
		} 
	Double_t xx::down_c_scale(Double_t x)  //down scale   x=pt partonflavour b=5  c=4 
		{
		if(x>=20 && x<30)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.12064050137996674;
		if(x>=30 && x<50)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.042138919234275818;
		if(x>=50 && x<70)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.03711806982755661;
		if(x>=70 && x<100)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.036822021007537842;
		if(x>=100 && x<140)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.034397732466459274;
		if(x>=140 && x<200)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.0362386554479599;
		if(x>=200 && x<300)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.044985830783843994;
		if(x>=300 && x<600)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.064243391156196594;
		if(x>=600 && x<1000)return (0.561694*((1.+(0.31439*x))/(1.+(0.17756*x))))-0.097131341695785522;
		else return 1;
		} 
	Double_t xx::down_l_scale(Double_t x)  //down scale   x=pt partonflavour b=5  c=4 
		{
		if(x>20 && x<1000)return (1.0589+0.000382569*x+-2.4252e-07*x*x+2.20966e-10*x*x*x)*(1-(0.100485+3.95509e-05*x+-4.90326e-08*x*x));
		else return 1;
		} 
#endif // #ifdef xx_cxx
