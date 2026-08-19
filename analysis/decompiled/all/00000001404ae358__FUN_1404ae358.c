// Function: FUN_1404ae358
// Addr: 1404ae358
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae358(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  int in_EAX;
  uint uVar2;
  char cVar3;
  undefined7 uVar4;
  char *unaff_RBX;
  byte in_CF;
  
  uVar4 = (undefined7)((ulonglong)param_2 >> 8);
  uVar2 = in_EAX + 0x53001329 + (uint)in_CF;
  cVar3 = (char)param_2 - *unaff_RBX;
  pcVar1 = (char *)(CONCAT71(uVar4,cVar3) + 0x4a);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *(char *)CONCAT71(uVar4,cVar3) = *(char *)CONCAT71(uVar4,cVar3) + (char)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

