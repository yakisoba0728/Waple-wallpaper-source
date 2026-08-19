// Function: FUN_1404a94d8
// Addr: 1404a94d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a9505) overlaps instruction at (ram,0x0001404a9500)
    */

void FUN_1404a94d8(char *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *in_RAX;
  char *pcVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined6 uVar9;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  char *pcVar5;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar7 = (undefined1)param_2;
  bVar8 = (byte)((ulonglong)param_2 >> 8) | param_1[unaff_RBX];
  bVar1 = *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7));
  *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + (byte)param_1;
  if (!CARRY1(bVar1,(byte)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar6 = in_RAX;
  if (*(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) == '\0') {
    pcVar6 = (char *)((ulonglong)&stack0x00000000 & 0xffffffff);
    register0x00000020 = (BADSPACEBASE *)((ulonglong)in_RAX & 0xffffffff);
  }
  *pcVar6 = *pcVar6 + (char)pcVar6;
  cVar3 = (char)*unaff_RSI;
  pcVar5 = (char *)CONCAT71((int7)(CONCAT44((int)((ulonglong)pcVar6 >> 0x20),*unaff_RSI) >> 8),cVar3
                           );
  *param_1 = *param_1 + (char)register0x00000020;
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  pcVar6 = pcVar5;
  if (*pcVar5 == '\0') {
    pcVar6 = (char *)((ulonglong)register0x00000020 & 0xffffffff);
    register0x00000020 = (BADSPACEBASE *)((ulonglong)pcVar5 & 0xffffffff);
  }
  *pcVar6 = *pcVar6 + (char)pcVar6;
  cVar3 = (char)unaff_RSI[1];
  pcVar6 = (char *)CONCAT71((int7)(CONCAT44((int)((ulonglong)pcVar6 >> 0x20),unaff_RSI[1]) >> 8),
                            cVar3);
  *param_1 = *param_1 + (char)register0x00000020;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  iVar2 = unaff_RSI[2];
  *param_1 = *param_1 + (char)register0x00000020;
  uVar4 = iVar2 + 0x74050002;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
  *(byte *)(unaff_RSI + -0x145dfffa) =
       *(byte *)(unaff_RSI + -0x145dfffa) ^ (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

