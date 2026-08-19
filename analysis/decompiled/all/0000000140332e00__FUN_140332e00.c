// Function: FUN_140332e00
// Addr: 140332e00
// Size: 37 bytes


int FUN_140332e00(undefined8 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  pbVar6 = (byte *)*param_1;
  if ((param_2 <= pbVar6) || (0x22 < param_3 - 2U)) {
    return 0;
  }
  if ((*pbVar6 - 0x2b & 0xfd) == 0) {
    bVar8 = *pbVar6 == 0x2d;
    pbVar6 = pbVar6 + 1;
    if (pbVar6 == param_2) {
      return 0;
    }
    if ((*pbVar6 - 0x2b & 0xfd) == 0) {
      return 0;
    }
  }
  else {
    bVar8 = false;
  }
  iVar5 = 0;
  bVar3 = false;
  bVar4 = false;
  if (pbVar6 < param_2) {
    while( true ) {
      bVar3 = bVar4;
      bVar1 = *pbVar6;
      if (((bVar1 < 0x21) && ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
         (0x7f < bVar1)) break;
      cVar2 = (&DAT_140441650)[bVar1 & 0x7f];
      if ((cVar2 < '\0') || (param_3 <= cVar2)) break;
      iVar7 = (int)(0x7fffffff / (longlong)param_3);
      if ((iVar7 < iVar5) || ((iVar5 == iVar7 && ((char)(0x7fffffff % (longlong)param_3) < cVar2))))
      {
        bVar3 = true;
      }
      else {
        iVar5 = iVar5 * param_3 + (int)cVar2;
      }
      pbVar6 = pbVar6 + 1;
      bVar4 = bVar3;
      if (param_2 <= pbVar6) break;
    }
  }
  *param_1 = pbVar6;
  if (bVar3) {
    iVar5 = 0x7fffffff;
  }
  iVar7 = -iVar5;
  if (!bVar8) {
    iVar7 = iVar5;
  }
  return iVar7;
}

