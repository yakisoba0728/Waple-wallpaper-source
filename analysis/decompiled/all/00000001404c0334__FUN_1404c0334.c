// Function: FUN_1404c0334
// Addr: 1404c0334
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0334(char param_1,char param_2)

{
  byte bVar1;
  undefined3 uVar3;
  uint uVar4;
  byte bVar5;
  char cVar7;
  char *pcVar9;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  byte in_CF;
  byte bVar2;
  byte bVar6;
  byte *pbVar8;
  
  uVar4 = uRam0b0012d413000ae4;
  *(int *)(in_FS_OFFSET + (ulonglong)uRam0b0012d413000ae4) =
       *(int *)(in_FS_OFFSET + (ulonglong)uRam0b0012d413000ae4) + uRam0b0012d413000ae4 + (uint)in_CF
  ;
  bVar6 = (byte)uVar4;
  uVar3 = (undefined3)(uVar4 >> 8);
  bVar5 = bVar6 + 0x34;
  pbVar8 = (byte *)(ulonglong)CONCAT31(uVar3,bVar5);
  bVar1 = *pbVar8;
  bVar2 = *pbVar8;
  *pbVar8 = bVar2 + bVar5 + (0xcb < bVar6);
  pbVar8[unaff_RBP] =
       pbVar8[unaff_RBP] + (char)(uVar4 >> 8) +
       (CARRY1(bVar1,bVar5) || CARRY1(bVar2 + bVar5,0xcb < bVar6));
  pbVar8[0x24] = pbVar8[0x24] + param_1;
  *pbVar8 = *pbVar8 - bVar5;
  cVar7 = *(char *)((longlong)pbVar8 * 2 + 0x21);
  *pbVar8 = *pbVar8 + bVar5;
  *pbVar8 = *pbVar8 + param_2;
  pcVar9 = (char *)((ulonglong)CONCAT31(uVar3,bVar5) & 0xffffffffffffff28);
  pcVar9[0x24] = pcVar9[0x24] + param_1 + cVar7;
  cVar7 = (char)pcVar9;
  *pcVar9 = *pcVar9 - cVar7;
  *unaff_RSI = *unaff_RSI + cVar7;
  *pcVar9 = *pcVar9 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

