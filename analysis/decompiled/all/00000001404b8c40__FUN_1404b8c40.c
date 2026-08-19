// Function: FUN_1404b8c40
// Addr: 1404b8c40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8c40(char *param_1,int param_2)

{
  char in_AL;
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  byte *pbVar2;
  
  bVar1 = in_AL + 0x60;
  pbVar2 = (byte *)(ulonglong)
                   (uint)(param_2 +
                         *(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) + 2));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ bVar1;
  *param_1 = *param_1 + in_AH;
  *pbVar2 = *pbVar2 | bVar1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

