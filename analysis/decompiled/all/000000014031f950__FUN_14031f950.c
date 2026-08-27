// Function: FUN_14031f950
// Addr: 14031f950
// Size: 473 bytes


ulonglong FUN_14031f950(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint local_res8 [2];
  
  uVar7 = 0;
  local_res8[0] = 0;
  if (((int)param_1[2] != 0) && (param_1[4] == 0)) {
    bVar2 = *(byte *)((longlong)param_1 + 0x14);
    iVar1 = (int)param_1[2] + 1;
    lVar3 = *param_1;
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    lVar6 = FUN_1402f7ff0(uVar4,4,0,iVar1,0,local_res8);
    param_1[4] = lVar6;
    if ((local_res8[0] == 0) &&
       (local_res8[0] = FUN_1402f5c50(lVar3,*(int *)((longlong)param_1 + 0xc) + (int)param_1[1]),
       local_res8[0] == 0)) {
      uVar9 = (uint)bVar2;
      uVar10 = uVar9 * iVar1;
      uVar7 = FUN_1402f4fe0(lVar3,uVar10);
      local_res8[0] = (uint)uVar7;
      if (local_res8[0] == 0) {
        pbVar8 = *(byte **)(lVar3 + 0x38);
        puVar5 = (uint *)param_1[4];
        pbVar11 = pbVar8 + uVar10;
        if (uVar9 == 1) {
          for (; pbVar8 < pbVar11; pbVar8 = pbVar8 + 1) {
            *puVar5 = (uint)*pbVar8;
            puVar5 = puVar5 + 1;
          }
        }
        else if (uVar9 == 2) {
          for (; pbVar8 < pbVar11; pbVar8 = pbVar8 + 2) {
            *puVar5 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
            puVar5 = puVar5 + 1;
          }
        }
        else if (uVar9 == 3) {
          for (; pbVar8 < pbVar11; pbVar8 = pbVar8 + 3) {
            *puVar5 = (uint)CONCAT21(CONCAT11(*pbVar8,pbVar8[1]),pbVar8[2]);
            puVar5 = puVar5 + 1;
          }
        }
        else {
          for (; pbVar8 < pbVar11; pbVar8 = pbVar8 + 4) {
            *puVar5 = CONCAT31(CONCAT21(CONCAT11(*pbVar8,pbVar8[1]),pbVar8[2]),pbVar8[3]);
            puVar5 = puVar5 + 1;
          }
        }
        FUN_1402f5100(lVar3);
        uVar7 = (ulonglong)local_res8[0];
      }
      if ((int)uVar7 == 0) {
        return uVar7;
      }
    }
    FUN_1402f7f90(uVar4,param_1[4]);
    uVar7 = (ulonglong)local_res8[0];
    param_1[4] = 0;
  }
  return uVar7;
}

