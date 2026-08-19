// Function: FUN_1404b4b78
// Addr: 1404b4b78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4b78(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  byte in_AL;
  char cVar4;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  undefined1 *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar2 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  cVar4 = (in_AL - *(char *)CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))) -
          CARRY1(bVar2,in_AL);
  pcVar1 = (char *)(param_2 + 0x4b + (longlong)param_1 * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4)))
       + cVar4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) + 0x13);
  *pcVar1 = *pcVar1 + in_AH;
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

