// Function: FUN_1404a41fc
// Addr: 1404a41fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a41fc(char param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined1 uVar2;
  char in_AH;
  undefined6 in_register_00000002;
  byte bVar3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *(byte *)(unaff_RBP * 2) = *(byte *)(unaff_RBP * 2) & bVar3;
  *(char *)(unaff_RDI + unaff_RBP) = *(char *)(unaff_RDI + unaff_RBP) - bVar3;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_2;
  uVar2 = in(0x2a);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,uVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,uVar2)) + param_1;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,uVar2)) + -0x1ffff8b3);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

