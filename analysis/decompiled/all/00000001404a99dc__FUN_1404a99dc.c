// Function: FUN_1404a99dc
// Addr: 1404a99dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a99dc(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined3 uVar3;
  int *piVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint *in_RAX;
  byte *pbVar9;
  byte bVar10;
  undefined7 uVar11;
  byte bVar12;
  char *pcVar13;
  uint unaff_ESI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  uVar11 = (undefined7)((ulonglong)param_1 >> 8);
  bVar10 = (byte)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + -1;
  pcVar13 = (char *)(ulonglong)(uint)((int)(uint)in_RAX >> 0x1f);
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + -1;
  uVar7 = func_0x0001414ae485();
  uVar8 = uVar7 | 0xd20d0002;
  pbVar9 = (byte *)(ulonglong)uVar8;
  *(uint *)(pbVar9 + 0x21) = *(uint *)(pbVar9 + 0x21) | unaff_ESI;
  bVar1 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar10;
  *(uint *)(pbVar9 + in_FS_OFFSET) =
       *(int *)(pbVar9 + in_FS_OFFSET) + uVar8 + (uint)CARRY1(bVar1,bVar10);
  bVar12 = (byte)pcVar13;
  uVar3 = (undefined3)(uVar8 >> 8);
  cVar6 = (byte)uVar8 + bVar12;
  piVar4 = (int *)((ulonglong)CONCAT31(uVar3,cVar6) * 2);
  *piVar4 = *piVar4 + -1;
  cVar6 = (cVar6 + 'g') - CARRY1((byte)uVar8,bVar12);
  *(undefined1 *)CONCAT71(uVar11,bVar10) = *(undefined1 *)CONCAT71(uVar11,bVar10);
  *(char *)(ulonglong)CONCAT31(uVar3,cVar6) = *(char *)(ulonglong)CONCAT31(uVar3,cVar6) + cVar6;
  piVar4 = (int *)((ulonglong)CONCAT31(uVar3,cVar6 * '\x02') * 2);
  *piVar4 = *piVar4 + -1;
  bVar2 = cVar6 * '\x02' + 0x67;
  pbVar9 = (byte *)(ulonglong)CONCAT31(uVar3,bVar2);
  *(undefined1 *)CONCAT71(uVar11,bVar10) = *(undefined1 *)CONCAT71(uVar11,bVar10);
  *pcVar13 = *pcVar13 + bVar2;
  bVar1 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar2;
  *(uint *)(pbVar9 + in_FS_OFFSET) =
       *(int *)(pbVar9 + in_FS_OFFSET) + CONCAT31(uVar3,bVar2) + (uint)CARRY1(bVar1,bVar2);
  piVar4 = (int *)((ulonglong)CONCAT31(uVar3,bVar2 + bVar12) * 2);
  *piVar4 = *piVar4 + -1;
  cVar6 = (bVar2 + bVar12 + 'g') - CARRY1(bVar2,bVar12);
  *(undefined1 *)CONCAT71(uVar11,bVar10) = *(undefined1 *)CONCAT71(uVar11,bVar10);
  pcVar5 = (char *)((ulonglong)CONCAT31(uVar3,cVar6) * 2);
  *pcVar5 = *pcVar5 + cVar6;
  pcVar13[CONCAT71(uVar11,bVar10)] = pcVar13[CONCAT71(uVar11,bVar10)] + (char)(uVar7 >> 8);
  pcVar13[CONCAT31(uVar3,cVar6)] = pcVar13[CONCAT31(uVar3,cVar6)] + (char)((ulonglong)pcVar13 >> 8);
  piVar4 = (int *)((ulonglong)CONCAT31(uVar3,cVar6 * '\x02') * 2);
  *piVar4 = *piVar4 + -1;
  *(char *)CONCAT71(uVar11,bVar10) = *(char *)CONCAT71(uVar11,bVar10) + cVar6 * '\x02' + 'g';
  *unaff_RDI = *unaff_RDI + bVar10;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

