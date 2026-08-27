// Function: FUN_14020cab0
// Addr: 14020cab0
// Size: 1338 bytes


void FUN_14020cab0(longlong *param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  undefined1 *puVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint local_res10 [2];
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  int local_78;
  uint local_74;
  ulonglong local_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [24];
  
  piVar8 = (int *)0x0;
  piVar12 = (int *)0x0;
  piVar14 = (int *)0x0;
  lVar18 = (ulonglong)param_2 * 0x50 + *(longlong *)(param_1[3] + 0xb0);
  piVar16 = piVar8;
  local_res10[0] = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(int *)(lVar18 + 0x48) != -1) {
    do {
      piVar16 = piVar8;
      if (*(int *)(lVar18 + 0x48) == -1) break;
      if (piVar12 == piVar14) {
        uVar19 = (longlong)piVar12 - (longlong)piVar8;
        if ((longlong)uVar19 >> 2 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar10 = (longlong)piVar14 - (longlong)piVar8 >> 2;
        if (0x3fffffffffffffff - (uVar10 >> 1) < uVar10) {
LAB_14020cfe1:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar9 = ((longlong)uVar19 >> 2) + 1;
        uVar1 = (uVar10 >> 1) + uVar10;
        uVar17 = uVar9;
        if (uVar9 <= uVar1) {
          uVar17 = uVar1;
        }
        if (0x3fffffffffffffff < uVar17) goto LAB_14020cfe1;
        uVar1 = uVar17 * 4;
        if (uVar1 == 0) {
          piVar16 = (int *)0x0;
        }
        else if (uVar1 < 0x1000) {
          piVar16 = (int *)FUN_14028af20(uVar1);
        }
        else {
          if (uVar1 + 0x27 <= uVar1) goto LAB_14020cfe1;
          lVar7 = FUN_14028af20();
          piVar12 = piVar8;
          if (lVar7 == 0) goto LAB_14020cfbb;
          piVar16 = (int *)(lVar7 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(piVar16 + -2) = lVar7;
        }
        *(undefined4 *)((longlong)piVar16 + (uVar19 & 0xfffffffffffffffc)) =
             *(undefined4 *)(lVar18 + 0x48);
        FUN_1404210f0(piVar16,piVar8,uVar19);
        if (piVar8 != (int *)0x0) {
          uVar10 = uVar10 * 4;
          if (0xfff < uVar10) {
            piVar12 = (int *)((longlong)piVar8 + (-8 - (longlong)*(int **)(piVar8 + -2)));
            if ((int *)0x1f < piVar12) goto LAB_14020cfbb;
            uVar10 = uVar10 + 0x27;
            piVar8 = *(int **)(piVar8 + -2);
          }
          thunk_FUN_14028af80(piVar8,uVar10);
        }
        piVar12 = piVar16 + uVar9;
        piVar14 = piVar16 + uVar17;
      }
      else {
        *piVar12 = *(int *)(lVar18 + 0x48);
        piVar12 = piVar12 + 1;
      }
      lVar18 = (ulonglong)*(uint *)(lVar18 + 0x48) * 0x50 + *(longlong *)(param_1[3] + 0xb0);
      piVar8 = piVar16;
    } while (lVar18 != 0);
  }
  FUN_14020c710(param_1[1],*(undefined4 *)param_1[2],local_res18 + 0x10);
  uVar2 = *(undefined4 *)param_1[2];
  puVar5 = (undefined4 *)FUN_140160880(param_1[4],local_res10);
  *puVar5 = uVar2;
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
  FUN_14020c710(param_1[1],*(undefined4 *)param_1[2],local_res20);
  uVar2 = *(undefined4 *)param_1[2];
  puVar5 = (undefined4 *)FUN_140160880(param_1[5],local_res10);
  *puVar5 = uVar2;
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
  local_74 = (piVar16 != piVar12) + 1;
  FUN_140077840(*(longlong *)(*param_1 + 0x4b8) + 0x430,&local_74);
  if (piVar16 != piVar12) {
    uVar15 = (uint)((longlong)piVar12 - (longlong)piVar16 >> 2);
    local_74 = uVar15;
    FUN_140077840(*(longlong *)(*param_1 + 0x4b8) + 0x430,&local_74);
    uVar19 = 0;
    local_74 = 0;
    if (uVar15 != 0) {
      do {
        local_78 = piVar16[uVar19];
        lVar18 = *(longlong *)(*param_1 + 0x4b8);
        piVar12 = *(int **)(lVar18 + 0x438);
        if (piVar12 == *(int **)(lVar18 + 0x440)) {
          local_68 = (longlong *)(lVar18 + 0x430);
          uVar19 = (longlong)piVar12 - *local_68;
          lVar7 = (longlong)uVar19 >> 2;
          if (lVar7 == 0x3fffffffffffffff) goto LAB_14020cfdb;
          local_70 = lVar7 + 1;
          uVar9 = (longlong)*(int **)(lVar18 + 0x440) - *local_68 >> 2;
          uVar10 = 0x3fffffffffffffff;
          if ((uVar9 <= 0x3fffffffffffffff - (uVar9 >> 1)) &&
             (uVar10 = (uVar9 >> 1) + uVar9, uVar10 < local_70)) {
            uVar10 = local_70;
          }
          lVar7 = FUN_1400399f0(uVar9,uVar10);
          uVar19 = uVar19 & 0xfffffffffffffffc;
          *(int *)(uVar19 + lVar7) = local_78;
          piVar8 = *(int **)(lVar18 + 0x430);
          if (piVar12 == *(int **)(lVar18 + 0x438)) {
            lVar18 = (longlong)*(int **)(lVar18 + 0x438) - (longlong)piVar8;
            lVar11 = lVar7;
            piVar12 = piVar8;
          }
          else {
            FUN_1404210f0(lVar7,piVar8,(longlong)piVar12 - (longlong)piVar8);
            lVar11 = lVar7 + 4 + uVar19;
            lVar18 = *(longlong *)(lVar18 + 0x438) - (longlong)piVar12;
          }
          FUN_1404210f0(lVar11,piVar12,lVar18);
          FUN_140038af0(local_68,lVar7,local_70,uVar10);
        }
        else {
          *piVar12 = local_78;
          *(longlong *)(lVar18 + 0x438) = *(longlong *)(lVar18 + 0x438) + 4;
        }
        lVar18 = *(longlong *)(*param_1 + 0x4b8);
        puVar6 = (undefined8 *)FUN_140160b20(param_1[4],local_58,&local_78);
        puVar5 = *(undefined4 **)(lVar18 + 0x438);
        local_68 = (longlong *)*puVar6;
        if (puVar5 == *(undefined4 **)(lVar18 + 0x440)) {
          local_60 = (longlong *)(lVar18 + 0x430);
          uVar19 = (longlong)puVar5 - *local_60;
          lVar7 = (longlong)uVar19 >> 2;
          if (lVar7 == 0x3fffffffffffffff) {
LAB_14020cfdb:
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          local_70 = lVar7 + 1;
          uVar10 = (longlong)*(undefined4 **)(lVar18 + 0x440) - *local_60 >> 2;
          if (0x3fffffffffffffff - (uVar10 >> 1) < uVar10) {
            uVar9 = 0x3fffffffffffffff;
          }
          else {
            uVar9 = (uVar10 >> 1) + uVar10;
            if (uVar9 < local_70) {
              uVar9 = local_70;
            }
          }
          lVar7 = FUN_1400399f0(uVar10,uVar9);
          uVar19 = uVar19 & 0xfffffffffffffffc;
          *(undefined4 *)(uVar19 + lVar7) = *(undefined4 *)((longlong)local_68 + 0x14);
          puVar3 = *(undefined4 **)(lVar18 + 0x430);
          if (puVar5 == *(undefined4 **)(lVar18 + 0x438)) {
            lVar18 = (longlong)*(undefined4 **)(lVar18 + 0x438) - (longlong)puVar3;
            lVar11 = lVar7;
            puVar5 = puVar3;
          }
          else {
            FUN_1404210f0(lVar7,puVar3,(longlong)puVar5 - (longlong)puVar3);
            lVar11 = lVar7 + 4 + uVar19;
            lVar18 = *(longlong *)(lVar18 + 0x438) - (longlong)puVar5;
          }
          FUN_1404210f0(lVar11,puVar5,lVar18);
          FUN_140038af0(local_60,lVar7,local_70,uVar9);
        }
        else {
          *puVar5 = *(undefined4 *)((longlong)local_68 + 0x14);
          *(longlong *)(lVar18 + 0x438) = *(longlong *)(lVar18 + 0x438) + 4;
        }
        local_74 = local_74 + 1;
        uVar19 = (ulonglong)local_74;
      } while (local_74 < uVar15);
    }
  }
  FUN_140077840(*(longlong *)(*param_1 + 0x4b8) + 0x430,local_res10);
  if (piVar16 != (int *)0x0) {
    piVar8 = piVar16;
    puVar13 = auStack_98;
    if (0xfff < (ulonglong)(((longlong)piVar14 - (longlong)piVar16 >> 2) * 4)) {
      piVar8 = *(int **)(piVar16 + -2);
      piVar12 = (int *)((longlong)piVar16 + (-8 - (longlong)piVar8));
      puVar13 = auStack_98;
      if ((int *)0x1f < piVar12) {
LAB_14020cfbb:
        piVar8 = piVar12;
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar13 = auStack_90;
      }
    }
    *(undefined8 *)(puVar13 + -8) = 0x14020cfca;
    thunk_FUN_14028af80(piVar8);
  }
  return;
}

