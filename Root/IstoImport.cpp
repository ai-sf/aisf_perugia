
void Import(int n){
    
  
    double xmin,xmax;
    cout<<"insert xmin e xmax"<<endl;
    cin>>xmin>>xmax;

    TH1F *h = new TH1F("h", "Title" ,n,xmin,xmax);
    
    //importazione
    TString pathfile = "/Users/David/Desktop/histo.txt";
    fstream f;
    double x;
    f.open(pathfile,ios::in);
    if (f.bad()) {
        cout<<"errore"<<endl;
        }
        while (!f.eof()) {
            f>>x>>ws;
            //ws non considera spazi(non inserire virgole tra dati)
            h->Fill(x);
        }
        
        f.close();
        
        h->Draw();
}

