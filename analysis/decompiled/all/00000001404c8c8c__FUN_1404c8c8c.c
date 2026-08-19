// Function: FUN_1404c8c8c
// Addr: 1404c8c8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c8cd6) overlaps instruction at (ram,0x0001404c8cd4)
    */

void FUN_1404c8c8c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  char *in_RAX;
  ushort *puVar7;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  byte bVar12;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  ulonglong uVar13;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint *puVar8;
  
  *(char *)(unaff_RSI + 0x31) = *(char *)(unaff_RSI + 0x31) << 1;
  cVar5 = (char)in_RAX;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar5;
  uVar6 = (uint)in_RAX;
  *(uint *)(longlong)(int)uVar6 = *(uint *)(longlong)(int)uVar6 ^ uVar6;
  uVar9 = (ulonglong)*(uint *)((longlong)in_RAX * 2 + 0x21);
  *in_RAX = *in_RAX + cVar5;
  puVar7 = (ushort *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5 + (char)param_2);
  *puVar7 = *puVar7 ^ (ushort)puVar7;
  iVar3 = *(int *)(unaff_RDI + 0x31);
  *(char *)((longlong)puVar7 + 0x1004c8b) = *(char *)((longlong)puVar7 + 0x1004c8b) + (char)param_2;
  uVar6 = (uint)puVar7 | *(uint *)((longlong)puVar7 * 2);
  puVar8 = (uint *)(ulonglong)uVar6;
  uVar13 = (ulonglong)((int)&stack0x00000000 + iVar3 | *(uint *)(param_2 + uVar9));
  uVar11 = (uint)param_2 | *(uint *)(param_2 + 7);
  lVar10 = uVar9 - 1;
  if (lVar10 == 0 || uVar11 == 0) {
    bVar12 = (byte)(uVar11 >> 8) | *(byte *)(lVar10 * 2);
    uVar6 = CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 | *(byte *)((longlong)puVar8 * 2)) + 0x10000834;
    puVar8 = (uint *)(ulonglong)uVar6;
    *(undefined8 *)(uVar13 - 8) = 0x31;
    *(char *)(unaff_RBP + 0x6a) = *(char *)(unaff_RBP + 0x6a) + (char)lVar10;
    *puVar8 = *puVar8 ^ uVar6;
    uVar6 = CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + (char)*puVar8);
    pbVar4 = (byte *)(lVar10 * 2);
    bVar2 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar12;
    pcVar1 = (char *)((ulonglong)CONCAT22((short)(uVar11 >> 0x10),CONCAT11(bVar12,(char)uVar11)) +
                     0x31);
    *pcVar1 = *pcVar1 + (char)((ulonglong)lVar10 >> 8) + CARRY1(bVar2,bVar12);
    *(char *)(unaff_RBP + 0x6a) = *(char *)(unaff_RBP + 0x6a) + (char)lVar10;
    *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 ^ uVar6;
  }
  else {
    *puVar8 = *puVar8 ^ uVar6;
    *(undefined8 *)(uVar13 - 8) = 0x31;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

