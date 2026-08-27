// Function: FUN_1403f7d40
// Addr: 1403f7d40
// Size: 236 bytes


void FUN_1403f7d40(longlong param_1,uint param_2)

{
  uint *puVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined2 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (param_2 == 0xffff) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 0xd8);
    *puVar1 = *puVar1 | 0x1000000;
    uVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + 0x5c);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70);
    puVar2 = (ushort *)(lVar4 + 0x10 + uVar7 * 0x14);
    *puVar2 = *puVar2 & 0xa0;
    puVar2 = (ushort *)(lVar4 + 0x10 + uVar7 * 0x14);
    *puVar2 = *puVar2 | 0x841;
  }
  if (((*(char *)(param_1 + 0x8d) != '\0') && (pcVar5 = *(char **)(param_1 + 0x90), *pcVar5 != '\0')
      ) && (param_2 != 0xffffffff)) {
    pcVar5[4] = -1;
    pcVar5[5] = -1;
    pcVar5[6] = -1;
    pcVar5[7] = -1;
    puVar8 = (undefined4 *)FUN_1403ed560(pcVar5,param_2,1);
    if (puVar8 != (undefined4 *)0x0) {
      uVar7 = (ulonglong)(param_2 >> 6 & 7);
      *(ulonglong *)(puVar8 + uVar7 * 2 + 2) =
           *(ulonglong *)(puVar8 + uVar7 * 2 + 2) | 1L << (param_2 & 0x3f);
      *puVar8 = 0xffffffff;
    }
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x5c);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70);
    uVar6 = FUN_1403caa10(*(undefined8 *)(param_1 + 0x70),param_2);
    *(undefined2 *)(lVar4 + (ulonglong)uVar3 * 0x14 + 0xc) = uVar6;
  }
  FUN_1403f7e30(*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}

