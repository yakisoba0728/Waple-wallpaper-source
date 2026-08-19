// Function: FUN_1404a9250
// Addr: 1404a9250
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a928b) overlaps instruction at (ram,0x0001404a9287)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a9232) */

void FUN_1404a9250(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar7;
  uint uVar4;
  char *in_RAX;
  undefined7 uVar8;
  uint *puVar6;
  char cVar9;
  char cVar10;
  char *unaff_RBX;
  int *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  char *pcVar5;
  
  cVar10 = (char)param_2;
  cVar9 = (char)param_1;
  *in_RAX = *in_RAX + cVar9;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = in(0x85);
  pcVar5 = (char *)CONCAT71(uVar8,cVar2);
  pbVar1 = (byte *)(pcVar5 + 0x7000c76);
  bVar3 = *pbVar1;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar1 = *pbVar1 + bVar7;
  if (CARRY1(bVar3,bVar7) || *pbVar1 == 0) {
    param_1[param_2 * 4 + 0x4a] = param_1[param_2 * 4 + 0x4a] + bVar7;
    *param_1 = *param_1 + bVar7;
    *pcVar5 = *pcVar5 + cVar9;
    *pcVar5 = *pcVar5 + cVar2;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *pcVar5 = *pcVar5 + cVar2;
  bVar3 = in(0x85);
  pcVar5 = (char *)CONCAT71(uVar8,bVar3);
  *pcVar5 = *pcVar5 + bVar3;
  if (*pcVar5 == '\0') {
    cRam00000000d44a9e64 = cRam00000000d44a9e64 + cVar10;
    bVar7 = *param_1;
    *param_1 = *param_1 + bVar3;
    uVar4 = (int)pcVar5 + *unaff_RSI + (uint)CARRY1(bVar7,bVar3);
    *unaff_RBX = *unaff_RBX + cVar10;
    puVar6 = (uint *)(in_FS_OFFSET + (ulonglong)uVar4);
    *puVar6 = *puVar6 | uVar4;
    *unaff_RBX = *unaff_RBX + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar5 = *pcVar5 + bVar3;
  puVar6 = (uint *)(CONCAT71(uVar8,bVar3) ^ 0x83);
  pbVar1 = (byte *)((longlong)puVar6 + 0x7000c76);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  cVar2 = (char)puVar6;
  if (!CARRY1(bVar3,bVar7) && *pbVar1 != 0) {
    *unaff_RDI = *unaff_RDI + cVar2;
  }
  param_1[param_2 * 4 + 0x4a] = param_1[param_2 * 4 + 0x4a] + bVar7;
  *param_1 = *param_1 + bVar7;
  *(char *)puVar6 = (char)*puVar6 + cVar2;
  pbVar1 = (byte *)((longlong)puVar6 + 0x7000c76);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  if (!CARRY1(bVar3,bVar7) && *pbVar1 != 0) {
    *(char *)((longlong)puVar6 + -0x1cfff37f) = *(char *)((longlong)puVar6 + -0x1cfff37f) + cVar2;
    *(uint *)((longlong)puVar6 * 2) = *(uint *)((longlong)puVar6 * 2) | 0x4a9130;
    *puVar6 = *puVar6 & (uint)puVar6;
    *(char *)puVar6 = (char)*puVar6 + cVar2;
    param_1[-0x7e1cfff4] = param_1[-0x7e1cfff4] + 0xc;
    *(char *)puVar6 = (char)*puVar6 + (char)((ulonglong)param_2 >> 8);
    *(char *)((ulonglong)puVar6 & 0xffffffff) = *(char *)((ulonglong)puVar6 & 0xffffffff) + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[param_2 * 4 + 0x4a] = param_1[param_2 * 4 + 0x4a] + bVar7;
  *param_1 = *param_1 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

