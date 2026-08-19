// Function: FUN_1404c8614
// Addr: 1404c8614
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c862c) overlaps instruction at (ram,0x0001404c862b)
    */

void FUN_1404c8614(longlong param_1,uint param_2,byte *param_3,char *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint *in_RAX;
  uint *puVar8;
  undefined7 uVar9;
  char cVar11;
  char *pcVar10;
  int *unaff_RBX;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong in_FS_OFFSET;
  
  *(char *)unaff_RBX = (char)*unaff_RBX >> 1;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  uVar1 = (ulonglong)param_2 << 0x20 | (ulonglong)in_RAX & 0xffffffff;
  uVar2 = (longlong)uVar1 / (longlong)*unaff_RBX;
  puVar8 = (uint *)(uVar2 & 0xffffffff);
  pcVar10 = (char *)((longlong)uVar1 % (longlong)*unaff_RBX & 0xffffffff);
  *puVar8 = *puVar8 ^ (uint)uVar2;
  uVar9 = (undefined7)((ulonglong)puVar8 >> 8);
  uVar3 = in((short)pcVar10);
  *param_3 = *param_3 | (byte)param_3;
  cVar11 = (char)((ulonglong)pcVar10 >> 8);
  if (*param_3 == 0) {
    iVar6 = (int)CONCAT62((int6)((ulonglong)puVar8 >> 0x10),
                          CONCAT11((char)((ulonglong)puVar8 >> 8) + pcVar10[param_1],uVar3));
  }
  else {
    *pcVar10 = *pcVar10 + cVar11;
    bVar4 = in(4);
    *pcVar10 = *pcVar10 + (char)pcVar10;
    iVar6 = (int)CONCAT71(uVar9,bVar4 | *(byte *)(in_FS_OFFSET + CONCAT71(uVar9,bVar4)));
  }
  uVar7 = iVar6 + 0x60000954;
  *(char *)(unaff_RSI + -0x73ffcf58) = *(char *)(unaff_RSI + -0x73ffcf58) + (char)param_1;
  LOCK();
  *param_4 = *param_4 + unaff_SPL;
  UNLOCK();
  cVar5 = (char)uVar7;
  *(char *)((ulonglong)uVar7 * 2) = *(char *)((ulonglong)uVar7 * 2) + cVar5;
  pcVar10 = (char *)(unaff_RBP +
                    (ulonglong)
                    CONCAT31((int3)(CONCAT22((short)(uVar7 >> 0x10),
                                             CONCAT11((char)(uVar7 >> 8) * '\x02',cVar5)) >> 8),
                             cVar5));
  *pcVar10 = *pcVar10 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

