cmake_minimum_required(VERSION 3.25)
project(untitled LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(untitled
        main.cpp            # <-- use the real source file, not cmake-build-debug/main.cpp
        untitled.cpp
               # (rename from untilted.h if that was a typo)
        variable_and_datatypes.cpp

        TypeCasting.cpp

        Input.cpp

        Operators.cpp

        Sum_Of_Two_Numbers_Using_Input.cpp

        If_else.cpp

        If_elseIf_else.cpp

        Ternary_operator.cpp

        While_Loop.cpp

        For_loop.cpp

        do_while_loop.cpp

        Checking_prime_numbers.cpp

        Nested_loop.cpp

        Sum_of_all_numbers_divisible_by_3.cpp

        Factorial_of_a_number.cpp

        Pattern.cpp

        Functions.cpp

        binary_number_system.cpp

        Bitwise_operator.cpp

        ARRAY.cpp

        SMALLEST_AND_LARGEST_ELEMENT_OF_ARRAY.cpp

        LINEAR_SEARCH.cpp

        REVERSE_ARRAY.cpp

        SUM_AND_PRODUCT_OF_ALL_NUMBERS_IN_AN_ARRAY.cpp

        SWAP_THE_MAX_AND_MIN_NUMBER_OF_AN_ARRAY.cpp

        VECTOR.cpp

        SINGLE_NUMBER_PROBLEM.cpp

        SUBARRAY.cpp

        "MAXIMUM_SUBARRAY_SUM(KADANE'S_ALGORITHM).cpp"

        PAIR_SUM.cpp

        MAJORITY_ELEMENT.cpp

        BINARY_SEARCH.cpp

        TOWER_OF_HANOI.cpp

        PRACTICE.cpp

        mid_term.cpp

        revision.cpp

        class_and_object.cpp

        Constructor.cpp
        INHERITANCE.cpp
        INHERITANCE.h
        Friend_Function.cpp
        Friend_Function.h
        Run_Time_Polymorphism.cpp
        Run_Time_Polymorphism.h
        TEST.cpp
        TEST.h
        INSERTION_ARRAY.cpp
        INSERTION_ARRAY.h
        DELETION_ARRAY.cpp
        DELETION_ARRAY.h
        RECURSION.cpp
        RECURSION.h
        Selection_Sort.cpp
        Selection_Sort.h
        Bubble_Sort.cpp
        Bubble_Sort.h
        Insertion_Sort.cpp
        Insertion_Sort.h
        codathon.cpp
        codathon.h
        Binary_Tree.cpp
        Binary_Tree.h
        Binary_Search_Tree.cpp
        Binary_Search_Tree.h
        Heap.cpp
        HEAP.h
        Hashing.cpp
        Hashing.h
        Binary_Exponentiation.cpp
        Binary_Exponentiation.h
        Buy_And_Sell_Stock.cpp
        Buy_And_Sell_Stock.h
        Class.cpp
        Class.h
        Container_with_Most_Water.cpp
        Container_with_Most_Water.h
        Product_of_Array_Except_Itself.cpp
        Product_of_Array_Except_Itself.h
        second_lab_of_daa.cpp
        second_lab_of_daa.h
        POINTER.cpp
        POINTER.h
        Search_in_a_Rotated_Sorted_Array.cpp
        Search_in_a_Rotated_Sorted_Array.h
        Peak_Index_in_a_Mountain_Array.cpp
        Peak_Index_in_a_Mountain_Array.h
        Single_Element_in_Sorted_Array.cpp
        Single_Element_in_Sorted_Array.h
        Trinoic_Problem.cpp
        Trinoic_Problem.h
        Book_Allocation_Problem.cpp
        Book_Allocation_Problem.h
        Painters_Partition.cpp
        Painters_Partition.h
        Capacity_To_Ship_Packages_Within_D_Days.cpp
        Capacity_To_Ship_Packages_Within_D_Days.h
        Minimum_Removals_To_Balance_Array.cpp
        Minimum_Removals_To_Balance_Array.h
        Maximum_Running_Time_Of_N_Computers.cpp
        Maximum_Running_Time_Of_N_Computers.h
        Longest_Balanced_Subarray_I.cpp
        Longest_Balanced_Subarray_I.h
        Koko_eating_Bananas.cpp
        Koko_eating_Bananas.h
        Smallest_Divisor_Given_A_Threshold.cpp
        Smallest_Divisor_Given_A_Threshold.h
        Magnetic_Force_Between_Two_Balls.cpp
        Magnetic_Force_Between_Two_Balls.h

)
