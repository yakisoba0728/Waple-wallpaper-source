// Function: FUN_1400c0c80
// Addr: 1400c0c80
// Size: 1802 bytes


undefined8 * FUN_1400c0c80(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  code *local_78;
  undefined8 *local_70;
  undefined **local_68;
  code *local_60;
  undefined8 *local_50;
  undefined ***local_30;
  
  *param_1 = &PTR_FUN_140485fe0;
  puVar1 = param_1 + 1;
  pvVar5 = _aligned_malloc(0x200,0x10);
  *puVar1 = pvVar5;
  uVar9 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x21;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f004189;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x41f00000;
  param_1[0x1f] = 0x41200000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xf;
  *(undefined1 *)(param_1 + 0x21) = 0;
  uVar6 = FUN_14028af20(0x50);
  local_68 = &PTR_LAB_1404866f8;
  local_60 = FUN_1400d01a0;
  local_30 = &local_68;
  local_50 = puVar1;
  uVar6 = FUN_1400cf9d0(uVar6,&local_68);
  param_1[0x25] = uVar6;
  *(undefined1 *)(param_1 + 0x26) = 0;
  FUN_1404217a0(*puVar1,0,0x200);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 2;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  FUN_1400493a0(param_1 + 0x31);
  FUN_1400493a0(param_1 + 0x39);
  FUN_1400493a0(param_1 + 0x41);
  param_1[0x4a] = 0;
  puVar1 = param_1 + 0x49;
  *puVar1 = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  FUN_1400493a0(param_1 + 0x4f);
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 2;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x62) = 2;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  lVar7 = FUN_14028af20(0x18);
  *(longlong *)lVar7 = lVar7;
  *(longlong *)(lVar7 + 8) = lVar7;
  param_1[0x77] = lVar7;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 7;
  param_1[0x7d] = 8;
  *(undefined4 *)(param_1 + 0x76) = 0x3f800000;
  FUN_14003e510(param_1 + 0x79,0x10,param_1[0x77]);
  *(undefined2 *)(param_1 + 0x7e) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8a) = 0x102;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  lVar7 = FUN_14028af20(0xa0);
  *(longlong *)lVar7 = lVar7;
  *(longlong *)(lVar7 + 8) = lVar7;
  param_1[0x96] = lVar7;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 7;
  param_1[0x9c] = 8;
  *(undefined4 *)(param_1 + 0x95) = 0x3f800000;
  FUN_14004f190(param_1 + 0x98,0x10,param_1[0x96]);
  param_1[0x9d] = 0;
  FUN_1400c1390(param_1 + 0x9e);
  FUN_140083010(param_1 + 0xcd);
  FUN_1400cb180(param_1 + 0x127);
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0xf;
  *(undefined1 *)(param_1 + 0x14a) = 0;
  param_1[0x14e] = 0;
  *(undefined4 *)(param_1 + 0x14f) = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  lVar7 = FUN_14028af20(0x38);
  *(longlong *)lVar7 = lVar7;
  *(longlong *)(lVar7 + 8) = lVar7;
  param_1[0x150] = lVar7;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 7;
  param_1[0x156] = 8;
  *(undefined4 *)(param_1 + 0x14f) = 0x3f800000;
  FUN_14004f190(param_1 + 0x152,0x10,param_1[0x150]);
  FUN_1400316b0(param_1 + 0x157);
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined4 *)(param_1 + 0x16c) = 1;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0xf;
  *(undefined1 *)(param_1 + 0x16d) = 0;
  iVar3 = FUN_140290f60();
  iVar3 = iVar3 + -2;
  if (iVar3 < 8) {
    if (iVar3 < 2) {
      iVar3 = 2;
    }
  }
  else {
    iVar3 = 8;
  }
  iVar4 = FUN_140290d80(param_1 + 0x58);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)((longlong)param_1 + 0x30c) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x30c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if (*(char *)(param_1 + 0x7e) != '\0') {
    *(undefined1 *)(param_1 + 0x7e) = 0;
    if (iVar3 != 0) {
      do {
        plVar2 = (longlong *)param_1[0x4a];
        local_78 = FUN_1400f00e0;
        local_70 = puVar1;
        if (plVar2 == (longlong *)param_1[0x4b]) {
          FUN_1400cb870(puVar1,plVar2,&local_78);
        }
        else {
          puVar8 = (undefined8 *)FUN_14028af20(0x10);
          *puVar8 = FUN_1400f00e0;
          puVar8[1] = puVar1;
          lVar7 = FUN_1402ca17c(0,0,FUN_1400ce4f0,puVar8,0,plVar2 + 1);
          *plVar2 = lVar7;
          if (lVar7 == 0) {
            *(undefined4 *)(plVar2 + 1) = 0;
                    /* WARNING: Subroutine does not return */
            FUN_140290d30(6);
          }
          param_1[0x4a] = param_1[0x4a] + 0x10;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)(longlong)iVar3);
    }
  }
  FUN_140290ea0(param_1 + 0x58);
  *(uint *)(param_1 + 0x9e) = *(uint *)(param_1 + 0x9e) | 0x10;
  return param_1;
}

