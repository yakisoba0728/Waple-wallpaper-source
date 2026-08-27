// Function: FUN_140322b80
// Addr: 140322b80
// Size: 309 bytes


ulonglong FUN_140322b80(longlong param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x1e8);
  uVar3 = FUN_1402f5c50(lVar2,(*(int *)(param_1 + 0x1a8) + *(int *)(param_1 + 0x1a4)) * param_2 +
                              *(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1a0));
  if ((int)uVar3 == 0) {
    uVar3 = FUN_1402f4fe0(lVar2);
    uVar10 = uVar3 & 0xffffffff;
    if ((int)uVar3 == 0) {
      uVar7 = *(uint *)(param_1 + 0x1a4);
      uVar3 = (ulonglong)uVar7;
      uVar6 = 0;
      pbVar5 = *(byte **)(lVar2 + 0x38);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        uVar6 = uVar6 << 8 | (uint)bVar1;
      }
      iVar9 = *(int *)(param_1 + 0x1a8);
      uVar7 = 0;
      iVar8 = iVar9;
      if (iVar9 == 0) {
        uVar4 = 0;
      }
      else {
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          uVar7 = uVar7 << 8 | (uint)bVar1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        pbVar5 = pbVar5 + uVar3;
        uVar4 = 0;
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          uVar4 = uVar4 << 8 | (uint)bVar1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar6;
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar7;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar4;
      }
      uVar3 = 9;
      if (((uVar6 < *(uint *)(param_1 + 0x1b0)) && (uVar4 <= *(uint *)(lVar2 + 8))) &&
         (uVar3 = uVar10, uVar4 < uVar7)) {
        uVar3 = 9;
      }
      FUN_1402f5100(lVar2);
    }
  }
  return uVar3;
}

