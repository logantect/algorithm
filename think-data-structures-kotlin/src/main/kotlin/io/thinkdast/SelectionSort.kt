package io.thinkdast

object SelectionSort {

    private fun swapElements(array: Array<Int>, i: Int, j: Int) {
        val temp: Int = array[i]
        array[i] = array[j]
        array[j] = temp
    }

    private fun indexLowest(array: Array<Int>, start: Int): Int {
        var lowIndex = start
        for (index in start until array.size) {
            if (array[index] < array[lowIndex]) {
                lowIndex = index
            }
        }
        return lowIndex
    }

    fun selectionSort(array: Array<Int>) {
        for (index in array) {
            swapElements(array, index, indexLowest(array, index))
        }
    }
}