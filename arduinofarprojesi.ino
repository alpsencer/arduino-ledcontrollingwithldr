int ledPin = 3; //ledimiz in 3. pine takıldığı programa bildirilir.
int ldr = 0;    // ldr adlı bir değişken oluşturulur." ldr " değişkenine 0 değerini verdik.(başlangıç değeri olarak bu değer program çalışırken sürekli değişeceği için hangi değeri verdiğinizin fazla önemi yoktur.
 
void setup()  {  //Programa yalnızca bir kere "öğretmemiz" gereken kodlar bu bölüme yazılır.
  pinMode(ledPin, OUTPUT); // led güç verilecek şekilde yani dışarı çıkış (output) olarak ayarlandı.
}
 
 
void loop()  { //Programımızın ana kodunun bulunduğu yerdir.Kod sürekli tekrarlanır.
 
  ldr = (analogRead(0)/4); //  0-1023 arasındaki değeri 0-255 arasına indiren işlemi yapar
 
  analogWrite(ledPin, ldr);  //led e ldr degeri ile orantılı olarak guc verir Ornek: LDR degeri -> 512 -> "ldr" değişkeni = 512/4 -> 128 -> 128/255 yaklaşık yüzde 50 yapar. Yani led yüzde 50 oranında yanar. 
 
  delay(20);  // Bu delay(geciktirme) komutu aydınlatmanın loşlaştırma hızının gecikmesini belirler.                           
}
