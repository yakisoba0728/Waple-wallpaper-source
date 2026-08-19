// Function: FUN_1404c85fc
// Addr: 1404c85fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c862c) overlaps instruction at (ram,0x0001404c862b)
    */

void FUN_1404c85fc(longlong param_1,char *param_2,byte *param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *in_RAX;
  byte *pbVar5;
  undefined7 uVar7;
  char cVar9;
  char cVar10;
  char unaff_SPL;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  char cVar6;
  undefined6 uVar8;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar9 = (char)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX | (byte)*in_RAX;
  uVar8 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar6 = (char)((ulonglong)in_RAX >> 8) + cVar9;
  pbVar5 = (byte *)CONCAT62(uVar8,CONCAT11(cVar6,bVar2));
  *pbVar5 = *pbVar5 | bVar2;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar10;
  param_2[param_1] = param_2[param_1] + cVar6;
  pbVar5[(longlong)param_2] = pbVar5[(longlong)param_2] + cVar9;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar10;
  cVar6 = cVar6 + (char)((ulonglong)param_1 >> 8);
  *param_3 = *param_3 | (byte)param_3;
  if (*param_3 == 0) {
    iVar3 = (int)CONCAT62(uVar8,CONCAT11(cVar6 + param_2[param_1],bVar2 + cVar9));
  }
  else {
    *param_2 = *param_2 + cVar10;
    uVar7 = (undefined7)(CONCAT62(uVar8,CONCAT11(cVar6,bVar2 + cVar9)) >> 8);
    bVar2 = in(4);
    *param_2 = *param_2 + cVar9;
    iVar3 = (int)CONCAT71(uVar7,bVar2 | *(byte *)(in_FS_OFFSET + CONCAT71(uVar7,bVar2)));
  }
  uVar4 = iVar3 + 0x60000954;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x73ffcf58);
  *pcVar1 = *pcVar1 + (char)param_1;
  LOCK();
  *param_4 = *param_4 + unaff_SPL;
  UNLOCK();
  cVar6 = (char)uVar4;
  *(char *)((ulonglong)uVar4 * 2) = *(char *)((ulonglong)uVar4 * 2) + cVar6;
  pcVar1 = (char *)(unaff_RBP +
                   (ulonglong)
                   CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),
                                            CONCAT11((char)(uVar4 >> 8) * '\x02',cVar6)) >> 8),cVar6
                           ));
  *pcVar1 = *pcVar1 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

