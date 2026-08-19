// Function: FUN_1404a4618
// Addr: 1404a4618
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4618(longlong param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *in_RAX;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_ZF;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  pcVar4 = (char *)(param_1 + -1);
  bVar2 = (byte)in_RAX;
  if (pcVar4 == (char *)0x0 || in_ZF != '\0') {
    *pcVar4 = *pcVar4 + unaff_SPL;
    *in_RAX = *in_RAX + bVar2;
    in_RAX[-0x76] = in_RAX[-0x76] + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX | bVar2;
  pcVar4[CONCAT71(unaff_00000019,unaff_BL)] = pcVar4[CONCAT71(unaff_00000019,unaff_BL)] + cVar5;
  *(char *)(param_1 + 0x78a3fff) = *(char *)(param_1 + 0x78a3fff) + cVar5;
  pcVar3 = (char *)((longlong)param_2 + (longlong)pcVar4 * 4 + 7);
  *pcVar3 = *pcVar3 + unaff_BL;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + (char)((ulonglong)in_RAX >> 8);
  *pcVar4 = *pcVar4 + bVar2;
  *param_2 = *param_2 | (uint)in_RAX;
  *pcVar4 = *pcVar4 + (byte)pcVar4;
  bVar1 = (byte)pcVar4 & 7;
  bRam00000001465e684f = bRam00000001465e684f << bVar1 | bRam00000001465e684f >> 8 - bVar1;
  pcVar3 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 2);
  *pcVar3 = *pcVar3 + (char)param_2;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2 | *in_RAX);
  *(char *)(param_1 + 0x8e403ff) = *(char *)(param_1 + 0x8e403ff) + cVar5;
  *pcVar3 = *pcVar3 + (char)param_2;
  cRam00000000e44a4e22 = cRam00000000e44a4e22 + (char)((ulonglong)pcVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

