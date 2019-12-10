
void f(){
// salvare in una cartella a scelta il file contenete i dati.
// Nel file che può essere aperto con qualsiasi Editor di testo i dati vanno salvati in colonne nel seguente modo.

//  datax  datoy errorx errory
//  la stringa nomefile verrà passata al TGraphError che genererà il Plot
    
/* in questo caso i dati contenuti nel file "punticurva.txt" son o:
  3 1 0.1 0.1
  4 2 0.1 0.1
  5 3 0.1 0.1
  6 4 0.1 0.1
*/
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
