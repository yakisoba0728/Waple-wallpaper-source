// Function: FUN_1404afd60
// Addr: 1404afd60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afd60(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  longlong unaff_RDI;
  
  uRam00000001a44ffd68 = uRam00000001a44ffd68 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
  ;
  cVar2 = in_AH + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RDI + -0x5bffeb14) = *(char *)(unaff_RDI + -0x5bffeb14) + unaff_BL;
  *param_1 = *param_1 + -8;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))));
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

