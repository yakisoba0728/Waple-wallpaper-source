// Function: FUN_140330c00
// Addr: 140330c00
// Size: 382 bytes


int FUN_140330c00(ulonglong *param_1,int param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 extraout_var;
  int iVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined2 local_res8 [4];
  byte *local_res20;
  
  pbVar1 = (byte *)param_1[2];
  for (pbVar5 = (byte *)*param_1; pbVar5 < pbVar1; pbVar5 = pbVar5 + 1) {
    bVar2 = *pbVar5;
    if ((0x20 < bVar2) || ((0x100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
      if (bVar2 != 0x25) break;
      do {
        if ((*pbVar5 == 0xd) || (*pbVar5 == 10)) break;
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 < pbVar1);
    }
  }
  iVar3 = 0;
  *param_1 = (ulonglong)pbVar5;
  local_res20 = pbVar5;
  if (pbVar5 < pbVar1) {
    if (*pbVar5 == 0x5b) {
      bVar6 = 0x5d;
    }
    else {
      bVar2 = 0;
      bVar6 = 0x7d;
      if (*pbVar5 != 0x7b) goto joined_r0x000140330cb6;
    }
    pbVar5 = pbVar5 + 1;
    local_res20 = pbVar5;
    bVar2 = bVar6;
    if (pbVar5 < pbVar1) {
joined_r0x000140330cb6:
      do {
        for (; pbVar5 < pbVar1; pbVar5 = pbVar5 + 1) {
          bVar6 = *pbVar5;
          if ((0x20 < bVar6) || ((0x100003601U >> ((ulonglong)bVar6 & 0x3f) & 1) == 0)) {
            if (bVar6 != 0x25) break;
            do {
              if ((*pbVar5 == 0xd) || (*pbVar5 == 10)) break;
              pbVar5 = pbVar5 + 1;
            } while (pbVar5 < pbVar1);
          }
        }
        local_res20 = pbVar5;
        if (pbVar1 <= pbVar5) break;
        if (*pbVar5 == bVar2) {
          local_res20 = pbVar5 + 1;
          break;
        }
        if (param_3 == 0) {
          puVar4 = local_res8;
        }
        else {
          if (param_2 <= iVar3) break;
          puVar4 = (undefined2 *)(param_3 + (longlong)iVar3 * 2);
        }
        FUN_140332e50(&local_res20,pbVar1,0);
        *puVar4 = extraout_var;
        if (pbVar5 == local_res20) {
          iVar3 = -1;
          break;
        }
        iVar3 = iVar3 + 1;
        if ((bVar2 == 0) || (pbVar5 = local_res20, pbVar1 <= local_res20)) break;
      } while( true );
    }
  }
  *param_1 = (ulonglong)local_res20;
  return iVar3;
}

