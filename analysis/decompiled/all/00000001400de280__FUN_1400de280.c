// Function: FUN_1400de280
// Addr: 1400de280
// Size: 1163 bytes


longlong * FUN_1400de280(longlong *param_1,char *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  code *pcVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  size_t sVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  longlong *local_res20;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 local_c8;
  char *local_b8;
  char *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  uint local_50;
  undefined1 local_44;
  
  plVar17 = (longlong *)0x0;
  *param_1 = 0;
  local_res18[0] = param_3;
  lVar8 = FUN_140291700(1);
  param_1[4] = lVar8;
  FUN_1402914b0(local_res8,0);
  plVar16 = DAT_1404e8f70;
  local_res20 = DAT_1404e8f70;
  if (DAT_1404e91c0 == 0) {
    FUN_1402914b0(local_res18,0);
    if (DAT_1404e91c0 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e91c0 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550(local_res18);
  }
  uVar6 = DAT_1404e91c0;
  lVar12 = param_1[4];
  lVar8 = DAT_1404e91c0 * 8;
  plVar13 = plVar17;
  if ((DAT_1404e91c0 < *(ulonglong *)(lVar12 + 0x18)) &&
     (plVar13 = *(longlong **)(lVar8 + *(longlong *)(lVar12 + 0x10)), plVar13 != (longlong *)0x0)) {
LAB_1400de33f:
    plVar16 = param_1 + 1;
    FUN_140291550(local_res8);
    *plVar16 = (longlong)plVar13;
    lVar8 = FUN_140013d40(param_1 + 3);
    param_1[2] = lVar8;
    local_b8 = param_2;
    sVar9 = strlen(param_2);
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    lStack_90 = 0;
    local_b0 = param_2 + sVar9;
    local_88 = 0;
    local_80 = (longlong *)FUN_14028af20(0x30);
    *local_80 = (longlong)&PTR_FUN_140486dc8;
    local_80[1] = 0x14;
    local_80[2] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_80[5] = 0;
    local_70 = 1;
    local_50 = 1;
    local_44 = 0;
    local_58 = 0x43baefb;
    local_78 = local_80;
    local_68 = plVar16;
    local_60 = plVar16;
    FUN_1400e1430(&local_b8);
    puVar10 = (undefined8 *)FUN_14028af20(0x28);
    *puVar10 = &PTR_FUN_140486c20;
    puVar10[1] = 0xd;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
    uVar11 = FUN_1400e5e40(&local_80,puVar10);
    FUN_1400e1650(&local_b8);
    FUN_1400e1a50(&local_80,uVar11);
    puVar10 = (undefined8 *)FUN_14028af20(0x20);
    *puVar10 = &PTR_FUN_140486c30;
    puVar10[1] = 0x15;
    puVar10[2] = 0;
    puVar10[3] = 0;
    FUN_1400e5e40(&local_80,puVar10);
    plVar7 = local_80;
    *(uint *)(local_80 + 4) = local_50;
    *(int *)(local_80 + 5) = (int)local_a8 + 1;
    plVar13 = plVar17;
    for (plVar16 = local_80; plVar16 != (longlong *)0x0; plVar16 = (longlong *)plVar16[2]) {
      plVar14 = plVar13;
      switch((int)plVar16[1]) {
      case 7:
        if ((plVar13 != (longlong *)0x0) &&
           ((((plVar16[4] != 0 &&
              ((((plVar16[5] != 0 || (plVar16[6] != 0)) || (plVar16[7] != 0)) ||
               (((short)plVar16[8] != 0 || (*(longlong *)(plVar16[4] + 0x18) != 0)))))) ||
             (plVar16[9] != 0)) ||
            (((local_50 & 0x800) != 0 &&
             ((plVar16[7] != 0 || ((*(byte *)((longlong)plVar16 + 0xc) & 1) != 0)))))))) {
          *(uint *)((longlong)plVar13 + 0xc) = *(uint *)((longlong)plVar13 + 0xc) & 0xffffefff;
          *(undefined4 *)((longlong)plVar13 + 0x34) = 0;
        }
        break;
      case 10:
        if (plVar13 != (longlong *)0x0) {
          *(uint *)((longlong)plVar13 + 0xc) = *(uint *)((longlong)plVar13 + 0xc) & 0xffffefff;
          *(undefined4 *)((longlong)plVar13 + 0x34) = 0;
        }
      case 0xb:
        local_c8 = 1;
        FUN_1400e1830(&local_b8,plVar16[4],0,0);
        break;
      case 0x10:
        if (plVar13 != (longlong *)0x0) {
          *(uint *)((longlong)plVar13 + 0xc) = *(uint *)((longlong)plVar13 + 0xc) & 0xffffefff;
          *(undefined4 *)((longlong)plVar13 + 0x34) = 0;
        }
        for (lVar8 = plVar16[5]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x28)) {
          local_c8 = 1;
          FUN_1400e1830(&local_b8,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x20),
                        plVar13);
        }
        break;
      case 0x12:
        if (plVar13 == (longlong *)0x0) {
          *(uint *)((longlong)plVar16 + 0xc) = *(uint *)((longlong)plVar16 + 0xc) | 0x1000;
          plVar14 = plVar16;
        }
        else {
          *(uint *)((longlong)plVar13 + 0xc) = *(uint *)((longlong)plVar13 + 0xc) & 0xffffefff;
          *(undefined4 *)((longlong)plVar13 + 0x34) = 0;
          *(uint *)((longlong)plVar16 + 0xc) = *(uint *)((longlong)plVar16 + 0xc) | 0x1000;
          bVar4 = 1 < *(uint *)((longlong)plVar13 + 0x24);
          if (bVar4) {
            *(undefined4 *)((longlong)plVar16 + 0x34) = 0;
          }
          local_c8 = !bVar4;
          FUN_1400e1830(&local_b8,plVar16[2],*(undefined8 *)(plVar16[5] + 0x10),plVar16);
          plVar16 = (longlong *)plVar16[5];
        }
        break;
      case 0x13:
        if ((plVar13 == (longlong *)plVar16[4]) &&
           (plVar14 = plVar17, *(int *)((longlong)plVar13 + 0x34) == -1)) {
          *(undefined4 *)((longlong)plVar13 + 0x34) = 1;
        }
      }
      plVar13 = plVar14;
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0x2c);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x2c);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        puVar10 = (undefined8 *)*param_1;
        while (puVar10 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)puVar10[2];
          puVar10[2] = 0;
          (**(code **)*puVar10)(puVar10,1);
          puVar10 = puVar3;
        }
      }
    }
    *param_1 = (longlong)plVar7;
    if (local_a0 == 0) {
      return param_1;
    }
    lVar8 = local_a0;
    puVar15 = auStack_e8;
    if (((ulonglong)((lStack_90 - local_a0 >> 2) * 4) < 0x1000) ||
       (lVar8 = *(longlong *)(local_a0 + -8), puVar15 = auStack_e8, (local_a0 - lVar8) - 8U < 0x20))
    goto LAB_1400de6e5;
  }
  else {
    if (*(char *)(lVar12 + 0x24) == '\0') {
LAB_1400de4c2:
      if (plVar13 != (longlong *)0x0) goto LAB_1400de33f;
    }
    else {
      lVar12 = FUN_1402916f0();
      if (uVar6 < *(ulonglong *)(lVar12 + 0x18)) {
        plVar13 = *(longlong **)(lVar8 + *(longlong *)(lVar12 + 0x10));
        goto LAB_1400de4c2;
      }
    }
    plVar13 = plVar16;
    if (plVar16 != (longlong *)0x0) goto LAB_1400de33f;
    lVar8 = FUN_1400e6fa0(&local_res20,param_1 + 3);
    plVar13 = local_res20;
    if (lVar8 != -1) {
      plVar16 = local_res20;
      FUN_1402916b0(local_res20);
      (**(code **)(*plVar13 + 8))(plVar13);
      DAT_1404e8f70 = plVar16;
      goto LAB_1400de33f;
    }
  }
  lVar8 = 5;
  pcVar5 = (code *)swi(0x29);
  (*pcVar5)(5);
  puVar15 = auStack_e0;
LAB_1400de6e5:
  *(undefined8 *)(puVar15 + -8) = 0x1400de6ed;
  thunk_FUN_14028af80(lVar8);
  return param_1;
}

