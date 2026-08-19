// Function: FUN_1404a278c
// Addr: 1404a278c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a27a2) overlaps instruction at (ram,0x0001404a27a1)
    */

void FUN_1404a278c(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint *in_RAX;
  char *pcVar7;
  byte *pbVar8;
  char cVar9;
  byte *unaff_RBX;
  char *pcVar6;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  pbVar8 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar9,(byte)in_RAX));
  bVar3 = (byte)in_RAX | *pbVar8;
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),bVar3);
  pcVar7 = (char *)((longlong)param_1 * 2);
  cVar1 = *pcVar7;
  *pcVar7 = *pcVar7 + cVar9;
  if (!SCARRY1(cVar1,cVar9)) {
    pcVar7 = (char *)(ulonglong)((int)pcVar6 + 0x5088c00);
    *pcVar7 = *pcVar7 + cVar9;
    uVar4 = (int)pcVar6 + 0xd098c4a;
    iVar5 = uVar4 + *(int *)(ulonglong)uVar4;
    uVar2 = (undefined3)((uint)iVar5 >> 8);
    bVar3 = (char)iVar5 - 0x30;
    pbVar8 = (byte *)(ulonglong)CONCAT31(uVar2,bVar3);
    *pbVar8 = *pbVar8 + bVar3;
    out(0x74,CONCAT31(uVar2,bVar3 | *pbVar8));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + bVar3;
  *unaff_RBX = *unaff_RBX | bVar3;
  *pcVar6 = *pcVar6 + (char)param_1;
  return;
}

