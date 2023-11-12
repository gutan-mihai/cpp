int nValue1 = 5; // копирующая инициализация
int nValue2(5); // прямая инициализация
int nValue3{5}; // uniform-инициализация (C++11)

// Прямая инициализация лучше работает с одними типами данных, копирующая инициализация — с другими.

// uniform-инициализация
// Прямая или копирующая инициализация работают не со всеми типами данных (например, вы не сможете использовать эти
// способы для инициализации списка значений).

// В попытке обеспечить единый механизм инициализации, который будет работать со всеми типами данных,
// в C++11 добавили новый способ инициализации, который называется uniform-инициализация:

int value1{5};

// Инициализация переменной с пустыми фигурными скобками указывает на инициализацию по умолчанию
// (переменной присваивается 0):

int value2{}; // инициализация переменной по умолчанию значением 0 (ноль)

// В uniform-инициализации есть еще одно дополнительное преимущество:
// вы не сможете присвоить переменной значение, которое не поддерживает её тип данных —
// компилятор выдаст предупреждение или сообщение об ошибке. Например:

int value3{4.5}; // ошибка: целочисленная переменная не может содержать нецелочисленные значения

// Правило: Используйте uniform-инициализацию.
// Правило: Объявляйте переменные как можно ближе к их первому использованию.

// Оператор sizeof — это унарный оператор, который вычисляет и возвращает размер определенной переменной
// или определенного типа данных в байтах. Вы можете скомпилировать и запустить следующую программу,
// чтобы выяснить, сколько занимают разные типы данных на вашем компьютере:

std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl;  
std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl;    
std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl;
std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;

// Целочисленные типы фиксированного размера
// std::int8_t
// std::uint8_t
// std::int16_t
// std::uint16_t
// std::int32_t
// std::uint32_t
// std::int64_t
// std::uint64_t
std::int16_t value4(5);

// Правило: Избегайте использования std::int8_t и std::uint8_t.
// Если вы используете эти типы, то будьте внимательны,
// т.к в некоторых случаях они могут быть обработаны как тип char.
std::int8_t myint = 65;
std::cout << myint << std::endl; // будет A вместо 65

// В языке C++ буква е /Е означает, что число 10 нужно возвести в степень, которая следует за этой буквой.
// Например, 1.2 × 104 эквивалентно 1.2e4, значение 5.9736 × 1024 еще можно записать как 5.9736e24.

// Для чисел меньше единицы экспонент может быть отрицательным.
// Например, 5e-2 эквивалентно 5 * 10-2, что, в свою очередь, означает 5 / 102 или 0.05.
// Масса электрона равна 9.1093822e-31 кг.

double d1(5000.0);
double d2(5e3); // другой способ присвоить значение 5000

double d3(0.05);
double d4(5e-2); // другой способ присвоить значение 0.05

// Исходное число: 42030
// Перемещаем разделительную точку на 4 цифры влево: 4.2030e4
// Слева (в целой части) нет нулей: 4.2030e4
// Отбрасываем конечный нуль в дробной части: 4.203e4 (4 значащие цифры)

// Исходное число: 0.0078900
// Перемещаем разделительную точку на 3 цифры вправо: 0007.8900e-3
// Отбрасываем нули слева: 7.8900e-3
// Не отбрасываем нули справа (исходное число является дробным): 7.8900e-3 (5 значащих цифр)

// Исходное число: 600.410
// Перемещаем разделительную точку на 2 цифры влево: 6.00410e2
// Слева нет нулей: 6.00410e2
// Нули справа оставляем: 6.00410e2 (6 значащих цифр)

// Самое главное, что нужно запомнить — это то, что цифры в мантиссе (часть перед e) называются значащими цифрами.
// Количество значащих цифр определяет точность самого значения. Чем больше цифр в мантиссе, тем точнее значение.

double zero = 0.0;
double posinf = 5.0 / zero; // положительная бесконечность 
std::cout << posinf << "\n"; // inf

double neginf = -5.0 / zero; // отрицательная бесконечность 
std::cout << neginf << "\n"; // -inf

double nan = zero / zero; // не число (математически некорректно)
std::cout << nan << "\n"; // nan