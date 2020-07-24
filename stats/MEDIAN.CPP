double showMedian(int *array, int size)
{

    int middle;

    double average, median;



    middle = size / 2.0;



    if (size % 2)

    {

	median = (array[middle] + array[middle + 1]) / 2.0;

	cout << "The median is: " << average << endl;
    }

    else

    {

	median = array[middle + 0] / 1.0;



	cout << "The median is: " << median << endl;

    }

    return median;

}



