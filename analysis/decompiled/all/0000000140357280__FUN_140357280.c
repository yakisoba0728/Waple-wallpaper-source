// Function: FUN_140357280
// Addr: 140357280
// Size: 1206 bytes


ulonglong FUN_140357280(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint local_res8 [2];
  int local_res18 [4];
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    return 0x28;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar13 = FUN_140357c00(param_2);
  local_res8[0] = (uint)uVar13;
  if (local_res8[0] != 0) {
    return uVar13;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = uVar5;
  plVar14 = (longlong *)FUN_1402f7fa0(uVar5,0x2088,local_res8);
  if (local_res8[0] == 0) {
    plVar14[1] = (longlong)param_1;
    *plVar14 = param_2;
    plVar14[2] = param_1[6];
    puVar2 = (undefined4 *)((longlong)plVar14 + 0x2074);
    plVar14[0x410] = (longlong)puVar2;
    plVar14[0x40f] = (longlong)puVar2;
    *puVar2 = 0;
    uVar9 = FUN_140357c00(param_2);
    if (uVar9 == 0) {
      plVar1 = plVar14 + 3;
      uVar10 = FUN_1402f54a0(param_2);
      *(undefined4 *)(plVar14 + 0xe) = uVar10;
      plVar14[9] = (longlong)FUN_140357be0;
      plVar14[10] = (longlong)thunk_FUN_1402f7f90;
      lVar6 = *(longlong *)(param_2 + 0x30);
      plVar14[0xb] = lVar6;
      *plVar1 = (longlong)plVar14 + 0x1074;
      *(undefined4 *)(plVar14 + 4) = 0;
      if (plVar1 != (longlong *)0x0) {
        plVar14[7] = 0;
        plVar15 = (longlong *)FUN_1402f7e90(lVar6,0x1bf0,local_res18);
        if (plVar15 != (longlong *)0x0) {
          plVar14[8] = (longlong)plVar15;
          *plVar15 = (longlong)plVar1;
          plVar15[8] = 0;
          *(undefined4 *)(plVar15 + 1) = 0x3f34;
          if ((((plVar14[9] == 0) || (pcVar7 = (code *)plVar14[10], pcVar7 == (code *)0x0)) ||
              (puVar8 = (undefined8 *)plVar14[8], puVar8 == (undefined8 *)0x0)) ||
             (((longlong *)*puVar8 != plVar1 || (0x1f < *(int *)(puVar8 + 1) - 0x3f34U)))) {
            iVar11 = -2;
LAB_140357471:
            if ((code *)plVar14[10] == thunk_FUN_1402f7f90) {
              FUN_1402f7f90();
              plVar14[8] = 0;
            }
            else {
              (*(code *)plVar14[10])(plVar14[0xb],plVar15);
              plVar14[8] = 0;
            }
          }
          else {
            if ((puVar8[8] != 0) && (*(int *)(puVar8 + 6) != 0xf)) {
              if (pcVar7 == thunk_FUN_1402f7f90) {
                FUN_1402f7f90();
              }
              else {
                (*pcVar7)(plVar14[0xb]);
              }
              puVar8[8] = 0;
            }
            *(undefined4 *)(puVar8 + 2) = 0;
            *(undefined4 *)(puVar8 + 6) = 0xf;
            iVar11 = FUN_140359b30(plVar1);
            if (iVar11 != 0) goto LAB_140357471;
          }
          if ((iVar11 == 0) && (*plVar1 != 0)) goto LAB_1403574a1;
        }
      }
      local_res8[0] = 3;
    }
    else {
LAB_1403574a1:
      local_res8[0] = uVar9;
      if (uVar9 == 0) {
        param_1[2] = plVar14;
        goto LAB_1403574e3;
      }
    }
    FUN_1402f7f90(uVar5,plVar14);
LAB_1403574b6:
    return (ulonglong)local_res8[0];
  }
LAB_1403574e3:
  uVar17 = 0;
  uVar10 = *(undefined4 *)(param_2 + 0xc);
  iVar11 = FUN_1402f5c50(param_2,*(int *)(param_2 + 8) + -4);
  uVar13 = uVar17;
  if (iVar11 == 0) {
    uVar9 = FUN_1402f5970(param_2,local_res18);
    uVar13 = (ulonglong)uVar9;
    if (local_res18[0] == 0) {
      FUN_1402f5c50(param_2,uVar10);
      if (uVar9 != 0) {
        if (uVar9 < 0xa000) {
          uVar16 = FUN_1402f7fa0(uVar5,uVar9,local_res8);
          if (local_res8[0] == 0) {
            uVar12 = FUN_140357f40(plVar14,0,uVar16,uVar9);
            if (uVar12 == uVar9) {
              FUN_140357d70(plVar14);
              FUN_1402f7f90(uVar5,plVar14);
              param_1[2] = 0;
              param_1[5] = FUN_140358190;
              *(uint *)(param_1 + 1) = uVar9;
              *(undefined4 *)((longlong)param_1 + 0xc) = 0;
              *param_1 = uVar16;
              param_1[4] = 0;
              goto LAB_1403574b6;
            }
            piVar3 = (int *)((longlong)plVar14 + 0x2074);
            if ((*piVar3 != 0) && (iVar11 = FUN_1402f5c50(*plVar14,(int)plVar14[0xe]), iVar11 == 0))
            {
              plVar1 = plVar14 + 3;
              if (((plVar1 != (longlong *)0x0) &&
                  (((plVar14[9] != 0 && (plVar14[10] != 0)) &&
                   (puVar8 = (undefined8 *)plVar14[8], puVar8 != (undefined8 *)0x0)))) &&
                 (((longlong *)*puVar8 == plVar1 && (*(int *)(puVar8 + 1) - 0x3f34U < 0x20)))) {
                *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
                *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
                if ((plVar14[9] != 0) &&
                   (((plVar14[10] != 0 &&
                     (puVar8 = (undefined8 *)plVar14[8], puVar8 != (undefined8 *)0x0)) &&
                    (((longlong *)*puVar8 == plVar1 && (*(int *)(puVar8 + 1) - 0x3f34U < 0x20))))))
                {
                  *(undefined4 *)((longlong)puVar8 + 0x24) = 0;
                  *(undefined4 *)((longlong)plVar14 + 0x34) = 0;
                  *(undefined4 *)((longlong)plVar14 + 0x24) = 0;
                  plVar14[7] = 0;
                  if (*(uint *)(puVar8 + 2) != 0) {
                    *(uint *)((longlong)plVar14 + 100) = *(uint *)(puVar8 + 2) & 1;
                  }
                  puVar4 = puVar8 + 0xaa;
                  puVar8[1] = 0x3f34;
                  puVar8[0x11] = puVar4;
                  puVar8[0xd] = puVar4;
                  puVar8[0xc] = puVar4;
                  *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
                  *(undefined4 *)(puVar8 + 3) = 0xffffffff;
                  *(undefined4 *)((longlong)puVar8 + 0x1c) = 0x8000;
                  puVar8[5] = 0;
                  puVar8[9] = 0;
                  *(undefined4 *)(puVar8 + 0x37c) = 1;
                  *(undefined4 *)((longlong)puVar8 + 0x1be4) = 0xffffffff;
                }
              }
              *(undefined4 *)(plVar14 + 4) = 0;
              *plVar1 = (longlong)plVar14 + 0x74;
              plVar14[5] = (longlong)plVar14 + 0x1074;
              *(undefined4 *)(plVar14 + 6) = 0;
              plVar14[0x410] = (longlong)piVar3;
              plVar14[0x40f] = (longlong)piVar3;
              *piVar3 = 0;
            }
            FUN_1402f7f90(uVar5,uVar16);
          }
          goto LAB_140357705;
        }
        goto LAB_1403576f8;
      }
    }
    else {
      FUN_1402f5c50(param_2,uVar10);
    }
LAB_1403576fc:
    uVar9 = 0x7fffffff;
  }
  else {
LAB_1403576f8:
    uVar9 = (uint)uVar13;
    if (uVar9 == 0) goto LAB_1403576fc;
  }
  uVar17 = (ulonglong)local_res8[0];
LAB_140357705:
  *(uint *)(param_1 + 1) = uVar9;
  param_1[4] = &LAB_140358200;
  param_1[5] = FUN_140358190;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = 0;
  return uVar17;
}

