# Pw AutoLogin

[![Build status](https://ci.appveyor.com/api/projects/status/lvgquwl32v0whvos?svg=true)](https://ci.appveyor.com/project/RodrigoPimpao/pw-auto-login)

AutoLogin utility for **P**erfect **W**orld.

## Download

Check the [release page](https://github.com/sessegolo/pw-auto-login/releases) to get the latest release.

Downloads are provided in zip files for win32 (x86) and win64 (x64).

## Usage

It is very straight forward to use this tool. Just follow the steps below:

1.  Unzip the contents to your preferred folder.
2.  Run "Pw AutoLogin.exe".
3.  Select your ELEMENT CLIENT.exe file by clicking 'Search'. You only have to do this once.
4.  Fill in your account & password (*mandatory*) and your char name (*optional*).
    -  Click 'Add' when done, or 'Clear' to reset the form.
    -  After adding a new char, it will appear in the chars table.
    -  You only need to set up your account details once for each account/char.
5. Select the char/account you want to log in.
6. If you want, check the 'Unfreeze' checkbox to prevent ElementClient window from freezing when it loses focus.
   -  You can check/uncheck before logging in each char, so it is possible to have only one unfrozen window, as many as you want, or none.
   -  **Note:** this option may consume more GPU/CPU!
7. Click 'Login' and wait up to 5 seconds. The ElementClient window will appear.
   -  You can repeat the steps 4 - 7 for every account you happen to have.
   -  If all of your chars are already in the chars table, repeat steps 5 - 7 to log them.
8. *Optional*: After selecting the desired char/account, you can click 'Delete' to remove it from the table.
9. You can close the application after launching ElementClient windows.

**Note:** After closing the application, its state will be saved to the Windows Regristry. See what's saved:

-  The path to your ElementClient.exe file;
-  Data for all the entries in the chars table: account, password, and char name if set;
-  The state of Unfreeze checkbox (checked/unchecked).

This is to make the process simpler. 
You only need to fill in the ElementClient and account info once, and use it as many times as you want.

## License

![](http://www.gnu.org/graphics/lgplv3-147x51.png)

This project is licensed under version 3 of the GNU Lesser General Public License.