// Function: FUN_1404c4af4
// Addr: 1404c4af4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c4b85) */

void FUN_1404c4af4(byte *param_1,longlong param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte *in_RAX;
  undefined7 uVar9;
  int iVar10;
  undefined4 uVar11;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  int unaff_ESI;
  int *unaff_RDI;
  undefined1 auStack_8 [8];
  char *pcVar7;
  byte *pbVar8;
  
  uVar11 = (undefined4)((ulonglong)param_1 >> 0x20);
  bVar4 = (byte)in_RAX;
  *in_RAX = bVar4;
  *in_RAX = *in_RAX + bVar4;
  *(int *)param_1 = *(int *)param_1 + (int)param_2;
  bVar3 = *in_RAX;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  *(int *)(param_2 + 10) = *(int *)(param_2 + 10) + unaff_ESI + (uint)CARRY1(bVar4,*in_RAX);
  *(int *)param_1 = *(int *)param_1 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  bVar4 = bVar4 + bVar3 | *(byte *)CONCAT71(uVar9,bVar4 + bVar3);
  pcVar7 = (char *)CONCAT71(uVar9,bVar4);
  puVar2 = (uint *)(param_1 + param_2);
  uVar6 = *puVar2;
  *puVar2 = *puVar2 - (uint)auStack_8;
  *(uint *)(pcVar7 + param_2) =
       (*(int *)(pcVar7 + param_2) - unaff_ESI) - (uint)(uVar6 < (uint)auStack_8);
  bVar3 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  if (CARRY1(bVar3,unaff_BL)) {
    iVar10 = CONCAT31((int3)((ulonglong)param_1 >> 8),
                      (byte)param_1 ^
                      *(byte *)CONCAT44(unaff_0000001c,
                                        CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))));
    *(byte *)CONCAT44(uVar11,iVar10) = *(char *)CONCAT44(uVar11,iVar10) + bVar4;
    *pcVar7 = *pcVar7 + bVar4;
    pcVar1 = (char *)(CONCAT44(uVar11,iVar10) + 99);
    *pcVar1 = *pcVar1 + unaff_BL;
    iVar5 = (int)pcVar7 + -0x2d636400;
    uVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),
                     CONCAT11((char)((uint)iVar5 >> 8) + '+',(char)iVar5)) ^ 0x42;
    pbVar8 = (byte *)(ulonglong)uVar6;
    bVar3 = *pbVar8;
    bVar4 = (byte)uVar6;
    *pbVar8 = *pbVar8 + bVar4;
    *unaff_RDI = (*unaff_RDI - iVar10) - (uint)CARRY1(bVar3,bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

