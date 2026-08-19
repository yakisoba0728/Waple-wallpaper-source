// Function: FUN_140330e50
// Addr: 140330e50
// Size: 132 bytes


void FUN_140330e50(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)param_1[2];
  for (pbVar3 = (byte *)*param_1; pbVar3 < pbVar2; pbVar3 = pbVar3 + 1) {
    bVar1 = *pbVar3;
    if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (bVar1 != 0x25) break;
      do {
        if ((*pbVar3 == 0xd) || (*pbVar3 == 10)) break;
        pbVar3 = pbVar3 + 1;
      } while (pbVar3 < pbVar2);
    }
  }
  *param_1 = pbVar3;
  FUN_14033c270(param_1,pbVar2,param_2,param_3,param_4);
  return;
}

