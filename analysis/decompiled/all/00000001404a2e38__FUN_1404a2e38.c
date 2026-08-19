// Function: FUN_1404a2e38
// Addr: 1404a2e38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2e38(char *param_1)

{
  char cVar1;
  ulonglong in_RAX;
  char *pcVar2;
  char unaff_SPL;
  longlong unaff_RDI;
  byte bVar3;
  
  *param_1 = *param_1 + unaff_SPL;
  pcVar2 = (char *)((in_RAX ^ 0x2d) * 2);
  cVar1 = (char)(in_RAX ^ 0x2d);
  *pcVar2 = *pcVar2 + cVar1;
  bVar3 = (byte)(in_RAX >> 8);
  pcVar2 = (char *)CONCAT62((int6)(in_RAX >> 0x10),CONCAT11(bVar3 * '\x02',cVar1));
  *pcVar2 = *pcVar2 + cVar1 + CARRY1(bVar3,bVar3);
  param_1[unaff_RDI] = param_1[unaff_RDI] + bVar3 * '\x02';
  param_1[5] = param_1[5];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

