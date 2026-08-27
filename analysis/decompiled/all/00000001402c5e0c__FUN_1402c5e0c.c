// Function: FUN_1402c5e0c
// Addr: 1402c5e0c
// Size: 1532 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402c5e0c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  ulonglong local_48 [2];
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;
  ulonglong uVar11;
  
  local_48[1] = 0xfffffffffffffffe;
  local_30 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  uVar5 = *(ushort *)(param_1 + 0x3a);
  uVar9 = 0x78;
  if (uVar5 < 0x65) {
    if (uVar5 == 100) {
LAB_1402c5ef7:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1402c5efb:
      cVar4 = FUN_1402c2a64(param_1,0);
    }
    else if (uVar5 < 0x54) {
      if (uVar5 == 0x53) {
LAB_1402c5f3d:
        cVar4 = FUN_1402c7234(param_1);
      }
      else {
        if (uVar5 != 0x41) {
          if (uVar5 == 0x43) {
LAB_1402c5eb1:
            cVar4 = FUN_1402c701c(param_1,0);
            goto LAB_1402c5f5f;
          }
          if (((uVar5 != 0x45) && (uVar5 != 0x46)) && (uVar5 != 0x47)) {
            return 0;
          }
        }
LAB_1402c5e88:
        cVar4 = FUN_1402c6ccc(param_1);
      }
    }
    else {
      if (uVar5 == 0x58) goto LAB_1402c5f55;
      if (uVar5 != 0x5a) {
        if (uVar5 != 0x61) {
          if (uVar5 != 99) {
            return 0;
          }
          goto LAB_1402c5eb1;
        }
        goto LAB_1402c5e88;
      }
      cVar4 = FUN_1402c69fc(param_1);
    }
  }
  else if (uVar5 < 0x70) {
    if (uVar5 == 0x6f) {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar4 = FUN_1402c2654(param_1,0);
    }
    else {
      if (((uVar5 == 0x65) || (uVar5 == 0x66)) || (uVar5 == 0x67)) goto LAB_1402c5e88;
      if (uVar5 == 0x69) goto LAB_1402c5ef7;
      if (uVar5 != 0x6e) {
        return 0;
      }
      cVar4 = FUN_1402c70e0(param_1);
    }
  }
  else {
    if (uVar5 == 0x70) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1402c5f55:
      uVar8 = 1;
    }
    else {
      if (uVar5 == 0x73) goto LAB_1402c5f3d;
      if (uVar5 == 0x75) goto LAB_1402c5efb;
      if (uVar5 != 0x78) {
        return 0;
      }
      uVar8 = 0;
    }
    cVar4 = FUN_1402c2e74(param_1,uVar8);
  }
LAB_1402c5f5f:
  uVar14 = 0;
  if (cVar4 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 1;
  }
  local_38 = 0;
  local_34 = 0;
  uVar10 = *(uint *)(param_1 + 0x28);
  uVar13 = uVar14;
  if ((uVar10 >> 4 & 1) != 0) {
    if ((uVar10 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
        uVar5 = 0x2b;
        goto LAB_1402c5fa2;
      }
      if ((uVar10 >> 1 & 1) == 0) goto LAB_1402c5fc7;
      local_38 = 0x20;
    }
    else {
      uVar5 = 0x2d;
LAB_1402c5fa2:
      local_38 = (uint)uVar5;
    }
    uVar13 = 1;
  }
LAB_1402c5fc7:
  sVar6 = *(short *)(param_1 + 0x3a);
  if (((sVar6 - 0x58U & 0xffdf) != 0) || (bVar3 = true, (uVar10 >> 5 & 1) == 0)) {
    bVar3 = false;
  }
  if ((bVar3) || ((sVar6 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)&local_38 + uVar13 * 2) = 0x30;
    if ((sVar6 == 0x58) || (sVar6 == 0x41)) {
      uVar9 = 0x58;
    }
    *(undefined2 *)((longlong)&local_38 + uVar13 * 2 + 2) = uVar9;
    uVar13 = uVar13 + 2;
  }
  iVar15 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x48)) - (int)uVar13;
  if (((uVar10 & 0xc) == 0) && (uVar8 = *(undefined8 *)(param_1 + 8), uVar11 = uVar14, 0 < iVar15))
  {
    while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
           (sVar6 = FUN_1402db5fc(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), sVar6 != -1))) {
      iVar12 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar12 + 1;
      if ((iVar12 == -2) ||
         (uVar10 = (int)uVar11 + 1, uVar11 = (ulonglong)uVar10, iVar15 <= (int)uVar10))
      goto LAB_1402c60a4;
    }
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
LAB_1402c60a4:
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_1402c7648(plVar2,&local_38,uVar13,piVar1);
  }
  else {
    *piVar1 = *piVar1 + (int)uVar13;
  }
  if ((((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0))
     && (uVar8 = *(undefined8 *)(param_1 + 8), uVar13 = uVar14, 0 < iVar15)) {
    while ((((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*plVar2 + 8) == 0)) ||
           (sVar6 = FUN_1402db5fc(0x30,*plVar2,uVar8), sVar6 != -1))) {
      iVar12 = *piVar1;
      *piVar1 = iVar12 + 1;
      if ((iVar12 == -2) ||
         (uVar10 = (int)uVar13 + 1, uVar13 = (ulonglong)uVar10, iVar15 <= (int)uVar10))
      goto LAB_1402c6155;
    }
    *piVar1 = -1;
  }
LAB_1402c6155:
  if ((*(char *)(param_1 + 0x4c) == '\0') && (0 < *(int *)(param_1 + 0x48))) {
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_1402c0d90(lVar7);
    }
    if (*(int *)(*(longlong *)(lVar7 + 0x18) + 0xc) == 0xfde9) {
      local_48[0] = *(ulonglong *)(param_1 + 0x40);
      local_50 = 0;
      uVar13 = uVar14;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          iVar12 = (int)uVar13;
          local_38 = 0;
          local_68 = *(undefined8 *)(param_1 + 8);
          lVar7 = FUN_1402db404(&local_38,local_48,2,&local_50);
          if (lVar7 == -1) goto LAB_1402c627f;
          if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
             (sVar6 = FUN_1402db5fc((undefined2)local_38,*(undefined8 *)(param_1 + 0x460),
                                    *(undefined8 *)(param_1 + 8)), sVar6 == -1)) {
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          if (lVar7 == 2) {
            if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
               (sVar6 = FUN_1402db5fc(local_38._2_2_,*(undefined8 *)(param_1 + 0x460),
                                      *(undefined8 *)(param_1 + 8)), sVar6 == -1)) {
              *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
            iVar12 = iVar12 + 1;
          }
          uVar13 = (ulonglong)(iVar12 + 1U);
        } while (iVar12 + 1U != *(uint *)(param_1 + 0x48));
      }
    }
    else {
      lVar7 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar7 + 0x28) == '\0') {
        FUN_1402c0d90(lVar7);
      }
      lVar16 = *(longlong *)(param_1 + 0x40);
      uVar13 = uVar14;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_38 = local_38 & 0xffff0000;
          iVar12 = FUN_1402dafa8(&local_38,lVar16,
                                 (longlong)*(int *)(*(longlong *)(lVar7 + 0x18) + 8),
                                 *(undefined8 *)(param_1 + 8));
          if (iVar12 < 1) goto LAB_1402c627f;
          if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
             (sVar6 = FUN_1402db5fc((undefined2)local_38,*(undefined8 *)(param_1 + 0x460),
                                    *(undefined8 *)(param_1 + 8)), sVar6 == -1)) {
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          lVar16 = lVar16 + iVar12;
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while (uVar10 != *(uint *)(param_1 + 0x48));
      }
    }
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x460);
    if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
      local_68 = *(undefined8 *)(param_1 + 8);
      FUN_1402c7648(plVar2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
    }
  }
LAB_1402c6367:
  if (((-1 < *(int *)(param_1 + 0x20)) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) &&
     (uVar8 = *(undefined8 *)(param_1 + 8), 0 < iVar15)) {
    while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
           (sVar6 = FUN_1402db5fc(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), sVar6 != -1))) {
      iVar12 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar12 + 1;
      if (iVar12 == -2) {
        return 1;
      }
      uVar10 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar10;
      if (iVar15 <= (int)uVar10) {
        return 1;
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  return 1;
LAB_1402c627f:
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  goto LAB_1402c6367;
}

