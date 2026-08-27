// Function: FUN_1401d6400
// Addr: 1401d6400
// Size: 1964 bytes


void FUN_1401d6400(uint *param_1,longlong *param_2,ulonglong param_3,char param_4,
                  undefined4 *param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint *puVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  uint *local_res8;
  int local_64;
  uint *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  uint *local_40;
  undefined1 local_38 [16];
  
  uVar24 = ((((param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_3 >> 8 & 0xff) *
             0x100000001b3 ^ param_3 >> 0x10 & 0xff) * 0x100000001b3 ^ param_3 >> 0x18 & 0xff) *
           0x100000001b3 & *(ulonglong *)(param_1 + 0x72);
  lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x6c) + 8 + uVar24 * 0x10);
  if (lVar23 == *(longlong *)(param_1 + 0x68)) {
LAB_1401d64b1:
    lVar23 = 0;
  }
  else {
    iVar13 = *(int *)(lVar23 + 0x10);
    while ((int)param_3 != iVar13) {
      if (lVar23 == *(longlong *)(*(longlong *)(param_1 + 0x6c) + uVar24 * 0x10))
      goto LAB_1401d64b1;
      lVar23 = *(longlong *)(lVar23 + 8);
      iVar13 = *(int *)(lVar23 + 0x10);
    }
  }
  if ((lVar23 == 0) || (lVar23 == *(longlong *)(param_1 + 0x68))) {
    *param_5 = 4;
    return;
  }
  local_60 = *(uint **)(lVar23 + 0x18);
  if ((param_4 == '\0') &&
     ((ulonglong)(*(longlong *)(local_60 + 0x90) - *(longlong *)(local_60 + 0x8e) >> 5) <
      (ulonglong)(longlong)(int)param_2[1])) {
    *param_5 = 10;
    return;
  }
  uVar20 = 9;
  if (0 < (int)param_2[1]) {
    uVar20 = (int)param_2[1] << 8 | 9;
  }
  local_res8 = param_1;
  if (**(uint **)(lVar23 + 0x18) < uVar20) {
    uVar14 = thunk_FUN_14028af20(uVar20);
    FUN_1404217a0(uVar14,0,uVar20);
    FUN_1404210f0(uVar14,*(undefined8 *)(local_60 + 2),*local_60);
    thunk_FUN_14028af80(*(undefined8 *)(local_60 + 2));
    *(undefined8 *)(local_60 + 2) = uVar14;
    *local_60 = uVar20;
  }
  plVar15 = (longlong *)FUN_1401da9c0(param_1 + 0x78,local_38,&local_60);
  bVar10 = false;
  local_64 = 0;
  local_48 = *plVar15;
  local_40 = local_60;
  iVar13 = (int)param_2[1];
  lVar23 = *(longlong *)(local_60 + 2) + 9;
  local_58 = lVar23;
  if (iVar13 < 1) {
LAB_1401d69bd:
    iVar21 = 0;
    iVar25 = 0;
    if (0 < iVar13) {
      do {
        if (*(char *)(*param_2 + 300 + (longlong)iVar21 * 0x130) != '\0') {
          lVar22 = (longlong)iVar25 * 0x20;
          lVar23 = *(longlong *)(local_60 + 0x8e);
          lVar18 = *(longlong *)(local_60 + 8);
          lVar26 = (longlong)iVar25 * 200;
          puVar16 = *(undefined8 **)(lVar23 + lVar22);
          if (puVar16 != (undefined8 *)0x0) {
            (**(code **)*puVar16)(puVar16,1);
          }
          *(undefined8 *)(lVar23 + lVar22) = 0;
          puVar16 = *(undefined8 **)(lVar23 + 0x18 + lVar22);
          if (puVar16 != (undefined8 *)0x0) {
            (**(code **)*puVar16)(puVar16,1);
          }
          *(undefined8 *)(lVar23 + 0x18 + lVar22) = 0;
          thunk_FUN_14028af80(*(undefined8 *)(lVar18 + 0x98 + lVar26));
          puVar11 = local_60;
          lVar23 = *(longlong *)(local_60 + 0x8e) + lVar22 + 0x20;
          FUN_1404210f0(*(longlong *)(local_60 + 0x8e) + lVar22,lVar23,
                        *(longlong *)(local_60 + 0x90) - lVar23);
          puVar1 = local_60;
          *(longlong *)(puVar11 + 0x90) = *(longlong *)(puVar11 + 0x90) + -0x20;
          FUN_1401db100(*(longlong *)(local_60 + 8) + lVar26 + 200,*(undefined8 *)(local_60 + 10));
          lVar23 = *(longlong *)(puVar1 + 10);
          FUN_1401dcd40(lVar23 + -0x18);
          FUN_1401d9d50(lVar23 + -0x60);
          FUN_14000d9e0(lVar23 + -200);
          puVar1 = puVar1 + 10;
          *(longlong *)puVar1 = *(longlong *)puVar1 + -200;
          iVar25 = iVar25 + -1;
          bVar10 = true;
        }
        iVar21 = iVar21 + 1;
        iVar25 = iVar25 + 1;
      } while (iVar21 < (int)param_2[1]);
    }
LAB_1401d6add:
    if (bVar10) {
LAB_1401d6ae1:
      puVar1 = local_40;
      puVar16 = *(undefined8 **)(local_48 + 0x20);
      for (puVar17 = (undefined8 *)*puVar16; puVar17 != puVar16; puVar17 = (undefined8 *)*puVar17) {
        plVar15 = (longlong *)puVar17[10];
        local_res8 = puVar1;
        if (plVar15 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2c0();
        }
        (**(code **)(*plVar15 + 0x10))(plVar15,&local_res8);
      }
    }
    return;
  }
LAB_1401d65d1:
  uVar24 = (ulonglong)local_64;
  plVar15 = (longlong *)(uVar24 * 0x130 + *param_2);
  if ((*(char *)((longlong)plVar15 + 300) == '\0') && (*(char *)((longlong)plVar15 + 0x24) == '\0'))
  {
LAB_1401d6600:
    if ((param_4 != '\0') &&
       ((ulonglong)(*(longlong *)(local_60 + 0x90) - *(longlong *)(local_60 + 0x8e) >> 5) <= uVar24)
       ) {
      FUN_1401d8ec0();
      FUN_1401d8e10(local_60 + 8);
      local_50 = local_58;
      FUN_14019e140(uVar24 * 200 + *(longlong *)(local_60 + 8),&local_50);
      lVar23 = local_58;
    }
    if (*(char *)((longlong)plVar15 + 0x2c) != '\0') {
      iVar13 = FUN_1402c10d0((longlong)plVar15 + 0x2c,
                             **(undefined8 **)(uVar24 * 200 + *(longlong *)(local_60 + 8)));
      lVar23 = local_58;
      if (iVar13 != 0) {
        if (param_4 == '\0') {
          *param_5 = 0xc;
          goto LAB_1401d6add;
        }
        lVar18 = 2;
        bVar10 = true;
        puVar16 = *(undefined8 **)(uVar24 * 200 + *(longlong *)(local_60 + 8));
        puVar17 = (undefined8 *)((longlong)plVar15 + 0x2c);
        do {
          uVar14 = puVar17[1];
          *puVar16 = *puVar17;
          puVar16[1] = uVar14;
          uVar14 = puVar17[3];
          puVar16[2] = puVar17[2];
          puVar16[3] = uVar14;
          uVar14 = puVar17[5];
          puVar16[4] = puVar17[4];
          puVar16[5] = uVar14;
          uVar14 = puVar17[7];
          puVar16[6] = puVar17[6];
          puVar16[7] = uVar14;
          uVar14 = puVar17[9];
          puVar16[8] = puVar17[8];
          puVar16[9] = uVar14;
          uVar14 = puVar17[0xb];
          puVar16[10] = puVar17[10];
          puVar16[0xb] = uVar14;
          uVar2 = *(undefined4 *)((longlong)puVar17 + 100);
          uVar3 = *(undefined4 *)(puVar17 + 0xd);
          uVar4 = *(undefined4 *)((longlong)puVar17 + 0x6c);
          *(undefined4 *)(puVar16 + 0xc) = *(undefined4 *)(puVar17 + 0xc);
          *(undefined4 *)((longlong)puVar16 + 100) = uVar2;
          *(undefined4 *)(puVar16 + 0xd) = uVar3;
          *(undefined4 *)((longlong)puVar16 + 0x6c) = uVar4;
          uVar14 = puVar17[0xf];
          puVar16[0xe] = puVar17[0xe];
          puVar16[0xf] = uVar14;
          lVar18 = lVar18 + -1;
          puVar16 = puVar16 + 0x10;
          puVar17 = puVar17 + 0x10;
        } while (lVar18 != 0);
      }
    }
    local_58 = lVar23 + 0x100;
    lVar23 = local_58;
    if (uVar24 < (ulonglong)(*(longlong *)(local_60 + 0x90) - *(longlong *)(local_60 + 0x8e) >> 5))
    {
      lVar18 = uVar24 * 200 + *(longlong *)(local_60 + 8);
      if (((int)plVar15[5] == 0) || (*(int *)(lVar18 + 0x38) == (int)plVar15[5])) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
        if (param_4 == '\0') {
          *param_5 = 0xd;
          goto LAB_1401d6add;
        }
      }
      lVar23 = *plVar15;
      plVar19 = (longlong *)(uVar24 * 0x20 + *(longlong *)(local_60 + 0x8e));
      if ((plVar15[2] == 0) && (plVar15[3] == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((lVar23 == 0) || (*(uint *)(plVar15 + 1) <= *(uint *)(plVar19 + 1))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar5) && (*(uint *)((longlong)plVar19 + 0xc) < *(uint *)(plVar15 + 4))) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (bVar6 || bVar8) {
        bVar7 = true;
        if (!bVar6) goto LAB_1401d67b1;
LAB_1401d67ba:
        bVar6 = true;
      }
      else {
        bVar7 = false;
LAB_1401d67b1:
        if (bVar9) goto LAB_1401d67ba;
        bVar6 = false;
      }
      if ((lVar23 != 0) && ((char)plVar19[2] == '\0')) {
        bVar7 = true;
      }
      if ((bVar5) && (*(char *)((longlong)plVar19 + 0x11) == '\0')) {
        bVar6 = true;
      }
      if ((*(char *)((longlong)plVar15 + 0x24) != '\0') &&
         (*(char *)((longlong)plVar19 + 0x12) != '\0')) {
        bVar6 = true;
      }
      if ((((lVar23 != 0) && ((char)plVar19[2] == '\0')) ||
          ((bVar5 && (*(char *)((longlong)plVar19 + 0x11) == '\0')))) || (bVar7 || bVar6)) {
        if (param_4 == '\0') {
          *param_5 = 7;
          goto LAB_1401d6add;
        }
        if (bVar7 || bVar6) {
          bVar10 = true;
          if ((undefined8 *)*plVar19 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plVar19)();
          }
          puVar1 = local_res8;
          *plVar19 = 0;
          FUN_1401c2f10(*(longlong *)local_res8,lVar18,plVar19,plVar15,param_5);
          lVar23 = local_58;
          if (*(char *)((longlong)plVar15 + 0x2c) != '\0') {
            lVar23 = FUN_14014ff70(*(longlong *)puVar1 + 0x1630,(longlong)plVar15 + 0x2c);
            if ((lVar23 == 0) ||
               (plVar15 = *(longlong **)(lVar23 + 0x1e0), plVar15 == (longlong *)0x0)) {
              *param_5 = 1;
            }
            else {
              cVar12 = (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined4 *)(lVar18 + 0x38));
              lVar23 = local_58;
              if (cVar12 != '\0') goto LAB_1401d699f;
              *param_5 = 2;
            }
            goto LAB_1401d6ae1;
          }
          goto LAB_1401d699f;
        }
      }
      else if (param_4 == '\0') {
        if (bVar8) {
          *param_5 = 5;
          goto LAB_1401d6add;
        }
        if (bVar9) {
          *param_5 = 6;
          goto LAB_1401d6add;
        }
      }
      if (lVar23 != 0) {
        local_50 = 0;
        cVar12 = (**(code **)(*(longlong *)*plVar19 + 0x10))
                           ((longlong *)*plVar19,&local_50,
                            (ulonglong)*(uint *)(plVar15 + 1) / (ulonglong)*(uint *)(lVar18 + 0x3c),
                            (int)plVar15[4]);
        if (cVar12 == '\0') {
          *param_5 = 8;
        }
        else {
          FUN_1404210f0(local_50,*plVar15,(longlong)*(int *)(lVar18 + 0x40));
          (**(code **)(*(longlong *)*plVar19 + 0x18))();
        }
      }
      if ((plVar15[2] == 0) || ((*(byte *)(lVar18 + 0x18) & 1) == 0)) {
        if ((plVar15[3] != 0) && ((*(byte *)(lVar18 + 0x18) & 1) == 0)) {
          local_50 = 0;
          cVar12 = (**(code **)(*(longlong *)*plVar19 + 0x20))
                             ((longlong *)*plVar19,&local_50,(int)plVar15[4]);
          if (cVar12 == '\0') goto LAB_1401d6957;
          lVar23 = plVar15[3];
          goto LAB_1401d693f;
        }
        lVar23 = local_58;
        if (plVar15[2] != 0 || plVar15[3] != 0) {
          *param_5 = 9;
          goto LAB_1401d6add;
        }
      }
      else {
        local_50 = 0;
        cVar12 = (**(code **)(*(longlong *)*plVar19 + 0x20))
                           ((longlong *)*plVar19,&local_50,(int)plVar15[4]);
        if (cVar12 == '\0') {
LAB_1401d6957:
          *param_5 = 8;
          lVar23 = local_58;
        }
        else {
          lVar23 = plVar15[2];
LAB_1401d693f:
          FUN_1404210f0(local_50,lVar23,(longlong)*(int *)(lVar18 + 0x50));
          (**(code **)(*(longlong *)*plVar19 + 0x28))();
          lVar23 = local_58;
        }
      }
    }
  }
  else {
    if (param_4 == '\0') {
      *param_5 = 0xb;
      goto LAB_1401d6add;
    }
    if (*(char *)((longlong)plVar15 + 300) == '\0') goto LAB_1401d6600;
  }
LAB_1401d699f:
  iVar13 = (int)param_2[1];
  local_64 = local_64 + 1;
  if (iVar13 <= local_64) goto LAB_1401d69bd;
  goto LAB_1401d65d1;
}

