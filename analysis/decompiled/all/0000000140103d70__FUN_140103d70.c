// Function: FUN_140103d70
// Addr: 140103d70
// Size: 525 bytes


DWORD FUN_140103d70(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  HANDLE pvVar9;
  
  puVar2 = (undefined8 *)*param_4;
  if (puVar2 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  lVar3 = *param_2;
  lVar4 = *param_3;
  plVar7 = (longlong *)FUN_1402ecff0(0xf0,&PTR_140426e20);
  if (plVar7 == (longlong *)0x0) {
    DVar6 = 0x8007000e;
  }
  else {
    *(undefined4 *)((longlong)plVar7 + 0xc) = 0x3f000000;
    *(undefined4 *)(plVar7 + 2) = 0x3f000000;
    *(undefined4 *)((longlong)plVar7 + 0x14) = 0x3f800000;
    *(undefined4 *)(plVar7 + 3) = 0x3f000000;
    *(undefined4 *)((longlong)plVar7 + 0x2c) = 0x3f000000;
    *(undefined4 *)(plVar7 + 6) = 0x3f800000;
    *(undefined2 *)((longlong)plVar7 + 0x34) = 1;
    DVar6 = 0;
    *(undefined4 *)(plVar7 + 1) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[10] = 0;
    plVar7[0xb] = 7;
    *(undefined2 *)(plVar7 + 8) = 0;
    plVar7[0xc] = lVar3;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *plVar7 = (longlong)&PTR_FUN_14048a008;
    plVar7[0xe] = (longlong)&PTR_LAB_140489fe0;
    plVar7[0xf] = 0;
    plVar7[0x11] = 0;
    plVar7[0x12] = 0;
    plVar7[0x13] = 0;
    plVar7[0x14] = 0;
    plVar7[0x15] = lVar4;
    *(undefined4 *)(plVar7 + 0x16) = 0;
    plVar7[0x17] = 0;
    plVar7[0x18] = 0;
    *(undefined4 *)(plVar7 + 0x19) = 0xbf800000;
    *(undefined4 *)((longlong)plVar7 + 0xcc) = 0x3f800000;
    *(undefined4 *)(plVar7 + 0x1a) = 1;
    *(undefined8 *)((longlong)plVar7 + 0xd4) = 0;
    *(undefined8 *)((longlong)plVar7 + 0xdc) = 0;
    *(undefined4 *)((longlong)plVar7 + 0xe4) = 0xbf800000;
    *(undefined4 *)(plVar7 + 0x1d) = 4;
    puVar8 = _aligned_malloc(4,0x20);
    plVar7[0x10] = (longlong)puVar8;
    *puVar8 = 1;
    pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    plVar7[0x17] = (longlong)pvVar9;
    if (pvVar9 == (HANDLE)0x0) {
      DVar6 = GetLastError();
      if (0 < (int)DVar6) {
        DVar6 = DVar6 & 0xffff | 0x80070000;
      }
      if ((int)DVar6 < 0) {
        if (*(code **)(plVar7[0xe] + 0x10) != FUN_140120f20) {
          (**(code **)(plVar7[0xe] + 0x10))(plVar7 + 0xe);
          return DVar6;
        }
        piVar5 = (int *)plVar7[0x10];
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 != 1) {
          return DVar6;
        }
        (**(code **)(*plVar7 + 0xd8))(plVar7,1);
        return DVar6;
      }
    }
    *puVar2 = plVar7;
  }
  return DVar6;
}

