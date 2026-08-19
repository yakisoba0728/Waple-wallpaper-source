// Function: FUN_1404bdc64
// Addr: 1404bdc64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdc64(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  uint3 uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong in_RAX;
  int *piVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  char unaff_BL;
  ulonglong uVar8;
  int *unaff_RDI;
  
  out(param_2,(int)in_RAX);
  uVar8 = (ulonglong)uRam000000018a34806b;
  *param_1 = *param_1 + (char)in_RAX;
  piVar5 = (int *)(in_RAX | 6);
  pbVar6 = (byte *)(param_1 + (longlong)piVar5);
  bVar3 = *pbVar6;
  *pbVar6 = *pbVar6 + (byte)param_1;
  *piVar5 = (*piVar5 - (int)piVar5) - (uint)CARRY1(bVar3,(byte)param_1);
  uVar4 = (int)piVar5 + 0x3600470;
  *(ulonglong *)(uVar8 - 8) = (ulonglong)uVar4;
  *unaff_RDI = *unaff_RDI + (int)param_1;
  pbVar6 = (byte *)(ulonglong)uVar4;
  sysenter();
  bVar3 = (byte)uVar4;
  uVar2 = (uint3)(uVar4 >> 8);
  if (!SCARRY1(bVar3,*pbVar6)) {
    pcVar1 = (char *)((ulonglong)CONCAT31(uVar2,(bVar3 + *pbVar6 + -0xc) - CARRY1(bVar3,*pbVar6)) +
                     (longlong)unaff_RDI * 4);
    *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = uVar2 & 0x4bdbac;
  puVar7 = (undefined1 *)((ulonglong)uVar2 * 0x100);
  *param_1 = *param_1 + (char)uVar2;
  *puVar7 = *puVar7;
  puVar7[-0x52ffda99] = puVar7[-0x52ffda99];
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

