#include <iostream>
#include <map>
using namespace std;
 
/*

4) Bir program yazınız (Dosya ismi: 4.c veya 4.cpp). 3 adet argüman kabul eden bir fonksiyon
yaratınız. Argüman tipleri integer (int) olmalı. Fonksiyon içinde 500 değerine en yakın olan
argümanı ekrana bastırınız. Fonksiyonu main içinden birkaç örnek seti ile çağırınız.

*/

//Bu problem için iki farklı yöntem izledim. Birinci yöntem: findNearestNum() fonksiyonu.
int *insertionSort(int *arr, int n)
{
    int i, key, j;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }

    return arr;
}

void findNearestNum(int a, int b, int c)
{

    //İlk olarak herbirinin 500 ile arasındaki farkı bulmak istedim.
    int a_dif = abs(500 - a);
    int b_dif = abs(500 - b);  
    int c_dif = abs(500 - c);

    //Ardından herbir sayının 500 ile farkını bir arada tutan bir map yaratalım.
    map<int, int> numbersDis;
    numbersDis.insert({a, a_dif});
    numbersDis.insert({b, b_dif});
    numbersDis.insert({c, c_dif});

    //Herbir sayının farkını bir listeye atamak istiyorum. Böylece kolay bir şekilde sıralama yapabilirim. 
    int numbers[3];
    int *nearestNum;
    int i = 0;
    
    for(auto items: numbersDis){
        numbers[i] = items.second;
        i++;
    }

    //Farklarını içeren listeyi küçükten büyüğe doğru sıralamak istiyorum. Böylece en küçük sayıya kolay bir şekilde ulaşabilirim.
    nearestNum = insertionSort(numbers, 3);

    //En küçük mesafeye denk gelen sayıya map'te value değerini kullanarak key değerine ulaşmak istiyorum. 
    for (auto it : numbersDis) {
        if (it.second == nearestNum[0]) {
            cout << "500'e en yakin deger: " << it.first << " olarak bulunur." << endl;
        }
    }
}

//Bir önceki yöntem biraz uzun versiyonuydu şimdi ikinci yöntem olan: findNearest_2() metoduna bakalım.
void findNearest_2(int a, int b, int c)
{
   
   //Tüm değerleri bir array içerisine attım. 
    int num[3] = {a, b, c};

    //Başlangıç olarak en yakın değeri array'in birinci elemanı olarak belirledim. Ve en yakın mesafeyi yine bu değerin 500'e olan uzaklığı olarak belirledim.
    int nearestNum =num[0];
    int nearestDist = abs(500 - a);

    //Ardından arraydeki diğer elemananları, başlangıç değerleriyle karşılaştırarak 500'e en yakın değeri bulma işlemini kolay bir şekilde gerçekleştirdim.
    for(int i=1; i<3; i++){
        if(abs(500 - num[i]) < nearestDist){
            nearestNum = num[i];
            nearestDist = abs(500 - num[i]);
        }
    }

    cout << "500'e en yakin deger: " << nearestNum << " olarak bulunur." << endl;
}

int main()
{

    //Birinci yöntem örnekleri: 
    findNearestNum(400, 450, 490);
    findNearestNum(499, 350, 489);
    findNearestNum(8, 987, 560);
    findNearestNum(100, 678, 510);
    findNearestNum(349, 4, 789);
    findNearestNum(234, 501, 500);

    cout << "*********" << endl;
    
    //İkinci Yöntem Örnekleri: 
    findNearest_2(400, 450, 490);
    findNearest_2(499, 350, 489);
    findNearest_2(8, 987, 560);
    findNearest_2(100, 678, 510);
    findNearest_2(349, 4, 789);
    findNearest_2(234, 501, 500);
}

//Değerlendirme: Bu durumda, ikinci yöntem seçmek zaman kullanımı açısından daha mantıklı olacaktır. Ancak birinci örnekte farklı veri yapıları kullanımını göstermiş oldum.
