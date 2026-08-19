// Function: FUN_1404c614c
// Addr: 1404c614c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c614c(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  byte bVar3;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *unaff_RDI;
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar3 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  (&stack0x00000000)
  [CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))] =
       (&stack0x00000000)
       [CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))] +
       (char)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + -0x35ffd0f0);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_1 >> 8) + CARRY1(bVar2,in_AH);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + 0x10049e1);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) +
       (int)param_1 + (uint)CARRY1(bVar2,bVar3);
  *param_1 = *param_1 + (char)param_2;
  *param_1 = *param_1 + (char)param_2;
  *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

