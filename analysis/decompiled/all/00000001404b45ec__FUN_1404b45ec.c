// Function: FUN_1404b45ec
// Addr: 1404b45ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b45ec(undefined8 param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBP;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x2c);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  pbVar2 = (byte *)(unaff_RBP * 2 + 0x6d4e0019);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + in_AH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       (*(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       - CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) - (uint)CARRY1(bVar3,in_AH);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

