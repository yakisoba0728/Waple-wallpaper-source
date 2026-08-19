// Function: FUN_1404bdc74
// Addr: 1404bdc74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdc74(char *param_1)

{
  char *pcVar1;
  uint3 uVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  char unaff_BL;
  int *unaff_RDI;
  
  uVar4 = in_EAX + 0x3600470;
  *unaff_RDI = *unaff_RDI + (int)param_1;
  pbVar5 = (byte *)(ulonglong)uVar4;
  sysenter();
  bVar3 = (byte)uVar4;
  uVar2 = (uint3)(uVar4 >> 8);
  if (!SCARRY1(bVar3,*pbVar5)) {
    pcVar1 = (char *)((ulonglong)CONCAT31(uVar2,(bVar3 + *pbVar5 + -0xc) - CARRY1(bVar3,*pbVar5)) +
                     (longlong)unaff_RDI * 4);
    *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = uVar2 & 0x4bdbac;
  puVar6 = (undefined1 *)((ulonglong)uVar2 * 0x100);
  *param_1 = *param_1 + (char)uVar2;
  *puVar6 = *puVar6;
  puVar6[-0x52ffda99] = puVar6[-0x52ffda99];
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

