// Function: FUN_1404c5ce8
// Addr: 1404c5ce8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5ce8(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  byte *pbVar6;
  byte unaff_BL;
  char unaff_BH;
  char unaff_R12B;
  char *pcVar4;
  char *pcVar5;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar6 = (byte *)((longlong)in_RAX + 0x2f);
  *pbVar6 = *pbVar6 >> 1 | *pbVar6 << 7;
  cRam00000001084c8c3e = cRam00000001084c8c3e + (char)((ulonglong)param_1 >> 8);
  pbVar6 = (byte *)(param_1 + -1);
  if (pbVar6 == (byte *)0x0 || cRam00000001084c8c3e == '\0') {
    bVar1 = *pbVar6;
    *pbVar6 = *pbVar6 + unaff_BL;
    uVar3 = (uint)in_RAX + *(int *)pbVar6 + (uint)CARRY1(bVar1,unaff_BL);
    pcVar4 = (char *)(ulonglong)uVar3;
    pcVar5 = (char *)(param_2 + (longlong)pcVar4 * 4);
    bVar2 = (byte)uVar3;
    *pcVar5 = *pcVar5 + bVar2;
    *pcVar4 = *pcVar4 + bVar2;
    bVar2 = bVar2 & (byte)param_2;
    pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
    *pcVar5 = *pcVar5 + unaff_BH;
    *pcVar5 = *pcVar5 + bVar2;
    bVar1 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar2;
    cRam000000014cce6d0f = cRam000000014cce6d0f + bVar2 + CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar6 = *pbVar6 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

