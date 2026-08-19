// Function: FUN_1404af058
// Addr: 1404af058
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af058(char *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar3;
  undefined4 *unaff_RBX;
  char cVar4;
  int unaff_ESP;
  longlong unaff_RBP;
  
  bVar3 = (byte)((ulonglong)param_1 >> 8);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 7);
  *pbVar1 = *pbVar1 | bVar3;
  *(int *)(unaff_RBP + 0x6e00138b) = *(int *)(unaff_RBP + 0x6e00138b) + unaff_ESP;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x11);
  *pcVar2 = *pcVar2 + in_AH;
  cVar4 = (char)unaff_ESP;
  *param_1 = *param_1 + cVar4;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)(unaff_RBP + 0x6e00138b) = *(char *)(unaff_RBP + 0x6e00138b) + in_AH;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x11);
  *pcVar2 = *pcVar2 + in_AH;
  *param_1 = *param_1 + cVar4;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x5affec75);
  *pcVar2 = *pcVar2 + in_AL;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x11);
  *pcVar2 = *pcVar2 + (char)*unaff_RBX;
  *param_1 = *param_1 + cVar4;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar2 = *pcVar2 + (char)param_1;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 7);
  *pcVar2 = *pcVar2 + bVar3;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  in(0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

