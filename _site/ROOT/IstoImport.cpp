

void Import(){

    TH1F *h = new TH1F("h", "Title" ,10,22,23);
    
    //importazione
    TString pathfile = "/Users/David/Desktop/text.txt";
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

