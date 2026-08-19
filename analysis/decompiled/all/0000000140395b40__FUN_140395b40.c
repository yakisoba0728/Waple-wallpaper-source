// Function: FUN_140395b40
// Addr: 140395b40
// Size: 565 bytes


longlong * FUN_140395b40(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  *param_1 = param_2;
  param_1[3] = (param_3 & 0xffffffff) + param_2;
  lVar5 = 0;
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
  plVar4 = (longlong *)param_1[0xb] + 1;
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
    uVar2 = 0;
    plVar4 = (longlong *)param_1[0xb];
  }
  plVar1 = plVar4 + uVar2;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    lVar3 = *plVar4;
    if (1 < *(int *)(lVar3 + 0x10) + 1U) {
      *(undefined4 *)(lVar3 + 0x14) = 0;
      plVar4 = (longlong *)func_0x0001402bf8e0(*(undefined8 *)(lVar3 + 0x18));
      return plVar4;
    }
    *(undefined4 *)(lVar3 + 0x14) = 0;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    if (1 < *(int *)(lVar3 + 0x20) + 1U) {
      *(undefined4 *)(lVar3 + 0x24) = 0;
      plVar4 = (longlong *)func_0x0001402bf8e0(*(undefined8 *)(lVar3 + 0x28));
      return plVar4;
    }
    *(undefined4 *)(lVar3 + 0x24) = 0;
    *(undefined4 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
  }
  if (1 < (int)param_1[10] + 1U) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    plVar4 = (longlong *)func_0x0001402bf8e0(param_1[0xb]);
    return plVar4;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffff2153;
  lVar3 = param_1[0xd];
  if (lVar3 != 0) {
    FUN_1403c32f0(lVar3);
    plVar4 = (longlong *)func_0x0001402bf8e0(lVar3);
    return plVar4;
  }
  if (param_1[0x11] != 0) {
    plVar4 = (longlong *)func_0x0001402bf8e0();
    return plVar4;
  }
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  lVar3 = param_1[9];
  while (lVar3 != 0) {
    param_1[9] = *(longlong *)(lVar3 + 0x30);
    if (1 < *(int *)(lVar3 + 0x10) + 1U) {
      *(undefined4 *)(lVar3 + 0x14) = 0;
      plVar4 = (longlong *)func_0x0001402bf8e0(*(undefined8 *)(lVar3 + 0x18));
      return plVar4;
    }
    *(undefined4 *)(lVar3 + 0x14) = 0;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    if (1 < *(int *)(lVar3 + 0x20) + 1U) {
      *(undefined4 *)(lVar3 + 0x24) = 0;
      plVar4 = (longlong *)func_0x0001402bf8e0(*(undefined8 *)(lVar3 + 0x28));
      return plVar4;
    }
    *(undefined4 *)(lVar3 + 0x24) = 0;
    *(undefined4 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    lVar3 = param_1[9];
  }
  uVar2 = *(uint *)(param_1 + 10);
  if ((int)uVar2 <= *(int *)((longlong)param_1 + 0x54)) {
    if ((int)uVar2 < 0) {
LAB_140395d4a:
      DAT_1404e4ff0 = DAT_14045dde0;
      goto UNWIND_INFO_140395d80_UnwindCodes_3__UnwindOpCode;
    }
    uVar6 = *(int *)((longlong)param_1 + 0x54) + 1;
    uVar7 = uVar2;
    if (uVar2 < uVar6) {
      do {
        uVar7 = uVar7 + 8 + (uVar7 >> 1);
      } while (uVar7 < uVar6);
      if (0x1ffffffe < uVar7) {
        *(uint *)(param_1 + 10) = ~uVar2;
        goto LAB_140395d4a;
      }
      if (uVar7 == 0) {
        if ((uVar2 != 0) && (uVar2 != 0xffffffff)) {
          plVar4 = (longlong *)func_0x0001402bf8e0(param_1[0xb]);
          return plVar4;
        }
      }
      else if ((uVar2 == 0) && (param_1[0xb] != 0)) {
        lVar5 = thunk_FUN_1402da070((ulonglong)uVar7 << 3);
        if (lVar5 == 0) {
code_r0x000140395e27:
          if (*(uint *)(param_1 + 10) < uVar7) {
            *(uint *)(param_1 + 10) = -1 - *(uint *)(param_1 + 10);
            DAT_1404e4ff0 = DAT_14045dde0;
            goto UNWIND_INFO_140395d80_UnwindCodes_3__UnwindOpCode;
          }
          goto LAB_140395d7a;
        }
        if (*(int *)((longlong)param_1 + 0x54) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar5,param_1[0xb]);
        }
      }
      else {
        lVar5 = func_0x0001402cb2b0(param_1[0xb],(ulonglong)uVar7 << 3);
        if (lVar5 == 0) goto code_r0x000140395e27;
      }
      param_1[0xb] = lVar5;
      *(uint *)(param_1 + 10) = uVar7;
    }
  }
LAB_140395d7a:
  uVar2 = *(uint *)((longlong)param_1 + 0x54);
  *(uint *)((longlong)param_1 + 0x54) = uVar2 + 1;
  *(undefined8 *)(param_1[0xb] + (ulonglong)uVar2 * 8) = 0;
UNWIND_INFO_140395d80_UnwindCodes_3__UnwindOpCode:
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

