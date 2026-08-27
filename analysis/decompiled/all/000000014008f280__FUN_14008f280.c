// Function: FUN_14008f280
// Addr: 14008f280
// Size: 271 bytes


ulonglong FUN_14008f280(longlong param_1,char param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = *(byte **)(param_1 + 0x80);
  if (((param_2 != '\0') && (pbVar3 != *(byte **)(param_1 + 0x78))) && (*pbVar3 == 0x49)) {
    *(byte **)(param_1 + 0x80) = pbVar3 + 1;
    return (ulonglong)(pbVar3 + 1) & 0xffffffffffffff00;
  }
  bVar4 = 0x30;
  do {
    if (0x39 < bVar4) break;
    *(byte **)(param_1 + 0x80) = pbVar3;
    if (*(byte **)(param_1 + 0x78) <= pbVar3) goto LAB_14008f38c;
    bVar4 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while ('/' < (char)bVar4);
  if (bVar4 == 0x2e) {
    pbVar1 = *(byte **)(param_1 + 0x78);
    *(byte **)(param_1 + 0x80) = pbVar3;
    if ((pbVar1 <= pbVar3) || (bVar4 = *pbVar3, (char)bVar4 < '0')) goto LAB_14008f38c;
    pbVar3 = pbVar3 + 1;
    while (bVar4 < 0x3a) {
      *(byte **)(param_1 + 0x80) = pbVar3;
      if (pbVar1 <= pbVar3) goto LAB_14008f38c;
      bVar4 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      if ((char)bVar4 < '0') {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
    }
  }
  if ((bVar4 + 0xbb & 0xdf) == 0) {
    pbVar2 = *(byte **)(param_1 + 0x78);
    pbVar1 = pbVar3 + 1;
    *(byte **)(param_1 + 0x80) = pbVar3;
    if (pbVar3 < pbVar2) {
      bVar4 = *pbVar3;
      if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) {
        *(byte **)(param_1 + 0x80) = pbVar1;
        if (pbVar2 <= pbVar1) goto LAB_14008f38c;
        bVar4 = *pbVar1;
        pbVar1 = pbVar3 + 2;
      }
    }
    else {
      bVar4 = 0;
      if (pbVar2 <= pbVar3) {
        pbVar1 = pbVar3;
      }
    }
    for (; (('/' < (char)bVar4 && (bVar4 < 0x3a)) &&
           (*(byte **)(param_1 + 0x80) = pbVar1, pbVar1 < pbVar2)); pbVar1 = pbVar1 + 1) {
      bVar4 = *pbVar1;
    }
  }
LAB_14008f38c:
  return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
}

