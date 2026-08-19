// Function: FUN_1404a277c
// Addr: 1404a277c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a27a2) overlaps instruction at (ram,0x0001404a27a1)
    */

void FUN_1404a277c(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  char cVar9;
  ulonglong in_RAX;
  char *pcVar6;
  byte *pbVar8;
  char cVar10;
  byte *unaff_RBX;
  char *pcVar7;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  pcVar6 = param_1 + in_RAX;
  cVar1 = *pcVar6;
  cVar9 = (char)(in_RAX >> 8);
  *pcVar6 = *pcVar6 + cVar9;
  if (SCARRY1(cVar1,cVar9)) {
    *param_1 = *param_1;
    *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + (char)in_RAX;
  }
  else {
    pcVar6 = (char *)(ulonglong)((int)in_RAX + 0x5088c00);
    *pcVar6 = *pcVar6 + cVar10;
    in_RAX = (ulonglong)((int)in_RAX + 0x5298c4a);
  }
  pbVar8 = (byte *)CONCAT62((int6)(in_RAX >> 0x10),
                            CONCAT11((char)(in_RAX >> 8) + cVar10,(byte)in_RAX));
  bVar3 = (byte)in_RAX | *pbVar8;
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),bVar3);
  pcVar6 = (char *)((longlong)param_1 * 2);
  cVar1 = *pcVar6;
  *pcVar6 = *pcVar6 + cVar10;
  if (!SCARRY1(cVar1,cVar10)) {
    pcVar6 = (char *)(ulonglong)((int)pcVar7 + 0x5088c00);
    *pcVar6 = *pcVar6 + cVar10;
    uVar4 = (int)pcVar7 + 0xd098c4a;
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
  *pcVar7 = *pcVar7 + (char)param_1;
  return;
}

