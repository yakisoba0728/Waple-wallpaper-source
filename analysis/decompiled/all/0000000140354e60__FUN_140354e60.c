// Function: FUN_140354e60
// Addr: 140354e60
// Size: 759 bytes


undefined8 FUN_140354e60(ulonglong *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_a0;
  int local_9c;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  uVar7 = 0;
  if (((param_1 != (ulonglong *)0x0) && (param_3 != 0)) && ((int)param_1[4] == 2)) {
    local_58 = *param_1;
    iVar4 = (int)param_1[2];
    local_48 = local_58 >> 0x20;
    iVar6 = (int)local_58;
    iVar1 = (int)(param_1[2] >> 0x20);
    uVar2 = (iVar4 - iVar6) * 2;
    local_70 = (ulonglong)uVar2;
    local_8c = (int)param_1[1] + iVar4 * -2 + iVar6;
    iVar5 = (int)(local_58 >> 0x20);
    local_78 = (longlong)local_8c;
    local_90 = (int)(param_1[1] >> 0x20) + iVar1 * -2 + iVar5;
    uVar3 = (iVar1 - iVar5) * 2;
    local_68 = (ulonglong)uVar3;
    local_80 = (longlong)(int)uVar2;
    local_88 = (longlong)local_90;
    local_50 = (longlong)(int)uVar3;
    local_a0 = (iVar6 - (int)param_2) * 0x400;
    local_60._0_4_ = (int)(param_2 >> 0x20);
    local_9c = (iVar5 - (int)local_60) * 0x400;
    local_60 = param_2 >> 0x20;
    iVar4 = FUN_1402f5e40(&local_a0);
    if (iVar4 < 0x7fffffff) {
      uVar7 = CONCAT44(iVar5 * 0x400,iVar6 * 0x400);
    }
    iVar5 = (int)local_70;
    iVar6 = (int)local_68;
    local_a0 = (int)((local_a0 >> 0x1f & 0x3ffU) + local_a0) >> 10;
    local_9c = (int)((local_9c >> 0x1f & 0x3ffU) + local_9c) >> 10;
    iVar4 = local_9c * local_90 * 2;
    iVar1 = local_a0 * local_8c * 2;
    iVar4 = ((int)((iVar6 * iVar6 >> 0x1f & 0x3fU) + iVar6 * iVar6) >> 6) +
            ((int)(iVar5 * iVar5 + (iVar5 * iVar5 >> 0x1f & 0x3fU)) >> 6) +
            ((int)(iVar4 + (iVar4 >> 0x1f & 0x3fU)) >> 6) +
            ((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6);
    uVar7 = func_0x0001402efae0(((int)((local_9c * iVar6 >> 0x1f & 0x3fU) + local_9c * iVar6) >> 6)
                                + ((int)(local_a0 * iVar5 + (local_a0 * iVar5 >> 0x1f & 0x3fU)) >> 6
                                  ),iVar4,iVar4,local_68 & 0xffffffff,uVar7);
    return uVar7;
  }
  return 6;
}

