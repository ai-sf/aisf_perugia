{
    TString nomefile = "/Users/David/Desktop/punticurva.txt"; //percorso
    TGraphErrors *g = new TGraphErrors(nomefile);
    g->GetXaxis()->SetTitle("x");
    g->GetYaxis()->SetTitle("f(x)");
    g->GetXaxis()->CenterTitle();
    g->GetYaxis()->CenterTitle();
    
    g->SetMarkerColor(4); //Markers...
    g->SetMarkerStyle(20);
    g->SetTitle("titolo");
    g->Draw("ap");
    
} 
