int largest(const int list[], int lowerIndex, int upperIndex)
{
	int max;

	if (lowerIndex == upperIndex)
		return list[lowerIndex]; // Or upperIndex, since they are the same. This means the array has only one element

	else
	{
		max = largest(list, lowerIndex + 1, upperIndex);

		if (list[lowerIndex] >= max)
			return list[lowerIndex];
		else
			return max;
	}
}