#include<vector>
#include <random>

int partitionVector(std::vector<int>* A_ptr, int left, int right, int pivotIndex) {
    std::vector<int>& A = *A_ptr;
    std::swap(A[pivotIndex], A[right]);
    int _left=left, _right=right;
    while (_left < _right){
        if (A[_left] < A[right])
            std::swap(A[_left], A[--_right]);
        else
            ++_left;
    }
    std::swap(A[_left], A[right]);
    return _left;
}

int kthLargest(std::vector<int>& A, int k){
    int left = 0, right = A.size()-1;
    std::random_device rd;
    std::mt19937 mt(rd());
    while (left < right){
        std::uniform_real_distribution<double> dist(left, right+1);
        int r = dist(mt);
        if (int idx = partitionVector(&A, left, right, r); idx == k-1){
            return A[k-1];
        }
        else if (idx < k-1){
            left = idx;
        }
        else
            right = idx;
    }
}
