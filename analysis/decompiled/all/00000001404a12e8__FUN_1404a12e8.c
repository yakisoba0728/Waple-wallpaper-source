// Function: FUN_1404a12e8
// Addr: 1404a12e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a12e8(longlong param_1,int param_2)

{
  undefined3 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int *in_RAX;
  char *pcVar7;
  int *piVar8;
  byte *pbVar9;
  char in_ZF;
  
  piVar8 = (int *)(param_1 + -1);
  if (piVar8 != (int *)0x0 && in_ZF == '\0') {
    pbVar9 = (byte *)((longlong)in_RAX + 0x1004a11);
    bVar3 = *pbVar9;
    *pbVar9 = *pbVar9 + (byte)in_RAX;
    *piVar8 = *piVar8 + (int)piVar8 + (uint)CARRY1(bVar3,(byte)in_RAX);
    *(char *)piVar8 = *(char *)piVar8 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = (int)in_RAX + *in_RAX;
  out((short)param_2,iVar5);
  uVar1 = (undefined3)((uint)iVar5 >> 8);
  cVar2 = (char)iVar5 + (char)piVar8;
  pbVar9 = (byte *)(param_1 + -2);
  if (pbVar9 != (byte *)0x0 && cVar2 != '\0') {
    pcVar7 = (char *)((ulonglong)CONCAT31(uVar1,cVar2) ^ 0x12);
    bVar3 = *pbVar9;
    bVar4 = (byte)pcVar7;
    *pbVar9 = *pbVar9 + bVar4;
    *pbVar9 = (*pbVar9 - (char)pbVar9) - CARRY1(bVar3,bVar4);
    *pcVar7 = *pcVar7 + '\x03';
    pcVar7 = (char *)((ulonglong)CONCAT31(uVar1,bVar4) ^ 0x4b);
    *pcVar7 = *pcVar7 + '\x03';
    piVar8 = (int *)((longlong)pcVar7 * 2 + 0x11);
    *piVar8 = *piVar8 + (int)pcVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar9 = *pbVar9 + cVar2;
  uVar6 = CONCAT31(uVar1,cVar2) | 0x340d0005;
  bVar3 = (byte)uVar6;
  *pbVar9 = *pbVar9 + bVar3;
  *(byte *)((ulonglong)uVar6 * 2) = *(byte *)((ulonglong)uVar6 * 2) | bVar3;
  pcVar7 = (char *)(ulonglong)
                   (uint)(param_2 +
                         *(int *)((ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar3 + 0x60) + 2));
  *pbVar9 = *pbVar9 ^ (byte)((uint)iVar5 >> 8);
  *pcVar7 = *pcVar7 + '\x03';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

