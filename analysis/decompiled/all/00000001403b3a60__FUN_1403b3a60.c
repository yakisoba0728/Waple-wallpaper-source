// Function: FUN_1403b3a60
// Addr: 1403b3a60
// Size: 151 bytes


void FUN_1403b3a60(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  int iVar5;
  longlong local_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  byte *pbStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  byte *pbStack_40;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  if (uVar2 == 0) {
    puVar3 = &DAT_14045dde0;
  }
  else {
    puVar3 = (undefined8 *)((ulonglong)uVar2 + param_1);
  }
  cVar1 = func_0x00014036fab0(puVar3,*(undefined8 *)(param_2 + 0x18));
  if (cVar1 != '\0') {
    uVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    if (uVar2 == 0) {
      pbStack_60 = (byte *)&DAT_14045dde0;
    }
    else {
      pbStack_60 = (byte *)((ulonglong)uVar2 + param_1);
    }
    iVar5 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
    uVar2 = (uint)*pbStack_60 * 0x100 + (uint)pbStack_60[1];
    pbStack_b0 = (byte *)0x0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    if (uVar2 == 1) {
      uStack_a8._0_4_ = 0;
    }
    else if (uVar2 == 2) {
      func_0x0001403e3ba0(&pbStack_b0);
      pbStack_60 = pbStack_b0;
    }
    else {
      uStack_a8._0_4_ = 0;
      pbStack_60 = (byte *)0x0;
    }
    uStack_50 = uStack_a0;
    uStack_98 = 0;
    uStack_84 = 0;
    puStack_80 = &UNK_14047061f;
    lStack_48 = (ulonglong)uVar2 << 0x20;
    local_b8 = (ulonglong)uVar2 << 0x20;
    uStack_a8 = CONCAT44((int)((ulonglong)uStack_a8 >> 0x20),(undefined4)uStack_a8);
    puStack_78 = &UNK_140470620;
    lStack_68 = local_b8;
    iStack_34 = 0;
    uStack_30 = 0x4047061f;
    uStack_2c = 1;
    uStack_70._0_4_ = (undefined4)param_1;
    uStack_70._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_28 = 0x40470620;
    uStack_24 = 1;
    uStack_20 = (undefined4)uStack_70;
    uStack_1c = uStack_70._4_4_;
    pbStack_b0 = pbStack_60;
    uStack_94 = uVar2;
    pbStack_90 = (byte *)(param_1 + 6);
    iStack_88 = iVar5;
    uStack_70 = param_1;
    uStack_58 = uStack_a8;
    pbStack_40 = (byte *)(param_1 + 6);
    iStack_38 = iVar5;
    while ((((iVar5 = (int)((ulonglong)lStack_68 >> 0x20), iVar5 == 1 || (iVar5 == 2)) &&
            ((uint)uStack_58 < (uint)pbStack_60[3] + (uint)pbStack_60[2] * 0x100)) &&
           (iStack_38 != 0))) {
      pbVar4 = (byte *)&DAT_14045dde0;
      if (iStack_38 != 0) {
        pbVar4 = pbStack_40;
      }
      uVar2 = (uint)pbVar4[1] + (uint)*pbVar4 * 0x100;
      if (uVar2 == 0) {
        pbVar4 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar4 = (byte *)((ulonglong)uVar2 + CONCAT44(uStack_1c,uStack_20));
      }
      if (*(char *)(*(longlong *)(param_2 + 0x28) + 0x40) == '\0') {
        func_0x00014036b7c0(*(longlong *)(param_2 + 0x28) + 0x10,pbVar4 + 2,
                            (uint)*pbVar4 * 0x100 + (uint)pbVar4[1],2);
      }
      else {
        func_0x000140373430();
      }
      func_0x000140399010(&lStack_68);
      if (iStack_38 != 0) {
        iStack_34 = iStack_34 + 1;
        iStack_38 = iStack_38 + -1;
        pbStack_40 = pbStack_40 + 2;
      }
    }
  }
  return;
}

