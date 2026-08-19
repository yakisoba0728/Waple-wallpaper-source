// Function: FUN_140296430
// Addr: 140296430
// Size: 883 bytes


void FUN_140296430(longlong *param_1,longlong *param_2,ulonglong param_3,short *param_4,char param_5
                  )

{
  int iVar1;
  short *psVar2;
  undefined1 uVar3;
  short sVar4;
  short sVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined4 local_94;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 ***local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1404dc110 ^ (ulonglong)auStack_b8;
  lVar6 = 0;
  sVar5 = *param_4;
  while (sVar5 != 0) {
    uVar10 = param_3 + 1;
    if (param_4[lVar6] != *param_4) {
      uVar10 = param_3;
    }
    lVar6 = lVar6 + 1;
    param_3 = uVar10;
    sVar5 = param_4[lVar6];
  }
  FUN_140016a10(local_78,param_3,0);
  lVar6 = FUN_1402917d0(1);
  local_80 = lVar6;
  local_90 = FUN_14029d260(&local_88);
  local_88 = 1;
  if ((lVar6 != 0) && (lVar6 = (*(code *)PTR_FUN_140426bb8)(lVar6), lVar6 != 0)) {
    (*(code *)PTR_FUN_140426bb8)(lVar6,1);
  }
  local_94 = 0xfffffffe;
  uVar10 = 1;
  if (param_3 != 0) {
    local_98 = '\0';
    uVar8 = 0;
    uVar9 = uVar8;
LAB_140296517:
    do {
      if (param_4[uVar8] != 0) {
        do {
          if (param_4[uVar8] == *param_4) break;
          uVar8 = uVar8 + 1;
        } while (param_4[uVar8] != 0);
      }
      ppppuVar7 = local_78;
      if (0xf < local_60) {
        ppppuVar7 = (undefined8 ****)local_78[0];
      }
      if (*(char *)((longlong)ppppuVar7 + uVar9) == '\0') {
        uVar8 = uVar8 + uVar10;
        if ((param_4[uVar8] == *param_4) || (param_4[uVar8] == 0)) {
          local_94 = (undefined4)uVar9;
        }
        else {
          if ((char)param_1[1] == '\0') {
            lVar6 = *param_1;
            if (lVar6 == 0) {
LAB_1402965cc:
              *param_1 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar6 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar6 + 0x50) < 1)) {
                sVar5 = (*(code *)PTR_FUN_140426bb8)();
              }
              else {
                sVar5 = *(short *)**(undefined8 **)(lVar6 + 0x38);
              }
              if (sVar5 == -1) goto LAB_1402965cc;
              *(short *)((longlong)param_1 + 10) = sVar5;
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_2[1] == '\0') {
            lVar6 = *param_2;
            if (lVar6 == 0) {
LAB_14029661a:
              *param_2 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar6 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar6 + 0x50) < 1)) {
                sVar5 = (*(code *)PTR_FUN_140426bb8)();
              }
              else {
                sVar5 = *(short *)**(undefined8 **)(lVar6 + 0x38);
              }
              if (sVar5 == -1) goto LAB_14029661a;
              *(short *)((longlong)param_2 + 10) = sVar5;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          lVar6 = *param_1;
          if (lVar6 == 0) {
            if (*param_2 != 0) {
LAB_140296642:
              sVar5 = param_4[uVar8];
              if (param_5 == '\x01') {
                if ((char)param_1[1] == '\0') {
                  if (lVar6 != 0) {
                    if (((short *)**(undefined8 **)(lVar6 + 0x38) == (short *)0x0) ||
                       (**(int **)(lVar6 + 0x50) < 1)) {
                      sVar4 = (*(code *)PTR_FUN_140426bb8)();
                    }
                    else {
                      sVar4 = *(short *)**(undefined8 **)(lVar6 + 0x38);
                    }
                    if (sVar4 != -1) {
                      *(short *)((longlong)param_1 + 10) = sVar4;
                      *(undefined1 *)(param_1 + 1) = 1;
                      bVar11 = sVar5 == sVar4;
                      goto LAB_14029673b;
                    }
                  }
                  *param_1 = 0;
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                bVar11 = sVar5 == *(short *)((longlong)param_1 + 10);
              }
              else {
                sVar5 = (*(code *)PTR_FUN_140426bb8)(local_90,sVar5);
                if ((char)param_1[1] == '\0') {
                  lVar6 = *param_1;
                  if (lVar6 == 0) {
LAB_140296715:
                    *param_1 = 0;
                  }
                  else {
                    if (((short *)**(undefined8 **)(lVar6 + 0x38) == (short *)0x0) ||
                       (**(int **)(lVar6 + 0x50) < 1)) {
                      sVar4 = (*(code *)PTR_FUN_140426bb8)(lVar6);
                    }
                    else {
                      sVar4 = *(short *)**(undefined8 **)(lVar6 + 0x38);
                    }
                    if (sVar4 == -1) goto LAB_140296715;
                    *(short *)((longlong)param_1 + 10) = sVar4;
                  }
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                sVar4 = (*(code *)PTR_FUN_140426bb8)
                                  (local_90,*(undefined2 *)((longlong)param_1 + 10));
                bVar11 = sVar5 == sVar4;
              }
LAB_14029673b:
              if (bVar11) {
                local_98 = '\x01';
                goto LAB_140296778;
              }
            }
          }
          else if (*param_2 == 0) goto LAB_140296642;
        }
        ppppuVar7 = local_78;
        if (0xf < local_60) {
          ppppuVar7 = (undefined8 ****)local_78[0];
        }
        uVar3 = 0x7f;
        if (uVar10 < 0x7f) {
          uVar3 = (undefined1)uVar10;
        }
        *(undefined1 *)((longlong)ppppuVar7 + uVar9) = uVar3;
      }
      else {
        ppppuVar7 = local_78;
        if (0xf < local_60) {
          ppppuVar7 = (undefined8 ****)local_78[0];
        }
        uVar8 = uVar8 + (longlong)*(char *)((longlong)ppppuVar7 + uVar9);
      }
LAB_140296778:
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
    if (local_98 != '\0') {
      if ((char)param_1[1] == '\0') {
        func_0x0001402a7f30(param_1);
      }
      if ((char)param_2[1] == '\0') {
        func_0x0001402a7f30(param_2);
      }
      lVar6 = *param_1;
      if (lVar6 == 0) {
        if (*param_2 == 0) goto LAB_14029683c;
        uVar10 = local_88 + 1;
code_r0x0001402967c1:
        *param_1 = 0;
        uVar3 = 1;
      }
      else {
        if (*param_2 != 0) goto LAB_14029683c;
        uVar10 = uVar10 + 1;
        if (**(longlong **)(lVar6 + 0x38) == 0) {
code_r0x00014029681d:
          sVar5 = (*(code *)PTR_FUN_140426bb8)();
        }
        else {
          iVar1 = **(int **)(lVar6 + 0x50);
          if (iVar1 < 1) goto code_r0x00014029681d;
          **(int **)(lVar6 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar6 + 0x38);
          **(longlong **)(lVar6 + 0x38) = (longlong)(psVar2 + 1);
          sVar5 = *psVar2;
        }
        if (sVar5 == -1) goto code_r0x0001402967c1;
        uVar3 = 0;
      }
      *(undefined1 *)(param_1 + 1) = uVar3;
      local_94 = 0xffffffff;
      local_98 = '\0';
      uVar8 = 0;
      uVar9 = uVar8;
      local_88 = uVar10;
      goto LAB_140296517;
    }
  }
LAB_14029683c:
                    /* WARNING: Subroutine does not return */
  thunk_FUN_140017310(local_78);
}

