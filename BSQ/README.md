# BSQ (Biggest SQuare) #


### Квадрат самой большой площади на карте

- Цель этого проекта - найти квадрат самой большой площади на карте, избегая препятствий.

- Будет предоставлен файл, содержащий карту. Это должно быть передано в качестве аргумента для вашей программы.

- Первая строка карты содержит информацию о том, как читать карту:

  * количество линий на карте; 
  * «пустой» символ; 
  * символ «препятствие»; 
  * «полный» символ. 

- Карта состоит из «пустых» символов, строк и символов «препятствий».

- Цель программы - заменить «пустые» символы на «полные» символы, чтобы представить максимально возможный квадрат.

- В случае, если существует более одного решения, мы выберем представление квадрата, который находится ближе всего к верхней части карты, а затем квадрата, который расположен наиболее слева.

----------------------------------------------------------------------------------------  

- Определение действительной карты:

  * Все строки должны иметь одинаковую длину.
  * Есть хотя бы одна строка хотя бы из одной рамки.
  * На каждом конце строки есть разрыв строки.
  * Символы на карте могут быть только теми, которые введены в первой строке.
  * В случае неверной карты ваша программа должна отобразить ошибку карты в выводе
  ошибки с последующим переводом строки. Ваша программа перейдет к следующей карте

----------------------------------------------------------------------------------------

- Вот пример того, как это должно работать:

```
	%>cat example_file
	9.ox
	...........................
	....o......................
	............o..............
	...........................
	....o......................
	...............o...........
	...........................
	......o..............o.....
	..o.......o................

	%>./bsq example_file
	.....xxxxxxx...............
	....oxxxxxxx...............
	.....xxxxxxxo..............
	.....xxxxxxx...............
	....oxxxxxxx...............
	.....xxxxxxx...o...........
	.....xxxxxxx...............
	......o..............o.....
	..o.......o................
	%>
```

> Это действительно квадрат. Хотя он может и не выглядеть внешне как квадрат из-за разного растояния между символами и строками.

----------------------------------------------------------------------------------------  

###  Инструкции  ###

- Исполняемый файл должен называться `bsq` и присутствовать в главном каталоге.

- Вы должны уважать нормы написания кода.

- Вы можете использовать только методы, изученные во время `Piscine C`.

- В каталоге отправки должен быть файл автора, содержащий ваши логины:

```
	$>cat auteur
	login_1:login_2
	$>
```

- Ваша программа должна обрабатывать от 1 до n файлов в качестве параметров.

- Если обрабатываются более 1 файла то, результат должен быть отделен друг от друга пустой строкой.

- Когда ваша программа получает более одной карты в качестве аргумента, каждое решение или ошибка должны опровождаться переводом строки.

- Если не будет переданных аргументов, ваша программа должна быть в состоянии читать на стандартный ввод.

- У вас должен быть действующий `Makefile`, который скомпилирует ваш проект.

- Вы можете использовать только следующие функции: `exit`, `open`, `close`, `write`, `read`, `malloc` и `free`.

- Вы можете задавать вопросы на форуме.

----------------------------------------------------------------------------------------

###  Оценивание  ###

- Информация об оценке `BSQ`:

  * Начнем с тестирования функциональных возможностей (из 10 баллов). Ваша программа должна быть функциональной.
  * Если вы получите все эти 10 баллов, мы проверим оптимизацию вашего кода.


- Здесь будут оцениваться две вещи: скорость выполнения (5 баллов) и использование памяти (5 баллов):

  * Эти два аспекта будут проверены, только если первая часть была проверена.
  * Все `BSQ`, прошедшие первую часть этой оценки, будут участвовать в двух тестах по оптимизации.
  * Лучший `BSQ` будет вознагражден всеми точками оптимизации.
  * Другие `BSQ` получат дополнительные очки в зависимости от того, как они ранжируются: чем быстрее выполнение и/или чем меньше используется памяти, тем больше очков она получает; чем медленнее выполнение и / или чем больше используемой памяти, тем меньше очков она получает.
  * Cреди команд в которых вы состоите, только одна сможет получить все 20 баллов. Вы будете оценены в   зависимости от ранга вашего `BSQ` по сравнению с другими `BSQ`.

# Полезные ссылки #

- https://www.youtube.com/watch?v=FO7VXDfS8Gk

- https://www.youtube.com/watch?v=_Lf1looyJMU

- https://www.youtube.com/watch?v=RElcqtFYTm0

- https://www.youtube.com/watch?v=oPrpoVdRLtg

- https://www.youtube.com/watch?v=aYnEO53H4lw

- https://www.youtube.com/watch?v=vI4PE4JdadE

- https://www.youtube.com/watch?v=dAVF2NpC3j4

- https://www.youtube.com/watch?v=gdDm8Bdgb1E

