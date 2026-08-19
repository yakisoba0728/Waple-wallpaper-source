// Function: FUN_14049e4ac
// Addr: 14049e4ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e4ac(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  char in_AH;
  byte bVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar4;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  unaff_RDI[unaff_RBP] = unaff_RDI[unaff_RBP] & bVar4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + unaff_RSI);
  *pcVar1 = *pcVar1 - bVar4;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (char)param_1;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar4 = *unaff_RDI;
  bVar3 = in_AH + in_AL;
  if (param_1 == (char *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + bVar3;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) + 0x7e);
  *pcVar1 = *pcVar1 + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)))
       + in_AL;
  bVar2 = *unaff_RDI;
  if (param_1 != (char *)0x0) {
    *param_1 = *param_1 + in_AL;
    in(0xc1);
    pcVar1 = (char *)(CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                               CONCAT11((byte)((ulonglong)unaff_RBX >> 8) | bVar4 | bVar2,
                                        (char)unaff_RBX)) + 0x1d00c264);
    *pcVar1 = *pcVar1 + (char)unaff_RBX;
    *(char *)(unaff_RSI + 2) = *(char *)(unaff_RSI + 2) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_2 + 0xd) =
       *(int *)(param_2 + 0xd) + CONCAT22(in_register_00000002,CONCAT11(bVar3 + in_AL,in_AL)) +
       (uint)CARRY1(bVar3,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

