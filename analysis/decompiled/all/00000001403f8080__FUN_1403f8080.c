// Function: FUN_1403f8080
// Addr: 1403f8080
// Size: 140 bytes


void FUN_1403f8080(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar6 = (uint)param_3;
  lVar1 = (param_2 & 0xffffffff) * 0x14;
  *(uint *)(lVar1 + *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70)) = uVar6;
  if (((*(char *)(param_1 + 0x8d) != '\0') && (pcVar2 = *(char **)(param_1 + 0x90), *pcVar2 != '\0')
      ) && (uVar6 != 0xffffffff)) {
    pcVar2[4] = -1;
    pcVar2[5] = -1;
    pcVar2[6] = -1;
    pcVar2[7] = -1;
    puVar4 = (undefined4 *)FUN_1403ed630(pcVar2,param_3 & 0xffffffff,1);
    if (puVar4 != (undefined4 *)0x0) {
      uVar5 = (ulonglong)((uint)((param_3 & 0xffffffff) >> 6) & 7);
      *(ulonglong *)(puVar4 + uVar5 * 2 + 2) =
           *(ulonglong *)(puVar4 + uVar5 * 2 + 2) | 1L << (uVar6 & 0x3f);
      *puVar4 = 0xffffffff;
    }
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    uVar3 = FUN_1403caae0(*(undefined8 *)(param_1 + 0x70),param_3 & 0xffffffff);
    *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70) + 0xc + lVar1) = uVar3;
  }
  return;
}

