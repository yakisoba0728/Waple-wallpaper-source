// Function: FUN_1402fc9e0
// Addr: 1402fc9e0
// Size: 13 bytes


ulonglong FUN_1402fc9e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ushort *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  ulonglong uVar6;
  
  uVar1 = FUN_1402fff80(param_2,param_3);
  uVar6 = uVar1 & 0xffffffff;
  if ((int)uVar1 == 0) {
    puVar2 = *(ushort **)(param_2 + 0x20);
    puVar4 = *(undefined4 **)(param_3 + 8);
    pcVar3 = *(char **)(param_3 + 0x10);
    puVar5 = puVar2 + (longlong)*(int *)(param_2 + 0x1c) * 0x18;
    for (; puVar2 < puVar5; puVar2 = puVar2 + 0x18) {
      *puVar4 = *(undefined4 *)(puVar2 + 8);
      puVar4[1] = *(undefined4 *)(puVar2 + 10);
      if ((*puVar2 & 1) == 0) {
        *pcVar3 = ((*puVar2 & 2) != 0) + '\x01';
      }
      else {
        *pcVar3 = '\0';
      }
      puVar4 = puVar4 + 2;
      pcVar3 = pcVar3 + 1;
      uVar1 = uVar6;
    }
  }
  return uVar1;
}

