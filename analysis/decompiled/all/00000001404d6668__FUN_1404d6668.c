// Function: FUN_1404d6668
// Addr: 1404d6668
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6668(char *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  char in_AL;
  char cVar3;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  char unaff_R12B;
  longlong unaff_GS_OFFSET;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = in_AL + unaff_BL;
  *(char *)(unaff_GS_OFFSET + param_4) = *(char *)(unaff_GS_OFFSET + param_4) + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + cVar3;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + in_AH;
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) >> 1;
  *(char *)(param_2 + -0x2f) = *(char *)(param_2 + -0x2f) + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)));
  *pcVar1 = *pcVar1 + cVar3;
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)CONCAT62(in_register_00000002,CONCAT11(in_AH + (char)param_2,cVar3)) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

