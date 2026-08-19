// Function: FUN_1404d7f30
// Addr: 1404d7f30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7f4a) overlaps instruction at (ram,0x0001404d7f48)
    */

void FUN_1404d7f30(longlong param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *pcVar4;
  char *unaff_RBX;
  char unaff_SPL;
  char in_CF;
  char cVar3;
  
  pcVar1 = (char *)(param_2 + 0x14);
  cVar2 = *pcVar1;
  cVar3 = *pcVar1;
  *pcVar1 = (cVar3 - in_AH) - in_CF;
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0 || *pcVar1 == '\0') {
    if (SBORROW1(cVar2,in_AH) == SBORROW1(cVar3 - in_AH,in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  }
  else {
    unaff_RBX[-0x42] = unaff_RBX[-0x42] + (char)((ulonglong)pcVar4 >> 8);
    *(char *)(param_3 + 0x3e) = *(char *)(param_3 + 0x3e) + unaff_SPL;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  }
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *pcVar4 = *pcVar4 + (char)pcVar4;
  *unaff_RBX = *unaff_RBX + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

