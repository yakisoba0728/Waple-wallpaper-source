// Function: FUN_14033f190
// Addr: 14033f190
// Size: 843 bytes


void FUN_14033f190(uint *param_1,ushort *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  int local_res8 [2];
  longlong *local_res10;
  longlong local_res18;
  undefined8 *local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1404217a0(param_1,0,200);
  uVar4 = *param_4;
  *(undefined8 *)(param_1 + 6) = uVar4;
  uVar16 = 0;
  uVar9 = FUN_1402f7ff0(uVar4,0x40,0,param_2[1],0,local_res8);
  *(undefined8 *)(param_1 + 2) = uVar9;
  if (local_res8[0] == 0) {
    puVar10 = (undefined8 *)FUN_1402f7ff0(uVar4,0x10,0,*param_2,0,local_res8);
    *(undefined8 **)(param_1 + 4) = puVar10;
    if (local_res8[0] == 0) {
      lVar5 = *(longlong *)(param_1 + 2);
      *param_1 = (uint)param_2[1];
      uVar3 = *param_2;
      param_1[1] = (uint)uVar3;
      uVar17 = uVar16;
      uVar19 = uVar16;
      if (uVar3 != 0) {
        do {
          uVar20 = *(ushort *)(*(longlong *)(param_2 + 0xc) + uVar17 * 2) + 1;
          uVar13 = uVar20 - (int)uVar19;
          plVar18 = (longlong *)(uVar19 * 0x40 + lVar5);
          *(uint *)(puVar10 + 1) = uVar13;
          *puVar10 = plVar18;
          if (uVar13 != 0) {
            plVar18[2] = (longlong)puVar10;
            *plVar18 = (ulonglong)uVar20 * 0x40 + -0x40 + lVar5;
            plVar7 = plVar18;
            for (; 1 < uVar13; uVar13 = uVar13 - 1) {
              plVar1 = plVar7 + 8;
              *plVar1 = (longlong)plVar7;
              plVar7[1] = (longlong)plVar1;
              plVar7[10] = (longlong)puVar10;
              plVar7 = plVar1;
            }
            plVar7[1] = (longlong)plVar18;
          }
          puVar10 = puVar10 + 2;
          uVar19 = (ulonglong)uVar20;
          uVar13 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar13;
        } while (uVar13 < param_1[1]);
      }
      plVar18 = *(longlong **)(param_1 + 2);
      lVar5 = *(longlong *)(param_2 + 4);
      local_res10 = plVar18;
      if (*param_1 != 0) {
        do {
          *(undefined4 *)(plVar18 + 3) = 0;
          bVar24 = (*(byte *)(uVar16 + *(longlong *)(param_2 + 8)) & 1) == 0;
          if (bVar24) {
            *(undefined4 *)(plVar18 + 3) = 1;
          }
          uVar13 = (uint)bVar24;
          piVar2 = (int *)(lVar5 + uVar16 * 8);
          lVar11 = (longlong)(int)(*plVar18 - (longlong)local_res10 >> 6);
          iVar22 = *(int *)(lVar5 + uVar16 * 8) - *(int *)(lVar5 + lVar11 * 8);
          iVar23 = piVar2[1] - *(int *)(lVar5 + 4 + lVar11 * 8);
          iVar8 = -iVar22;
          if (-iVar22 < 0) {
            iVar8 = iVar22;
          }
          iVar15 = -iVar23;
          if (-iVar23 < 0) {
            iVar15 = iVar23;
          }
          if (iVar15 * 0xc < iVar8) {
            iVar14 = (iVar22 >> 0x1f & 0xfffffffcU) + 8;
          }
          else {
            iVar14 = 0;
            if (iVar8 * 0xc < iVar15) {
              iVar14 = (iVar23 >> 0x1f & 1U) + 1;
            }
          }
          lVar11 = (longlong)(int)(plVar18[1] - (longlong)local_res10 >> 6);
          *(int *)(plVar18 + 4) = iVar14;
          iVar21 = *(int *)(lVar5 + lVar11 * 8) - *piVar2;
          iVar15 = *(int *)(lVar5 + 4 + lVar11 * 8) - piVar2[1];
          iVar8 = -iVar21;
          if (-iVar21 < 0) {
            iVar8 = iVar21;
          }
          iVar6 = -iVar15;
          if (-iVar15 < 0) {
            iVar6 = iVar15;
          }
          if (iVar6 * 0xc < iVar8) {
            iVar12 = (iVar21 >> 0x1f & 0xfffffffcU) + 8;
          }
          else {
            iVar12 = 0;
            if (iVar8 * 0xc < iVar6) {
              iVar12 = (iVar15 >> 0x1f & 1U) + 1;
            }
          }
          *(int *)((longlong)plVar18 + 0x24) = iVar12;
          if (uVar13 == 0) {
            if ((iVar14 == iVar12) &&
               ((iVar12 != 0 || (iVar8 = FUN_1402f6ef0(iVar22,iVar23,iVar21,iVar15), iVar8 != 0))))
            {
              *(uint *)(plVar18 + 3) = *(uint *)(plVar18 + 3) | 2;
            }
          }
          else {
            *(uint *)(plVar18 + 3) = uVar13 | 2;
          }
          uVar13 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar13;
          plVar18 = plVar18 + 8;
          param_3 = local_res18;
        } while (uVar13 < *param_1);
      }
      *(ushort **)(param_1 + 8) = param_2;
      *(undefined8 **)(param_1 + 10) = local_res20;
      local_res8[0] =
           FUN_140340110(param_1 + 0xc,param_3 + 0x18,param_3 + 0x28,param_3 + 0x38,uVar4);
      if (local_res8[0] == 0) {
        FUN_140340110(param_1 + 0x1e,param_3 + 0x48,param_3 + 0x58,param_3 + 0x68,uVar4);
      }
    }
  }
  return;
}

