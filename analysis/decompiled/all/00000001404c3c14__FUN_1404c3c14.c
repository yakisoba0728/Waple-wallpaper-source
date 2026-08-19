// Function: FUN_1404c3c14
// Addr: 1404c3c14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3c14(void)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  int unaff_EBX;
  int unaff_ESI;
  byte *pbVar2;
  
  pbVar2 = (byte *)(ulonglong)(uint)(unaff_ESI + *(int *)CONCAT71(in_register_00000001,in_AL));
  *pbVar2 = *pbVar2 >> 1;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 1);
  *pcVar1 = *pcVar1 + (char)unaff_EBX;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  iRam0000000141693c2c = iRam0000000141693c2c + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

