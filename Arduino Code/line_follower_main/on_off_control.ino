
void controlOnOff(int error){
if (error == (00001)&&error == (00010)){
  moveR();
}
else if (error == (10000)&&error == (01000)){
  moveL();
}
else if (error == (00000)){
  moveF();
}
else if (error == (00100)){
  stopropot();
}

}
