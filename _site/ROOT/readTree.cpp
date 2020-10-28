void T(){

    //in questo caso ho un flle.root che contiene un Tree (nome: SFS Data)
    // il tree è composto da 1 branch(nome branch: SFS - N) e 2 leaf
    
    struct dato {
                float  x;
                float errx;
            };
            
    dato dx,dy;

    
    auto infile = TFile::Open("/Users/David/Desktop/programming/python/modules/SOLAR_TREE/SFSTree.root");
    
    auto tree = (TTree *)infile->Get("SFS Data");
    
    tree->SetBranchAddress("SFS - N",&dx);
    int nEv = tree-> GetEntries();
    for (int iEv = 0; iEv < nEv; iEv++) {
        tree->GetEntry(iEv);
        cout<<"--> "<<setprecision(7)<<dx.x<<"     "<<setprecision(3)<<dx.errx<<endl;
    }
    
    //ad ogni iterazione  tree->GetEntry(iEv) legge sequenzialmente i valori contenuti nel branch e li assegna alle variabili dx.x e dx.errx
    
    //cout stampa su schermo il risultato dell'estrazione da file
    
    //setprecision fissa il numero di cifre decimali che si vuole visualizzare
    
    return 0;
}
