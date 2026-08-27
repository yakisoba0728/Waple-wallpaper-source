// Function: FUN_1400deb10
// Addr: 1400deb10
// Size: 1884 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1400deb10(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                       uint param_5,undefined8 param_6)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 local_res18;
  ulonglong local_res20;
  undefined1 auStack_1168 [8];
  undefined1 auStack_1160 [24];
  undefined4 local_1148;
  longlong local_1138;
  longlong local_1130;
  longlong local_1128;
  longlong lStack_1120;
  undefined8 local_1118;
  longlong local_1110;
  longlong lStack_1108;
  undefined8 local_1100;
  longlong local_10f8;
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
  longlong local_1068;
  longlong local_1060;
  uint local_1058;
  uint local_1054;
  uint local_1050;
  undefined4 local_104c;
  undefined2 local_1048;
  char local_1046;
  char local_1045;
  undefined1 local_1044;
  undefined1 local_1038 [4096];
  
  uVar5 = 0x1138;
  puVar11 = auStack_1168;
  if (param_3 != (undefined8 *)0x0) {
    *(undefined1 *)(param_3 + 1) = 1;
    uVar5 = FUN_1400e11d0(param_3);
  }
  lVar7 = *param_4;
  if (lVar7 == 0) {
    return uVar5 & 0xffffffffffffff00;
  }
  lVar17 = param_1;
  if (((param_5 >> 0xe & 1) != 0) && (lVar17 = param_1 + 1, param_1 == param_2)) {
    lVar17 = param_1;
  }
  local_1058 = *(uint *)(lVar7 + 0x20);
  local_1070 = param_4 + 1;
  local_1050 = *(uint *)(lVar7 + 0x28);
  uVar5 = 0;
  local_1118 = 0;
  local_1110 = 0;
  lStack_1108 = 0;
  local_1100 = 0;
  local_10f0 = 0;
  lStack_10e8 = 0;
  local_10e0 = 0;
  local_10c8 = 0;
  local_10c0 = 0;
  lStack_10b8 = 0;
  local_10b0 = 0;
  local_1098 = (undefined1 *)0x0;
  uStack_1090 = 0;
  local_104c = 0;
  local_1048 = 0;
  local_1128 = 0;
  lStack_1120 = 0;
  local_10d8 = 0;
  lStack_10d0 = 0;
  local_10a8 = (undefined1 *)0x0;
  puStack_10a0 = (undefined1 *)0x0;
  local_1054 = param_5;
  local_1046 = 0;
  if (((*(byte *)(lVar7 + 0xc) & 8) == 0) || (local_1045 = '\x01', (param_5 & 0x10) != 0)) {
    local_1045 = '\0';
  }
  local_1068 = lVar17;
  local_1060 = param_2;
  if ((*(uint *)(lVar7 + 0xc) & 0x100) != 0) {
    local_res18 = (undefined1 *)CONCAT71(local_res18._1_7_,0x57);
    uVar4 = FUN_1400e5270(local_1070,&local_res18,(longlong)&local_res18 + 1,
                          local_1058 >> 8 & 0xffffff01);
    local_104c = CONCAT22(local_104c._2_2_,uVar4);
  }
  if ((*(uint *)(lVar7 + 0xc) & 0x200) != 0) {
    local_res18 = (undefined1 *)CONCAT71(local_res18._1_7_,0x53);
    uVar4 = FUN_1400e5270(local_1070,&local_res18,(longlong)&local_res18 + 1,
                          local_1058 >> 8 & 0xffffff01);
    local_104c = CONCAT22(uVar4,(undefined2)local_104c);
  }
  if ((*(uint *)(lVar7 + 0xc) & 0x400) != 0) {
    local_res18 = (undefined1 *)CONCAT71(local_res18._1_7_,0x44);
    local_1048 = FUN_1400e5270(local_1070,&local_res18,(longlong)&local_res18 + 1,
                               local_1058 >> 8 & 0xffffff01);
  }
  lVar14 = param_2 - lVar17;
  uVar8 = lVar14 / 3 + 0x4c4b4;
  local_1080 = 0x7ffffffffffffff;
  if (uVar8 < 0x7ffffffffffffff) {
    local_1080 = uVar8;
  }
  if (lVar14 < 0x7ffffffffffb6d) {
    local_1138 = lVar14 * 0x100 + 300000;
  }
  else {
    local_1138 = 0x7fffffffffffffff;
  }
  local_res20 = 0x1000;
  local_1078 = *(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x10);
  local_res18 = local_1038;
  FUN_1400e42e0(&local_10c0,&local_res18,&local_res20,*(undefined4 *)(lVar7 + 0x24));
  if (1 < local_1050) {
    FUN_1400e41a0(&local_1128,&local_res18,&local_res20,local_1050 - 1);
    if (local_1045 != '\0') {
      FUN_1400e41a0(&local_10f0,&local_res18,&local_res20,local_1050 - 1);
    }
    FUN_1400e4450(&local_1110,&local_res18,&local_res20,local_1050 - 1);
    if (local_1045 != '\0') {
      FUN_1400e4450(&local_10d8,&local_res18,&local_res20,local_1050 - 1);
    }
  }
  uVar6 = (ulonglong)((uint)local_res18 & 7);
  uVar8 = 8 - uVar6;
  if (uVar6 == 0) {
    uVar8 = 0;
  }
  if (((uVar8 <= local_res20) && (0x1f < local_res20 - uVar8)) &&
     (puVar9 = local_res18 + uVar8, puVar9 != (undefined1 *)0x0)) {
    local_1098 = puVar9 + (local_res20 - uVar8 & 0xffffffffffffffe0);
    local_10a8 = puVar9;
    puStack_10a0 = puVar9;
  }
  if ((local_1058 & 0x3e) != 0) {
    local_1058 = local_1058 & 0xffffefff;
  }
  local_1130 = local_1068;
  local_1044 = 0;
  local_1088 = 0;
  local_1046 = '\0';
  cVar3 = FUN_1400e2f70(&local_1138,local_1078);
  if ((cVar3 == '\0') && (local_1046 == '\0')) {
    if ((lVar17 != param_2) && ((param_5 & 0x40) == 0)) {
      local_1054 = local_1054 & 0xffffdfff | 0x100;
      local_1148 = 0;
      for (lVar7 = FUN_1400e07f0(&local_1138,lVar17 + 1,param_2,0); lVar7 != param_2;
          lVar7 = FUN_1400e07f0(&local_1138,lVar7 + 1,param_2,0)) {
        local_1044 = 0;
        local_1088 = 0;
        local_1046 = '\0';
        local_1130 = lVar7;
        local_1068 = lVar7;
        cVar3 = FUN_1400e2f70(&local_1138,local_1078);
        if ((cVar3 != '\0') || (local_1046 != '\0')) goto LAB_1400def6f;
        local_1148 = 0;
      }
      local_1044 = 0;
      local_1088 = 0;
      local_1046 = '\0';
      local_1130 = param_2;
      local_1068 = param_2;
      cVar3 = FUN_1400e2f70(&local_1138,local_1078);
      if ((cVar3 != '\0') || (local_1046 != '\0')) goto LAB_1400def6f;
    }
  }
  else {
LAB_1400def6f:
    uVar5 = 1;
    if (param_3 != (undefined8 *)0x0) {
      FUN_1400e11d0(param_3,local_1050);
      if (local_1045 == '\0') {
        plVar10 = &local_1130;
        plVar13 = &local_1128;
        plVar12 = &local_1110;
      }
      else {
        plVar10 = &local_10f8;
        plVar13 = &local_10f0;
        plVar12 = &local_10d8;
      }
      plVar1 = (longlong *)param_3[2];
      *(undefined1 *)(plVar1 + 2) = 1;
      *plVar1 = local_1068;
      plVar1[1] = *plVar10;
      if (1 < local_1050) {
        uVar15 = 1;
        do {
          uVar16 = uVar15 - 1;
          uVar8 = (ulonglong)uVar15;
          if ((*(ulonglong *)(*plVar12 + (ulonglong)(uVar16 >> 6) * 8) >> ((byte)uVar16 & 0x3f) & 1)
              == 0) {
            *(undefined1 *)(param_3[2] + 0x10 + uVar8 * 0x18) = 0;
            *(longlong *)(param_3[2] + uVar8 * 0x18) = local_1060;
            lVar7 = local_1060;
          }
          else {
            *(undefined1 *)(param_3[2] + 0x10 + uVar8 * 0x18) = 1;
            *(undefined8 *)(param_3[2] + uVar8 * 0x18) =
                 *(undefined8 *)(*plVar13 + (ulonglong)uVar16 * 0x10);
            lVar7 = *(longlong *)(*plVar13 + 8 + (ulonglong)uVar16 * 0x10);
          }
          uVar15 = uVar15 + 1;
          *(longlong *)(param_3[2] + 8 + uVar8 * 0x18) = lVar7;
        } while (uVar15 < local_1050);
      }
      lVar7 = *(longlong *)param_3[2];
      param_3[6] = lVar7;
      lVar17 = ((longlong *)param_3[2])[1];
      param_3[8] = lVar17;
      param_3[9] = local_1060;
      param_3[0xb] = local_1060;
      *(bool *)(param_3 + 10) = lVar17 != local_1060;
      *param_3 = param_6;
      *(bool *)(param_3 + 7) = param_1 != lVar7;
      param_3[0xc] = local_1060;
      param_3[5] = param_1;
    }
  }
  if ((char)uStack_1090 == '\0') {
LAB_1400df0da:
    if ((char)local_10b0 != '\0') {
      uVar8 = (lStack_10b8 - local_10c0 >> 3) * 8;
      lVar7 = local_10c0;
      if (0xfff < uVar8) {
        if (0x1f < (local_10c0 - *(longlong *)(local_10c0 + -8)) - 8U) goto LAB_1400df249;
        uVar8 = uVar8 + 0x27;
        lVar7 = *(longlong *)(local_10c0 + -8);
      }
      thunk_FUN_14028af80(lVar7,uVar8);
    }
    if ((char)local_10c8 != '\0') {
      uVar8 = (lStack_10d0 - local_10d8 >> 3) * 8;
      lVar7 = local_10d8;
      if (0xfff < uVar8) {
        if (0x1f < (local_10d8 - *(longlong *)(local_10d8 + -8)) - 8U) goto LAB_1400df249;
        uVar8 = uVar8 + 0x27;
        lVar7 = *(longlong *)(local_10d8 + -8);
      }
      thunk_FUN_14028af80(lVar7,uVar8);
    }
    if ((char)local_10e0 != '\0') {
      uVar8 = lStack_10e8 - local_10f0 & 0xfffffffffffffff0;
      lVar7 = local_10f0;
      if (0xfff < uVar8) {
        if (0x1f < (local_10f0 - *(longlong *)(local_10f0 + -8)) - 8U) goto LAB_1400df249;
        uVar8 = uVar8 + 0x27;
        lVar7 = *(longlong *)(local_10f0 + -8);
      }
      thunk_FUN_14028af80(lVar7,uVar8);
    }
    if ((char)local_1100 != '\0') {
      uVar8 = (lStack_1108 - local_1110 >> 3) * 8;
      lVar7 = local_1110;
      if (0xfff < uVar8) {
        if (0x1f < (local_1110 - *(longlong *)(local_1110 + -8)) - 8U) goto LAB_1400df249;
        uVar8 = uVar8 + 0x27;
        lVar7 = *(longlong *)(local_1110 + -8);
      }
      thunk_FUN_14028af80(lVar7,uVar8);
    }
    if ((char)local_1118 == '\0') {
      return uVar5;
    }
    lVar7 = local_1128;
    if (((lStack_1120 - local_1128 & 0xfffffffffffffff0U) < 0x1000) ||
       (lVar7 = *(longlong *)(local_1128 + -8), puVar11 = auStack_1168,
       (local_1128 - *(longlong *)(local_1128 + -8)) - 8U < 0x20)) goto LAB_1400df253;
  }
  else {
    uVar8 = (longlong)local_1098 - (longlong)local_10a8 & 0xffffffffffffffe0;
    puVar9 = local_10a8;
    if (uVar8 < 0x1000) {
LAB_1400df0d5:
      thunk_FUN_14028af80(puVar9,uVar8);
      goto LAB_1400df0da;
    }
    if (local_10a8 + (-8 - (longlong)*(undefined1 **)(local_10a8 + -8)) < (undefined1 *)0x20) {
      uVar8 = uVar8 + 0x27;
      puVar9 = *(undefined1 **)(local_10a8 + -8);
      goto LAB_1400df0d5;
    }
  }
LAB_1400df249:
  pcVar2 = (code *)swi(0x29);
  lVar7 = (*pcVar2)(5);
  puVar11 = auStack_1160;
LAB_1400df253:
  *(undefined8 *)(puVar11 + -8) = 0x1400df258;
  thunk_FUN_14028af80(lVar7);
  return uVar5;
}

