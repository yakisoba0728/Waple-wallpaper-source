// Function: FUN_1404a1b30
// Addr: 1404a1b30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1b30(byte param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint *in_RAX;
  byte *pbVar6;
  int *piVar7;
  uint unaff_EBX;
  longlong unaff_RSI;
  uint *unaff_RDI;
  bool in_OF;
  byte abStack_8 [8];
  
  bVar4 = (byte)in_RAX;
  uVar5 = (uint)in_RAX;
  if (!in_OF) {
    piVar7 = (int *)CONCAT71(0x300004,'E' - *param_2);
    *piVar7 = *piVar7 + (int)param_2;
    *in_RAX = *in_RAX | uVar5;
    iVar2 = (int)param_2 + uVar5;
    pbVar6 = (byte *)(ulonglong)(uVar5 | 0x9e00bf0);
    *(char *)unaff_RDI = (char)*unaff_RDI << 1 | (char)*unaff_RDI < '\0';
    uVar3 = CONCAT22((short)((uint)iVar2 >> 0x10),
                     CONCAT11((char)((uint)iVar2 >> 8) + *pbVar6,(char)iVar2));
    bVar4 = (byte)(uVar5 | 0x9e00bf0);
    *pbVar6 = *pbVar6 + bVar4;
    *(int *)(ulonglong)uVar3 = *(int *)(ulonglong)uVar3 + uVar3;
    *pbVar6 = *pbVar6 | bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(param_2 + (longlong)in_RAX) = *(uint *)(param_2 + (longlong)in_RAX) & uVar5;
  pbVar6 = abStack_8 + unaff_RSI;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  abStack_8[CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4 + (char)*in_RAX + CARRY1(bVar1,bVar4))] =
       abStack_8[CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4 + (char)*in_RAX + CARRY1(bVar1,bVar4)
                         )] ^ param_1;
  *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

