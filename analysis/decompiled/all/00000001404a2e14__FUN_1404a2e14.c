// Function: FUN_1404a2e14
// Addr: 1404a2e14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2e28) overlaps instruction at (ram,0x0001404a2e23)
    */

void FUN_1404a2e14(char *param_1,longlong param_2)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  byte bVar6;
  char *in_RAX;
  char *pcVar4;
  ulonglong uVar5;
  char unaff_BH;
  char unaff_SPL;
  longlong unaff_RDI;
  
  uRam0000000124572e1e = uRam0000000124572e1e & (uint)param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar3 = (int)in_RAX + 0xc0000f64;
  if ((int)uVar3 < 0) {
    *(char *)(param_2 + 0x3400057b) = *(char *)(param_2 + 0x3400057b) + unaff_BH;
    uVar3 = (int)in_RAX + 0xbfdf0f1a;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
    param_1[5] = param_1[5];
  }
  else {
    pcVar4 = (char *)((ulonglong)uVar3 ^ 0x2d);
    *param_1 = *param_1 + unaff_SPL;
    *pcVar4 = *pcVar4 + (char)pcVar4;
    uVar1 = (undefined3)(uVar3 >> 8);
    cVar2 = (char)pcVar4 * '\x02';
    uVar3 = CONCAT31(uVar1,cVar2);
    if (-1 < cVar2) {
      uVar5 = (ulonglong)CONCAT31(uVar1,cVar2) ^ 0x2d;
      *param_1 = *param_1 + unaff_SPL;
      *(char *)(uVar5 * 2) = *(char *)(uVar5 * 2) + (char)uVar5;
      goto code_r0x0001404a2e40;
    }
    *(char *)(param_2 + 0x3400057b) = *(char *)(param_2 + 0x3400057b) + unaff_BH;
  }
  uVar5 = (ulonglong)(uVar3 - 0x21004a);
code_r0x0001404a2e40:
  bVar6 = (byte)(uVar5 >> 8);
  pcVar4 = (char *)CONCAT62((int6)(uVar5 >> 0x10),CONCAT11(bVar6 * '\x02',(char)uVar5));
  *pcVar4 = *pcVar4 + (char)uVar5 + CARRY1(bVar6,bVar6);
  param_1[unaff_RDI] = param_1[unaff_RDI] + bVar6 * '\x02';
  param_1[5] = param_1[5];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

