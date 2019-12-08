{
double x[3]  = {0,1,2};
double y[3]  = {1,2,3};
double ex[3]  = {0.1,0.1,0.1};
double ey[3]  = {0.1,0.1,0.1};
    
TGraphErrors *f = new TGraphErrors(3,x,y,ex,ey);  //grafico 1

    f->SetMarkerColor(1); //Markers...
    f->SetMarkerStyle(21);
    //g->SetTitle("titolo");
    f->SetLineColor(1);
    cout<<"****************************"<<endl;
    cout<<"FIT funzione f-->  "<<endl;
    f->Fit("pol1");
    f->GetFunction("pol1")->SetLineColor(1); //colore linea del fit
    
    
    
double x2[3]  = {4,5,6};
double y2[3]  = {1,2,3};
double ex2[3]  = {0.1,0.1,0.1};
double ey2[3]  = {0.1,0.1,0.1};
TGraphErrors *g = new TGraphErrors(3,x2,y2,ex2,ey2);  //grafico 2
    g->SetMarkerColor(2); //Markers...
    g->SetMarkerStyle(22);
    //g->SetTitle("titolo");
    g->SetLineColor(2);
    cout<<"****************************"<<endl;
    cout<<"FIT funzione f-->  "<<endl;
    g->Fit("pol1");
    g->GetFunction("pol1")->SetLineColor(2);//colore linea del fit
    
    
double x3[3]  = {7,8,9};
double y3[3]  = {1,2,3};
double ex3[3]  = {0.1,0.1,0.1};
double ey3[3]  = {0.1,0.1,0.1};
TGraphErrors *h =new TGraphErrors(3,x3,y3,ex3,ey3);  //grafico 3
    h->SetMarkerColor(3); //Markers...
    h->SetMarkerStyle(23);
    //g->SetTitle("titolo");
    h->SetLineColor(3);
    cout<<"****************************"<<endl;
    cout<<"FIT funzione f-->  "<<endl;
    h->Fit("pol1");
    h->GetFunction("pol1")->SetLineColor(3);//colore linea del fit

    
double x4[3]  = {9,10,11};
double y4[3]  = {1,2,3};
double ex4[3]  = {0.1,0.1,0.1};
double ey4[3]  = {0.1,0.1,0.1};
TGraphErrors *k = new TGraphErrors(3,x4,y4,ex4,ey4);  //grafico 4
    k->SetMarkerColor(4); //Markers...
    k->SetMarkerStyle(20);
    //g->SetTitle("titolo");
    k->SetLineColor(4);
    cout<<"****************************"<<endl;
    cout<<"FIT funzione f-->  "<<endl;
    k->Fit("pol1");
    k->GetFunction("pol1")->SetLineColor(4);//colore linea del fit
    
    
    
    TMultiGraph* mg = new TMultiGraph();
    mg->Add(f);
    mg->Add(g);
    mg->Add(h);
    mg->Add(k);
    mg->SetTitle("Multigraph (Fit) Example");
    mg->GetXaxis()->SetTitle("x");
    mg->GetYaxis()->SetTitle("f(x)");
    
    mg->Draw("ap");
    
    auto legend = new TLegend(0.1,0.2,0.28,0.3);
    legend->SetHeader("Legend","C"); // option "C" allows to center the header
    legend->AddEntry(f,"funzione f ","l");
    legend->AddEntry(g,"funzione g","l");
    legend->AddEntry(h,"funzione h ","l");
    legend->AddEntry(k,"funzione k","l");
    legend->Draw();
} 
