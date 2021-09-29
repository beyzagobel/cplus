# Seçme Komutları
Verilen koşul ifadelerine göre yazılan komutlardan birini seçip çalıştırlar. Seçme işlemleri;
- if,
- if - else
- switch  komutları ile gerçekleştirilir

> Koşul ifadelerini yazarken farklı değerleri kullanmak için daha önceden öğrendiğimiz ilişkisel operatörler ve ilişkisel ifadeleri birleştirmek için ise mantıksal
operatörleri kullanacağız.

## İF Komutu
- if komut bloğu oluşturulur.
- if bloğu içine yazılan koşul ifadesi doğru ise, blok içindeki komut veya komutlar çalıştırılır.
- Koşul yanlış ise if bloğu çalıştırılmaz ve bir sonraki satır kodlar sırayla okunur.

```

if (koşul){         // "Eğer belirttiğim koşul doğru ise komutu yerine getir" demektir
      komut;
      }

```

## İF - ELSE Komutu
- Else komutu if bloğu içindeki koşul sağlanmadığında çalışır.
- if komut bloğu ve ardından da else komut bloğu oluşturulur.
- if bloğunda yazılan koşul ifadesi doğru ise, blok içindeki komut veya komutlar çalıştırılır.
- Yanlış ise if bloğu çalıştırılmaz, else bloğuna gelinerek buradaki komut veya komutlar çalıştırılır.

```

if (koşul){        // "Eğer koşul ifadesi doğru ise komut1, değilse komut2'yi çalıştır" demektir.
      komut1;
      }
else{
     komut2;
    }

```

## İF - ELSE İF - ELSE Komutu (İç İçe İf Komutları)
- if ve else arasına yazılır.
- Birden fazla koşul ifadesini kullanmamıza yarar.

```
if (koşul){        // "Eğer koşul ifadesi doğru ise komut1 çalıştır, değilse else if'e git" demektir.
      komut1;
      }
      
else if(koşul2){          // "Eğer koşul2 doğruyda çalıştır, değilse else git" demektir.
         komut2;
      }
      
else {
     komut3;
     }


```








