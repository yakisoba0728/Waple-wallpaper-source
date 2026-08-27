// Function: FUN_140076ed0
// Addr: 140076ed0
// Size: 131 bytes


void FUN_140076ed0(longlong param_1,longlong param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  longlong local_res8;
  
  bVar3 = false;
  local_res8 = param_1;
  FUN_140030de0(&DAT_1404e5328,&local_res8);
  if (local_res8 != DAT_1404e5330) {
    if ((*(int *)(local_res8 + 0x70) == 1) && ((*(byte *)(local_res8 + 0x74) & 1) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((*(byte *)(local_res8 + 0x74) & 0x10) == 0) || (*(char *)(local_res8 + 0xe2) == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    bVar3 = bVar3 || bVar1;
  }
  bVar2 = *(byte *)(param_2 + 0x46) | 0x40;
  if (!bVar3) {
    bVar2 = *(byte *)(param_2 + 0x46) & 0xbf;
  }
  *(byte *)(param_2 + 0x46) = bVar2;
  return;
}

