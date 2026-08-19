// Function: FUN_14049e58c
// Addr: 14049e58c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e58c(char *param_1,undefined8 param_2,ulonglong *param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       << 1 | (uint)(*(int *)CONCAT44(in_register_00000004,
                                      CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) < 0);
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x210049);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
  *(char *)(unaff_RDI + -0x73ffff2b) =
       *(char *)(unaff_RDI + -0x73ffff2b) + (char)((ulonglong)param_1 >> 8);
  cVar2 = in(0x49);
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) + -0x2f);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) + -0x1c);
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) + -0x2f);
  *pcVar1 = *pcVar1 + cVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  *(ulonglong *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       = *(longlong *)
          CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) << 1 |
         (ulonglong)
         (*(longlong *)
           CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) < 0);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) + -0x1c);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

