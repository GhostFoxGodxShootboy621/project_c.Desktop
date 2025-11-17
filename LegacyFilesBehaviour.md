- random.c

	Printed “hello” and exited with 1.

- test.c

	Printed “Hello from Clang pretending to be GCC!” and “test successfull”.

- try.c

	Interactive money-input program:
	
		If money ≤ 1400 → printed “Chal hat gareeb, mai terse Rs <diff> zyada hoon.”

		If 1400 < money ≤ 5400 → “I mean it's alright.”

		If money > 5400 → asked if online money included:

			true → “Chal hat jhoote!”

			false → “shut up b*”** and looped back

	Used category logic + nested switch + goto start.
