// Function: FUN_14034dbd0
// Addr: 14034dbd0
// Size: 158 bytes


longlong FUN_14034dbd0(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  int local_res8 [2];
  
  puVar6 = *(undefined1 **)(param_1 + 0x10);
  uVar1 = *(ushort *)(param_1 + 8) >> 1;
  lVar3 = FUN_1402f7ff0(param_2,1,0,uVar1 + 1,0,local_res8);
  if (local_res8[0] != 0) {
    return 0;
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = CONCAT11(*puVar6,puVar6[1]);
      if (uVar2 == 0) break;
      if ((uVar2 < 0x20) || (0x7f < uVar2)) {
        uVar2 = 0x3f;
      }
      *(char *)(uVar5 + lVar3) = (char)uVar2;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      puVar6 = puVar6 + 2;
    } while (uVar4 < uVar1);
  }
  *(undefined1 *)(uVar5 + lVar3) = 0;
  return lVar3;
}

