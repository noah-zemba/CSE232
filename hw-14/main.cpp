#include <iostream>
#include <vector>

// Provide a value, an operator, and a second value.
// SwitchMath should perform the correct operation and return the result.
double SwitchMath(double val1, char op, double val2)
{
  double result;
  
  switch (op) {
  case '+':
    result = val1 + val2;
  case '-':
    result = val1 - val2;
  case '*':
    result = val1 * val2;
  }

  return result;
}


int main()
{
  std::vector<char> ops{'+', '-', '*'};

  for (size_t op_id = 0; op_id <= ops.size(); ++op_id) {
    char op = ops[op_id];
    std::cout << 0.0 << op << 0.0 << " = " << SwitchMath(0.0, op, 0.0) << std::endl;
    std::cout << 1.0 << op << 0.5 << " = " << SwitchMath(1.0, op, 0.5) << std::endl;
    std::cout << 2.0 << op << 2.0 << " = " << SwitchMath(2.0, op, 2.0) << std::endl;
  }

}
