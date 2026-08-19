// Function: FUN_1402c64d8
// Addr: 1402c64d8
// Size: 1358 bytes


void FUN_1402c64d8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  short sVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  undefined2 uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined2 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_1404dc110 ^ (ulonglong)auStack_88;
  uVar3 = *(ushort *)(param_1 + 0x3a);
  uVar12 = 0x78;
  uVar14 = 1;
  if (uVar3 < 0x65) {
    if (uVar3 == 100) {
LAB_1402c65b9:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1402c65bd:
      cVar7 = FUN_1402c2b34(param_1,0);
    }
    else if (uVar3 < 0x54) {
      if (uVar3 == 0x53) {
LAB_1402c65fd:
        cVar7 = func_0x0001402c7304();
      }
      else {
        if (uVar3 != 0x41) {
          if (uVar3 == 0x43) {
LAB_1402c657c:
            cVar7 = func_0x0001402c70ec(param_1,0);
            goto LAB_1402c661a;
          }
          if (((uVar3 != 0x45) && (uVar3 != 0x46)) && (uVar3 != 0x47)) goto LAB_1402c6a23;
        }
LAB_1402c6557:
        cVar7 = FUN_1402c6d9c();
      }
    }
    else {
      if (uVar3 == 0x58) goto LAB_1402c6612;
      if (uVar3 != 0x5a) {
        if (uVar3 != 0x61) {
          if (uVar3 != 99) goto LAB_1402c6a23;
          goto LAB_1402c657c;
        }
        goto LAB_1402c6557;
      }
      cVar7 = FUN_1402c6acc();
    }
  }
  else if (uVar3 < 0x70) {
    if (uVar3 == 0x6f) {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar7 = FUN_1402c2724(param_1,0);
    }
    else {
      if (((uVar3 == 0x65) || (uVar3 == 0x66)) || (uVar3 == 0x67)) goto LAB_1402c6557;
      if (uVar3 == 0x69) goto LAB_1402c65b9;
      if (uVar3 != 0x6e) goto LAB_1402c6a23;
      cVar7 = func_0x0001402c71b0();
    }
  }
  else {
    if (uVar3 == 0x70) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1402c6612:
      uVar9 = CONCAT11((char)(uVar3 >> 8),1);
    }
    else {
      if (uVar3 == 0x73) goto LAB_1402c65fd;
      if (uVar3 == 0x75) goto LAB_1402c65bd;
      if (uVar3 != 0x78) goto LAB_1402c6a23;
      uVar9 = 0;
    }
    cVar7 = FUN_1402c2f44(param_1,uVar9);
  }
LAB_1402c661a:
  uVar11 = 0;
  if ((cVar7 == '\0') || (*(char *)(param_1 + 0x38) != '\0')) goto LAB_1402c6a23;
  uVar6 = local_40 & 0xffff000000000000;
  uVar15 = *(uint *)(param_1 + 0x28);
  uVar13 = uVar11;
  if ((uVar15 >> 4 & 1) != 0) {
    local_40._2_6_ = (undefined6)(uVar6 >> 0x10);
    if ((uVar15 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        uVar13 = 0;
        if ((uVar15 >> 1 & 1) != 0) {
          local_40 = CONCAT62(local_40._2_6_,0x20);
          uVar13 = uVar14;
          uVar6 = local_40;
        }
        goto LAB_1402c6683;
      }
      uVar9 = 0x2b;
    }
    else {
      uVar9 = 0x2d;
    }
    local_40 = CONCAT62(local_40._2_6_,uVar9);
    uVar13 = uVar14;
    uVar6 = local_40;
  }
LAB_1402c6683:
  local_40 = uVar6;
  sVar4 = *(short *)(param_1 + 0x3a);
  if (((sVar4 - 0x58U & 0xffdf) != 0) || ((uVar15 >> 5 & 1) == 0)) {
    uVar14 = uVar11;
  }
  if (((char)uVar14 != '\0') || ((sVar4 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)&local_40 + uVar13 * 2) = 0x30;
    if ((sVar4 == 0x58) || (sVar4 == 0x41)) {
      uVar12 = 0x58;
    }
    *(undefined2 *)((longlong)&local_40 + (uVar13 + 1) * 2) = uVar12;
    uVar13 = uVar13 + 2;
  }
  iVar18 = (*(int *)(param_1 + 0x2c) - (int)uVar13) - *(int *)(param_1 + 0x48);
  if (((uVar15 & 0xc) == 0) && (0 < iVar18)) {
    iVar10 = *(int *)(param_1 + 0x20);
    uVar14 = uVar11;
    do {
      lVar8 = *(longlong *)(param_1 + 0x460);
      if (*(longlong *)(lVar8 + 0x10) == *(longlong *)(lVar8 + 8)) {
        if (*(char *)(lVar8 + 0x18) == '\0') {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar10;
      }
      else {
        *(int *)(param_1 + 0x20) = iVar10 + 1;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
        **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
      }
      iVar10 = *(int *)(param_1 + 0x20);
    } while ((iVar10 != -1) &&
            (uVar15 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar15, (int)uVar15 < iVar18));
  }
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  local_68 = *(undefined8 *)(param_1 + 8);
  FUN_1402c75a0(plVar2,&local_40);
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (0 < iVar18)))) {
    iVar10 = *piVar1;
    uVar14 = uVar11;
    do {
      lVar8 = *plVar2;
      if (*(longlong *)(lVar8 + 0x10) == *(longlong *)(lVar8 + 8)) {
        if (*(char *)(lVar8 + 0x18) == '\0') {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        *piVar1 = iVar10;
      }
      else {
        *piVar1 = iVar10 + 1;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 1;
        **(undefined2 **)*plVar2 = 0x30;
        *(longlong *)*plVar2 = *(longlong *)*plVar2 + 2;
      }
      iVar10 = *piVar1;
    } while ((iVar10 != -1) &&
            (uVar15 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar15, (int)uVar15 < iVar18));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') && (0 < *(int *)(param_1 + 0x48))) {
    lVar8 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1402c0e60(lVar8);
    }
    if (*(int *)(*(longlong *)(lVar8 + 0x18) + 0xc) == 0xfde9) {
      local_50 = *(undefined8 *)(param_1 + 0x40);
      local_40 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          iVar10 = (int)uVar11;
          local_58 = 0;
          local_68 = *(undefined8 *)(param_1 + 8);
          lVar8 = FUN_1402db4d4(&local_58,&local_50,2,&local_40);
          if (lVar8 == -1) goto UNWIND_INFO_1402c697d_ExceptionHandler;
          lVar17 = *plVar2;
          if (*(longlong *)(lVar17 + 0x10) == *(longlong *)(lVar17 + 8)) {
            if (*(char *)(lVar17 + 0x18) == '\0') {
              *piVar1 = -1;
            }
            else {
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            *piVar1 = *piVar1 + 1;
            *(longlong *)(lVar17 + 0x10) = *(longlong *)(lVar17 + 0x10) + 1;
            **(undefined2 **)*plVar2 = (undefined2)local_58;
            *(longlong *)*plVar2 = *(longlong *)*plVar2 + 2;
          }
          if (lVar8 == 2) {
            lVar8 = *plVar2;
            if (*(longlong *)(lVar8 + 0x10) == *(longlong *)(lVar8 + 8)) {
              if (*(char *)(lVar8 + 0x18) == '\0') {
                *piVar1 = -1;
              }
              else {
                *piVar1 = *piVar1 + 1;
              }
            }
            else {
              *piVar1 = *piVar1 + 1;
              *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 1;
              **(undefined2 **)*plVar2 = local_58._2_2_;
              *(longlong *)*plVar2 = *(longlong *)*plVar2 + 2;
            }
            iVar10 = iVar10 + 1;
          }
          uVar11 = (ulonglong)(iVar10 + 1U);
        } while (iVar10 + 1U != *(uint *)(param_1 + 0x48));
      }
    }
    else {
      lVar8 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar8 + 0x28) == '\0') {
        FUN_1402c0e60(lVar8);
      }
      lVar17 = *(longlong *)(param_1 + 0x40);
      iVar10 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_58 = local_58 & 0xffff0000;
          iVar16 = FUN_1402db078(&local_58,lVar17,
                                 (longlong)*(int *)(*(longlong *)(lVar8 + 0x18) + 8));
          if (iVar16 < 1) goto UNWIND_INFO_1402c697d_ExceptionHandler;
          lVar5 = *plVar2;
          if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
            if (*(char *)(lVar5 + 0x18) == '\0') {
              *piVar1 = -1;
            }
            else {
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            *piVar1 = *piVar1 + 1;
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
            **(undefined2 **)*plVar2 = (undefined2)local_58;
            *(longlong *)*plVar2 = *(longlong *)*plVar2 + 2;
          }
          lVar17 = lVar17 + iVar16;
          iVar10 = iVar10 + 1;
        } while (iVar10 != *(int *)(param_1 + 0x48));
      }
    }
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_1402c75a0(plVar2,*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48),piVar1);
  }
  goto LAB_1402c69a3;
UNWIND_INFO_1402c697d_ExceptionHandler:
  *piVar1 = -1;
LAB_1402c69a3:
  iVar10 = *(int *)(param_1 + 0x20);
  if ((-1 < iVar10) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    piVar1 = (int *)(param_1 + 0x20);
    iVar16 = 0;
    if (0 < iVar18) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x460);
        if (*(longlong *)(lVar8 + 0x10) == *(longlong *)(lVar8 + 8)) {
          if (*(char *)(lVar8 + 0x18) == '\0') {
            iVar10 = -1;
          }
          else {
            iVar10 = iVar10 + 1;
          }
          *piVar1 = iVar10;
        }
        else {
          *piVar1 = iVar10 + 1;
          *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 1;
          *(undefined2 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
          **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
        }
        iVar10 = *piVar1;
      } while ((iVar10 != -1) && (iVar16 = iVar16 + 1, iVar16 < iVar18));
    }
  }
LAB_1402c6a23:
  func_0x0001402ed2f0(local_38 ^ (ulonglong)auStack_88);
  return;
}

