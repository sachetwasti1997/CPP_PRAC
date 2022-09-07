cmake_minimum_required(VERSION 3.23)
project(DSA_CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(backtracking)
include_directories(priority_queue)
include_directories(sliding_window)
include_directories(trees)

add_executable(DSA_CPP
        backtracking/fair_distribution_chocolates.cpp
        backtracking/lexographically_smallest_from_pattern.cpp
        priority_queue/meeting_room.cpp
        priority_queue/meeting_room_2.cpp
        sliding_window/fruits_basket.cpp
        trees/bin_tree_tilt.cpp
        trees/cousins_bt.cpp
        trees/evaluate_boolean.cpp
        trees/find_node_in_clone.cpp
        trees/find_target.cpp
        trees/get_min_diff.cpp
        trees/inorder_succressor_II.cpp
        trees/lonely_nodes.cpp
        trees/max_depth_nary_tree.cpp
        trees/nary_tree_level_order.cpp
        trees/post_order_nary.cpp
        trees/preorder_traversal_nary.cpp
        trees/prune_binary_tree.cpp
        trees/range_sum_BST.cpp
        trees/second_minimum.cpp
        trees/string_from_bst.cpp
        trees/sum_root_leaf.cpp
        trees/time_binary_tree_burn.cpp
        trees/univalued_binary_tree.cpp
        trees/verify_preorder.cpp
        trees/vertical_order_traversal.cpp)
