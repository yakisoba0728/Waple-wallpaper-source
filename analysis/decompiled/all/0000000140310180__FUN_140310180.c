// Function: FUN_140310180
// Addr: 140310180
// Size: 575 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140310180(longlong *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  short sVar5;
  ushort uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  lVar3 = param_1[2];
  iVar11 = 0x10000;
  lVar9 = *param_1;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    iVar11 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 8);
  }
  if (*(int *)(lVar3 + 0x60) == 0x636f6d70) {
    local_58 = (int)param_1[7];
    iStack_54 = *(int *)((longlong)param_1 + 0x3c);
    iStack_50 = (int)param_1[8];
    iStack_4c = *(int *)((longlong)param_1 + 0x44);
  }
  else {
    FUN_1402f3050(lVar3 + 0x98,&local_58);
  }
  *(int *)(lVar3 + 0x50) = (int)param_1[10];
  *(int *)(lVar3 + 0x38) = local_58;
  *(int *)(lVar3 + 0x3c) = iStack_4c;
  if (param_1[0x25] == 0) {
    iVar8 = (int)param_1[0xc] - (int)param_1[0xb];
  }
  else {
    iVar8 = (uint)*(byte *)((ulonglong)param_2 + param_1[0x25]) << 6;
  }
  *(int *)(lVar3 + 0x40) = iVar8;
  *(int *)(lVar3 + 0x30) = iStack_50 - local_58;
  *(int *)(lVar3 + 0x34) = iStack_4c - iStack_54;
  if ((*(char *)(lVar9 + 400) == '\0') || (*(short *)(lVar9 + 0x1ba) == 0)) {
    sVar5 = FUN_1402efa10(iStack_4c - iStack_54,iVar11);
    if (*(short *)(lVar9 + 0x208) == -1) {
      sVar1 = *(short *)(lVar9 + 0x13e);
      sVar2 = *(short *)(lVar9 + 0x13c);
    }
    else {
      sVar1 = *(short *)(lVar9 + 0x250);
      sVar2 = *(short *)(lVar9 + 0x24e);
    }
    local_40 = (int)sVar2 - (int)sVar1;
    local_44 = (int)(local_40 - (int)sVar5) / 2;
  }
  else {
    sVar5 = FUN_1402efa10(*(int *)((longlong)param_1 + 0xfc) - iStack_4c,iVar11);
    local_44 = (int)sVar5;
    if (*(int *)((longlong)param_1 + 0x104) < *(int *)((longlong)param_1 + 0xfc)) {
      uVar6 = FUN_1402efa10(*(int *)((longlong)param_1 + 0xfc) - *(int *)((longlong)param_1 + 0x104)
                            ,iVar11);
      local_40 = (uint)uVar6;
    }
    else {
      local_40 = 0;
    }
  }
  plVar4 = *(longlong **)(*(longlong *)(lVar9 + 0xd0) + 0x50);
  if ((plVar4 != (longlong *)0x0) && (*(longlong *)(*plVar4 + 0x10) != 0)) {
    local_48 = 0;
    uVar7 = (**(code **)(*plVar4 + 0x10))
                      (plVar4[1],(ulonglong)param_2,CONCAT71((int7)((ulonglong)*plVar4 >> 8),1),
                       &local_48);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
  *(uint *)(lVar3 + 0x54) = local_40;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    lVar9 = (longlong)local_44 * (longlong)iVar11;
    lVar10 = (longlong)(int)local_40 * (longlong)iVar11;
    local_44 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
    local_40 = (uint)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
  }
  *(int *)(lVar3 + 0x48) = local_44;
  *(uint *)(lVar3 + 0x4c) = local_40;
  *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x38) - *(int *)(lVar3 + 0x40) / 2;
  return 0;
}

