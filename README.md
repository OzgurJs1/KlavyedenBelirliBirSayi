# KlavyedenBelirliBirSayi
Bu kod, kullanıcının girdiği sayıları kullanarak bir binary search tree oluşturuyor ve son olarak bu ağacı inorder traversal yöntemiyle ekrana yazdırıyor.

Kodda, bir düğüm yapısı (struct node) tanımlanmıştır. Bu yapı, bir veri alanı (data) ve iki pointer alanı (left, right) içerir. Bu pointer alanları, her bir düğümün sol ve sağ alt ağaçlarını işaret eder.

newNode fonksiyonu, verilen bir değerle birlikte yeni bir düğüm oluşturur ve bu düğümü geri döndürür. insert fonksiyonu, ağaca yeni bir düğüm ekler. Verilen değer, ağaçtaki uygun konuma yerleştirilir. Eğer ağaç boş ise, yeni düğüm ağacın kökü haline getirilir.

printInorder fonksiyonu, inorder traversal yöntemi kullanarak ağacın elemanlarını yazdırır. Inorder traversal, ağacın sol alt ağacındaki düğümleri önce yazdırır, ardından kök düğümü, son olarak da sağ alt ağacındaki düğümleri yazdırır.

main fonksiyonu, kullanıcının girdiği sayıları alır ve her bir sayı için insert fonksiyonunu çağırarak ağaca yeni bir düğüm ekler. Daha sonra printInorder fonksiyonu çağırılarak ağacın elemanları ekrana yazdırılır.
