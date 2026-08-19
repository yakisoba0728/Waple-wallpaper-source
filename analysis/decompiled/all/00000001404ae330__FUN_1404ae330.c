// Function: FUN_1404ae330
// Addr: 1404ae330
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae330(char *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int *in_RAX;
  char cVar4;
  char cVar5;
  undefined6 uVar6;
  char *unaff_RBX;
  byte in_CF;
  bool in_OF;
  char *pcVar3;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)((ulonglong)param_2 >> 8);
  if (in_OF) {
    uVar1 = (int)in_RAX + *in_RAX + (uint)in_CF;
    cVar4 = (char)param_2 - *unaff_RBX;
    pcVar3 = (char *)(CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) + 0x4a);
    *pcVar3 = *pcVar3 + (char)((ulonglong)param_1 >> 8);
    *param_1 = *param_1 + (char)(uVar1 >> 8);
    *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) =
         *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) + (char)uVar1;
    *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (int)in_RAX + *in_RAX + (uint)in_CF;
  uVar1 = uVar1 + *(int *)(ulonglong)uVar1 + 0xc4050002;
  uVar2 = uVar1 | 0x13290b00;
  pcVar3 = (char *)(ulonglong)uVar2;
  cRam00000001984af676 = cRam00000001984af676 + (char)param_2;
  if (param_1 == (char *)0x1) {
    cRam0000000000000000 = cRam0000000000000000 + (char)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar3 = *pcVar3 + (char)uVar1;
  pcVar3[0x28] = pcVar3[0x28] + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

