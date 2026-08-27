// Function: FUN_1402d1f94
// Addr: 1402d1f94
// Size: 116 bytes


byte * FUN_1402d1f94(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  __acrt_initialize_multibyte();
  pbVar5 = &DAT_1404e45d8;
  if (DAT_1404e4ec0 != (byte *)0x0) {
    pbVar5 = DAT_1404e4ec0;
  }
  bVar2 = false;
  do {
    bVar1 = *pbVar5;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return pbVar5;
      }
      if (!bVar2) {
        do {
          if (0x20 < bVar1) {
            return pbVar5;
          }
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
        } while (bVar1 != 0);
        return pbVar5;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = FUN_1402d9e10(bVar1);
    pbVar4 = pbVar5 + 1;
    if (iVar3 == 0) {
      pbVar4 = pbVar5;
    }
    pbVar5 = pbVar4 + 1;
  } while( true );
}

