int firstBadVersion(int n) {
	if (n <= 0) return -1;

	int low = 1, high = n;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (isBadVersion(mid)) high = mid - 1;
		else low = mid + 1;
	}
	return low;
}
