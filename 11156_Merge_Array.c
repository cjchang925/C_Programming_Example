void mergeArray(int *arr1, int *arr2, int *result) {
  int firstIndex = 0;
  int secondIndex = 0;
  int resultIndex = 0;
  while (firstIndex < 10 || secondIndex < 10) {
    // Finished going through one of the two arrays.
    if (firstIndex == 10) {
      result[resultIndex] = arr2[secondIndex];
      resultIndex++;
      secondIndex++;
      continue;
    }
    if (secondIndex == 10) {
      result[resultIndex] = arr1[firstIndex];
      resultIndex++;
      firstIndex++;
      continue;
    }

    // Both two arrays have not been finished traversing.
    if (arr1[firstIndex] > arr2[secondIndex]) {
      result[resultIndex] = arr2[secondIndex];
      resultIndex++;
      secondIndex++;
    } else {
      result[resultIndex] = arr1[firstIndex];
      resultIndex++;
      firstIndex++;
    }
  }
  return;
}