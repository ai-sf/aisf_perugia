



{

TH1F hist5("Isto", "Titolo",10,22,23);
//riempio i vari bin con i valori
hist5.Fill(22.3);
hist5.Fill(22.2);
hist5.Fill(22.0);
hist5.Fill(22.11);
hist5.Fill(22.18);
hist5.Fill(22.55);
hist5.Fill(22.5);
hist5.Fill(22.4);
hist5.Fill(22.8);
hist5.Fill(22.3);
hist5.Fill(22.3);
hist5.Fill(22.3);
hist5.Fill(22.4);
hist5.Fill(22.4);
    
    
hist5.GetXaxis()->SetTitle("data x");
hist5.GetYaxis()->SetTitle("conteggi");

    hist5.Draw();

}

