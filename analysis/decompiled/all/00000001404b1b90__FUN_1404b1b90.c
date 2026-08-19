// Function: FUN_1404b1b90
// Addr: 1404b1b90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1b90(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  pcVar1 = (char *)(param_2 + 0x4b + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

