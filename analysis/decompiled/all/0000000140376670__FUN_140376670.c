// Function: FUN_140376670
// Addr: 140376670
// Size: 732 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140376670(undefined8 ******param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 *******local_78;
  ulonglong local_70;
  undefined8 *******local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 ******local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  bVar1 = *(byte *)((longlong)param_1 + 4);
  cVar2 = *(char *)((longlong)param_1 + 7);
  local_78 = (undefined8 *******)param_1;
  if (cVar2 == '\0') {
    if (((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) != 0) && ((bVar1 >> 4 & 1) == 0)) {
      local_68 = &local_78;
      local_60 = CONCAT71(local_60._1_7_,bVar1 >> 6) & 0xffffffffffffff01;
      local_88 = 1;
      local_70 = param_2;
      FUN_1403e84d0(&local_68,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                    *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
      return 1;
    }
    return 0;
  }
  local_58 = param_2;
  local_50 = param_1;
  if (cVar2 == '\x01') {
    if (((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) == 0) && ((bVar1 >> 6 & 1) == 0)) {
      return 0;
    }
    local_1c = bVar1 >> 6 & 1;
    local_48 = (longlong)param_1 +
               (ulonglong)*(byte *)((longlong)param_1 + 0x1f) + 0xc +
               ((ulonglong)*(byte *)((longlong)param_1 + 0x1e) +
               (ulonglong)
               CONCAT11(*(undefined1 *)((longlong)param_1 + 0x1c),
                        *(undefined1 *)((longlong)param_1 + 0x1d)) * 0x100) * 0x100;
    local_20 = 0;
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
    local_78 = (undefined8 *******)((longlong)param_1 + 0xc);
    iVar4 = *(int *)(lVar3 + 0x18);
    if (iVar4 == -1) {
      lVar5 = FUN_140398a10(lVar3 + 0x80);
      iVar4 = (uint)*(byte *)(lVar5 + 4) * 0x100 + (uint)*(byte *)(lVar5 + 5);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      *(int *)(lVar3 + 0x18) = iVar4;
    }
    local_70 = CONCAT44(local_70._4_4_,iVar4);
    FUN_140382300(&local_78,&local_58,param_2);
  }
  else if (cVar2 == '\x02') {
    if ((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) == 0) {
      return 0;
    }
    if ((bVar1 >> 4 & 1) != 0) {
      return 0;
    }
    local_68 = &local_78;
    local_60 = CONCAT71(local_60._1_7_,bVar1 >> 6) & 0xffffffffffffff01;
    local_88 = 1;
    local_70 = param_2;
    FUN_1403e9580(&local_68,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                  *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
  }
  else if (cVar2 == '\x04') {
    uVar6 = (uint)*(byte *)((longlong)param_1 + 0x1d) * 0x10000 +
            (uint)*(byte *)((longlong)param_1 + 0x1e) * 0x100 +
            (uint)*(byte *)((longlong)param_1 + 0x1c) * 0x1000000 +
            (uint)*(byte *)((longlong)param_1 + 0x1f);
    local_38 = 0;
    local_34 = 0;
    local_48 = CONCAT44(local_48._4_4_,uVar6 >> 0x1e);
    local_40 = (longlong)param_1 + (ulonglong)(uVar6 & 0xffffff) + 0xc;
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
    local_78 = (undefined8 *******)((longlong)param_1 + 0xc);
    iVar4 = *(int *)(lVar3 + 0x18);
    if (iVar4 == -1) {
      lVar5 = FUN_140398a10(lVar3 + 0x80);
      iVar4 = (uint)*(byte *)(lVar5 + 5) + (uint)*(byte *)(lVar5 + 4) * 0x100;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      *(int *)(lVar3 + 0x18) = iVar4;
    }
    local_70 = CONCAT44(local_70._4_4_,iVar4);
    FUN_140382f20(&local_78,&local_58,param_2);
  }
  else {
    if (cVar2 != '\x06') {
      return 0;
    }
    if ((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) == 0) {
      return 0;
    }
    if ((bVar1 >> 4 & 1) != 0) {
      return 0;
    }
    local_78 = &local_68;
    local_70 = CONCAT71(local_70._1_7_,bVar1 >> 6) & 0xffffffffffffff01;
    local_88 = 1;
    local_68 = (undefined8 *******)param_1;
    local_60 = param_2;
    FUN_1403e9b10(&local_78,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                  *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
  }
  return 1;
}

