// Function: FUN_1400e5700
// Addr: 1400e5700
// Size: 55 bytes


ulonglong FUN_1400e5700(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  char *pcVar1;
  
  if (((*(char *)(param_1 + 0x74) == '\0') &&
      (pcVar1 = (char *)(param_2 + 1), pcVar1 != *(char **)(param_1 + 8))) &&
     ((((*(ulonglong *)(param_1 + 0x60) & 8) == 0 && (in_RAX = 0, (byte)(*pcVar1 - 0x28U) < 2)) ||
      (((*(ulonglong *)(param_1 + 0x60) & 0x10) == 0 && (in_RAX = 0, (*pcVar1 + 0x85U & 0xfd) == 0))
      )))) {
    return 1;
  }
  return in_RAX & 0xffffffffffffff00;
}

