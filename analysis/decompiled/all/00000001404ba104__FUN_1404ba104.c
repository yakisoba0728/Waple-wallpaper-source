// Function: FUN_1404ba104
// Addr: 1404ba104
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba104(char param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong in_RAX;
  byte *pbVar3;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RDI;
  char in_CF;
  
  *(char *)(in_RAX + -0x77f9fffc) = *(char *)(in_RAX + -0x77f9fffc) + unaff_BL + in_CF;
  uVar2 = (int)in_RAX + 0x2066b800;
  *(char *)(unaff_RDI + 0x20) = *(char *)(unaff_RDI + 0x20) + unaff_BH;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + param_1;
  bVar1 = bRam66b800000021004b;
  pbVar3 = (byte *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bRam66b800000021004b);
  *pbVar3 = *pbVar3 & bRam66b800000021004b;
  if (-1 < (char)*pbVar3) {
    *pbVar3 = *pbVar3 & bVar1;
    pbVar3[0x21004b] = pbVar3[0x21004b] | (byte)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar3 = *pbVar3 + bVar1;
  *param_2 = *param_2 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

