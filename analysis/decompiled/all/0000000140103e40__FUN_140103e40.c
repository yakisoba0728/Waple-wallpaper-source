// Function: FUN_140103e40
// Addr: 140103e40
// Size: 169 bytes


uint FUN_140103e40(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  puVar2 = (undefined8 *)*param_4;
  if (puVar2 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  lVar8 = *param_2;
  lVar3 = *param_3;
  plVar6 = (longlong *)FUN_1402ed0c0(0xf0,&DAT_140426ef0);
  if (plVar6 == (longlong *)0x0) {
    uVar5 = 0x8007000e;
  }
  else {
    *(undefined4 *)((longlong)plVar6 + 0xc) = 0x3f000000;
    *(undefined4 *)(plVar6 + 2) = 0x3f000000;
    *(undefined4 *)((longlong)plVar6 + 0x14) = 0x3f800000;
    *(undefined4 *)(plVar6 + 3) = 0x3f000000;
    *(undefined4 *)((longlong)plVar6 + 0x2c) = 0x3f000000;
    *(undefined4 *)(plVar6 + 6) = 0x3f800000;
    *(undefined2 *)((longlong)plVar6 + 0x34) = 1;
    uVar5 = 0;
    *(undefined4 *)(plVar6 + 1) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 7;
    *(undefined2 *)(plVar6 + 8) = 0;
    plVar6[0xc] = lVar8;
    *(undefined1 *)(plVar6 + 0xd) = 0;
    *plVar6 = (longlong)&PTR_FUN_14048a0d8;
    plVar6[0xe] = (longlong)&PTR_UNWIND_INFO_140120ef3_UnwindCodes_4__UnwindOpCode_14048a0b0;
    plVar6[0xf] = 0;
    plVar6[0x11] = 0;
    plVar6[0x12] = 0;
    plVar6[0x13] = 0;
    plVar6[0x14] = 0;
    plVar6[0x15] = lVar3;
    *(undefined4 *)(plVar6 + 0x16) = 0;
    plVar6[0x17] = 0;
    plVar6[0x18] = 0;
    *(undefined4 *)(plVar6 + 0x19) = 0xbf800000;
    *(undefined4 *)((longlong)plVar6 + 0xcc) = 0x3f800000;
    *(undefined4 *)(plVar6 + 0x1a) = 1;
    *(undefined8 *)((longlong)plVar6 + 0xd4) = 0;
    *(undefined8 *)((longlong)plVar6 + 0xdc) = 0;
    *(undefined4 *)((longlong)plVar6 + 0xe4) = 0xbf800000;
    *(undefined4 *)(plVar6 + 0x1d) = 4;
    puVar7 = (undefined4 *)FUN_1402d3ed0(4,0x20);
    plVar6[0x10] = (longlong)puVar7;
    *puVar7 = 1;
    lVar8 = (*DAT_140426310)(0,0,0,0);
    plVar6[0x17] = lVar8;
    if (lVar8 == 0) {
      uVar5 = (*DAT_1404266a8)();
      if (0 < (int)uVar5) {
        uVar5 = uVar5 & 0xffff | 0x80070000;
      }
      if ((int)uVar5 < 0) {
        if (*(code **)(plVar6[0xe] + 0x10) != FUN_140120ff0) {
          (**(code **)(plVar6[0xe] + 0x10))(plVar6 + 0xe);
          return uVar5;
        }
        piVar4 = (int *)plVar6[0x10];
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 != 1) {
          return uVar5;
        }
        (**(code **)(*plVar6 + 0xd8))(plVar6,1);
        return uVar5;
      }
    }
    *puVar2 = plVar6;
  }
  return uVar5;
}

