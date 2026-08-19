// Function: FUN_140355350
// Addr: 140355350
// Size: 1031 bytes


undefined8 FUN_140355350(ulonglong *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  uVar9 = 0;
  if (((param_1 != (ulonglong *)0x0) && (param_3 != 0)) && ((int)param_1[4] == 3)) {
    local_84 = 0;
    iVar4 = (int)param_1[2];
    local_48 = *param_1;
    iVar5 = (int)param_1[3];
    iVar8 = (int)local_48;
    local_68 = iVar5 + iVar4 * -2 + iVar8;
    iVar1 = (int)(param_1[2] >> 0x20);
    local_40 = local_48 >> 0x20;
    iVar7 = (int)(param_1[3] >> 0x20);
    iVar6 = (int)(local_48 >> 0x20);
    local_64 = iVar7 + iVar1 * -2 + iVar6;
    local_80 = (longlong)(local_68 * 3);
    iVar2 = (iVar4 - iVar8) * 3;
    iVar3 = (iVar1 - iVar6) * 3;
    local_60 = (longlong)(((iVar4 - iVar5) * 3 + (int)param_1[1]) - iVar8);
    local_78 = (longlong)(((iVar1 - iVar7) * 3 + (int)(param_1[1] >> 0x20)) - iVar6);
    local_58 = (longlong)(local_64 * 3);
    local_64 = local_64 * 6;
    local_68 = local_68 * 6;
    local_88 = 0;
    local_90 = (iVar8 - (int)param_2) * 0x400;
    local_50._0_4_ = (int)(param_2 >> 0x20);
    local_8c = (iVar6 - (int)local_50) * 0x400;
    local_50 = param_2 >> 0x20;
    iVar4 = FUN_1402f5e40(&local_90);
    if (iVar4 < 0x7fffffff) {
      local_84 = 0;
      uVar9 = CONCAT44(iVar6 * 0x400,iVar8 * 0x400);
    }
    local_90 = (int)((local_90 >> 0x1f & 0x3ffU) + local_90) >> 10;
    local_8c = (int)((local_8c >> 0x1f & 0x3ffU) + local_8c) >> 10;
    iVar4 = ((int)((local_68 * local_90 >> 0x1f & 0x3fU) + local_68 * local_90) >> 6) +
            ((int)(local_64 * local_8c + (local_64 * local_8c >> 0x1f & 0x3fU)) >> 6) +
            ((int)(iVar2 * iVar2 + (iVar2 * iVar2 >> 0x1f & 0x3fU)) >> 6) +
            ((int)(iVar3 * iVar3 + (iVar3 * iVar3 >> 0x1f & 0x3fU)) >> 6);
    uVar9 = func_0x0001402efae0(((int)((local_90 * iVar2 >> 0x1f & 0x3fU) + local_90 * iVar2) >> 6)
                                + ((int)(local_8c * iVar3 + (local_8c * iVar3 >> 0x1f & 0x3fU)) >> 6
                                  ),iVar4,iVar4,0,uVar9);
    return uVar9;
  }
  return 6;
}

