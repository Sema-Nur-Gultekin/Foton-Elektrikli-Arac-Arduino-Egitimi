/* Bazı veri tipleri ve alabileceği değerler
1. unsigned long / 4 bayt / 0 <-> 4294967295
2. unsigned int / 2 bayt / 0 <-> 65535
3. int / 2 bayt / -32768 <-> 32767
4. long / 4 bayt / -2147483648 <-> 2147483647
5. float / 4 bayt / -3.4*10^38 <-> 3.4*10^38
6. bool - boolean / 1 bayt / 1(true) veya 0(false)
7. char / 1 bayt / karakter */

int a = 32767;
long b = 2147483647;
float c = 3.14;
char x = '?';

void setup() {
  Serial.begin(9600);
  Serial.print("a= "); Serial.println(a); 
  Serial.print("b= "); Serial.println(b); 
  Serial.print("c= "); Serial.println(c); 
  Serial.print("x= "); Serial.println(x, DEC); // Dec bize desimal yani ondalık karışılığını verir.

}

void loop() {
  

}
