#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
 * 1. get number of states
 * 2. get dfa transitions
 * 2a. get dfa end states
 * 3. check transitions
 * 4. get example word in language
 * 5. print what happens
 * 6. repeat 4 & 5
 */

struct state {
  int state_num;
  int zero;
  int one;
  bool end_state;
};

bool check_transitions(vector<state> &states) {
  for (auto s : states) {
    if (s.one == -1) {
      cout << "You are missing a one transition from state: " << s.state_num
           << endl;
      return false;
    } else if (s.zero == -1) {
      cout << "You are missing a zero transition from state: " << s.state_num
           << endl;
      return false;
    }
  }
  return true;
}

void add_transition(string a, int b, int c, vector<state> &states) {
  if (a == "0") {
    states[b].zero = c;
  } else if (a == "1") {
    states[b].one = c;
  }
  return;
}

void print_states(vector<state> &states) {
  for (auto s : states) {
    cout << s.state_num << ' ' << s.end_state << ' ' << s.zero << ' ' << s.one
         << endl;
  }
}

void test_word(string word, vector<state> &states) {
  state curr_state = states[0];
  if (word != "epsilon") {
    state tmp;
    for (auto a : word) {
      if (a == '0') {
        tmp = states[curr_state.zero];
        curr_state = tmp;
      } else {
        tmp = states[curr_state.one];
        curr_state = tmp;
      }
    }
  }

  if (curr_state.end_state)
    cout << "Word: " << word << " is accepting.\n";
  else
    cout << "Word: " << word << " is not accepting.\n";

  return;
}

int main() {
  int num_states;
  cout << "Number of states: ";
  cin >> num_states;

  vector<state> states;
  for (int i = 0; i < num_states; i++) {
    states.push_back({i, -1, -1, false});
  }

  cout << "Enter transitions:" << endl
       << "Note that the starting state is 0" << endl
       << "Syntax: <condition> <start> <end>" << endl
       << "e.g. A transition from state 1 to 3 after seeing a \'0\' would be "
          "written as:"
       << "> 0 1 3" << endl
       << "Enter \'end\' or \'q\' to complete transitions." << endl;

  string a;
  int b, c;
  while (true) {
    cout << "> ";
    cin >> a;
    if (a == "end" || a == "q") {
      break;
    } else {
      cin >> b >> c;
      add_transition(a, b, c, states);
    }
  }

  if (!check_transitions(states))
    return 0;

  int end_state, num_end_states;
  cout << "\nEnter number of end states: ";
  cin >> num_end_states;
  if (num_end_states < 1) {
    cout << "You must have at least one accepting state." << endl;
    return 0;
  }
  while (num_end_states--) {
    cin >> end_state;
    states[end_state].end_state = true;
  }

  cout << "\nEnter words:" << endl
       << "Use \'epsilon\' to denote the empty string." << endl
       << "Enter \'end\' or \'q\' to end program." << endl;
  string word;
  while (true) {
    cout << "\n> ";
    cin >> word;
    if (word == "end" || word == "q") {
      return 0;
    } else {
      test_word(word, states);
    }
  }
  return 0;
}
