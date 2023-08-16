//Самый часто встречающейся элемент :

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = { 1,1,1,1,1,1,11,1,1,1,1,2,2,2,3,3,3,3,4,4,4,4,4,4,5,5,5,5,5,5,5,5 };
    std::vector<int> temp(vec.size(), 0);// Вектор для хранения счетчиков

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != -1)
        {
            for (int j = i + 1; j < vec.size(); j++)
            {
                if (vec[j] == vec[i])
                {
                    vec[j] = -1;
                    temp[i] += 1;
                }
            }
        }
    }

    int max_ind = 0;

    for (int i = 1; i < temp.size(); i++)
    {
        if (temp[i] > temp[max_ind])
        {
            max_ind = i;
        }
    }

    std::cout << "Самый часто встречающейся элемент в массиве " << vec[max_ind];

    return 0;
}



 