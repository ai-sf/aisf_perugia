void f()
{
    
    double xmin;
    double xmax;
    int n;
    
    // con cout e cin l'utente ad ogni lancio della macros può stabilire il range di visualizzazione
    cout<<"Inserisci l'estremo xmin "<<endl;
    cin>>xmin;
    
    cout<<"Inserisci l'estremo xmax "<<endl;
    cin>>xmax;
    
    cout<<"BINNING-->Inserisci numero di bin "<<endl;
    cin>>n;
    
TH1F *hist5 = new TH1F("Parameters","h",n,xmin,xmax);
//0.70-0.80 intervallo dell asse x
  hist5->SetTitle("Titolo istogramma");
    
    
    hist5->Fill(22.3);
    hist5->Fill(22.5);
    hist5->Fill(22.4);
    hist5->Fill(22.8);
    hist5->Fill(22.3);
    hist5->Fill(22.4);
    hist5->Fill(22.8);
    hist5->Fill(22.3);
    hist5->Fill(22.4);
    hist5->Fill(22.8);
    hist5->Fill(22.3);
    hist5->Fill(22.4);
    hist5->Fill(22.8);
    hist5->Fill(22.3);
    hist5->Fill(22.4);
    hist5->Fill(22.8);
    hist5->Fill(22.3);
    hist5->Fill(23.3);
    hist5->Fill(23.4);
    hist5->Fill(23.8);
    hist5->Fill(23.3);
    hist5->Fill(23.4);
    hist5->Fill(23.8);
   hist5->Fill(23.3);
    
    
    hist5->GetXaxis()->SetTitle("data x");
    hist5->GetYaxis()->SetTitle("conteggi");

    
hist5->Draw();
}

