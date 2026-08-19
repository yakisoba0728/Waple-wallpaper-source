// Function: FUN_1404d11bc
// Addr: 1404d11bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d11bc(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *pbVar2;
  byte *pbVar3;
  char unaff_BL;
  longlong unaff_RBP;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pbVar3 = (byte *)(param_2 ^ 0x3c00);
  pcVar1 = (char *)(unaff_RBP + -0x7fffc30a);
  *pcVar1 = *pcVar1 + unaff_BL;
  pbVar2 = (byte *)(param_1 + -1);
  if (pbVar2 == (byte *)0x0 || *pcVar1 != '\0') {
    *pbVar2 = *pbVar2 + in_AH;
    *pbVar3 = *pbVar3 | in_AL;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + (char)pbVar2;
    pcVar1 = (char *)((CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 0x12) - 0x1f
                     );
    *pcVar1 = *pcVar1 + (char)((ulonglong)pbVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar2 = *pbVar2 ^ in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

