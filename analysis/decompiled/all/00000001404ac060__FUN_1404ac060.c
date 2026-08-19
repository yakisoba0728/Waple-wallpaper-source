// Function: FUN_1404ac060
// Addr: 1404ac060
// Size: 1 bytes


void FUN_1404ac060(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  undefined1 *in_R9;
  
  cVar3 = in(0xf1);
  *in_R9 = *in_R9;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + cVar3;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + -0x57);
  *pcVar1 = *pcVar1 + in_AH;
  LocalDescriptorTableRegister(*(undefined2 *)(unaff_RBX + -0x1bfff057));
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

