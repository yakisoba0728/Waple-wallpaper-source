// Function: FUN_140395a70
// Addr: 140395a70
// Size: 783 bytes


longlong * FUN_140395a70(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  
  *param_1 = param_2;
  param_1[3] = (param_3 & 0xffffffff) + param_2;
  lVar4 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[5] = 0;
  param_1[1] = *param_1;
  param_1[2] = param_1[3];
  param_1[4] = 0;
  uVar2 = *(int *)((longlong)param_1 + 0x54) - 1;
  plVar7 = (longlong *)param_1[0xb] + 1;
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
    uVar2 = 0;
    plVar7 = (longlong *)param_1[0xb];
  }
  plVar1 = plVar7 + uVar2;
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar3 = *plVar7;
    if (1 < *(int *)(lVar3 + 0x10) + 1U) {
      *(undefined4 *)(lVar3 + 0x14) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar3 + 0x18));
    }
    *(undefined4 *)(lVar3 + 0x14) = 0;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    if (1 < *(int *)(lVar3 + 0x20) + 1U) {
      *(undefined4 *)(lVar3 + 0x24) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar3 + 0x28));
    }
    *(undefined4 *)(lVar3 + 0x24) = 0;
    *(undefined4 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
  }
  if (1 < (int)param_1[10] + 1U) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    thunk_FUN_1402d9040(param_1[0xb]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffff2153;
  lVar3 = param_1[0xd];
  if (lVar3 != 0) {
    FUN_1403c3220(lVar3);
    thunk_FUN_1402d9040(lVar3);
    param_1[0xd] = 0;
  }
  if (param_1[0x11] != 0) {
    thunk_FUN_1402d9040();
    param_1[0x11] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  lVar3 = param_1[9];
  while (lVar3 != 0) {
    param_1[9] = *(longlong *)(lVar3 + 0x30);
    if (1 < *(int *)(lVar3 + 0x10) + 1U) {
      *(undefined4 *)(lVar3 + 0x14) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar3 + 0x18));
    }
    *(undefined4 *)(lVar3 + 0x14) = 0;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    if (1 < *(int *)(lVar3 + 0x20) + 1U) {
      *(undefined4 *)(lVar3 + 0x24) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar3 + 0x28));
    }
    *(undefined4 *)(lVar3 + 0x24) = 0;
    *(undefined4 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    lVar3 = param_1[9];
  }
  uVar2 = *(uint *)(param_1 + 10);
  if ((int)uVar2 <= *(int *)((longlong)param_1 + 0x54)) {
    if ((int)uVar2 < 0) {
LAB_140395c7a:
      DAT_1404e4f20 = DAT_14045dd10;
      goto LAB_140395cbb;
    }
    uVar5 = *(int *)((longlong)param_1 + 0x54) + 1;
    uVar6 = uVar2;
    if (uVar2 < uVar5) {
      do {
        uVar6 = uVar6 + 8 + (uVar6 >> 1);
      } while (uVar6 < uVar5);
      if (0x1ffffffe < uVar6) {
        *(uint *)(param_1 + 10) = ~uVar2;
        goto LAB_140395c7a;
      }
      if (uVar6 == 0) {
        if ((uVar2 != 0) && (uVar2 != 0xffffffff)) {
          thunk_FUN_1402d9040(param_1[0xb]);
        }
      }
      else if ((uVar2 == 0) && (param_1[0xb] != 0)) {
        lVar4 = _malloc_base((ulonglong)uVar6 << 3);
        if (lVar4 == 0) {
LAB_140395d57:
          if (*(uint *)(param_1 + 10) < uVar6) {
            *(uint *)(param_1 + 10) = -1 - *(uint *)(param_1 + 10);
            DAT_1404e4f20 = DAT_14045dd10;
            goto LAB_140395cbb;
          }
          goto LAB_140395caa;
        }
        if (*(int *)((longlong)param_1 + 0x54) != 0) {
          FUN_1404210f0(lVar4,param_1[0xb]);
        }
      }
      else {
        lVar4 = _realloc_base(param_1[0xb],(ulonglong)uVar6 << 3);
        if (lVar4 == 0) goto LAB_140395d57;
      }
      param_1[0xb] = lVar4;
      *(uint *)(param_1 + 10) = uVar6;
    }
  }
LAB_140395caa:
  uVar2 = *(uint *)((longlong)param_1 + 0x54);
  *(uint *)((longlong)param_1 + 0x54) = uVar2 + 1;
  *(undefined8 *)(param_1[0xb] + (ulonglong)uVar2 * 8) = 0;
LAB_140395cbb:
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  return param_1;
}

