// Function: FUN_1404a578c
// Addr: 1404a578c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a578c(ulonglong param_1,char param_2)

{
  byte *pbVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  longlong in_FS_OFFSET;
  
  pbVar1 = (byte *)(in_FS_OFFSET + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pbVar1 = *pbVar1 | in_AL;
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  bVar2 = in_AL + param_2;
  pbVar1 = (byte *)(in_FS_OFFSET + CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)));
  *pbVar1 = *pbVar1 | bVar2;
  pbVar1 = (byte *)(in_FS_OFFSET + CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)));
  *pbVar1 = *pbVar1 | bVar2;
  *(byte *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

