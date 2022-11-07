class MaxHeap:

    @staticmethod
    def _swap(_list, idx1, idx2):
        _list[idx1], _list[idx2] = _list[idx2], _list[idx1]

    @staticmethod
    def _getParent(idx):
        return ((idx+1)//2) - 1

    @staticmethod
    def _hasParent(idx):
        return idx > 0

    @staticmethod
    def _getLeft(idx):
        return 2*idx + 1

    @staticmethod
    def _getRight(idx):
        return 2*idx + 2

    @staticmethod
    def _getValue(_list, idx):
        return _list[idx] if idx < len(_list) else -float("inf")

    @staticmethod
    def _deleteLast(_list):
        if len(_list) > 0:
            return _list.pop()
        return None

    @staticmethod
    def _getChildren(_list, idx):
        pass

    @staticmethod
    def _heapifyUp(_list, idx):
        while MaxHeap._hasParent(idx) and MaxHeap._getValue(_list, idx) > MaxHeap._getValue(_list, MaxHeap._getParent(idx)):
            MaxHeap._swap(_list, idx, MaxHeap._getParent(idx))
            idx = MaxHeap._getParent(idx)

    @staticmethod
    def _heapifyDown(_list, idx):
        while MaxHeap._getValue(_list, idx) <= MaxHeap._getValue(_list, MaxHeap._getLeft(idx)) or MaxHeap._getValue(_list, idx) <= MaxHeap._getValue(_list, MaxHeap._getRight(idx)):
            if MaxHeap._getValue(_list, MaxHeap._getLeft(idx)) > MaxHeap._getValue(_list, MaxHeap._getRight(idx)):
                MaxHeap._swap(_list, idx, MaxHeap._getLeft(idx))
                idx = MaxHeap._getLeft(idx)
            else:
                MaxHeap._swap(_list, idx, MaxHeap._getRight(idx))
                idx = MaxHeap._getRight(idx)

    @staticmethod
    def push(_list, item):
        _list.append(item)
        MaxHeap._heapifyUp(_list, len(_list)-1)

    @staticmethod
    def pop(_list):
        val = MaxHeap._getValue(_list, 0)
        MaxHeap._swap(_list, 0, len(_list)-1)
        MaxHeap._deleteLast(_list)
        MaxHeap._heapifyDown(_list, 0)
        return val

    @staticmethod
    def heapify(_list):
        heap = []
        for item in _list:
            MaxHeap.push(heap, item)
        return heap

    @staticmethod
    def getTopN(_list, n):
        heap = MaxHeap.heapify(_list)
        selected = []
        for _ in range(n):
            selected.append(MaxHeap.pop(heap))
        return selected
