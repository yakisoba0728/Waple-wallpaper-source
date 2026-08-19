// Function: FUN_1404a1b10
// Addr: 1404a1b10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1b10(undefined8 param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint in_EAX;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  int *piVar9;
  uint unaff_EBX;
  longlong unaff_RSI;
  uint *unaff_RDI;
  uint *puStack_8;
  
  uVar6 = in_EAX | 0x21700bc0;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),
                   CONCAT11((char)(uVar6 >> 8),(byte)uVar6 | *(byte *)((ulonglong)uVar6 * 2)));
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
  uVar6 = uVar6 + 0x70000864;
  puVar7 = (uint *)(ulonglong)uVar6;
  cVar2 = *param_2;
  *puVar7 = *puVar7 & uVar6;
  uVar4 = *puVar7;
  bVar5 = (byte)uVar6;
  *(byte *)puVar7 = (char)*puVar7 + bVar5;
  if (!SCARRY1((char)uVar4,bVar5)) {
    piVar9 = (int *)CONCAT71(0x300004,'E' - *param_2);
    *piVar9 = *piVar9 + (int)param_2;
    *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
    iVar3 = (int)param_2 + uVar6;
    pbVar8 = (byte *)(ulonglong)(uVar6 | 0x9e00bf0);
    *(char *)unaff_RDI = (char)*unaff_RDI << 1 | (char)*unaff_RDI < '\0';
    uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                     CONCAT11((char)((uint)iVar3 >> 8) + *pbVar8,(char)iVar3));
    bVar5 = (byte)(uVar6 | 0x9e00bf0);
    *pbVar8 = *pbVar8 + bVar5;
    *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4;
    *pbVar8 = *pbVar8 | bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puStack_8 = puVar7;
  *(uint *)(param_2 + (longlong)puVar7) = *(uint *)(param_2 + (longlong)puVar7) & uVar6;
  pbVar8 = (byte *)((longlong)&puStack_8 + unaff_RSI);
  bVar1 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar5;
  pbVar8 = (byte *)((longlong)&puStack_8 +
                   (ulonglong)
                   CONCAT31((int3)(uVar6 >> 8),bVar5 + (char)*puVar7 + CARRY1(bVar1,bVar5)));
  *pbVar8 = *pbVar8 ^ 0x45U - cVar2;
  *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

