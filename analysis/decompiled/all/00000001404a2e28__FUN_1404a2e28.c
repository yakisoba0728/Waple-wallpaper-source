// Function: FUN_1404a2e28
// Addr: 1404a2e28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2e38) overlaps instruction at (ram,0x0001404a2e33)
    */

void FUN_1404a2e28(char *param_1,longlong param_2)

{
  char cVar1;
  byte bVar4;
  ulonglong in_RAX;
  char *pcVar2;
  undefined7 uVar5;
  ulonglong uVar3;
  char unaff_BH;
  char unaff_SPL;
  longlong unaff_RDI;
  
  pcVar2 = (char *)(in_RAX ^ 0x2d);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar2 = *pcVar2 + (char)pcVar2;
  uVar5 = (undefined7)(in_RAX >> 8);
  cVar1 = (char)pcVar2 * '\x02';
  if (cVar1 < '\0') {
    *(char *)(param_2 + 0x3400057b) = *(char *)(param_2 + 0x3400057b) + unaff_BH;
    uVar3 = (ulonglong)((int)CONCAT71(uVar5,cVar1) - 0x21004a);
  }
  else {
    uVar3 = CONCAT71(uVar5,cVar1) ^ 0x2d;
    *param_1 = *param_1 + unaff_SPL;
    *(char *)(uVar3 * 2) = *(char *)(uVar3 * 2) + (char)uVar3;
  }
  bVar4 = (byte)(uVar3 >> 8);
  pcVar2 = (char *)CONCAT62((int6)(uVar3 >> 0x10),CONCAT11(bVar4 * '\x02',(char)uVar3));
  *pcVar2 = *pcVar2 + (char)uVar3 + CARRY1(bVar4,bVar4);
  param_1[unaff_RDI] = param_1[unaff_RDI] + bVar4 * '\x02';
  param_1[5] = param_1[5];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

