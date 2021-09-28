## C++ Programlamada Operatörler (Operators in C ++ Programming)
1. Aritmetik Operatörler (Arithmetic Operators)
2. Aritmetik Atama Operatörleri (Arithmetic Assignment Operators)
3. Karşılaştırma Operatörleri (Relational Operators)
4. Mantıksal Operatörler (Logical Operators)
5. Arttırma ve Azaltma Operatörleri
-------
### 1. Aritmetik Operatörler                                              

| Operatörler | Açıklama |                                                
|:-------------:|:-------------:|                                         
| `+`  | Toplama operatörü  |                                            
| `-`  | Çıkarma operatörü  |                                             
| `*`  | Çarpma operatörü |                                              
| `/`  | Bölme operatörü |                                                
| `%`  | Mod,kalan bulma operatörü    |

### Operatörlerin Öncelikleri
| Operatör  | Açıklama | 
|:-------------:|:-------------|
| `()`  | Parantez | 
| `* / %`  | Çarpma, Bölme, Mod    | 
| `+ -`  | Toplama, Çıkarma | 

-------
### 2. Aritmetik Atama Operatörleri

| Operatörler  | Anlamı | Örnek | Açıklaması | Eş Anlamlısı |
|:-------------:|:-------------:|:-----------:|:-----------:|:-----------:|
| `+=` | Toplama ve Ata | a+=b | a ile b'yi topla, a'ya ata | a=a+b |
| `-=` | Çıkar ve Ata | a-=b  | a'dan b'yi çıkar, a'ya ata | a=a-b |
| `*=` | Çarp ve Ata | a*=b | a ile b'yi çarp, a'ya ata | a=a*b |
| `/=` | Böl ve Ata | a/=b | a'yı b'ye böl,  a'ya ata |  a=a/b |
| `%=` | Mod al ve Ata | a%=b | a'yı b'ye böl, kalanı a'ya ata | a=a%b |

-------

### 3. Karşılaştırma Operatörleri
- C++ dilinde 6 tane karşılaştırma operatörü vardır ve bu operatörler döngülerde ve koşul yapılarında kullanacağız. Bir sonraki konuda ayrıntılı anlayacağız.

| Operatörler  | Anlamı | Örnek |
|:------------:|:---------:|:---------:|
| `==` | Eşit mi | `4==5` bize false(0) verir |
| `!=` | Eşit Değil | `4!=5` bize true(1) verir |
| `>` | Büyüktür | `4>5` bize false(0) verir |
| `<` | Küçüktür | `4<5` bize false(0) verir |
| `>=` | Büyük Eşittir | `4>=5` bize false(0) verir |
| `<=` | Küçük Eşittir | `4<=5` bize true(1) verir |

### 4. Mantıksal Operatörler 
- Bir ifadenin doğru mu yanlış mı olduğunu karşılaştırmak için kullanılır. İfade doğru ise 1, yanlış ise 0 döndürür.

Operatörler  | Anlamı |
|:----------:|:-----------:|
|`&&` | Mantıksal VE, Tüm ifadelerin koşulu doğrulaması gerekir |
| `!` | Mantıksal DEĞİL, İfade tersini alır | 
| `II` | Mantıksal VEYA, En az bi ifadenin koşulu doğrulaması gerekir |

### 5. Arttırma ve Azaltma Operatörleri
| Operatörler  | Açıklama | 
|:-------------:|:-------------:|
| `++`  | Arttırma Operatörü  | 
| `--`  | Azaltma Operatörü  | 
- örneğin;
```
1. b=++a;       // önce a'yı 1 artır, sonra b'ye ata 
2. b=a++;       //önce a'yı b'ye ata, sonra a'yı 1 arttır
-------
1. b=--a;        //önce a'yı 1 azalt, sonra b'ye ata
2. b=a--;        //önce a'yı b'ye ata, sonra a'yı 1 azalt

```









