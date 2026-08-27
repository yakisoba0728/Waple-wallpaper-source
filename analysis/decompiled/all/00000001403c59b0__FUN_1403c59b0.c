// Function: FUN_1403c59b0
// Addr: 1403c59b0
// Size: 580 bytes


ulonglong * FUN_1403c59b0(undefined8 *param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  uint uVar18;
  bool bVar19;
  undefined1 local_res8 [8];
  uint local_res10;
  longlong local_res18;
  undefined4 local_68 [2];
  ulonglong *local_60;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  
  local_res10 = (uint)param_2;
  if (local_res10 < *(uint *)(param_1 + 1)) {
    local_res18 = (param_2 & 0xffffffff) * 8;
    if (*(ulonglong **)(local_res18 + param_1[2]) != (ulonglong *)0x0) {
      return *(ulonglong **)(local_res18 + param_1[2]);
    }
    while( true ) {
      puVar9 = &DAT_14045dd10;
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)*param_1;
      }
      if (*(uint *)(puVar9 + 3) < 4) {
        puVar9 = &DAT_14045dd10;
      }
      else {
        puVar9 = (undefined8 *)puVar9[2];
      }
      pbVar5 = (byte *)FUN_1403cbf00(puVar9,param_2);
      uVar13 = (uint)pbVar5[4] * 0x100 + (uint)pbVar5[5];
      puVar6 = (ulonglong *)_calloc_base(1,uVar13 * 0x40 + 0x20);
      if (puVar6 == (ulonglong *)0x0) break;
      puVar14 = puVar6 + 4;
      bVar1 = pbVar5[1];
      uVar15 = 0;
      local_68[0] = 0;
      local_58 = 0;
      local_50 = 0;
      bVar2 = *pbVar5;
      local_54 = -1;
      uVar18 = (uint)pbVar5[4] * 0x100 + (uint)pbVar5[5];
      local_60 = puVar14;
      if (uVar18 != 0) {
        do {
          if (uVar15 < (uint)pbVar5[4] * 0x100 + (uint)pbVar5[5]) {
            pbVar7 = pbVar5 + ((ulonglong)uVar15 + 3) * 2;
          }
          else {
            pbVar7 = (byte *)&DAT_14045dd10;
          }
          uVar11 = (uint)pbVar7[1] + (uint)*pbVar7 * 0x100;
          if (uVar11 == 0) {
            pbVar7 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar7 = pbVar5 + uVar11;
          }
          FUN_140377410(pbVar7,local_res8,local_68,(uint)bVar2 * 0x100 + (uint)bVar1);
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar18);
      }
      lVar3 = local_res18;
      uVar16 = 0;
      puVar17 = puVar14 + (ulonglong)uVar13 * 8;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      if (puVar14 != puVar17) {
        uVar10 = 0;
        uVar8 = uVar16;
        uVar12 = uVar16;
        do {
          uVar8 = uVar8 | puVar14[5];
          *puVar6 = uVar8;
          uVar10 = uVar10 | puVar14[6];
          puVar6[1] = uVar10;
          uVar12 = uVar12 | puVar14[7];
          puVar14 = puVar14 + 8;
          puVar6[2] = uVar12;
        } while (puVar14 != puVar17);
      }
      *(uint *)(puVar6 + 3) = uVar13;
      *(int *)((longlong)puVar6 + 0x1c) = local_54;
      uVar8 = uVar16;
      iVar4 = local_54;
      if (uVar13 != 0) {
        do {
          if ((int)uVar8 != iVar4) {
            puVar6[uVar8 * 8 + 6] = puVar6[uVar8 * 8 + 5];
            iVar4 = *(int *)((longlong)puVar6 + 0x1c);
          }
          uVar15 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar15;
        } while (uVar15 < uVar13);
      }
      LOCK();
      bVar19 = *(longlong *)(param_1[2] + local_res18) == 0;
      if (bVar19) {
        *(longlong *)(param_1[2] + local_res18) = (longlong)puVar6;
      }
      UNLOCK();
      if (bVar19) {
        return puVar6;
      }
      if ((int)puVar6[3] != 0) {
        do {
          thunk_FUN_1402d9040(puVar6[(uVar16 + 1) * 8]);
          uVar13 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar13;
        } while (uVar13 < (uint)puVar6[3]);
      }
      thunk_FUN_1402d9040(puVar6);
      if (*(ulonglong **)(lVar3 + param_1[2]) != (ulonglong *)0x0) {
        return *(ulonglong **)(lVar3 + param_1[2]);
      }
      param_2 = (ulonglong)local_res10;
    }
  }
  return (ulonglong *)0x0;
}

