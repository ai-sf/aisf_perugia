---
layout: page
permalink: /Storico/
long_title: Tutti gli eventi di AISF Perugia
img: Art
description: Archivio degli eventi AISF Perugia per l'anno 2019/20
---
<meta name="viewport" content="width=device-width, initial-scale=1">

<style>

{
  box-sizing: border-box;
}

body {
  font-family: Arial;
  font-size: 17px;
}

.container {
  position: relative;
  max-width: 800px;
  margin: 0 auto;
}

.container img {vertical-align: middle;}

.container .content {
  position: absolute;
  bottom: 0;
  background: rgb(0, 0, 0);
  background: rgba(0, 0, 0, 0.5);
  color: #f1f1f1;
  width: 100%;
  padding: 20px;
}

</style>



<center>
<h2>Tutti gli eventi di AISF Perugia</h2>


<h3> <em> Not a simple coffee time </em></h3>
<br>
<div class="w3-content w3-section" style="max-width:500px">

<div class="container" >
  <img src="/perugia/Slideshow/caffe5.png" alt="Notebook" style="width:100%;" class="mySlides">
  <div class="content">
    <h1>Biofisica</h1>
    <p>Caffè Scientifico del 5 Novembre</p>
  </div>
</div>

  <img class="mySlides" src="/perugia/Slideshow/caffe2.png" style="width:60%">
  <img class="mySlides" src="/perugia/Slideshow/caffe.png" style="width:60%">
  <img class="mySlides" src="/perugia/Slideshow/caffe3.png" style="width:60%">
  <img class="mySlides" src="/perugia/Slideshow/caffe5.png" style="width:60%">
    <img class="mySlides" src="/perugia/Slideshow/caffe6.png" style="width:60%">
  <img class="mySlides" src="/perugia/Slideshow/caffe4.png" style="width:60%">

</div>
</center>




<script>
var myIndex = 0;
carousel();
function carousel() {
  var i;
  var x = document.getElementsByClassName("mySlides");
  for (i = 0; i < x.length; i++) {
    x[i].style.display = "none";
  }
  myIndex++;
  if (myIndex > x.length) {myIndex = 1}
  x[myIndex-1].style.display = "block";
  setTimeout(carousel, 3000);
}
</script>
