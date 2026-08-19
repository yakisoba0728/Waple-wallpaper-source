// Function: FUN_1404d48b4
// Addr: 1404d48b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d48b4(longlong param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined3 uVar5;
  uint uVar6;
  byte bVar7;
  ulonglong in_RAX;
  int *piVar8;
  char *pcVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  longlong unaff_RDI;
  uint *puVar9;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar11 = (byte)param_2;
  piVar8 = (int *)CONCAT62((int6)(in_RAX >> 0x10),
                           CONCAT11((byte)(in_RAX >> 8) | bVar11,
                                    (char)(char *)(in_RAX | 0xe4) + *(char *)(in_RAX | 0xe4)));
  iVar4 = (int)piVar8 + *piVar8;
  uVar5 = (undefined3)((uint)iVar4 >> 8);
  bVar7 = (byte)iVar4 + 0x74 + (0x8b < (byte)iVar4);
  uVar6 = CONCAT31(uVar5,bVar7);
  puVar9 = (uint *)(ulonglong)uVar6;
  *puVar9 = *puVar9 & uVar6;
  *(byte *)puVar9 = (byte)*puVar9 + bVar7;
  *param_2 = *param_2 + (int)param_2;
  *(byte *)puVar9 = (byte)*puVar9 | bVar7;
  bVar3 = (char)((ulonglong)param_2 >> 8) + *(char *)(unaff_RDI + param_1);
  bVar2 = *(byte *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar3,bVar11)));
  *(byte *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar3,bVar11))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar3,bVar11))) + bVar11;
  if (!CARRY1(bVar2,bVar11)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar10 = (char *)((ulonglong)CONCAT31(uVar5,bVar7) ^ 0xe);
  *pcVar10 = *pcVar10 + bVar11;
  pbVar1 = (byte *)((ulonglong)
                    (CONCAT22((short)((uint)iVar4 >> 0x10),
                              CONCAT11((byte)((uint)iVar4 >> 8) | (byte)pcVar10 | 0xf0,(byte)pcVar10
                                      )) | 0xf0) + 7);
  *pbVar1 = *pbVar1 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

