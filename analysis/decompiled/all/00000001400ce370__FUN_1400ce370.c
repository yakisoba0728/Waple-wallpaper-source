// Function: FUN_1400ce370
// Addr: 1400ce370
// Size: 383 bytes


undefined8 * FUN_1400ce370(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_140016fc0(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (param_2[0xe] - param_2[0xd] != 0) {
    if (0x666666666666666 <
        (ulonglong)(((longlong)(param_2[0xe] - param_2[0xd]) >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    FUN_1400cece0(param_1 + 0xd);
    lVar1 = param_1[0xd];
    lVar4 = param_2[0xe] - param_2[0xd];
    FUN_1404210f0(lVar1,param_2[0xd],lVar4);
    param_1[0xe] = lVar1 + (lVar4 >> 3) * 8;
  }
  param_1[0x17] = 0;
  puVar2 = (undefined8 *)param_2[0x17];
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar2)(puVar2,param_1 + 0x10);
    param_1[0x17] = uVar3;
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0xc4) = *(undefined1 *)((longlong)param_2 + 0xc4);
  param_1[0x19] = param_2[0x19];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  return param_1;
}

