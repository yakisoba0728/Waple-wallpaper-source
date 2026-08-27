// Function: FUN_140284a20
// Addr: 140284a20
// Size: 145 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140284a20(double *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  double dStack_20;
  
  plVar2 = (longlong *)param_1[4];
  lVar3 = 0x18;
  if (*param_1 <= 0.0 && *param_1 != 0.0) {
    lVar3 = 0x10;
  }
  uVar1 = *(undefined8 *)(lVar3 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    local_38 = *(uint *)param_1;
    uStack_34 = *(uint *)((longlong)param_1 + 4);
    uStack_30 = *(undefined4 *)(param_1 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_28 = param_1[6];
    dStack_20 = param_1[7];
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_38,&local_28,param_1[5]);
    uVar4 = (uint)uVar1 & _DAT_140492fd0;
    uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & _UNK_140492fd4;
    uVar6 = CONCAT44(uStack_34,local_38);
    if ((double)CONCAT44(uVar5,uVar4) <
        (double)CONCAT44(uStack_34 & _UNK_140492fd4,local_38 & _DAT_140492fd0) ||
        (double)CONCAT44(uVar5,uVar4) ==
        (double)CONCAT44(uStack_34 & _UNK_140492fd4,local_38 & _DAT_140492fd0)) {
      uVar6 = uVar1;
    }
    return uVar6;
  }
  return uVar1;
}

