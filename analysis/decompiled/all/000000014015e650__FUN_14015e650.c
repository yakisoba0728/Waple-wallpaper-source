// Function: FUN_14015e650
// Addr: 14015e650
// Size: 182 bytes


void FUN_14015e650(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined4 *)(param_4 + 0xc) = 0;
  func_0x00014000d730(param_4 + 0x20);
  uVar1 = *(uint *)(param_3 + 0x10);
  pcVar3 = *(char **)(param_3 + 8);
  pcVar2 = pcVar3;
  if (uVar1 != 0) {
    do {
      if (*pcVar2 == '\0') break;
      pcVar2 = pcVar2 + 1;
    } while ((longlong)pcVar2 - (longlong)pcVar3 < (longlong)(ulonglong)uVar1);
  }
  if ((longlong)(ulonglong)uVar1 < (longlong)(pcVar2 + (1 - (longlong)pcVar3))) {
    pcVar3 = "";
  }
  func_0x000140421ed0(pcVar3);
  return;
}

