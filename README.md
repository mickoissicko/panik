![](res/naught_panic.png)

<p align="center">
  A cool program that closes a certain process, window, or application (manually set) whenever a certain keystroke is detected, or an array of keys are pressed in a specific order. (I know whatcha doin... 😏)
</p>

# Shoddy code?
Yes. Very shoddy; trash code. I wrote this program months ago. I'm reviving it just now. And no, I'm not going to fix hundreds of lines of code. No, no.

It pains me as well.

# Instructions (POSIX)
Download and run the binary with superuser privileges. Here's how:

`$ sudo ./panik`

Enter the event number. You can get it by:

`$ sudo pacman -Sy evtest`
`$ sudo evtest`

Find your keyboard, and enter that in.

Then, it asks for a Keycode. Refer to `KEYCODES.txt` or scroll down for the list.

After, enter in a process name, e.g. `plasma-systemmonitor` or `firefox.bin`.

# Common POSIX Key-codes list
- **Key code: 1**      `^[`
- **Key code: 2**      `1`
- **Key code: 3**      `2`
- **Key code: 4**      `3`
- **Key code: 5**      `4`
- **Key code: 6**      `5`
- **Key code: 7**      `6`
- **Key code: 8**      `7`
- **Key code: 9**      `8`
- **Key code: 10**     `9`
- **Key code: 11**     `0`
- **Key code: 12**     `-`
- **Key code: 13**     `=`
- **Key code: 14**     `(Space)`
- **Key code: 15**     `(Tab)`
- **Key code: 16**     `Q`
- **Key code: 17**     `W`
- **Key code: 18**     `E`
- **Key code: 19**     `R`
- **Key code: 20**     `T`
- **Key code: 21**     `Y`
- **Key code: 22**     `U`
- **Key code: 23**     `I`
- **Key code: 24**     `O`
- **Key code: 25**     `P`
- **Key code: 26**     `[`
- **Key code: 27**     `]`
- **Key code: 28**     `(Enter)`
- **Key code: 29**     `(Left Ctrl)`
- **Key code: 30**     `A`
- **Key code: 31**     `S`
- **Key code: 32**     `D`
- **Key code: 33**     `F`
- **Key code: 34**     `G`
- **Key code: 35**     `H`
- **Key code: 36**     `J`
- **Key code: 37**     `K`
- **Key code: 38**     `L`
- **Key code: 39**     `;`
- **Key code: 40**     `'`
- **Key code: 42**     `(Left Shift)`
- **Key code: 43**     `\`
- **Key code: 44**     `Z`
- **Key code: 45**     `X`
- **Key code: 46**     `C`
- **Key code: 47**     `V`
- **Key code: 48**     `B`
- **Key code: 49**     `N`
- **Key code: 50**     `M`
- **Key code: 51**     `,`
- **Key code: 52**     `.`
- **Key code: 53**     `/`
- **Key code: 54**     `(Right Shift)`
- **Key code: 56**     `(Left Alt)`
- **Key code: 57**     `(Space)`
- **Key code: 58**     `(Caps Lock)`
- **Key code: 59**     `^[OP`
- **Key code: 60**     `^[OQ`
- **Key code: 61**     `^[OR`
- **Key code: 62**     `^[OS`
- **Key code: 63**     `^[[15~`
- **Key code: 64**     `^[[17~`
- **Key code: 65**     `^[[18~`
- **Key code: 66**     `^[[19~`
- **Key code: 67**     `^[[20~`
- **Key code: 68**     `^[[21~`
- **Key code: 69**     `^[[B`
- **Key code: 70**     `^[[57361u`
- **Key code: 71**     `^[[H`
- **Key code: 72**     `^[[A`
- **Key code: 73**     `^[[5~`
- **Key code: 74**     `-`
- **Key code: 75**     `^[[D`
- **Key code: 76**     `^[[E`
- **Key code: 77**     `^[[C`
- **Key code: 78**     `+`
- **Key code: 79**     `^[[F`
- **Key code: 80**     `^[[B`
- **Key code: 81**     `^[[6~`
- **Key code: 82**     `^[[2~`
- **Key code: 83**     `^[[3~`
- **Key code: 87**     `^[[23~`
- **Key code: 88**     `^[[24~`
- **Key code: 96**     `(Right Alt)`
- **Key code: 97**     `(End)`
- **Key code: 98**     `/`
- **Key code: 99**     `^[[57361u`
- **Key code: 100**    `(Right Ctrl)`
- **Key code: 105**    `^[[D`
- **Key code: 106**    `^[[C`
- **Key code: 108**    `^[[B`
- **Key code: 109**    `^[[6~`
- **Key code: 110**    `^[[2~`
- **Key code: 111**    `^[[3~`
- **Key code: 125**    `(Right Windows key)`
- **Key code: 126**    `(Pause)`
- **Key code: 127**    `^[[29~`

