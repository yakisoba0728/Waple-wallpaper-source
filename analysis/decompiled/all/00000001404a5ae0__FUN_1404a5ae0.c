// Function: FUN_1404a5ae0
// Addr: 1404a5ae0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5ae0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined3 uVar3;
  uint uVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  undefined8 in_RAX;
  uint *puVar9;
  char cVar10;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  char *unaff_RDI;
  char *unaff_retaddr;
  undefined8 *puStackX_8;
  byte *pbVar8;
  
  iVar7 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) |
                                 *(byte *)(CONCAT71(unaff_00000019,unaff_BL) + param_1),(char)in_RAX
                                )) + 0x40000a54;
  pcVar1 = (char *)(unaff_RSI + 8 + param_1 * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
  uVar3 = (undefined3)((uint)iVar7 >> 8);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  bVar6 = (char)iVar7 + cVar10;
  pbVar8 = (byte *)(ulonglong)CONCAT31(uVar3,bVar6);
  *unaff_retaddr = *unaff_retaddr + '\b';
  *pbVar8 = *pbVar8 + bVar6;
  pbVar8[-0x72] = pbVar8[-0x72] + bVar6;
  *pbVar8 = *pbVar8 | bVar6;
  bVar6 = bVar6 + cVar10;
  uVar4 = CONCAT31(uVar3,bVar6);
  puVar9 = (uint *)(ulonglong)uVar4;
  pcVar1 = (char *)*puStackX_8;
  *pcVar1 = *pcVar1 + bVar6;
  *unaff_RDI = *unaff_RDI + (char)pcVar1;
  *puStackX_8 = puStackX_8 + 1;
  *puVar9 = *puVar9 | uVar4;
  sysenter();
  *(byte *)puVar9 = (byte)*puVar9 | bVar6;
  uVar2 = rdmsr((int)pcVar1);
  piVar5 = (int *)((uVar2 & 0xffffffff) * 2);
  *piVar5 = *piVar5 + (int)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

