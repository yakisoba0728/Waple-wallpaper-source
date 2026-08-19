// Function: FUN_1404c4d78
// Addr: 1404c4d78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c4d9a) overlaps instruction at (ram,0x0001404c4d96)
    */

void FUN_1404c4d78(longlong param_1,int *param_2)

{
  uint uVar1;
  undefined3 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint in_EAX;
  int iVar6;
  uint uVar7;
  byte *pbVar9;
  byte unaff_BL;
  byte in_CF;
  bool bVar10;
  bool bVar11;
  byte unaff_retaddr;
  char *pcVar8;
  
  iVar6 = (in_EAX + 0xe80fe6ae) - (uint)in_CF;
  pbVar9 = (byte *)(param_1 + -1);
  if (pbVar9 == (byte *)0x0 || iVar6 == 0) {
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 << 1 | (char)bVar4 < '\0';
    *param_2 = (*param_2 - (int)pbVar9) - (uint)((char)bVar4 < '\0');
    bVar10 = CARRY1(*pbVar9,unaff_BL);
    *pbVar9 = *pbVar9 + unaff_BL;
    if (*pbVar9 != 0) {
      *pbVar9 = *pbVar9 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(int *)((longlong)param_2 + 0x1c01e015) =
         (*(int *)((longlong)param_2 + 0x1c01e015) - (int)param_2) -
         (uint)(in_EAX < 0x17f01952 || in_EAX + 0xe80fe6ae < (uint)in_CF);
    bVar10 = (byte)iVar6 < 100;
    iVar6 = CONCAT31((int3)((uint)iVar6 >> 8),(byte)iVar6 + 0x9c);
  }
  uVar7 = iVar6 + 0xc1c01e0 + (uint)bVar10;
  uVar1 = uVar7 + *(uint *)(ulonglong)uVar7;
  bVar10 = CARRY4(uVar7,*(uint *)(ulonglong)uVar7) ||
           CARRY4(uVar1,(uint)CARRY1(unaff_retaddr,unaff_BL));
  iVar6 = uVar1 + CARRY1(unaff_retaddr,unaff_BL);
  bVar4 = (byte)iVar6;
  bVar3 = bVar4 + 0xac;
  bVar11 = bVar4 < 0x54 || bVar3 < bVar10;
  uVar2 = (undefined3)((uint)iVar6 >> 8);
  bVar3 = bVar3 - bVar10;
  pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  bVar4 = bVar3 + *pbVar9;
  bVar10 = CARRY1(bVar3,*pbVar9) || CARRY1(bVar4,bVar11);
  bVar4 = bVar4 + bVar11;
  bVar3 = bVar4 - 0x34;
  cVar5 = bVar3 - bVar10;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar2,cVar5);
  *pcVar8 = *pcVar8 + cVar5 + (bVar4 < 0x34 || bVar3 < bVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

