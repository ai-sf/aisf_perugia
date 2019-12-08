
void  T(){
    
    struct dato {
        float  value;
        float err;
    };
    
    dato dx,dy;
    
    //path dove è stato  salvato il file.root
    auto infile = TFile::Open("/Users/David/root/macros/esTree.root");

    auto tree = (TTree *)infile->Get("t1");

    tree->SetBranchAddress("xx",&dx);
    tree->SetBranchAddress("yy",&dy);
    
    
    int nEv = tree->GetEntries();
    float assex[nEv];
    float errorx[nEv];
    float assey[nEv];
    float errory[nEv];
    
    for (int iEv= 0 ; iEv < nEv; iEv++){
        tree->GetEntry(iEv);
        assex[iEv] = dx.value;
        errorx[iEv] = dx.err;
        assey[iEv] = dy.value;
        errory[iEv] = dy.err;
    }
    
    TGraphErrors *g = new TGraphErrors(nEv,assex,assey,errorx,errory);
    g->GetXaxis()->SetTitle("x");
    g->GetYaxis()->SetTitle("y");
    g->GetXaxis()->CenterTitle();
    g->GetYaxis()->CenterTitle();
    
    g->SetMarkerColor(4); //Markers...
    g->SetMarkerStyle(20);
    g->SetTitle("GraphError from data stored in Tree saved in a root File");
    g->Draw("ap");
    return 0;
}
