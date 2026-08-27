// Function: FUN_14032fbb0
// Addr: 14032fbb0
// Size: 91 bytes


void FUN_14032fbb0(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)param_1[2];
  pbVar3 = (byte *)*param_1;
  if (pbVar2 <= pbVar3) {
    *param_1 = pbVar3;
    return;
  }
  do {
    bVar1 = *pbVar3;
    if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (bVar1 != 0x25) break;
      do {
        if ((*pbVar3 == 0xd) || (*pbVar3 == 10)) break;
        pbVar3 = pbVar3 + 1;
      } while (pbVar3 < pbVar2);
    }
    pbVar3 = pbVar3 + 1;
  } while (pbVar3 < pbVar2);
  *param_1 = pbVar3;
  return;
}

