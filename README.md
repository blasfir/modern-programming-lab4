# Чи є в мові C++ концепції value types, reference types та garbage collector?

## Value Types (Типи значень)

    У C++ до типів значень належать:  
        *Примітивні типи: int, float, double, char.  
        *Користувацькі типи: структури (struct) та класи, якщо вони передаються без використання вказівників чи посилань.

## Reference Types (Типи посилань)

    У C++ типи посилань представлені:
        *Посиланнями (&): Постійними посиланнями на об'єкт, які не можуть бути змінені після ініціалізації.
        *Вказівниками (*): Гнучкими об'єктами, які можуть змінювати, на що саме вони вказують.       

## Garbage Collector (Збирач сміття)

    C++ не має вбудованого garbage collector. Це означає, що програміст сам відповідає за виділення та звільнення пам’яті.

