// Function: FUN_14033c450
// Addr: 14033c450
// Size: 378 bytes


int FUN_14033c450(longlong *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *local_res8;
  
  local_res8 = (byte *)*param_1;
  iVar2 = 0;
  if (param_2 <= local_res8) {
    *param_1 = (longlong)local_res8;
    return 0;
  }
  iVar3 = 0;
  do {
    if (iVar2 != 0) break;
    bVar1 = *local_res8;
    if (bVar1 == 0x25) {
      for (; ((local_res8 < param_2 && (*local_res8 != 0xd)) && (*local_res8 != 10));
          local_res8 = local_res8 + 1) {
      }
    }
    else if (bVar1 == 0x28) {
      iVar2 = FUN_14033c310(&local_res8,param_2);
    }
    else if (bVar1 == 0x3c) {
      do {
        local_res8 = local_res8 + 1;
        if (param_2 <= local_res8) goto LAB_14033c556;
        do {
          bVar1 = *local_res8;
          if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
            if (bVar1 != 0x25) break;
            do {
              if ((*local_res8 == 0xd) || (*local_res8 == 10)) break;
              local_res8 = local_res8 + 1;
            } while (local_res8 < param_2);
          }
          local_res8 = local_res8 + 1;
        } while (local_res8 < param_2);
        if (param_2 <= local_res8) goto LAB_14033c556;
        bVar1 = *local_res8;
      } while ((((byte)(bVar1 - 0x30) < 10) || ((byte)(bVar1 + 0xbf) < 6)) ||
              ((byte)(bVar1 + 0x9f) < 6));
      if (bVar1 == 0x3e) {
LAB_14033c556:
        iVar2 = 0;
        local_res8 = local_res8 + 1;
      }
      else {
        iVar2 = 3;
      }
    }
    else if (bVar1 == 0x7b) {
      iVar3 = iVar3 + 1;
    }
    else if ((bVar1 == 0x7d) && (iVar3 = iVar3 + -1, iVar3 == 0)) {
      *param_1 = (longlong)(local_res8 + 1);
      return 0;
    }
    local_res8 = local_res8 + 1;
  } while (local_res8 < param_2);
  *param_1 = (longlong)local_res8;
  if (iVar3 != 0) {
    iVar2 = 3;
  }
  return iVar2;
}

