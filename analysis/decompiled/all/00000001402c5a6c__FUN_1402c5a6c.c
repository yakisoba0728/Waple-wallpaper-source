// Function: FUN_1402c5a6c
// Addr: 1402c5a6c
// Size: 1082 bytes


void FUN_1402c5a6c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 uVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_50 = 0xfffffffffffffffe;
  local_38 = DAT_1404dc110 ^ (ulonglong)auStack_88;
  cVar6 = *(char *)(param_1 + 0x39);
  uVar10 = 0x78;
  if (cVar6 < 'e') {
    if (cVar6 == 'd') {
LAB_1402c5b3e:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1402c5b42:
      cVar6 = FUN_1402c2930(param_1,0);
    }
    else if (cVar6 < 'T') {
      if (cVar6 == 'S') {
LAB_1402c5b81:
        cVar6 = FUN_1402c7268();
      }
      else {
        if (cVar6 != 'A') {
          if (cVar6 == 'C') {
LAB_1402c5b01:
            cVar6 = FUN_1402c7018(param_1,0);
            goto LAB_1402c5b9d;
          }
          if (((cVar6 != 'E') && (cVar6 != 'F')) && (cVar6 != 'G')) goto LAB_1402c5eb4;
        }
LAB_1402c5adb:
        cVar6 = FUN_1402c6b40();
      }
    }
    else {
      if (cVar6 == 'X') goto LAB_1402c5b96;
      if (cVar6 != 'Z') {
        if (cVar6 != 'a') {
          if (cVar6 != 'c') goto LAB_1402c5eb4;
          goto LAB_1402c5b01;
        }
        goto LAB_1402c5adb;
      }
      cVar6 = FUN_1402c6a50();
    }
  }
  else if (cVar6 < 'p') {
    if (cVar6 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar6 = func_0x0001402c2520(param_1,0);
    }
    else {
      if (((cVar6 == 'e') || (cVar6 == 'f')) || (cVar6 == 'g')) goto LAB_1402c5adb;
      if (cVar6 == 'i') goto LAB_1402c5b3e;
      if (cVar6 != 'n') goto LAB_1402c5eb4;
      cVar6 = func_0x0001402c71b0();
    }
  }
  else {
    if (cVar6 == 'p') {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1402c5b96:
      uVar8 = CONCAT71((uint7)(uint3)(cVar6 >> 7),1);
    }
    else {
      if (cVar6 == 's') goto LAB_1402c5b81;
      if (cVar6 == 'u') goto LAB_1402c5b42;
      if (cVar6 != 'x') goto LAB_1402c5eb4;
      uVar8 = 0;
    }
    cVar6 = FUN_1402c2d40(param_1,uVar8);
  }
LAB_1402c5b9d:
  if ((cVar6 == '\0') || (*(char *)(param_1 + 0x38) != '\0')) goto LAB_1402c5eb4;
  local_48 = local_48 & 0xff000000;
  lVar11 = 0;
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((uVar4 >> 4 & 1) != 0) {
    if ((uVar4 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar4 >> 1 & 1) == 0) goto LAB_1402c5bf7;
        local_48 = CONCAT31(local_48._1_3_,0x20);
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2b);
      }
    }
    else {
      local_48 = CONCAT31(local_48._1_3_,0x2d);
    }
    lVar11 = 1;
  }
LAB_1402c5bf7:
  cVar6 = *(char *)(param_1 + 0x39);
  if (((cVar6 + 0xa8U & 0xdf) == 0) && ((uVar4 >> 5 & 1) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) || ((cVar6 + 0xbfU & 0xdf) == 0)) {
    *(undefined1 *)((longlong)&local_48 + lVar11) = 0x30;
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      uVar10 = 0x58;
    }
    *(undefined1 *)((longlong)&local_48 + lVar11 + 1) = uVar10;
    lVar11 = lVar11 + 2;
  }
  iVar9 = (*(int *)(param_1 + 0x2c) - (int)lVar11) - *(int *)(param_1 + 0x48);
  if (((uVar4 & 0xc) == 0) && (iVar12 = 0, 0 < iVar9)) {
    iVar7 = *(int *)(param_1 + 0x20);
    do {
      lVar11 = *(longlong *)(param_1 + 0x460);
      if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          iVar7 = -1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar7;
      }
      else {
        *(int *)(param_1 + 0x20) = iVar7 + 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
        **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
      }
      iVar7 = *(int *)(param_1 + 0x20);
    } while ((iVar7 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar9));
  }
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  local_68 = *(undefined8 *)(param_1 + 8);
  func_0x0001402c74fc(plVar2,&local_48);
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (iVar12 = 0, 0 < iVar9)))) {
    iVar7 = *piVar1;
    do {
      lVar11 = *plVar2;
      if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          iVar7 = -1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        *piVar1 = iVar7;
      }
      else {
        *piVar1 = iVar7 + 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
        **(undefined1 **)*plVar2 = 0x30;
        *(longlong *)*plVar2 = *(longlong *)*plVar2 + 1;
      }
      iVar7 = *piVar1;
    } while ((iVar7 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar9));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    local_68 = *(undefined8 *)(param_1 + 8);
    func_0x0001402c74fc(plVar2,*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  }
  else {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1402c0e60(lVar11);
    }
    puVar13 = *(undefined2 **)(param_1 + 0x40);
    iVar12 = 0;
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_40 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          uVar3 = *puVar13;
          puVar13 = puVar13 + 1;
          lVar11 = FUN_1402db3e8(&local_48,uVar3,&local_40);
          if (lVar11 == -1) goto LAB_1402c5dc2;
          local_68 = *(undefined8 *)(param_1 + 8);
          func_0x0001402c74fc(plVar2,&local_48,lVar11);
          iVar12 = iVar12 + 1;
        } while (iVar12 != *(int *)(param_1 + 0x48));
      }
    }
    else if (*(int *)(param_1 + 0x48) != 0) {
      do {
        local_48 = 0;
        local_68 = *(undefined8 *)(param_1 + 8);
        iVar7 = FUN_1402daec8(&local_48,&local_40,6);
        if ((iVar7 != 0) || (local_48 == 0)) goto LAB_1402c5dc2;
        local_68 = *(undefined8 *)(param_1 + 8);
        func_0x0001402c74fc(plVar2,&local_40);
        iVar12 = iVar12 + 1;
      } while (iVar12 != *(int *)(param_1 + 0x48));
    }
  }
  goto LAB_1402c5e40;
LAB_1402c5dc2:
  *piVar1 = -1;
LAB_1402c5e40:
  iVar12 = *(int *)(param_1 + 0x20);
  if ((-1 < iVar12) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    piVar1 = (int *)(param_1 + 0x20);
    iVar7 = 0;
    if (0 < iVar9) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x460);
        if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
          if (*(char *)(lVar11 + 0x18) == '\0') {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          *piVar1 = iVar12;
        }
        else {
          *piVar1 = iVar12 + 1;
          *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
          *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
          **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
        }
        iVar12 = *piVar1;
      } while ((iVar12 != -1) && (iVar7 = iVar7 + 1, iVar7 < iVar9));
    }
  }
LAB_1402c5eb4:
  func_0x0001402ed2f0(local_38 ^ (ulonglong)auStack_88);
  return;
}

