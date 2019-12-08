


//devono essere oggetti dinamici
{

TH1F hist5("Isto", "Titolo",10,22,23);
//0.70-0.80 intervallo dell asse x

    hist5.Fill(22.3);
    hist5.Fill(22.5);
    hist5.Fill(22.4);
    hist5.Fill(22.8);
    hist5.Fill(22.3);
    
    
    
    hist5.GetXaxis()->SetTitle("data x");
    hist5.GetYaxis()->SetTitle("conteggi");

    
hist5.Draw();
}

