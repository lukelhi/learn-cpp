int main()
{

    /*
    数组声明
    1，存储类型
    2，数组名称
    3，元素个数
    */
    float temp;
    float temp_array[3];

    temp_array[0] = 1;
    temp_array[1] = 2;
    temp_array[2] = 3;
    long long_size = sizeof(long);

    float temp_array1[3] = {4, 5, 6};
    float temp_array2[3]{4, 5, 6};

    temp_array[3] = 4;

    // float f = temp_array[3];

    int size_of_temp = sizeof(temp);
    int size_of_temp_array = sizeof(temp_array);
}