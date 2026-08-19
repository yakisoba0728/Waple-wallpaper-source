// Function: FUN_14001ca70
// Addr: 14001ca70
// Size: 173 bytes


undefined1 FUN_14001ca70(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_28 [3];
  ulonglong local_10;
  
  param_2[2] = 0;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar4 = 0;
  param_2[6] = 0;
  if ((ulonglong)param_2[7] < 0x10) {
    puVar4 = param_2 + 4;
  }
  else {
    puVar4 = (undefined8 *)param_2[4];
  }
  *(undefined1 *)puVar4 = 0;
  uVar3 = *(uint *)(param_1 + 8) & 0xff;
  if (uVar3 == 4) {
    uVar5 = FUN_140085d90(param_1,local_28);
    FUN_14000df10(param_2,uVar5);
    if (0xf < local_10) {
      uVar7 = local_10 + 1;
      lVar6 = local_28[0];
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(local_28[0] + -8);
        if (0x1f < (local_28[0] - lVar6) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          uVar2 = (*pcVar1)();
          return uVar2;
        }
        uVar7 = local_10 + 0x28;
      }
      uVar2 = func_0x00014028b040(lVar6,uVar7);
      return uVar2;
    }
  }
  else if (uVar3 == 7) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1,&DAT_140473c38,&DAT_140473c3c);
  }
  return param_2[2] != 0;
}

