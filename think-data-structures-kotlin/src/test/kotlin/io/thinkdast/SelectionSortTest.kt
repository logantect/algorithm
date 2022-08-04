package io.thinkdast

import org.assertj.core.api.Assertions.assertThat
import org.junit.jupiter.api.Test

internal class SelectionSortTest {

    @Test
    fun selectionSort() {
        val array = arrayOf(5, 1, 3, 4, 2)
        SelectionSort.selectionSort(array)
        assertThat(array contentEquals arrayOf(1, 2, 3, 4, 5)).isTrue
    }
}