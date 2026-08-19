// Function: FUN_1404acab0
// Addr: 1404acab0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acab0(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte in_AH;
  undefined6 in_register_00000002;
  char unaff_BPL;
  
  cVar3 = cRambc00109bbb00109b;
  *param_1 = *param_1 + unaff_BPL + '\b';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + cVar3;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + -0x44ffef65);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + cVar3 + CARRY1(bVar2,in_AH);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

