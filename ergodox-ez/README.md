# My Ergodox EZs

This is the current layout of my Ergodox EZs (I have a Shine and an older no-LED version)

# Important Information

## Compiler

1. Use [my fork of qmk](https://github.com/chewxy/qmk_firmware),
2. `git checkout emacsIsAnOSZSA`
3. Compile

My fork of QMK adds emacs as an operating system. Thus you may use `UC_M_EM` to set your layer locale/OS. That way in emacs the APL layer uses `C-x-8 RET <UNICODE CODE POINT>`  instead.

## To Use on Windows

It requires the installation of a program called [WinCompose](http://wincompose.info/).

# How was this generated?

The primary keymap is generated in [Oryx](https://configure.zsa.io). The graphical user interface makes many things easier. The APL layer(s) are left empty.

After it is compiled, I download the keymap, config and rules.mk file  and diff it against the equivalent of this repository. Then the APL layer is manually merged over, as well as any other macro changes.

# APL layer

The APL layer is currently as follows:

```
┌────────┬────┬────┬────┬────┬────┬────┐              ┌────┬────┬────┬────┬────┬────┬────────┐
│    ⌺   │  ⌶ │  ⍫ │  ⍒ │  ⍋ │  ⌽ │    │              │    │  ⍉ │  ⊖ │  ⍟ │  ⍱ │  ⍲ │   !    │
│   ◊    │ ¨  │ ¯  │ <  │ ≤  │ =  │    │              │emacs ≥  │ >  │ ≠  │ ∨  │ ∧  │  ×     │
│        │    │    │    │    │    │    │              │    │    │    │    │    │    │        │
├────────┼────┼────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┼────┼────────┤
│        │    │  ⍹ │  ⍷ │    │  ⍨ │    │              │    │    │    │  ⍸ │  ⍥ │  ⍣ │   ⊣    │
│ TAB    │ ?  │ ⍵  │ ε  │ ⍴  │ ~  │    │              │    │ ↑  │ ↓  │ ⍳  │ ○  │ ⋆  │  ⊢     │
│        │    │    │    │    │    │ del│              │bksp│    │    │    │    │    │        │
├────────┼────┼────┼────┼────┼────┤    │              │    ├────┼────┼────┼────┼────┼────────┤
│        │  ⍶ │    │    │    │  ⍫ │    │              │    │  ⍙ │  ⍤ │    │  ⌷ │  ≢ │        │
│ ALT    │ ⍺  │ ⌈  │ ⌊  │ _  │ ∇  ├────┤              ├────┤ ∆  │ ∘  │ '  │ ⎕  │ ⍕  │ enter  │
│        │    │    │    │    │    │    │              │    │    │    │    │    │    │        │
├────────┼────┼────┼────┼────┼────┤  ≡ │              │  ⌹ ├────┼────┼────┼────┼────┼────────┤
│        │    │    │    │    │    │ ⍎  │              │ ÷  │    │    │    │  ⍠ │  ⍪ │        │
│ SHIFT  │ ⊂  │ ⊃  │ ∩  │ ∪  │ ⊥  │    │              │    │ ⊤  │ |  │ ⍀  │ ⌿  │ ⍝  │        │
│        │    │    │    │    │    │    │              │    │    │    │    │    │    │        │
└───┬────┼────┼────┼────┼────┼────┴────┘              └────┴────┼────┼────┼────┼────┼────┬───┘
    │    │    │  ⍞ │  ⍬ │    │                                  │    │    │    │    │    │
    │    │    │ ←  │ →  │    │     ┌────┬────┐   ┌────┬────┐    │    │lin │mac │winc     │
    │    │    │    │    │    │     │    │    │   │    │    │    │    │    │    │    │    │
    └────┴────┴────┴────┴────┘     │    │    │   │    │    │    └────┴────┴────┴────┴────┘
                                   │    │    │   │    │    │
                              ┌────┼────┼────┤   ├────┼────┼────┐
                              │    │    │    │   │    │    │    │
                              │    │    │ESC │   │    │    │    │
                              │    │    │    │   │    │    │    │
                              │ spc│CTRL├────┤   ├────┤    │ spc|
                              │    │    │    │   │    │    │    │
                              │    │    │    │   │    |    │    │
                              │    │    │    │   │    │    │    │
                              └────┴────┴────┘   └────┴────┴────┘
```
