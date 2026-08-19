// Function: FUN_1404ba670
// Addr: 1404ba670
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ba671) overlaps instruction at (ram,0x0001404ba670)
    */

void FUN_1404ba670(char *param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  uint *in_RAX;
  char unaff_BH;
  byte *unaff_RDI;
  byte *pbVar7;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar3 = (char)in_RAX + (char)*in_RAX;
  pbVar7 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  pbVar1 = unaff_RDI + (longlong)pbVar7;
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + (char)param_2;
  if (!SCARRY1(bVar4,(char)param_2)) {
    *pbVar7 = *pbVar7 & bVar3;
    *pbVar7 = *pbVar7 & bVar3;
    *param_1 = *param_1;
    bVar4 = (byte)unaff_RDI;
    *unaff_RDI = *unaff_RDI + bVar4;
    unaff_RDI[-0x1a] = unaff_RDI[-0x1a] + (char)((ulonglong)param_2 >> 8);
    *unaff_RDI = *unaff_RDI & bVar4;
    *unaff_RDI = *unaff_RDI & bVar4;
    *param_1 = *param_1 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = (int)pbVar7 + -0x44fff61c;
  cVar2 = (char)iVar5;
  out(0x20,cVar2);
  cVar2 = cVar2 * '\x02';
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar5 >> 8),cVar2);
  out(0x20,cVar2);
  pcVar6[-0x5b] = pcVar6[-0x5b] + unaff_BH;
  *param_4 = *param_4;
  *param_2 = *param_2 + cVar2;
  *pcVar6 = *pcVar6 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

