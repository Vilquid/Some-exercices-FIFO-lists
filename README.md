# Some-exercices-FIFO-lists

## Message recorder (en)

Memos (text messages) are recorded in the form of a message FIFO queue.

It is a CLI program that allows the following actions:
- Exit the application
- Record a memo
- Read a memo
- Save the memo queue
- Load memo queue

A Tfile manage the list of messages. Each time a memo is recorded, it is added to the Tfile according to the FIFO principle. Each time a memo is read, it is deleted from the Tfile FIFO queue.

Example of implementation:
- Telts contain a character string (256 characters).
- The fgets function is used to read a message to the console (read with spaces until the carriage return).
- The Tfile contains an additional field containing the number of messages.
- A memo is read with destruction or without destruction.
- You can ask to read all the messages in the queue (without destruction).

## Enregistreur de messages (fr)

L’enregistrement de mémos (messages textes) se fait sous la forme d’une file FIFO de messages.

Il s’agit d'un programme en CLI qui permet les actions suivantes :
- Quitter l’application
- Enregistrer un mémo
- Lire un mémo
- Sauvegarder la file des mémos
- Charger la file des mémos

Une Tfile gère la liste des messages. Chaque fois qu’on enregistre un mémo, il est ajouté dans la Tfile suivant le principe FIFO. Chaque fois qu’on lit un mémo, il est supprimé de la file Tfile FIFO.

Exemple de mise en œuvre :
- Les Telts conteniennent une chaine de caractères (256 caractères).
- La fonction fgets est utilisé pour lire un message à la console (lecture avec espaces jusqu’au retour chariot).
- La Tfile contient un champ supplémentaire contenant le nombre de messages.
- La lecture d’un mémo se fait avec destruction ou sans destruction.
- On peut demander de lire l’ensemble des messages de la file (sans destruction).

## Registratore messaggi (it)

I memo (messaggi di testo) vengono registrati sotto forma di una coda FIFO dei messaggi.

È un programma CLI che consente le seguenti azioni:
- Uscire dall'applicazione
- Registra un promemoria
- Leggi un promemoria
- Salva la coda dei promemoria
- Carica la coda dei promemoria

Un Tfile gestisce l'elenco dei messaggi. Ogni volta che viene registrato un promemoria, questo viene aggiunto al Tfile secondo il principio FIFO. Ogni volta che viene letto un appunto, questo viene cancellato dalla coda FIFO di Tfile.

Esempio di implementazione:
- I Telt contengono una stringa di caratteri (256 caratteri).
- La funzione fgets serve per leggere un messaggio alla console (letto con spazi fino al ritorno a capo).
- Il Tfile contiene un campo aggiuntivo contenente il numero di messaggi.
- Un memo viene letto con distruzione o senza distruzione.
- Puoi chiedere di leggere tutti i messaggi in coda (senza distruzione).

## Grabador de mensajes (es)

Los memos (mensajes de texto) se registran en forma de una cola FIFO de mensajes.

Es un programa CLI que permite las siguientes acciones:
- Salir de la aplicación
- Grabar una nota
- Leer una nota
- Guardar la cola de notas
- Cargar cola de notas

Un Tfile gestiona la lista de mensajes. Cada vez que se graba un memo, se añade al Tfile según el principio FIFO. Cada vez que se lee una nota, se elimina de la cola FIFO de Tfile.

Ejemplo de implementación:
- Telts contienen una cadena de caracteres (256 caracteres).
- La función fgets se usa para leer un mensaje a la consola (leer con espacios hasta el retorno de carro).
- El Tfile contiene un campo adicional que contiene el número de mensajes.
- Se lee un memorándum con destrucción o sin destrucción.
- Puede solicitar leer todos los mensajes en la cola (sin destrucción).

## Регистратор сообщений (ru)

Заметки (текстовые сообщения) записываются в виде очереди сообщений FIFO.

Это программа CLI, которая позволяет выполнять следующие действия:
- Выйти из приложения
- Запишите памятку
- Прочитать памятку
- Сохранить очередь заметок
- Загрузить очередь заметок

Tfile управляет списком сообщений. Каждый раз, когда заметка записывается, она добавляется в T-файл по принципу FIFO. Каждый раз, когда заметка читается, она удаляется из очереди FIFO Tfile.

Пример реализации:
- Телты содержат строку символов (256 символов).
- Функция fgets используется для чтения сообщения в консоль (чтение с пробелами до возврата каретки).
- Tfile содержит дополнительное поле, содержащее количество сообщений.
- Памятка читается с уничтожением или без уничтожения.
- Можно попросить прочитать все сообщения в очереди (без уничтожения).

## เครื่องบันทึกข้อความ   (thai)

บันทึกช่วยจำ (ข้อความ) จะถูกบันทึกในรูปแบบของข้อความคิว FIFO

เป็นโปรแกรม CLI ที่อนุญาตให้ดำเนินการดังต่อไปนี้:
- ออกจากแอปพลิเคชัน
- บันทึกบันทึก
- อ่านบันทึก
- บันทึกคิวบันทึกช่วยจำ
- โหลดคิวบันทึกช่วยจำ

Tfile จัดการรายการข้อความ ทุกครั้งที่บันทึกบันทึก จะถูกเพิ่มไปยัง Tfile ตามหลักการ FIFO ทุกครั้งที่อ่านบันทึก บันทึกจะถูกลบออกจากคิว Tfile FIFO

ตัวอย่างการใช้งาน:
- Telts มีสตริงอักขระ (256 อักขระ)
- ฟังก์ชัน fgets ใช้สำหรับอ่านข้อความไปยังคอนโซล (อ่านโดยเว้นวรรคจนกว่าจะขึ้นเครื่อง)
- Tfile มีฟิลด์เพิ่มเติมที่มีจำนวนข้อความ
- บันทึกจะอ่านโดยมีการทำลายหรือไม่ทำลาย
- คุณสามารถขออ่านข้อความทั้งหมดในคิวได้ (โดยไม่ทำลาย)
