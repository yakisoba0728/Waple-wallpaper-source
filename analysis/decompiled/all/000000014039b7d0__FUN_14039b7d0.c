// Function: FUN_14039b7d0
// Addr: 14039b7d0
// Size: 35 bytes


byte FUN_14039b7d0(longlong param_1)

{
  char *pcVar1;
  
  do {
    pcVar1 = (char *)(param_1 + 0xd1);
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xd1) = 1;
      return 1;
    }
  } while ((*(byte *)(param_1 + 0xd1) & 7) == 0);
  return *(byte *)(param_1 + 0xd1) & 7;
}

