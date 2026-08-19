// Function: FUN_1404d0a9c
// Addr: 1404d0a9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0a9c(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EDI;
  uint uVar2;
  
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 1;
  uVar2 = unaff_EDI & *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar1 = (char *)((ulonglong)uVar2 + 0x4a + param_2 * 4);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)((ulonglong)
                    (uVar2 & *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) &
                    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL + unaff_BH))) + 0x4a
                   + param_2 * 4);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

