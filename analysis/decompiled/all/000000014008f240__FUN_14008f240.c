// Function: FUN_14008f240
// Addr: 14008f240
// Size: 63 bytes


void FUN_14008f240(longlong param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x80);
  while (((pbVar1 != *(byte **)(param_1 + 0x78) && (*pbVar1 < 0x21)) &&
         ((0x100002600U >> ((longlong)(char)*pbVar1 & 0x3fU) & 1) != 0))) {
    pbVar1 = pbVar1 + 1;
    *(byte **)(param_1 + 0x80) = pbVar1;
  }
  return;
}

