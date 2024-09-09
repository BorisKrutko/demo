# Кто быстрее?
В главной велогонке года участвует более тысячи гонщиков. Им предстоит пройти трассу длиной 43872м. Самая сложная и ответственная задача — определение победителя.
Нам известны средние скорости двух фаворитов — Пети и Васи. Помогите выяснить, кто из них пришёл к финишу первым.

## Формат ввода
В первой строке записана средняя скорость Пети.
Во второй — Васи.

## Формат вывода
Имя победителя гонки.

- Примечание
Гарантируется, что победителем стал только один.

## Пример 1
Ввод
```
10
5
```
Вывод
```
Петя
```
## Пример 2
Ввод
```
5
7
```
Вывод
```
Вася
```

# Список победителей
Длина трассы — 43872м, и зрители хотят узнать имя победителя.
Нам известны средние скорости трёх фаворитов – Пети, Васи и Толи. Помогите подвести итоги гонки.

## Формат ввода
В первой строке записана средняя скорость Пети.
Во второй — Васи.
В третьей — Толи.

## Формат вывода
Имена победителей в порядке занятых мест.

## Пример 1
Ввод
```
10
5
7
```
Вывод
```
1. Петя
2. Толя
3. Вася
```
## Пример 2
Ввод
```
5
7
10
```
Вывод
```
1. Толя
2. Вася
3. Петя
```
# Лучшая защита — шифрование
Коля испугался, что Аня подсмотрит все его пароли в блокноте, и решил их зашифровать. Для этого он берёт изначальный пароль — трёхзначное число — и по нему строит новое число по следующим правилам:

находится сумма цифр, стоящих в двух младших разрядах (десятки и единицы);
находится сумма цифр, стоящих в двух старших разрядах (сотни и десятки)
Эти две суммы, записанные друг за другом, в порядке не возрастания, формируют новое число.
Помогите реализовать алгоритм шифрования.

## Формат ввода
Одно трёхзначное число

## Формат вывода
Результат шифрования

## Пример 1
Ввод
```
123
```
Вывод
```
53
```
## Пример 2
Ввод
```
741
```
Вывод
```
115
```

# hard
# Властелин Чисел: Две Башни
Во времена, когда люди верили в великую силу чисел, оказалось, что волшебник Пифуман предал все народы и стал помогать Зерону.
Чтобы посетить башни обоих злодеев одновременно, нам следует разделить магию числа, которое защищало нас в дороге.
Чтобы поделить трёхзначное число, нам нужно составить из него минимально и максимально возможные двухзначные числа.

## Формат ввода
Одно трёхзначное число.

## Формат вывода
Два защитных числа для каждого отряда, записанные через пробел.

## Пример 1
Ввод
```
103
```
Вывод
```
10 31
```
## Пример 2
Ввод
```
787
```
Вывод
```
77 87
```