Лабораторная работа № 7. Численные методы решения систем дифференциальных уравнений.

Выполнил студент группы 426

Тазиев Азат Фаритович

Вариант № 6

Решить методом Тейлора 4-го порядка задачу Коши

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/difur.png)

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/y0.png), ![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/y00.png),![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/x02.png)

с заданной относительной точностью 0,01.

Требуется построение графиков решения y(x), y′(x), а также фазовых траекторий. За своевременное выполнение задания начисляется 6 баллов.

Дополнительные 3 балла будут начислены, если будет найдено точное решение и оно будет сопоставлено (по-строены соответствующие разностные графики) с полученным приближенным решением. Еще 3 балла будут начислены, если решение задачи Коши будет найденно с помощью встроенных функций и оно также будет сопоставлено (построены соответствующие разностные графики) с исходным приближенным решением.

Теоретическая часть

Метод Тейлора 

Формула Тейлора 4-го порядка

Простейшим способом построения приближенного решени в точке xn+1 сетки wN является способ, основанный на разложении решения в ряд Тейлора в предыдущей точке сетки xn по степеням шага h:

y(xn+1) = y'(xn) + h![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/triangle.png)(xn, yn, h)

Берем конечный отрезок ряда и заменяем в нем производные в силу данного нам диффиренциального уравнения

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/y'(x).png)


![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/y''(x).png)


![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/y'''(x).png)

Далее подставляем данные производные в ряд Тейлора 

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/telor.png)

Практическая часть

Функция x2 возвращает значение второй производной.

Функция x3 возвращает значение третьей производной.

Функция x4 возвращает значение четвертой производной.

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/proizv.png)

Функция xx2 возвращает значение второй производной от ряда Тейлора.

Функция xx3 возвращает значение третьей производной от ряда Тейлора. 

Функция xx4 возвращает значение четвертой производной от ряда Тейлора.

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/proizv1.png)

Ряд Тейлора, в него передаем значения производных и считаем сам ряд с шагом h = 0.01 и находим значения y(x),
а также здесь находится производная от ряда Тейлора для нахождения y'(x) ее так же считаем с шагом h = 0.01 и находим значения y'(x);

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/telor1.png)

В данном участке кода написан вывод в файл для построения графиков y(x), y'(x), а так же фазовых траекторий с помощью Python

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/vivod.png)

В файле lab7.py осущетсвляется построение графиков

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/vivod2.png)

График решений y(x)

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/Figure_1.png)

График решений y'(x)

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/Figure_2.png)

Фазовые траектории

![Image alt](https://github.com/AzatTaziev426/lab7/blob/master/Figure_3.png)
