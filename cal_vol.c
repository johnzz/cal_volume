int cal_vol(int *test_case) 
{
	int len = strlen(test_case);
	int index_l = 0;
	int index_r = len - 1;
	int max_l = test_case[index_l];
	int max_r = test_case[index_r];
	int volume = 0;

	while (index_l < index_r) {
		if (max_l < max_r) {
			index_l++;
			if (test_case[index_l] >= max_l) {
				max_l = test_case[index_l];
			} else {
				volume = volume + (max_l - test_case[index_l]);
			}
		} else {
			index_r--;
			if (test_case[index_r] >= max_r) {
				max_r = test_case[index_r];
			} else {
				volume = volume + (max_r - test_case[index_r]);
			}
		}
	}
}

void main (void)
{
	int test_case[11] = [2,5,1,2,3,4,7,7,6];
	int volume;

	volume = cal_vol(test_case);
	printf("%d\n",volume);
}
