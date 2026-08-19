// Function: FUN_1404a3f48
// Addr: 1404a3f48
// Size: 1 bytes


void FUN_1404a3f48(char *param_1,char *param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  byte *unaff_RDI;
  longlong unaff_R13;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar2 = in_AH + (char)((ulonglong)param_2 >> 8) + in_AL;
  *(char *)(unaff_R13 + -0x1afff8f9) = *(char *)(unaff_R13 + -0x1afff8f9) + in_AL;
  *unaff_RDI = *unaff_RDI | in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) + 0x3e);
  *pcVar1 = *pcVar1 + in_AL;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

