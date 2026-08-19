// Function: FUN_1404ce968
// Addr: 1404ce968
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce968(void)

{
  byte bVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_ESP;
  longlong unaff_RBP;
  
  bVar1 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(int *)(unaff_RBP + 0x1f) = *(int *)(unaff_RBP + 0x1f) + unaff_ESP + (uint)CARRY1(bVar1,in_AL);
  *(char *)(unaff_RBP + -8) = *(char *)(unaff_RBP + -8) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

