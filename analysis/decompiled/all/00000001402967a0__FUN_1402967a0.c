// Function: FUN_1402967a0
// Addr: 1402967a0
// Size: 1078 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1402967a0(longlong *param_1,longlong *param_2,ulonglong param_3,short *param_4,char param_5)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined4 local_94;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 ***local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_b8;
  lVar7 = 0;
  sVar6 = *param_4;
  while (sVar6 != 0) {
    uVar11 = param_3 + 1;
    if (param_4[lVar7] != *param_4) {
      uVar11 = param_3;
    }
    lVar7 = lVar7 + 1;
    param_3 = uVar11;
    sVar6 = param_4[lVar7];
  }
  FUN_140016940(local_78,param_3,0);
  lVar7 = FUN_140291700(1);
  local_80 = lVar7;
  local_90 = FUN_14000f450(&local_88);
  local_88 = 1;
  if ((lVar7 != 0) && (lVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar7), lVar7 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar7,1);
  }
  local_94 = 0xfffffffe;
  uVar11 = 1;
  if (param_3 != 0) {
    local_98 = '\0';
    uVar9 = 0;
    uVar10 = uVar9;
LAB_140296887:
    do {
      if (param_4[uVar9] != 0) {
        do {
          if (param_4[uVar9] == *param_4) break;
          uVar9 = uVar9 + 1;
        } while (param_4[uVar9] != 0);
      }
      ppppuVar8 = local_78;
      if (0xf < local_60) {
        ppppuVar8 = (undefined8 ****)local_78[0];
      }
      if (*(char *)((longlong)ppppuVar8 + uVar10) == '\0') {
        uVar9 = uVar9 + uVar11;
        if ((param_4[uVar9] == *param_4) || (param_4[uVar9] == 0)) {
          local_94 = (undefined4)uVar10;
        }
        else {
          if ((char)param_1[1] == '\0') {
            lVar7 = *param_1;
            if (lVar7 == 0) {
LAB_14029693c:
              *param_1 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar7 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar7 + 0x50) < 1)) {
                sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                sVar6 = *(short *)**(undefined8 **)(lVar7 + 0x38);
              }
              if (sVar6 == -1) goto LAB_14029693c;
              *(short *)((longlong)param_1 + 10) = sVar6;
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_2[1] == '\0') {
            lVar7 = *param_2;
            if (lVar7 == 0) {
LAB_14029698a:
              *param_2 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar7 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar7 + 0x50) < 1)) {
                sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                sVar6 = *(short *)**(undefined8 **)(lVar7 + 0x38);
              }
              if (sVar6 == -1) goto LAB_14029698a;
              *(short *)((longlong)param_2 + 10) = sVar6;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          lVar7 = *param_1;
          if (lVar7 == 0) {
            if (*param_2 != 0) {
LAB_1402969b2:
              sVar6 = param_4[uVar9];
              if (param_5 == '\x01') {
                if ((char)param_1[1] == '\0') {
                  if (lVar7 != 0) {
                    if (((short *)**(undefined8 **)(lVar7 + 0x38) == (short *)0x0) ||
                       (**(int **)(lVar7 + 0x50) < 1)) {
                      sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
                    }
                    else {
                      sVar5 = *(short *)**(undefined8 **)(lVar7 + 0x38);
                    }
                    if (sVar5 != -1) {
                      *(short *)((longlong)param_1 + 10) = sVar5;
                      *(undefined1 *)(param_1 + 1) = 1;
                      bVar12 = sVar6 == sVar5;
                      goto LAB_140296aab;
                    }
                  }
                  *param_1 = 0;
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                bVar12 = sVar6 == *(short *)((longlong)param_1 + 10);
              }
              else {
                sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(local_90,sVar6);
                if ((char)param_1[1] == '\0') {
                  lVar7 = *param_1;
                  if (lVar7 == 0) {
LAB_140296a85:
                    *param_1 = 0;
                  }
                  else {
                    if (((short *)**(undefined8 **)(lVar7 + 0x38) == (short *)0x0) ||
                       (**(int **)(lVar7 + 0x50) < 1)) {
                      sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar7);
                    }
                    else {
                      sVar5 = *(short *)**(undefined8 **)(lVar7 + 0x38);
                    }
                    if (sVar5 == -1) goto LAB_140296a85;
                    *(short *)((longlong)param_1 + 10) = sVar5;
                  }
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                                  (local_90,*(undefined2 *)((longlong)param_1 + 10));
                bVar12 = sVar6 == sVar5;
              }
LAB_140296aab:
              if (bVar12) {
                local_98 = '\x01';
                goto LAB_140296ae8;
              }
            }
          }
          else if (*param_2 == 0) goto LAB_1402969b2;
        }
        ppppuVar8 = local_78;
        if (0xf < local_60) {
          ppppuVar8 = (undefined8 ****)local_78[0];
        }
        uVar4 = 0x7f;
        if (uVar11 < 0x7f) {
          uVar4 = (undefined1)uVar11;
        }
        *(undefined1 *)((longlong)ppppuVar8 + uVar10) = uVar4;
      }
      else {
        ppppuVar8 = local_78;
        if (0xf < local_60) {
          ppppuVar8 = (undefined8 ****)local_78[0];
        }
        uVar9 = uVar9 + (longlong)*(char *)((longlong)ppppuVar8 + uVar10);
      }
LAB_140296ae8:
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_3);
    if (local_98 != '\0') {
      if ((char)param_1[1] == '\0') {
        FUN_1402a7e60(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_1402a7e60(param_2);
      }
      lVar7 = *param_1;
      if (lVar7 == 0) {
        if (*param_2 == 0) goto LAB_140296bac;
        uVar11 = local_88 + 1;
LAB_140296b31:
        *param_1 = 0;
        uVar4 = 1;
      }
      else {
        if (*param_2 != 0) goto LAB_140296bac;
        uVar11 = uVar11 + 1;
        if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_140296b8d:
          sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar1 = **(int **)(lVar7 + 0x50);
          if (iVar1 < 1) goto LAB_140296b8d;
          **(int **)(lVar7 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar7 + 0x38);
          **(longlong **)(lVar7 + 0x38) = (longlong)(psVar2 + 1);
          sVar6 = *psVar2;
        }
        if (sVar6 == -1) goto LAB_140296b31;
        uVar4 = 0;
      }
      *(undefined1 *)(param_1 + 1) = uVar4;
      local_94 = 0xffffffff;
      local_98 = '\0';
      uVar9 = 0;
      uVar10 = uVar9;
      local_88 = uVar11;
      goto LAB_140296887;
    }
  }
LAB_140296bac:
  uVar3 = local_94;
  thunk_FUN_140017240(local_78);
  return uVar3;
}

