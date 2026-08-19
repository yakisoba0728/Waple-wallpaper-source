// Function: FUN_1404a7630
// Addr: 1404a7630
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7630(char *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte *in_RAX;
  undefined7 uVar4;
  char unaff_BL;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_CF;
  
  *param_2 = *param_2 >> 1 | in_CF << 7;
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = ((byte)in_RAX | *in_RAX) + 0x1b;
  bVar2 = bVar2 | *(byte *)CONCAT71(uVar4,bVar2);
  *(byte *)(unaff_RBP + 0x4a) = *(byte *)(unaff_RBP + 0x4a) >> 1;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  cVar3 = bVar2 + 2;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)CONCAT71(uVar4,cVar3) = *(char *)CONCAT71(uVar4,cVar3) + cVar3;
  bVar2 = bVar2 + 0x1d;
  pcVar1 = (char *)(CONCAT71(uVar4,bVar2 | *(byte *)CONCAT71(uVar4,bVar2)) + 0x75);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

