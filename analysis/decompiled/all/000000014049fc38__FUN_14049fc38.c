// Function: FUN_14049fc38
// Addr: 14049fc38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049fc51) overlaps instruction at (ram,0x00014049fc50)
    */

void FUN_14049fc38(uint *param_1,char *param_2)

{
  uint *puVar1;
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *pcVar2;
  char unaff_BL;
  uint unaff_EBP;
  byte *unaff_RSI;
  
  *param_1 = *param_1 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  out((short)param_2,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *param_2 = *param_2 + (char)param_2;
  pcVar2 = (char *)((longlong)param_1 + -1);
  if (pcVar2 != (char *)0x0 && *param_2 != '\0') {
    *pcVar2 = *pcVar2 + in_AH;
    out((short)param_2,in_AL);
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + (char)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI >> 1 | *unaff_RSI << 7;
  if (((*unaff_RSI & 0x40) != 0) == (char)*unaff_RSI < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x76);
  *puVar1 = *puVar1 & unaff_EBP;
  *pcVar2 = *pcVar2 + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

