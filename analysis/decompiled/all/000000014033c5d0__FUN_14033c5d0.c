// Function: FUN_14033c5d0
// Addr: 14033c5d0
// Size: 151 bytes


undefined8 FUN_14033c5d0(longlong *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(*param_1 + 1);
  do {
    if (param_2 <= pbVar2) {
LAB_14033c64f:
      *param_1 = (longlong)(pbVar2 + 1);
      return 0;
    }
    do {
      bVar1 = *pbVar2;
      if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 != 0x25) break;
        do {
          if ((*pbVar2 == 0xd) || (*pbVar2 == 10)) break;
          pbVar2 = pbVar2 + 1;
        } while (pbVar2 < param_2);
      }
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 < param_2);
    if (param_2 <= pbVar2) goto LAB_14033c64f;
    bVar1 = *pbVar2;
    if (((9 < (byte)(bVar1 - 0x30)) && (5 < (byte)(bVar1 + 0xbf))) && (5 < (byte)(bVar1 + 0x9f))) {
      if (bVar1 != 0x3e) {
        *param_1 = (longlong)pbVar2;
        return 3;
      }
      goto LAB_14033c64f;
    }
    pbVar2 = pbVar2 + 1;
  } while( true );
}

