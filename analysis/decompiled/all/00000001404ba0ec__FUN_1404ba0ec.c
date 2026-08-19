// Function: FUN_1404ba0ec
// Addr: 1404ba0ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba0ec(undefined8 param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  char *pcVar3;
  int *piVar4;
  ulonglong uVar5;
  byte *pbVar6;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RDI;
  char in_AF;
  
  pcVar3 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | (byte)param_2,(char)in_RAX));
  bVar1 = (char)in_RAX + *pcVar3;
  piVar4 = (int *)CONCAT71((int7)((ulonglong)pcVar3 >> 8),bVar1 - 0x3c);
  uVar2 = (int)piVar4 + *piVar4 + (uint)(0x3b < bVar1);
  pbVar6 = (byte *)(ulonglong)uVar2;
  *pbVar6 = *pbVar6 & (byte)uVar2;
  uVar5 = CONCAT62(0xf400,CONCAT11(((char)*pbVar6 < '\0') << 7 | (*pbVar6 == 0) << 6 | in_AF << 4 |
                                   ((POPCOUNT(*pbVar6) & 1U) == 0) << 2,0x66)) | 0x200;
  *param_4 = *param_4;
  pbVar6 = (byte *)(uVar5 * 2);
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + 0x66;
  *(char *)(uVar5 - 0x77f9fffc) = *(char *)(uVar5 - 0x77f9fffc) + unaff_BL + (0x99 < bVar1);
  uVar2 = (int)uVar5 + 0x2066b800;
  *(char *)(unaff_RDI + 0x20) = *(char *)(unaff_RDI + 0x20) + unaff_BH;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + 'f';
  bVar1 = bRam66b800000021004b;
  pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bRam66b800000021004b);
  *pbVar6 = *pbVar6 & bRam66b800000021004b;
  if (-1 < (char)*pbVar6) {
    *pbVar6 = *pbVar6 & bVar1;
    pbVar6[0x21004b] = pbVar6[0x21004b] | (byte)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar6 = *pbVar6 + bVar1;
  *param_2 = *param_2 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

