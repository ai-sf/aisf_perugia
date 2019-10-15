---
layout: page
title: Reti Neurali
permalink: /ArticoliHTML/reti/
---
<html>
<script src='https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML' async></script>

<center>
 <h2>Il Cervello Umano … Che rete!</h2>
<h5 class="mbr-section-subtitle align-center mbr-light mbr-fonts-style display-7"><em> cura di Andrea Lo Sasso, 4 Settembre 2019</em></h5><br>
<h3 >Reti cerebrali per prevedere l’invecchiamento del cervello umano.</h3></center>
<br>
Che siano reti sociali, economiche o cerebrali ora mai sentiamo sempre più spesso parlare di rete. Internet o Facebook ci danno ogni giorno un’idea di rete, ma oltre il mondo online ci rendiamo sempre più conto che i fenomeni sono perlopiù connessi con innumerevoli altri, come un grande puzzle universale. È in atto una rivoluzione dove scienziati di ogni disciplina scoprono che la natura è una complessità con un'architettura ben precisa. Siamo arrivati a capire l'importanza delle reti. Tuttavia, sono in pochissimi a rendersi conto che, nel suo rapido sviluppo, la scienza delle reti sta scoprendo fenomeni molto più rivelatori ed eccitanti di quanto l'uso casuale della parola rete abbia mai suggerito.<br><br>

Contrariamente a quanto si pensa la prima forma di questa branca della matematica fu inaugurata negli anni trenta del XVIII sec., quando il matematico Leonardo Eulero pubblicò un saggio su un curioso problema sorto tra i cittadini di Königsberg, per l’attraversamento dei sette ponti senza mai riattraversarne uno due volte. Non soltanto risolse il problema di Königsberg, dimostrandone l’impossibilità, ma con il suo breve saggio Eulero inaugurò, senza saperlo, una prolifica branca della matematica conosciuta come teoria dei grafi.


<figure>  
<center>
    <img src="/perugia/reti/image1.png" style="max-width:100%"
    height="auto" width="600" class="responsive">
</center>
<center>
  <figcaption>  <b><em>Figura 1: Schematizzazione dei ponti di Königsberg. Come è visibile le aree verdi che rappresentano il terreno possono essere schematizzate come quattro nodi. I ponti in giallo rappresentano i link tra ciascun terreno. Immagine distribuita sotto licenza CC BY-SA 4.0.</em></b> </figcaption>
</center>

</figure>

<br>
La grande intuizione di Eulero fu concepire i ponti di Königsberg come un grafo, ossia un insieme di ‘vertici’ o ‘nodi’ connessi da ‘bordo’ o ‘link’. Eulero si basò su una semplice osservazione. I nodi con un numero dispari di link dovevano trovarsi all'inizio o alla fine del cammino. L'aspetto più importante della dimostrazione di Eulero è che l'esistenza del percorso non dipende dalla nostra capacità di trovarlo, ma è una proprietà del grafo. Oggi la teoria dei grafi è alla base della nostra concezione delle reti.<br><br>

Con il passare degli anni, all’interno della letteratura scientifica i termini Rete e Grafi sono stati utilizzati in modo interscambiabile, associando alla parola Rete anche Nodo e Link, mentre ai Grafi le parole Vertice e Bordo. C’è nonostante ciò una sottile distinzione nei termini. La combinazione rete, nodo, link si riferisce spesso a sistemi reali: la società è una rete di individui legati da famiglia, amicizia o legami professionali. D’altro canto, usiamo i termini grafico, vertice, bordo quando discutiamo della rappresentazione matematica di queste reti: parliamo del web grafico o grafico sociale (un termine reso popolare dall’avvento di Facebook).<br><br>

Il concetto fondamentale di una rete è il numero di link che un nodo ha (cioè il numero dei suoi vicini diretti) che è chiamato grado k. Tramite questa proprietà possiamo distinguere tre tipi di rete: regolare, casuale ed ad invarianza di scala. Queste sono quelle più conosciute ed anche quelle che in natura si riscontrano con maggiore frequenza, in particolare le reti ad invarianza di scala. In una rete regolare, tutti i nodi hanno lo stesso numero di collegamenti. In una rete casuale, ogni coppia di nodi è connessa con una determinata probabilità, quindi la loro distribuzione di grado, P(k), segue la distribuzione binomiale. In una rete ad invarianza di scala (scale free), la probabilità segue una legge di potenza del tipo \(   P(k) \approx k^{-\gamma}   \); ciò significa che una rete del genere è caratterizzata nodi altamente connessi, seppur in un numero limitato. Questi nodi prendono il nome di hub.<br>

<figure>  
<center>
    <img src="/perugia/reti/image2.png" style="max-width:100%"
    height="auto" width="600" class="responsive">
</center>
<center>
  <figcaption>  <b><em>Figura 2A)
Esempio di rete casuale. Ogni nodo ha un suo numero di collegamenti, ma non sono presenti hub.<br>
Figura 2B) Rete ad invarianza di scala. In rosso esempi di hub.Immagini distribuite sotto licenza CC BY-SA 4.0 .<br>  Figura 2C) Grafico delle probabilità di una rete casuale ed ad invarianza di scala. La distribuzione binomiale è propria di una rete casuale, mentre la rete di potenza decrescente è propria delle reti ad invarianza di scala.</em></b> </figcaption>
</center>

</figure>

<br>Negli ultimi due decenni il concetto di rete è stato applicato anche in numerosi ambiti della fisica, più vicini all’ambito della Fisica Statistica come ad esempio Fisica Sociale, Economica ed in particolare Fisica Medica. In questi ambiti la grande quantità di dati costantemente fruibili (Big Data) danno alle reti sempre maggiore importanza per quel concetto di fine al principio deterministico che rappresenta uno dei più grandi successi della Fisica, fin dai tempi della dinamica newtoniana.<br><br>

Nell’ambito della Fisica Medica le reti svolgono un ruolo particolare per lo studio del cervello umano (Reti Cerebrali). Infatti si sta consolidando, attraverso lo studio statistico delle analisi dei segnali fMRI (functional Magnetic Resonance Imaging) BOLD (Blood Oxygen Level Dependet), il paradigma secondo cui lo svolgimento delle attività quotidiane non viene eseguito da singole regioni del cervello che lavorano in isolamento, ma da reti costituite da diverse regioni del cervello che sono dette "funzionalmente connesse". Dunque, come un sistema fisico che segue le proprietà dei grafi, le reti cerebrali hanno nodi e link, derivanti della co-attivazione di più aree cerebrali. Questi studi sul cervello sono stati facilitati proprio grazie a nuove tecniche di imaging e al progresso nella teoria dei grafi.

<br><br>Per capire meglio come vengono costruite queste reti, facciamo una passeggiata, che si dimostrerà piacevole e necessaria, tra i dati che vengono utilizzati. Questo passaggio ci darà quindi la possibilità di toccare con mano un modello di rete cerebrale.


<section>
<center><h3> Il Resting State fMRI  </h3></center>
</section>

Il Resting State fMRI (rsfMRI, o anche R-fMRI) è una tecnica di risonanza magnetica utilizzata per mappare il cervello umano al fine di identificare quali aree sono attivate o meno nelle azioni compiute dall’uomo. In condizioni di riposo, vengono determinati le variazioni di flusso sanguigno all’interno del cervello attraverso il segnale BOLD. L’esecuzione di un compito (task) determinerà una variazione del segnale BOLD in quanto la quantità di sangue nelle varie aree del cervello umano cambierà in funzione del coinvolgimento di ciascuna area nello svolgimento del compito stesso.<br><br>

<figure>  
<center>
    <img src="/perugia/reti/image3.png" style="max-width:100%"
    height="auto" width="400" class="responsive">
</center>
<center>
  <figcaption>  <b><em>Esempio di imaging fMRI. Qui ogni pallino rappresenta un’area del cervello catturata durante la risonanza. Immagine distribuita sotto licenza CC BY-SA 4.0.</em></b> </figcaption>
</center>

</figure>


<br>Dunque, la fMRI permette di ricostruire, attraverso la fluttuazione del segnale BOLD, quali aree cerebrali sono coinvolte nell’esecuzione di un compito. Questo approccio sta portando alla scoperta di una struttura ben precisa del nostro cervello e ha già portato alla scoperta di una serie di reti costantemente presenti nel cervello umano sano, delineando possibili forme di disturbi neurologici.<br><br>

Questa tecnica ha dunque come suo parametro il cambiamento di magnetizzazione tra il sangue ricco di ossigeno da quello povero.

La rete di interazioni neuronali può essere ricostruita attraverso due approcci: la Connettività Funzionale e la Connettività Strutturale.<br><br>

La Connettività Funzionale (FC) è formalmente definita come la correlazione temporale tra eventi neurofisiologici spazialmente remoti, espressa come deviazione dall'indipendenza statistica tra questi eventi in gruppi neuronali distribuiti tra varie aree. La FC viene associata tra le diverse regioni del cervello che entrano in azione nel momento in cui si attivano le aree per uno specifico compito, e che dunque condividono proprietà di funzionalità. Questa correlazione viene utilizzata, ad esempio, per lo studio del disordine bipolare o dello stress post-traumatico.<br><br>


<figure>  
<center>
    <img src="/perugia/reti/image4.png" style="max-width:100%"
    height="auto" width="400" class="responsive">
</center>
<center>
  <figcaption>  <b><em> Esempio di connettività funzionale. E’ possibile visualizzare come diverse aree del cervello siano attive per una singola attività. Immagine distribuita sotto licenza CC BY-SA 4.0 .</em></b> </figcaption>
</center>

</figure>

<br>La Connettività Strutturale (SC) è invece definita come la connettività di regioni che sono fisicamente ed anatomicamente collegate tra loro.<br>
In uno studio sulle reti cerebrali entrambi gli approcci sono ugualmente importanti per ricostruire la rete di connessioni in quanto ciascuna modalità è correlata a differenti aspetti funzionali del cervello.


<section>
<center><h3> Default Mode Network  </h3></center>
</section>

Uno dei modelli di rete più utilizzati per descrivere le interazioni neuronali è la ‘Rete in Modalità Predefinita’ (Default Mode Network, DMN). Esso si basa sullo studio delle correlazioni di un alto numero di interazioni tra aree del cervello interconnesse anche se anatomicamente lontane tra di loro.<br><br>

<figure>  
<center>
    <img src="/perugia/reti/image5.png" style="max-width:100%"
    height="auto" width="400" class="responsive">
</center>
<center>
  <figcaption>  <b><em> Esempio di risonanza magnetica tra diverse aree de cervello in una rete in modalità predefinita. Immagine distribuita sotto licenza CC BY-SA 4.0.</em></b> </figcaption>
</center>

</figure>
<br>
Un tipico modello applicativo è quello di un individuo, sveglio e a riposo, concentrato in una attività introspettiva, come sognare ad occhi aperti o immaginare il futuro.<br><br>

Questo modello di rete assembla le varie zone del cervello in cluster ed analizza in particolare quelle zone in cui gli hub sono interconnessi tra loro. Gli studi DMN condotti su vari individui hanno portato, ad esempio, alla scoperta delle correlazioni tra cluster che continuano ad essere interconnessi durante il corso degli anni, anche se la distanza tra i cluster aumenta all’aumentare dell’età. L’analisi dei dati viene effettata tramite vari processi analitici tra cui l’Analisi delle Componenti Indipendenti (Indipendent Component Analysis, ICA) che scansiona le singole componenti come segnali spaziotemporali non sovrapposti, oppure un’analisi regionale basata su una predefinita regione di interesse (Region of Interest, ROI) che prende un singolo cluster, o voxel, e ne analizza le correlazioni con gli altri.


<section>
<center><h3> Scoprire l’età biologica del proprio cervello  </h3></center>
</section>

All’interno del Dipartimento Interuniversitario di Fisica di Bari e nella sezione INFN Bari, il cervello umano è studiato da quasi quindici anni. Uno degli studi più recenti ha condotto allo sviluppo di un software in grado di stabilire l’età biologica di una persona sulla base di misure anatomiche e funzionali.<br>
L’algoritmo utilizzato si basa sui dati derivanti dalla fMRI, modellizzati tramite studio statistico per permettere di eliminare eventuali errori, quali quelli derivanti, per esempio, dal movimento della testa durante la misurazione. Confrontando i dati di 155 pazienti, in una fascia di età compresa tra i 10 e 80 anni, si è riuscito a costruire una matrice di connettività funzionale e strutturale, suddividendo il cervello in quasi 2,514 regioni. <br>
Da tali matrici sono state estratte quelle caratteritiche che più sono legate all’invecchiamento, per mezzo delle quali si è riusciti a prevedere l’età cronologica dei pazienti con una regressione lineare avente coefficiente di correlazione pari a 0.95 ed un errore di \(\pm\)5 anni. L’età prevista dall’algoritmo corrisponde all’età biologica, in quanto valutata sulla base delle sole misure di neuroimaging; in questo modo per ogni soggetto è stato possibile calcolare la differenza tra età biologica (BCA) e cronologica (CHA).

<figure>  
<center>
    <img src="/perugia/reti/image6.png" style="max-width:100%"
    height="auto" width="400" class="responsive">
</center>
<center>
  <figcaption>  <b><em> Grafico della BCA in funzione della CHA. Il coefficiente di correlazione lineare tra è 0.95. I punti che più si allontanano dalla retta (alto/basso) sono di quei soggetti con un cervello più giovane/vecchio rispetto alla loro CHA. È molto frequente avere un cervello si più giovane in una fascia tra i 10-30 anni. </em></b> </figcaption>
</center>

</figure>

<br>Questo studio ha messo in luce due aspetti particolari: non solo si è riuscito con un’innovativa tecnica a multi variabile a dare una giusta stima dell’età biologica del cervello umano, con un margine di errore non superiore ai 5 anni, ma inoltre è riuscito ad individuare quali zone del cervello, con le loro interazioni, sono causa dell’eventuale deterioramento. Infatti le zone che contribuiscono maggiormente alla stima dell’età sono state il talamo e la corteccia orbito-frontale. Questo potrebbe essere una scoperta da non sottovalutare per future tecniche “antiinvecchiamento”. Si è riscontrato inoltre che la maggior parte delle persone che hanno riportato un’età biologica più bassa della media avevano quasi tutti una caratteristica che li accomunava: ero individui molto propensi all’attività sportiva. Fare attività fisica quotidiana risulta essere un ottimo metodo per mantenere giovane il cervello umano. Come dicevano gli antichi: “Mens sana, in corpore sano!”.



<section>
<center><h3> Conclusioni </h3></center>
</section>

Le reti sono forse lo strumento che più sta trasformando il nostro modo di vedere le cose. E se Facebook viene definito uno strumento per quest’ambito alla pari del cannocchiale nell’astronomia, sicuramente l’aspetto che più deve colpire è come queste tecniche riescono facilmente a darci una chiara rappresentazione di molti aspetti scientifici oggi studiati, come sistemi biologici, economici e sociali. <br>
In questo articolo si è cercato di incanalare il lettore circa l’attività che il Dipartimento Interuniversitario di Fisica di Bari, nell’ambito della Fisica Medica, compie in collaborazione con il Policlinico e Politecnico di Bari e con svariati centri di ricerca nell’ambito dei sistemi complessi ed Imaging. Forte di uno dei più grandi centri di calcolo italiani, ReCas Bari, il lavoro va avanti e trova sempre più approvazione anche in ambito internazionale. Uno stimolo in più per poter continuare.
<br><br>
<b>[1]</b>Albert-Laszlo Baràbasi. “Link – La Nuova Scienze delle Reti”. Enaudi, 2004.<br><br>

<b>[2]</b>Olaf Sporns. “Networks of the Brain”. Mit Pr, 2016.<br><br>

<b>[3]</b>Paolo Bonifazi et al. “Structure–function multi-scale connectomics reveals a major role of the fronto-striato-thalamic circuit in brain aging”. Wiley. Hum Brain Map. 2018;1-15. 10.1002/hbm.24312e.<br><br>
