// Function: FUN_14049f3b4
// Addr: 14049f3b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f3ec) overlaps instruction at (ram,0x00014049f3eb)
    */

void FUN_14049f3b4(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  byte *in_RAX;
  undefined7 uVar6;
  char cVar7;
  undefined6 uVar8;
  char unaff_BL;
  char unaff_SPL;
  char *pcVar5;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar7 = (char)((ulonglong)param_2 >> 8) + *in_RAX;
  *in_RAX = *in_RAX + (byte)in_RAX;
  uRam00000001b44ef3c0 = uRam00000001b44ef3c0 & (uint)in_RAX;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (byte)in_RAX | *in_RAX;
  pbVar2 = (byte *)(param_1 + CONCAT71(uVar6,bVar3));
  *pbVar2 = *pbVar2 ^ 0xcf;
  if (*pbVar2 == 0) {
    *param_4 = *param_4 + unaff_SPL;
  }
  cVar4 = bVar3 + unaff_BL;
  pcVar5 = (char *)CONCAT71(uVar6,cVar4);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar5 = *pcVar5 + cVar4;
  pcVar5 = pcVar5 + -0x30fffe8c;
  *pcVar5 = *pcVar5 + cVar4;
  if (*pcVar5 == '\0') {
    *param_4 = *param_4 + unaff_SPL;
  }
  cVar4 = cVar4 + unaff_BL;
  pcVar5 = (char *)CONCAT71(uVar6,cVar4);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT62(uVar8,CONCAT11(cVar7,(char)param_2)) =
       *(char *)CONCAT62(uVar8,CONCAT11(cVar7,(char)param_2)) + cVar4;
  *pcVar5 = *pcVar5 + cVar4;
  if (*pcVar5 != '\0') {
    pcVar1 = pcVar5 + -0x30fffe8c;
    *pcVar1 = *pcVar1 + cVar4;
    if (*pcVar1 == '\0') {
      *param_4 = *param_4 + cVar4;
    }
    else {
      pcVar5 = (char *)(ulonglong)(byte)(cVar4 + unaff_BL);
    }
  }
  *param_4 = *param_4 + (char)pcVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

