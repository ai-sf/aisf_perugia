{
double x[30]  = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
double y[30]  = {.566,.557,.548,.540,.530,.520,.511,.499,.492,.483,.474,.464,.457,.448,.439,.431,.424,.416,.408,.399,.391,.383,.376,.368,.361,.353,.345,.337,.331,.325};
double ex[30] = {.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125,.125};
double ey[30] = {.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008,.008};
    
    
TGraphErrors gr (30,x,y,ex,ey);
    
//impostiamo il colore del marker 4=celeste la tavola complessiva si puo trovare sul sito cern
    gr.SetMarkerColor(2); //uso il metodo setmarkerstyle della classe TGraphErrors
    gr.SetMarkerStyle(20); //scelgo lo stile 21 del marker
    gr.SetTitle("Plot Lez 1"); //titolo grafico
    
    gr.GetXaxis()->SetTitle("grandezza x (unita' di misura)");
    gr.GetYaxis()->SetTitle("grandezza y (unita' di misura)");
    
    
gr.Draw("AP"); //stampa asse punti
    
} 
