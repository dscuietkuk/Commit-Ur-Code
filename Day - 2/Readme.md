<h1 align="Center">🎮 Tackle with Traps 🎯</h1>
<h4>Question 2</h4>

Deepak is playing a computer game. Now he wants to complete the first level of this game.A level is a rectangular grid of 2 rows and n columns. <br>deepak  controls a character, which starts in cell <strong>(1,1) — at the intersection of the 1-st row and the 1-st column</strong>.deepak’s character can move from one cell to another in one step if the cells are adjacent by side and/or corner.<br> Formally, it is possible to move from cell <strong>(x1,y1) to cell (x2,y2)</strong> in one step if <strong>|x1−x2|≤1 and |y1−y2|≤1</strong>.Obviously, it is prohibited to go outside the grid.There are traps in some cells. If deepak’s character finds himself in such a cell, he dies, and the game ends.To complete a level, deepak’s character should reach cell <strong>(2,n)— at the intersection of row 2 and column n.🎯</strong><br>
Help Deepak determine if it is possible to complete the level.

<br>

<strong>Input</strong>

The first line contains a single integer t <strong>(1≤t≤100)</strong> — the number of test cases. Then the test cases follow. Each test case consists of three lines.The first line contains a single integer n <strong>(3≤n≤100)</strong> — the number of columns.<br>
The next two lines describe the level. The i-th of these lines describes the i-th line of the level — the line consists of the characters '0' and '1'. The character '0' corresponds to a safe cell, the character '1' corresponds to a trap cell🎯.Additional constraint on the input: <strong>cells (1,1) and (2,n) are safe</strong>.<br>

<strong>Output</strong>

For each test case, output YES if it is possible to complete the level, and NO otherwise.<br>


<strong>Example :

Input:<br>
4<br>
3<br>
000<br>
000<br>
4<br>
0011<br>
1100<br>
4<br>
0111<br>
1110<br>
6<br>
010101<br>
101010<br>
<br>
Output:<br>
YES<br>
YES<br>
NO<br>
YES<br>

</strong>
<hr>

Must follow [`Rules`](https://github.com/dscuietkuk/Commit-Ur-Code/#-rules-you-should-follow-%EF%B8%8F-)
<br>
Also Your submissions will not be considered After <strong>11:50 pm 🕛 12-10-2021 </strong>
