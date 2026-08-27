// Function: FUN_14008f570
// Addr: 14008f570
// Size: 300 bytes


undefined8 FUN_14008f570(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  pcVar6 = *(char **)(param_2 + 8);
  uVar7 = 0x1999999999999999;
  cVar1 = *pcVar6;
  if (cVar1 == '-') {
    uVar7 = 0xccccccccccccccc;
    pcVar6 = pcVar6 + 1;
  }
  uVar5 = 5;
  if (cVar1 == '-') {
    uVar5 = 8;
  }
  local_58 = 0;
  while( true ) {
    if (*(char **)(param_2 + 0x10) <= pcVar6) {
      local_50 = CONCAT31(local_50._1_3_,1);
      if (cVar1 == '-') {
        local_58 = -(local_58 % 10 + (local_58 / 10) * 10);
      }
      else if (0x7fffffffffffffff < local_58) {
        local_50 = CONCAT31(local_50._1_3_,2);
      }
      local_50 = local_50 & 0xfffffeff;
      local_38 = 0;
      local_48 = 0;
      uStack_40 = 0;
      FUN_140085610(param_3,&local_58);
      FUN_140085440(&local_58);
      return 1;
    }
    cVar2 = *pcVar6;
    if (9 < (byte)(cVar2 - 0x30U)) break;
    pcVar6 = pcVar6 + 1;
    uVar3 = (int)cVar2 - 0x30;
    if ((uVar7 <= local_58) &&
       (((uVar7 < local_58 || (pcVar6 != *(char **)(param_2 + 0x10))) || (uVar5 < uVar3)))) break;
    local_58 = (ulonglong)uVar3 + local_58 * 10;
  }
  uVar4 = FUN_14008f6a0(param_1,param_2,param_3);
  return uVar4;
}

