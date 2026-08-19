// Function: FUN_1402d0ecc
// Addr: 1402d0ecc
// Size: 17 bytes


void FUN_1402d0ecc(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 auStackX_20 [8];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined8 uStack_28;
  undefined4 *puStack_20;
  int *piStack_18;
  undefined1 *puStack_10;
  
  uStack_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    psVar4 = (short *)(*DAT_140426438)(0);
    if ((((psVar4 != (short *)0x0) && (*psVar4 == 0x5a4d)) &&
        (piVar5 = (int *)((longlong)*(int *)(psVar4 + 0x1e) + (longlong)psVar4), *piVar5 == 0x4550))
       && ((((short)piVar5[6] == 0x20b && (0xe < (uint)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_1402d0fe0(param_1);
    }
  }
  auStackX_20[0] = 0;
  puStack_20 = local_res10;
  piStack_18 = local_res18;
  puStack_10 = auStackX_20;
  uStack_34 = 2;
  auStack_30[0] = 2;
  func_0x0001402d0dd4(auStack_38,auStack_30,&puStack_20,&uStack_34);
  if (local_res18[0] == 0) {
    iVar3 = FUN_1402ddea8();
    if (iVar3 == 1) {
      bVar6 = false;
    }
    else {
      cVar2 = func_0x0001402e2348();
      bVar6 = cVar2 == '\0';
    }
    if (local_res18[0] == 0) {
      FUN_1402d0fb0(param_1,bVar6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

