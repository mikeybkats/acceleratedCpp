// =============================================================================
// Chapter 7 Assignment: Using Associative Containers
// Accelerated C++ — Using associative containers (7.1–7.6)
// =============================================================================
//
// GOAL
// Use std::map to count word frequencies and build a simple cross-reference
// of line numbers where each word appears.
//
// REQUIREMENTS
// 1. Read text from std::cin line by line until EOF. For each line:
//      - Split the line into words (reuse or rewrite your split function).
//      - Normalize words: convert to lowercase and strip leading/trailing
//        punctuation (period, comma, question mark, exclamation mark).
//      - Ignore empty tokens after normalization.
// 2. Maintain a std::map<std::string, int> that counts how many times each
//    word appears across the entire input.
// 3. Maintain a std::map<std::string, std::vector<int>> that records which
//    line numbers (starting at 1) each word appeared on.
// 4. After reading all input, print:
//      a) Words in alphabetical order with their counts
//      b) A cross-reference section: for each word (alphabetical), list the
//         line numbers it appeared on
// 5. Print the five most frequent words and their counts. Break ties
//    alphabetically.
//
// BONUS
// - Skip common stop words ("the", "a", "an", "and", "or", "but") using a
//   std::set<std::string> of excluded words.
// - Generate a random sentence by picking the most common word, then the most
//   common word that followed it in the original text (bigram approach).
//
// BUILD & RUN (after adding your code)
//   make build/bin/ch_07_assignment
//   ./build/bin/ch_07_assignment
//
// TIP: Test with a short poem or paragraph pasted into the terminal.
// =============================================================================
