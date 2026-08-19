// Function: FUN_14049f3a4
// Addr: 14049f3a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f3ec) overlaps instruction at (ram,0x00014049f3eb)
    */

void FUN_14049f3a4(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  char *pcVar7;
  char unaff_BL;
  char unaff_SPL;
  byte *pbVar6;
  
  *param_4 = *param_4 + (byte)in_RAX;
  bVar3 = (byte)in_RAX | bRam00000001468bfdaf;
  pbVar6 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  pcVar7 = (char *)(param_1 + -1);
  if (pcVar7 == (char *)0x0 || bVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar6 = *pbVar6 ^ bVar3;
  *pcVar7 = *pcVar7 + (char)((ulonglong)in_RAX >> 8);
  uVar5 = (int)pbVar6 + 0x74050002;
  uVar2 = (undefined3)(uVar5 >> 8);
  bVar3 = (byte)uVar5 | *(byte *)(ulonglong)uVar5;
  pbVar6 = (byte *)(pcVar7 + CONCAT31(uVar2,bVar3));
  *pbVar6 = *pbVar6 ^ 0xcf;
  if (*pbVar6 == 0) {
    *param_4 = *param_4 + unaff_SPL;
  }
  cVar4 = bVar3 + unaff_BL;
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar2,cVar4);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar7 = *pcVar7 + cVar4;
  pcVar7 = pcVar7 + -0x30fffe8c;
  *pcVar7 = *pcVar7 + cVar4;
  if (*pcVar7 == '\0') {
    *param_4 = *param_4 + unaff_SPL;
  }
  cVar4 = cVar4 + unaff_BL;
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar2,cVar4);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + cVar4;
  *pcVar7 = *pcVar7 + cVar4;
  if (*pcVar7 != '\0') {
    pcVar1 = pcVar7 + -0x30fffe8c;
    *pcVar1 = *pcVar1 + cVar4;
    if (*pcVar1 == '\0') {
      *param_4 = *param_4 + cVar4;
    }
    else {
      pcVar7 = (char *)(ulonglong)(byte)(cVar4 + unaff_BL);
    }
  }
  *param_4 = *param_4 + (char)pcVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

