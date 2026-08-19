// Function: FUN_1404afc50
// Addr: 1404afc50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afc50(char *param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  longlong unaff_retaddr;
  
  cVar4 = in(0x14);
  pcVar2 = (char *)(unaff_retaddr + 0x4a + unaff_RBP);
  *pcVar2 = *pcVar2 + (char)param_1;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) + cVar4;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) + (char)param_2;
  cVar4 = in(0x14);
  pbVar1 = (byte *)(unaff_retaddr + -0x1c);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)unaff_retaddr;
  cVar4 = cVar4 + CARRY1(bVar3,(byte)unaff_retaddr);
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

