int getNextGreaterElement(vector<int> &arr, int key) {
    // add your logic here
	std::set<int> myset(arr.begin(), arr.end());
	int low = 0;
	int indx = 0;
    int high = arr.size()-1;//4

    while (low <= high) 
    {
        int mid = (high + low) / 2;//1

        if (arr[mid] > key)
		{
			indx = arr[mid];
            high = mid - 1;
			
		}

        else
            low = mid + 1;
    }

  return indx;
	
}