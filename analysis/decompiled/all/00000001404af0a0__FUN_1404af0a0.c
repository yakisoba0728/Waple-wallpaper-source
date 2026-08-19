// Function: FUN_1404af0a0
// Addr: 1404af0a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af0a0(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  byte bVar3;
  undefined6 uVar4;
  longlong unaff_RBX;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)param_2;
  param_1[unaff_RBX + 2] = param_1[unaff_RBX + 2] + in_AH;
  *(byte *)(unaff_RBX + -0x745affed) = *(byte *)(unaff_RBX + -0x745affed) | 0x13;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x11);
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + in_AL;
  bVar3 = (byte)((ulonglong)param_2 >> 8) | param_1[param_2];
  *(char *)CONCAT62(uVar4,CONCAT11(bVar3,cVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(bVar3,cVar2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

