// Function: FUN_140295f00
// Addr: 140295f00
// Size: 1113 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_140295f00(longlong *param_1,longlong *param_2,ulonglong param_3,char *param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
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
  lVar9 = 0;
  cVar5 = *param_4;
  while (cVar5 != '\0') {
    uVar14 = param_3 + 1;
    if (param_4[lVar9] != *param_4) {
      uVar14 = param_3;
    }
    lVar9 = lVar9 + 1;
    param_3 = uVar14;
    cVar5 = param_4[lVar9];
  }
  FUN_140016940(local_78,param_3,0);
  lVar9 = FUN_140291700(1);
  local_80 = lVar9;
  uVar10 = FUN_140013d40(&local_88);
  local_88 = 1;
  local_90 = uVar10;
  if ((lVar9 != 0) && (lVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9), lVar9 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,1);
  }
  local_94 = 0xfffffffe;
  uVar14 = 1;
  if (param_3 != 0) {
LAB_140295fe1:
    local_98 = '\0';
    lVar9 = 0;
    uVar13 = 0;
    do {
      if (param_4[lVar9] != '\0') {
        do {
          if (param_4[lVar9] == *param_4) break;
          lVar9 = lVar9 + 1;
        } while (param_4[lVar9] != '\0');
      }
      ppppuVar11 = local_78;
      if (0xf < local_60) {
        ppppuVar11 = (undefined8 ****)local_78[0];
      }
      if (*(char *)((longlong)ppppuVar11 + uVar13) == '\0') {
        lVar9 = lVar9 + uVar14;
        if ((param_4[lVar9] == *param_4) || (param_4[lVar9] == '\0')) {
          local_94 = (undefined4)uVar13;
        }
        else {
          if ((char)param_1[1] == '\0') {
            lVar2 = *param_1;
            if (lVar2 == 0) {
LAB_1402960a5:
              *param_1 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar2 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar2 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar2 + 0x38);
              }
              if (sVar8 == -1) goto LAB_1402960a5;
              *(short *)((longlong)param_1 + 10) = sVar8;
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_2[1] == '\0') {
            lVar2 = *param_2;
            if (lVar2 == 0) {
LAB_1402960f7:
              *param_2 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar2 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar2 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar2 + 0x38);
              }
              if (sVar8 == -1) goto LAB_1402960f7;
              *(short *)((longlong)param_2 + 10) = sVar8;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          lVar2 = *param_1;
          if (lVar2 == 0) {
            if (*param_2 != 0) {
LAB_140296123:
              cVar5 = param_4[lVar9];
              if (param_5 == '\x01') {
                if ((char)param_1[1] == '\0') {
                  if (lVar2 != 0) {
                    if (((ushort *)**(undefined8 **)(lVar2 + 0x38) == (ushort *)0x0) ||
                       (**(int **)(lVar2 + 0x50) < 1)) {
                      uVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
                    }
                    else {
                      uVar7 = *(ushort *)**(undefined8 **)(lVar2 + 0x38);
                    }
                    if (uVar7 != 0xffff) {
                      *(ushort *)((longlong)param_1 + 10) = uVar7;
                      *(undefined1 *)(param_1 + 1) = 1;
                      bVar15 = (int)cVar5 == (uint)uVar7;
                      goto LAB_14029621d;
                    }
                  }
                  *param_1 = 0;
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                bVar15 = (int)cVar5 == (uint)*(ushort *)((longlong)param_1 + 10);
              }
              else {
                cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar10);
                if ((char)param_1[1] == '\0') {
                  lVar2 = *param_1;
                  if (lVar2 == 0) {
LAB_1402961f7:
                    *param_1 = 0;
                  }
                  else {
                    if (((short *)**(undefined8 **)(lVar2 + 0x38) == (short *)0x0) ||
                       (**(int **)(lVar2 + 0x50) < 1)) {
                      sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar2);
                    }
                    else {
                      sVar8 = *(short *)**(undefined8 **)(lVar2 + 0x38);
                    }
                    if (sVar8 == -1) goto LAB_1402961f7;
                    *(short *)((longlong)param_1 + 10) = sVar8;
                  }
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                cVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                                  (local_90,*(undefined1 *)((longlong)param_1 + 10));
                bVar15 = cVar5 == cVar6;
              }
LAB_14029621d:
              if (bVar15) {
                local_98 = '\x01';
                goto LAB_14029625a;
              }
            }
          }
          else if (*param_2 == 0) goto LAB_140296123;
        }
        ppppuVar11 = local_78;
        if (0xf < local_60) {
          ppppuVar11 = (undefined8 ****)local_78[0];
        }
        uVar12 = 0x7f;
        if (uVar14 < 0x7f) {
          uVar12 = (undefined1)uVar14;
        }
        *(undefined1 *)((longlong)ppppuVar11 + uVar13) = uVar12;
      }
      else {
        ppppuVar11 = local_78;
        if (0xf < local_60) {
          ppppuVar11 = (undefined8 ****)local_78[0];
        }
        lVar9 = lVar9 + *(char *)((longlong)ppppuVar11 + uVar13);
      }
LAB_14029625a:
      uVar10 = local_90;
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_3);
    if (local_98 != '\0') {
      if ((char)param_1[1] == '\0') {
        FUN_1402a7e60(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_1402a7e60(param_2);
      }
      lVar9 = *param_1;
      if (lVar9 == 0) {
        if (*param_2 == 0) goto LAB_14029632f;
        uVar14 = local_88 + 1;
LAB_1402962ac:
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        local_94 = 0xffffffff;
        local_88 = uVar14;
      }
      else {
        if (*param_2 != 0) goto LAB_14029632f;
        uVar14 = uVar14 + 1;
        if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_1402962fd:
          sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        }
        else {
          iVar1 = **(int **)(lVar9 + 0x50);
          if (iVar1 < 1) goto LAB_1402962fd;
          **(int **)(lVar9 + 0x50) = iVar1 + -1;
          psVar3 = (short *)**(longlong **)(lVar9 + 0x38);
          **(longlong **)(lVar9 + 0x38) = (longlong)(psVar3 + 1);
          sVar8 = *psVar3;
        }
        if (sVar8 == -1) goto LAB_1402962ac;
        *(undefined1 *)(param_1 + 1) = 0;
        local_94 = 0xffffffff;
        local_88 = uVar14;
      }
      goto LAB_140295fe1;
    }
  }
LAB_14029632f:
  uVar4 = local_94;
  thunk_FUN_140017240(local_78);
  return uVar4;
}

