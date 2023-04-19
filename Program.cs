using System;

namespace BasicSyntax
{
    
    class Camp
    {
        int places;
        int house;
        public Camp(int house, int places)
        {
            this.house = house;
            this.places = places;
            Console.WriteLine();
        }
    }
    class Camper : Camp
    {
        string name, secondname;
        int ageBirthday;
        public Camper(int house, int places, string name, string secondname , int ageBirthday) : base(house, places)
        {
            this.name = name;
            this.secondname = secondname;
            this.ageBirthday = ageBirthday;

        }
    }
    class Program
    {
        private const int N = 100;

        static void Main()
        {
            int domik1, place1, ageBirthday1;
            string name1, secondname1;
            var camper = List<Camp>();
            Console.WriteLine("Введите количество домов: ");
            domik1 = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < domik1; i++)
            {
                Console.WriteLine("Введите количество мест в доме #", i+1, ": ");
                place1 = Convert.ToInt32(Console.ReadLine());
                for (int j = 0; j < place1; j++)
                {
                    Console.WriteLine("Введите Имя/Фамилию/Год рождения: ");
                    name1 = Console.ReadLine();
                    secondname1 = Console.ReadLine();
                    ageBirthday1 = Convert.ToInt32(Console.ReadLine());
                    
                }
               
            }
            //Camper person1 = new Camper();
           

            Console.ReadLine();
        }

        private static object List<T>()
        {
            throw new NotImplementedException();
        }
    }
}