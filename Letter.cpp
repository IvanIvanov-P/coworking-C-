#include <iostream>
using namespace std;

void simpleError(string message)
{
	cout << "Ошибка! " << message << " Введите     корректные данные!\n";
}

int main(){
  string first_name, friend_name;
  char friend_sex = 0;  
  int age = 0;
  cout << "Пожалуйста, введите  имя адресата:\n";
  cin >> first_name;
  cout << "Дорогой, " << first_name << "!\n"
          << "Как дела? У меня все хорошо. Я скучаю по тебе!\n"
          << "Вчера мы пушили...\n";
  cout << "Введите имя общего знакомого:\n";
  cin >> friend_name;
  cout << "Видел ли ты " << friend_name << " недавно?\n";
  cout << "Если ваш общий знакомый мужчина- нажмите 'm', если женщина - нажмите'f'\n";
  cin >> friend_sex;
  if (friend_sex == 'm')
    cout << "Если ты увидишь " << friend_name << " пожалуйста, попроси его перезвонить мне.\n";
  if (friend_sex == 'f')
   cout << "Если ты увидишь " << friend_name << " пожалуйста, попроси её перезвонить мне.\n";
  cout << "Введите возраст адресата:\n";
  cin >> age;
  if (age <= 0 || age >= 110)
    simpleError("Ты шутишь!");
  else
  cout << "Я слышал ты только что отметил свой День Рождения и тебе исполнилось " << age << " лет.\n";
  if (age < 12)
   cout << "В следующем году тебе исполнится: " << age + 1 << " лет.\n";
  if (age == 18) 
   cout << "В следующем году ты сможешь голосовать!\n";
  if (age > 60)
   cout << "Я надеюсь ты не скучаешь на пенсии\n";
  cout << "Искренне твой, \n\n "
          << "Александр Гусев";
  return 0;
}