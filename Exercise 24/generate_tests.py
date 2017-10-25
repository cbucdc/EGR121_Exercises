#!/usr/bin/env python3

g = 9.8
c = 3e8


def calculate(m):
    # e, w
    e = m * (c**2)
    w = m * g
    return (e, w)


title_template = """// test m = {m} => e = {e:.{precision}f}, w = {w:.{precision}f}"""

body_template = """bool testPassed() {{
   // Write your test here. Return true if the test passes, and false otherwise.
   // This function exists in the same scope as main. The student's main function
   // will not be executed. This function will be called instead.

   // Optionally use cout to provide feedback to the student.
   double m,e,w;
   m = {m};
   calculate(m,e,w);
   if ((e == {e:.{precision}f} && w == {w:.{precision}f})){{
    cout << \"Success!\" << endl;
    return true;
   }}
   else {{
    cout << \"Test failed.\" << endl;
    cout << m << ' ' << e << ' ' << w << endl;
    cout << \"Should be\" << endl;
    cout << {m} << ' ' << {e:.{precision}f} << ' ' << {w:.{precision}f} << endl;
   }}
   return false;
}}"""

cases = [
    2,
    10,
    42,
    999,
    500,
]


def main():
    for idx, x in enumerate(cases):
        print("// TEST CASE", idx)
        r = calculate(x)
        print(title_template.format(m=x, e=r[0], w=r[1], precision=10))
        print(body_template.format(m=x, e=r[0], w=r[1], precision=10))
        print("#", "=" * 30)
        print()


if __name__ == '__main__':
    main()
