// Function: FUN_1403083e0
// Addr: 1403083e0
// Size: 566 bytes


ulonglong FUN_1403083e0(longlong param_1,undefined8 param_2,uint *param_3,uint *param_4,uint param_5
                       )

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  uVar9 = *(undefined8 *)(lVar2 + 0x30);
  uVar7 = FUN_1402f5c50(lVar2);
  local_res8[0] = (uint)uVar7;
  if (local_res8[0] != 0) {
    return uVar7;
  }
  cVar3 = FUN_1402f55a0(lVar2,local_res8);
  if (local_res8[0] != 0) {
    return (ulonglong)local_res8[0];
  }
  bVar4 = FUN_1402f55a0(lVar2,local_res8);
  if (local_res8[0] != 0) {
    return (ulonglong)local_res8[0];
  }
  if (cVar3 == '\0') {
    uVar5 = FUN_1402f5ac0(lVar2,local_res8);
    uVar6 = (uint)uVar5;
    *param_3 = (uint)uVar5;
  }
  else {
    if (cVar3 != '\x01') {
      return 8;
    }
    uVar6 = FUN_1402f58c0(lVar2,local_res8);
    *param_3 = uVar6;
  }
  if (local_res8[0] != 0) {
    return (ulonglong)local_res8[0];
  }
  if (((bVar4 & 0xc0) == 0) && (uVar11 = (bVar4 >> 4 & 3) + 1, uVar6 * uVar11 <= param_5)) {
    uVar8 = FUN_1402f80b0(uVar9,4,0,uVar6,0,local_res8);
    *(undefined8 *)(param_3 + 4) = uVar8;
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    uVar9 = FUN_1402f80b0(uVar9,4,0,*param_3,0,local_res8);
    *(undefined8 *)(param_3 + 2) = uVar9;
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    local_res8[0] = FUN_1402f4fe0(lVar2);
    if (local_res8[0] == 0) {
      pbVar12 = *(byte **)(lVar2 + 0x38);
      uVar7 = 0;
      if (*param_3 != 0) {
        do {
          uVar6 = 0;
          uVar10 = 0;
          if (uVar11 == 0) {
LAB_1403085a7:
            uVar10 = uVar6 >> (bVar4 & 0xf) + 1;
            if (*param_4 <= uVar10) {
              return 8;
            }
            uVar6 = uVar6 & (1 << (bVar4 & 0xf) + 1) - 1U;
            *(uint *)(uVar7 * 4 + *(longlong *)(param_3 + 2)) = uVar10;
            if (*(uint *)((ulonglong)uVar10 * 0x20 + *(longlong *)(param_4 + 2)) <= uVar6) {
              return 8;
            }
            *(uint *)(uVar7 * 4 + *(longlong *)(param_3 + 4)) = uVar6;
          }
          else {
            do {
              bVar1 = *pbVar12;
              uVar10 = uVar10 + 1;
              pbVar12 = pbVar12 + 1;
              uVar6 = uVar6 << 8 | (uint)bVar1;
            } while (uVar10 < uVar11);
            if (uVar6 != 0xffffffff) goto LAB_1403085a7;
            *(undefined4 *)(uVar7 * 4 + *(longlong *)(param_3 + 2)) = 0xffff;
            *(undefined4 *)(uVar7 * 4 + *(longlong *)(param_3 + 4)) = 0xffff;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *param_3);
      }
      FUN_1402f5100(lVar2);
      return (ulonglong)local_res8[0];
    }
  }
  return 8;
}

