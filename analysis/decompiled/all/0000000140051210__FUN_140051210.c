// Function: FUN_140051210
// Addr: 140051210
// Size: 122 bytes


undefined8 * FUN_140051210(undefined8 *param_1,uint *param_2,uint *param_3)

{
  short sVar1;
  longlong lVar2;
  uint *puStack_38;
  longlong lStack_30;
  undefined1 uStack_28;
  uint *puStack_20;
  longlong lStack_18;
  
  lStack_18 = *(longlong *)(param_3 + 4);
  if (7 < *(ulonglong *)(param_3 + 6)) {
    param_3 = *(uint **)param_3;
  }
  if (((lStack_18 == 0) ||
      (((3 < lStack_18 * 2 && ((*param_3 & 0xffffffdf) - 0x3a0041 < 0x1a)) ||
       ((short)*param_3 == 0x5c)))) || ((short)*param_3 == 0x2f)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400166d0();
  }
  lStack_30 = *(longlong *)(param_2 + 4);
  if (7 < *(ulonglong *)(param_2 + 6)) {
    param_2 = *(uint **)param_2;
  }
  if (lStack_30 == 2) {
    if (0x19 < (*param_2 & 0xffffffdf) - 0x3a0041) {
code_r0x000140051310:
      sVar1 = *(short *)((longlong)param_2 + lStack_30 * 2 + -2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        uStack_28 = 1;
        lVar2 = 1;
        goto code_r0x00014005129a;
      }
    }
  }
  else if (lStack_30 != 0) goto code_r0x000140051310;
  uStack_28 = 0;
  lVar2 = 0;
code_r0x00014005129a:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  puStack_38 = param_2;
  puStack_20 = param_3;
  func_0x000140051040(param_1,lVar2 + lStack_30 + lStack_18,&puStack_38);
  return param_1;
}

