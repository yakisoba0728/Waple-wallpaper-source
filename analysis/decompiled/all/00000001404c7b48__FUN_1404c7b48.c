// Function: FUN_1404c7b48
// Addr: 1404c7b48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7b48(char *param_1,char *param_2,ulonglong *param_3)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  char *unaff_RSI;
  bool in_PF;
  
  if (!in_PF) {
    *param_1 = *param_1 + in_AH;
    *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
         - (int)param_1;
    *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
    in(9);
    cRam00000001514c83bd = cRam00000001514c83bd + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI + (char)param_2;
  if (*unaff_RSI != '\0') {
    *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x48ffceb3);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_3 = *param_3 ^ (ulonglong)param_3;
  uRam0000000124517bb8 = uRam0000000124517bb8 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
  ;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

