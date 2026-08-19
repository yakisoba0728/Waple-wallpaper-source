// Function: FUN_140061a20
// Addr: 140061a20
// Size: 6 bytes


undefined8 * FUN_140061a20(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  if (param_1 != param_2) {
    puVar5 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar5 = (undefined8 *)*param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14000f950(param_1,puVar5,param_2[2]);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar4;
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 10);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  if (param_1 != param_2) {
    plVar6 = param_2 + 0xd;
    if (0xf < (ulonglong)param_2[0x10]) {
      plVar6 = (longlong *)*plVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14000f950(param_1 + 0xd,plVar6,param_2[0xf]);
  }
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  param_1[0x12] = param_2[0x12];
  return param_1;
}

