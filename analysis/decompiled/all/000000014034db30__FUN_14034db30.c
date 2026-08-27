// Function: FUN_14034db30
// Addr: 14034db30
// Size: 150 bytes


longlong FUN_14034db30(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int local_res8 [2];
  
  uVar1 = *(ushort *)(param_1 + 8);
  pbVar6 = *(byte **)(param_1 + 0x10);
  lVar3 = FUN_1402f7ff0(param_2,1,0,uVar1 + 1,0,local_res8);
  if (local_res8[0] != 0) {
    return 0;
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      bVar2 = *pbVar6;
      if (bVar2 == 0) break;
      pbVar6 = pbVar6 + 1;
      if ((bVar2 < 0x20) || (0x7f < bVar2)) {
        bVar2 = 0x3f;
      }
      *(byte *)(uVar5 + lVar3) = bVar2;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar1);
  }
  *(undefined1 *)(uVar5 + lVar3) = 0;
  return lVar3;
}

