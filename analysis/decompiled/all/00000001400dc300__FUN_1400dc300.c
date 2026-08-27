// Function: FUN_1400dc300
// Addr: 1400dc300
// Size: 1869 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1400dc300(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 **ppuVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 *local_res8;
  ulonglong local_res10;
  undefined4 local_res20;
  undefined1 auStack_1168 [8];
  undefined1 auStack_1160 [24];
  undefined8 local_1148;
  undefined4 local_1140;
  longlong local_1138;
  undefined8 *local_1130;
  longlong local_1128;
  longlong lStack_1120;
  undefined8 local_1118;
  longlong local_1110;
  longlong lStack_1108;
  undefined8 local_1100;
  undefined8 *local_10f8;
  longlong local_10f0;
  longlong lStack_10e8;
  undefined8 local_10e0;
  longlong local_10d8;
  longlong lStack_10d0;
  undefined8 local_10c8;
  longlong local_10c0;
  longlong lStack_10b8;
  undefined8 local_10b0;
  undefined1 *local_10a8;
  undefined1 *puStack_10a0;
  undefined1 *local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  ulonglong local_1080;
  undefined8 local_1078;
  longlong *local_1070;
  undefined8 *local_1068;
  undefined8 *local_1060;
  uint local_1058;
  uint local_1054;
  uint local_1050;
  undefined4 local_104c;
  undefined2 local_1048;
  char local_1046;
  byte local_1045;
  undefined1 local_1044;
  undefined1 local_1038 [4088];
  undefined8 uStack_40;
  
  uStack_40 = 0x1400dc321;
  puVar11 = auStack_1168;
  plVar13 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  puVar12 = (undefined8 *)(*plVar13 + (longlong)param_1);
  local_res20 = param_4;
  if (param_2 != (undefined8 *)0x0) {
    *(undefined1 *)(param_2 + 1) = 1;
    FUN_1400e11d0(param_2);
  }
  lVar6 = *param_3;
  if (lVar6 == 0) {
    return 0;
  }
  local_1050 = *(uint *)(lVar6 + 0x28);
  local_1070 = param_3 + 1;
  local_1058 = *(uint *)(lVar6 + 0x20);
  local_1118 = 0;
  local_1100 = 0;
  local_10e0 = 0;
  local_10c8 = 0;
  local_10b0 = 0;
  uStack_1090 = 0;
  local_1128 = 0;
  lStack_1120 = 0;
  local_10d8 = 0;
  lStack_10d0 = 0;
  local_10a8 = (undefined1 *)0x0;
  puStack_10a0 = (undefined1 *)0x0;
  local_1046 = 0;
  local_1130 = (undefined8 *)0x0;
  local_1110 = 0;
  lStack_1108 = 0;
  local_10f8 = (undefined8 *)0x0;
  local_10f0 = 0;
  lStack_10e8 = 0;
  local_10c0 = 0;
  lStack_10b8 = 0;
  local_1098 = (undefined1 *)0x0;
  local_1054 = 0;
  local_104c = 0;
  local_1048 = 0;
  local_1045 = *(byte *)(lVar6 + 0xc) >> 3 & 1;
  local_1068 = param_1;
  local_1060 = puVar12;
  if ((*(uint *)(lVar6 + 0xc) & 0x100) != 0) {
    local_res20 = CONCAT31(local_res20._1_3_,0x57);
    uVar3 = FUN_1400e5270(local_1070,&local_res20,(longlong)&local_res20 + 1,
                          local_1058 >> 8 & 0xffffff01);
    local_104c = CONCAT22(local_104c._2_2_,uVar3);
  }
  if ((*(uint *)(lVar6 + 0xc) & 0x200) != 0) {
    local_res20 = CONCAT31(local_res20._1_3_,0x53);
    uVar3 = FUN_1400e5270(local_1070,&local_res20,(longlong)&local_res20 + 1,
                          local_1058 >> 8 & 0xffffff01);
    local_104c = CONCAT22(uVar3,(undefined2)local_104c);
  }
  if ((*(uint *)(lVar6 + 0xc) & 0x400) != 0) {
    local_res20 = CONCAT31(local_res20._1_3_,0x44);
    local_1048 = FUN_1400e5270(local_1070,&local_res20,(longlong)&local_res20 + 1,
                               local_1058 >> 8 & 0xffffff01);
  }
  lVar14 = (longlong)puVar12 - (longlong)param_1;
  uVar7 = lVar14 / 3 + 0x4c4b4;
  local_1080 = 0x7ffffffffffffff;
  if (uVar7 < 0x7ffffffffffffff) {
    local_1080 = uVar7;
  }
  if (lVar14 < 0x7ffffffffffb6d) {
    local_1138 = lVar14 * 0x100 + 300000;
  }
  else {
    local_1138 = 0x7fffffffffffffff;
  }
  local_res10 = 0x1000;
  local_1078 = *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0x10);
  local_res8 = local_1038;
  FUN_1400e42e0(&local_10c0,&local_res8,&local_res10,*(undefined4 *)(lVar6 + 0x24));
  if (1 < local_1050) {
    FUN_1400e41a0(&local_1128,&local_res8,&local_res10,local_1050 - 1);
    if (local_1045 != 0) {
      FUN_1400e41a0(&local_10f0,&local_res8,&local_res10,local_1050 - 1);
    }
    FUN_1400e4450(&local_1110,&local_res8,&local_res10,local_1050 - 1);
    if (local_1045 != 0) {
      FUN_1400e4450(&local_10d8,&local_res8,&local_res10,local_1050 - 1);
    }
  }
  uVar4 = (ulonglong)((uint)local_res8 & 7);
  uVar7 = 8 - uVar4;
  if (uVar4 == 0) {
    uVar7 = 0;
  }
  if (((uVar7 <= local_res10) && (0x1f < local_res10 - uVar7)) &&
     (puVar8 = local_res8 + uVar7, puVar8 != (undefined1 *)0x0)) {
    local_1098 = puVar8 + (local_res10 - uVar7 & 0xffffffffffffffe0);
    local_10a8 = puVar8;
    puStack_10a0 = puVar8;
  }
  if ((local_1058 & 0x3e) != 0) {
    local_1058 = local_1058 & 0xffffefff;
  }
  local_1130 = local_1068;
  local_1044 = 0;
  local_1088 = 0;
  local_1046 = '\0';
  cVar2 = FUN_1400e1c00(&local_1138,local_1078);
  if ((cVar2 == '\0') && (local_1046 == '\0')) {
    uVar17 = 0;
    if (param_1 != puVar12) {
      local_1140 = 0;
      local_1054 = local_1054 & 0xffffdfff | 0x100;
      local_1148 = 0;
      puVar5 = (undefined8 *)FUN_1400dfe50(&local_1138,&local_res8,(longlong)param_1 + 1,puVar12);
      for (puVar5 = (undefined8 *)*puVar5; puVar5 != puVar12; puVar5 = (undefined8 *)*puVar5) {
        local_1044 = 0;
        local_1088 = 0;
        local_1046 = '\0';
        local_1130 = puVar5;
        local_1068 = puVar5;
        cVar2 = FUN_1400e1c00(&local_1138,local_1078);
        if ((cVar2 != '\0') || (local_1046 != '\0')) goto LAB_1400dc758;
        local_1140 = 0;
        local_1148 = 0;
        puVar5 = (undefined8 *)FUN_1400dfe50(&local_1138,&local_res8,(longlong)puVar5 + 1,puVar12);
      }
      local_1044 = 0;
      local_1088 = 0;
      local_1046 = '\0';
      local_1130 = puVar12;
      local_1068 = puVar12;
      cVar2 = FUN_1400e1c00(&local_1138,local_1078);
      if ((cVar2 != '\0') || (local_1046 != '\0')) goto LAB_1400dc758;
    }
  }
  else {
LAB_1400dc758:
    uVar17 = 1;
    if (param_2 != (undefined8 *)0x0) {
      FUN_1400e11d0(param_2,local_1050);
      if (local_1045 == 0) {
        ppuVar9 = &local_1130;
        plVar13 = &local_1110;
        plVar10 = &local_1128;
      }
      else {
        ppuVar9 = &local_10f8;
        plVar13 = &local_10d8;
        plVar10 = &local_10f0;
      }
      puVar12 = (undefined8 *)param_2[2];
      uVar15 = 1;
      *(undefined1 *)(puVar12 + 2) = 1;
      *puVar12 = local_1068;
      puVar12[1] = *ppuVar9;
      if (1 < local_1050) {
        do {
          uVar16 = uVar15 - 1;
          uVar7 = (ulonglong)uVar15;
          if ((*(ulonglong *)(*plVar13 + (ulonglong)(uVar16 >> 6) * 8) >> ((byte)uVar16 & 0x3f) & 1)
              == 0) {
            *(undefined1 *)(param_2[2] + 0x10 + uVar7 * 0x18) = 0;
            *(undefined8 **)(param_2[2] + uVar7 * 0x18) = local_1060;
            puVar12 = local_1060;
          }
          else {
            *(undefined1 *)(param_2[2] + 0x10 + uVar7 * 0x18) = 1;
            *(undefined8 *)(param_2[2] + uVar7 * 0x18) =
                 *(undefined8 *)(*plVar10 + (ulonglong)uVar16 * 0x10);
            puVar12 = *(undefined8 **)(*plVar10 + 8 + (ulonglong)uVar16 * 0x10);
          }
          uVar15 = uVar15 + 1;
          *(undefined8 **)(param_2[2] + 8 + uVar7 * 0x18) = puVar12;
        } while (uVar15 < local_1050);
      }
      puVar12 = *(undefined8 **)param_2[2];
      param_2[6] = puVar12;
      puVar5 = (undefined8 *)((undefined8 *)param_2[2])[1];
      param_2[8] = puVar5;
      param_2[9] = local_1060;
      param_2[0xb] = local_1060;
      param_2[0xc] = local_1060;
      *(bool *)(param_2 + 10) = puVar5 != local_1060;
      *param_2 = param_1;
      *(bool *)(param_2 + 7) = param_1 != puVar12;
      param_2[5] = param_1;
    }
  }
  if ((char)uStack_1090 == '\0') {
LAB_1400dc8b9:
    if ((char)local_10b0 != '\0') {
      uVar7 = (lStack_10b8 - local_10c0 >> 3) * 8;
      lVar6 = local_10c0;
      if (0xfff < uVar7) {
        if (0x1f < (local_10c0 - *(longlong *)(local_10c0 + -8)) - 8U) goto LAB_1400dca28;
        uVar7 = uVar7 + 0x27;
        lVar6 = *(longlong *)(local_10c0 + -8);
      }
      thunk_FUN_14028af80(lVar6,uVar7);
    }
    if ((char)local_10c8 != '\0') {
      uVar7 = (lStack_10d0 - local_10d8 >> 3) * 8;
      lVar6 = local_10d8;
      if (0xfff < uVar7) {
        if (0x1f < (local_10d8 - *(longlong *)(local_10d8 + -8)) - 8U) goto LAB_1400dca28;
        uVar7 = uVar7 + 0x27;
        lVar6 = *(longlong *)(local_10d8 + -8);
      }
      thunk_FUN_14028af80(lVar6,uVar7);
    }
    if ((char)local_10e0 != '\0') {
      uVar7 = lStack_10e8 - local_10f0 & 0xfffffffffffffff0;
      lVar6 = local_10f0;
      if (0xfff < uVar7) {
        if (0x1f < (local_10f0 - *(longlong *)(local_10f0 + -8)) - 8U) goto LAB_1400dca28;
        uVar7 = uVar7 + 0x27;
        lVar6 = *(longlong *)(local_10f0 + -8);
      }
      thunk_FUN_14028af80(lVar6,uVar7);
    }
    if ((char)local_1100 != '\0') {
      uVar7 = (lStack_1108 - local_1110 >> 3) * 8;
      lVar6 = local_1110;
      if (0xfff < uVar7) {
        if (0x1f < (local_1110 - *(longlong *)(local_1110 + -8)) - 8U) goto LAB_1400dca28;
        uVar7 = uVar7 + 0x27;
        lVar6 = *(longlong *)(local_1110 + -8);
      }
      thunk_FUN_14028af80(lVar6,uVar7);
    }
    if ((char)local_1118 == '\0') {
      return uVar17;
    }
    lVar6 = local_1128;
    if (((lStack_1120 - local_1128 & 0xfffffffffffffff0U) < 0x1000) ||
       (lVar6 = *(longlong *)(local_1128 + -8), puVar11 = auStack_1168,
       (local_1128 - *(longlong *)(local_1128 + -8)) - 8U < 0x20)) goto LAB_1400dca32;
  }
  else {
    uVar7 = (longlong)local_1098 - (longlong)local_10a8 & 0xffffffffffffffe0;
    puVar8 = local_10a8;
    if (uVar7 < 0x1000) {
LAB_1400dc8b4:
      thunk_FUN_14028af80(puVar8,uVar7);
      goto LAB_1400dc8b9;
    }
    if (local_10a8 + (-8 - (longlong)*(undefined1 **)(local_10a8 + -8)) < (undefined1 *)0x20) {
      uVar7 = uVar7 + 0x27;
      puVar8 = *(undefined1 **)(local_10a8 + -8);
      goto LAB_1400dc8b4;
    }
  }
LAB_1400dca28:
  pcVar1 = (code *)swi(0x29);
  lVar6 = (*pcVar1)(5);
  puVar11 = auStack_1160;
LAB_1400dca32:
  *(undefined8 *)(puVar11 + -8) = 0x1400dca37;
  thunk_FUN_14028af80(lVar6);
  return uVar17;
}

