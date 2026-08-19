// Function: FUN_1403a5430
// Addr: 1403a5430
// Size: 240 bytes


undefined8 FUN_1403a5430(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  
  pbVar6 = (byte *)&DAT_14045dde0;
  uVar3 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar3 == 0) {
    pbVar4 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar4 = (byte *)((ulonglong)uVar3 + param_1);
  }
  iVar7 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
  if (iVar7 == 1) {
    uVar3 = FUN_1403c71c0(pbVar4,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar7 != 2) {
      return 0;
    }
    uVar3 = FUN_1403c7240();
  }
  if (uVar3 == 0xffffffff) {
    return 0;
  }
  if (uVar3 < (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100) {
    pbVar4 = (byte *)(param_1 + ((ulonglong)uVar3 + 3) * 2);
  }
  else {
    pbVar4 = (byte *)&DAT_14045dde0;
  }
  uVar3 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
  if (uVar3 == 0) {
    pbVar4 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar4 = (byte *)((ulonglong)uVar3 + param_1);
  }
  uVar3 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
  if (uVar3 != 0) {
    lVar1 = *(longlong *)(param_2 + 0xa0);
    uVar5 = *(uint *)(param_2 + 0x11c);
    bVar2 = 0;
    if (uVar5 != 0) {
      iVar7 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
        }
      }
      bVar2 = (byte)iVar7;
    }
    uVar5 = (uVar5 & *(uint *)(*(longlong *)(lVar1 + 0x70) + 4 +
                              (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14)) >> (bVar2 & 0x1f);
    if ((uVar5 == 0xff) && (*(char *)(param_2 + 0x130) != '\0')) {
      func_0x00014040efc0(lVar1,0 >> (bVar2 & 0x1f),*(undefined4 *)(lVar1 + 0x60));
      *(uint *)(*(longlong *)(param_2 + 0xa0) + 0xd4) =
           (uint)(*(int *)(*(longlong *)(param_2 + 0xa0) + 0xd4) * 0xbc8f) % 0x7fffffff;
      uVar5 = *(uint *)(*(longlong *)(param_2 + 0xa0) + 0xd4) % uVar3 + 1;
    }
    if ((uVar5 <= uVar3) && (uVar5 != 0)) {
      if (uVar5 - 1 < (uint)*pbVar4 * 0x100 + (uint)pbVar4[1]) {
        pbVar6 = pbVar4 + ((ulonglong)(uVar5 - 1) + 1) * 2;
      }
      FUN_1403f7f90(param_2,(uint)pbVar6[1] + (uint)*pbVar6 * 0x100);
      return 1;
    }
  }
  return 0;
}

