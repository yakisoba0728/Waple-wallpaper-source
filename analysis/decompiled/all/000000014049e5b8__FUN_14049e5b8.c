// Function: FUN_14049e5b8
// Addr: 14049e5b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e5ba) overlaps instruction at (ram,0x00014049e5b8)
    */

void FUN_14049e5b8(char *param_1,undefined8 param_2,ulonglong *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar3;
  char unaff_BH;
  char unaff_SPL;
  longlong unaff_RDI;
  
  cVar3 = (char)param_1;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) << 1 |
       (uint)(*(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) < 0);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x2f);
  *pcVar1 = *pcVar1 + cVar3;
  cVar2 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  if (SCARRY1(cVar2,in_AL)) {
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    *(ulonglong *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(longlong *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) << 1 |
         (ulonglong)(*(longlong *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) < 0);
    *(char *)(unaff_RDI + -0x2f) = *(char *)(unaff_RDI + -0x2f) + cVar3;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    if (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) < '\0') {
      *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
           *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
      *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
      *(char *)(unaff_RDI + -0x73ffff2f) =
           *(char *)(unaff_RDI + -0x73ffff2f) + (char)((ulonglong)param_1 >> 8);
      in_AL = in(0x49);
      *param_1 = *param_1 + in_AH;
      *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
           *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
      pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x2f);
      *pcVar1 = *pcVar1 + cVar3;
      *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
           *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
      *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
      pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x1c);
      *pcVar1 = *pcVar1 + unaff_BH;
    }
    *param_4 = *param_4 + unaff_SPL;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x2f);
    *pcVar1 = *pcVar1 + in_AL;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    *(ulonglong *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(longlong *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) << 1 |
         (ulonglong)(*(longlong *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) < 0);
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x1c);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  }
  *param_4 = *param_4 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

