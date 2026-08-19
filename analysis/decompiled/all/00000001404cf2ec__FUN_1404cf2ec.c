// Function: FUN_1404cf2ec
// Addr: 1404cf2ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cf363) overlaps instruction at (ram,0x0001404cf35f)
    */

void FUN_1404cf2ec(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *in_RAX;
  byte bVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  char *unaff_RBX;
  int *unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  char *pcVar6;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  cVar9 = (char)param_2;
  cVar8 = (char)((ulonglong)param_1 >> 8);
  bVar7 = (byte)param_1;
  *(char *)(param_2 + -0x68) = *(char *)(param_2 + -0x68) + (byte)in_RAX;
  *in_RAX = *in_RAX | (byte)in_RAX;
  uVar5 = (uint)in_RAX + 0xddfff678;
  pcVar6 = (char *)(ulonglong)uVar5;
  if (-1 < (int)uVar5) {
    *unaff_RDI = *unaff_RDI + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((uint)in_RAX < 0x22000988 || uVar5 == 0) {
    pcVar6[0x210049ed] = pcVar6[0x210049ed] + cVar8;
  }
  else {
    cVar11 = bVar10 + bVar7;
    if (!CARRY1(bVar10,bVar7) && cVar11 != '\0') {
      pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar11,cVar9)) +
                       (longlong)unaff_RSI * 8);
      *pcVar1 = *pcVar1 + (char)uVar5;
      *param_1 = *param_1 + unaff_R12B;
      *pcVar6 = *pcVar6 + (char)uVar5;
      pcVar6[0x76] = pcVar6[0x76] + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + (char)(uVar5 >> 8);
  }
  iVar2 = *unaff_RSI;
  pcVar6 = (char *)(ulonglong)(uVar5 - iVar2);
  *unaff_RBX = *unaff_RBX + cVar8;
  if (*unaff_RBX == '\0') {
    pcVar6[-0xb] = pcVar6[-0xb] + cVar9;
  }
  else {
    *(char *)unaff_RSI = (char)*unaff_RSI + cVar9;
    iVar4 = *unaff_RSI;
    uVar3 = LocalDescriptorTableRegister();
    *(undefined4 *)(in_FS_OFFSET + 0x1904d01b1) = uVar3;
    if ((char)iVar4 != '\0') {
      *unaff_RDI = *unaff_RDI + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((longlong)unaff_RSI + 0x50003c75) =
         *(char *)((longlong)unaff_RSI + 0x50003c75) + bVar7;
  }
  *param_4 = *param_4 + -10;
  *pcVar6 = *pcVar6 + (char)(uVar5 - iVar2);
  pcVar6[0x75] = pcVar6[0x75] + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

