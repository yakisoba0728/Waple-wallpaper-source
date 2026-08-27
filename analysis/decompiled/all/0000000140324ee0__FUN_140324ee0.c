// Function: FUN_140324ee0
// Addr: 140324ee0
// Size: 503 bytes


int FUN_140324ee0(longlong param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int local_res8 [8];
  
  local_res8[0] = 0;
  if ((byte *)(param_1 + 5U) <= param_2) {
    uVar6 = *(uint *)(param_3 + 0xf);
    bVar1 = *(byte *)(param_1 + 4);
    uVar10 = (uint)bVar1;
    bVar2 = *(byte *)(param_1 + 3);
    lVar5 = param_3[0x10];
    if (*(uint *)((longlong)param_3 + 0x7c) < uVar6 + uVar10) {
      uVar11 = uVar6 + uVar10 + 3 & 0xfffffffc;
      lVar5 = FUN_1402f80b0(*param_3,0x28,uVar6,uVar11,lVar5,local_res8);
      param_3[0x10] = lVar5;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar6 = *(uint *)(param_3 + 0xf);
      *(uint *)((longlong)param_3 + 0x7c) = uVar11;
    }
    pbVar8 = (byte *)(param_1 + 5);
    iVar3 = (bVar2 & 1) + 9;
    if ((bVar2 & 2) == 0) {
      iVar3 = (bVar2 & 1) + 8;
    }
    iVar4 = iVar3 + 1;
    if ((bVar2 & 4) == 0) {
      iVar4 = iVar3;
    }
    iVar3 = iVar4 + 1;
    if ((bVar2 & 8) == 0) {
      iVar3 = iVar4;
    }
    iVar4 = iVar3 + 1;
    if ((bVar2 & 0x10) == 0) {
      iVar4 = iVar3;
    }
    if (pbVar8 + iVar4 * uVar10 <= param_2) {
      uVar11 = 0;
      puVar7 = (uint *)(lVar5 + (ulonglong)uVar6 * 0x28);
      if (bVar1 != 0) {
        do {
          uVar6 = (uint)*pbVar8;
          if ((bVar2 & 1) == 0) {
            lVar5 = 1;
          }
          else {
            uVar6 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
            lVar5 = 2;
          }
          *puVar7 = uVar6;
          pbVar8 = pbVar8 + lVar5;
          uVar6 = (uint)*pbVar8;
          if ((bVar2 & 2) == 0) {
            lVar5 = 1;
          }
          else {
            lVar5 = 2;
            uVar6 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
          }
          puVar7[1] = uVar6;
          pbVar9 = pbVar8 + lVar5 + 3;
          puVar7[2] = (uint)pbVar8[lVar5];
          uVar6 = (uint)CONCAT11(pbVar8[lVar5 + 1],pbVar8[lVar5 + 2]);
          if ((bVar2 & 4) != 0) {
            uVar6 = (uint)CONCAT21(CONCAT11(pbVar8[lVar5 + 1],pbVar8[lVar5 + 2]),*pbVar9);
            pbVar9 = pbVar8 + lVar5 + 4;
          }
          puVar7[5] = uVar6;
          uVar6 = (uint)*pbVar9;
          if ((bVar2 & 8) == 0) {
            pbVar8 = pbVar9 + 2;
          }
          else {
            pbVar8 = pbVar9 + 3;
            uVar6 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
          }
          puVar7[6] = uVar6 << 8 | (uint)pbVar8[-1];
          uVar6 = (uint)*pbVar8;
          if ((bVar2 & 0x10) == 0) {
            lVar5 = 1;
          }
          else {
            uVar6 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
            lVar5 = 2;
          }
          puVar7[7] = uVar6;
          uVar11 = uVar11 + 1;
          puVar7 = puVar7 + 10;
          pbVar8 = pbVar8 + lVar5;
        } while (uVar11 < uVar10);
      }
      *(uint *)(param_3 + 0xf) = *(int *)(param_3 + 0xf) + uVar10;
      return local_res8[0];
    }
  }
  return 8;
}

