// Function: FUN_140376270
// Addr: 140376270
// Size: 498 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140376270(undefined8 ******param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 ******local_78;
  ulonglong local_70;
  undefined8 ******local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 *****local_50;
  longlong local_48;
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  cVar1 = *(char *)((longlong)param_1 + 5);
  if (cVar1 == '\0') {
    if ((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) == 0) {
      return 0;
    }
    local_78 = &local_68;
    local_70 = CONCAT71(local_70._1_7_,*(byte *)((longlong)param_1 + 4) >> 6) & 0xffffffffffffff01;
    local_88 = 1;
    local_68 = param_1;
    local_60 = param_2;
    FUN_1403e79b0(&local_78,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                  *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
  }
  else if (cVar1 == '\x01') {
    if (((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) == 0) &&
       (((ulonglong)*param_1 & 0x4000000000) == 0)) {
      return 0;
    }
    local_48 = (longlong)param_1 +
               (ulonglong)*(byte *)(param_1 + 2) * 0x100 + 8 +
               (ulonglong)*(byte *)((longlong)param_1 + 0x11);
    local_1c = *(byte *)((longlong)param_1 + 4) >> 6 & 1;
    local_20 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
    local_68 = param_1 + 1;
    iVar4 = *(int *)(lVar2 + 0x18);
    local_58 = param_2;
    local_50 = param_1;
    if (iVar4 == -1) {
      lVar3 = FUN_140398a10(lVar2 + 0x80);
      iVar4 = (uint)*(byte *)(lVar3 + 5) + (uint)*(byte *)(lVar3 + 4) * 0x100;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      *(int *)(lVar2 + 0x18) = iVar4;
    }
    local_60 = CONCAT44(local_60._4_4_,iVar4);
    FUN_140380700(&local_68,&local_58,param_2);
  }
  else {
    local_78 = param_1;
    if (cVar1 == '\x02') {
      if ((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) == 0) {
        return 0;
      }
      local_68 = &local_78;
      local_60 = CONCAT71(local_60._1_7_,*(byte *)((longlong)param_1 + 4) >> 6) & 0xffffffffffffff01
      ;
      local_88 = 1;
      local_70 = param_2;
      FUN_1403e8a60(&local_68,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                    *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
    }
    else {
      if ((cVar1 != '\x03') || ((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) == 0)) {
        return 0;
      }
      local_70 = CONCAT71(local_70._1_7_,*(byte *)((longlong)param_1 + 4) >> 6) & 0xffffffffffffff01
      ;
      local_88 = 1;
      FUN_1403e6d50(&local_78,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                    *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
    }
  }
  return 1;
}

