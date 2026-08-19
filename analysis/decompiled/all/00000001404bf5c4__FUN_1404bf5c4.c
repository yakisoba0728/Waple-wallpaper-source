// Function: FUN_1404bf5c4
// Addr: 1404bf5c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf5c4(longlong param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte unaff_BL;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  if (param_1 != 0) {
    *(char *)(param_1 + -0x1c) = *(char *)(param_1 + -0x1c) + in_AH;
    (&stack0x3201004b)[CONCAT44(unaff_00000034,unaff_ESI) * 8] =
         (&stack0x3201004b)[CONCAT44(unaff_00000034,unaff_ESI) * 8] + unaff_BL;
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    piVar3 = (int *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    *piVar3 = *piVar3 + unaff_ESI;
    bVar1 = *param_2;
    *param_2 = *param_2 + unaff_BL;
    cVar2 = *(char *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         (byte)(CONCAT11(CARRY1(bVar1,unaff_BL),cVar2) >> 7) | cVar2 << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x000118b3f5ff();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

