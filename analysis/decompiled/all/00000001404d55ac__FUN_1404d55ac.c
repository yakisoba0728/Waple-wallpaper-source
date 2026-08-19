// Function: FUN_1404d55ac
// Addr: 1404d55ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d5622) overlaps instruction at (ram,0x0001404d5621)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d562f) */
/* WARNING: Removing unreachable block (ram,0x0001404d5643) */
/* WARNING: Removing unreachable block (ram,0x0001404d564f) */
/* WARNING: Removing unreachable block (ram,0x0001404d5653) */
/* WARNING: Removing unreachable block (ram,0x0001404d56a2) */
/* WARNING: Removing unreachable block (ram,0x0001404d5663) */
/* WARNING: Removing unreachable block (ram,0x0001404d568e) */

void FUN_1404d55ac(byte *param_1,longlong param_2,byte param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char *in_RAX;
  char *pcVar5;
  undefined7 uVar7;
  uint *puVar6;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  char unaff_R12B;
  
  cVar3 = (char)param_2;
  *param_4 = *param_4 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  if (*in_RAX == '\0') {
    *(char *)(unaff_RBP + 0x75) = *(char *)(unaff_RBP + 0x75) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
  *param_4 = *param_4 + unaff_R12B;
  cRam0000000054f00040 = cRam0000000054f00040 + '@';
  pcVar5 = (char *)CONCAT62(0x54f0,CONCAT11((char)((ulonglong)param_1 >> 8),0x80));
  pcVar5[-0x2c] = pcVar5[-0x2c] + -0x80;
  bVar1 = *param_1;
  *param_1 = *param_1 + param_3;
  *unaff_RSI = *unaff_RSI + -0x80 + CARRY1(bVar1,param_3);
  *pcVar5 = *pcVar5 + cVar3;
  uVar7 = (undefined7)((ulonglong)pcVar5 >> 8);
  if (*pcVar5 == '\0') {
    uVar4 = (int)CONCAT71(uVar7,*pcVar5 + -0x80) + 0xb0000964;
    if (-1 < (int)uVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4) + 0xd0000674;
    cVar3 = (char)uVar4;
    out((short)param_2,cVar3);
    uVar4 = uVar4 ^ 0x35eef400;
    uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8) + '@',cVar3));
    puVar6 = (uint *)(ulonglong)uVar4;
    *(int *)param_1 = *(int *)param_1 + -1;
    *puVar6 = *puVar6 & uVar4;
    *(char *)puVar6 = (char)*puVar6 + cVar3;
    *(int *)param_1 = *(int *)param_1 + -1;
    iRam00000001825a5699 = iRam00000001825a5699 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar5 = *pcVar5 + cVar3;
  cVar2 = *pcVar5;
  pcVar5 = (char *)(param_2 + 0xc);
  *pcVar5 = *pcVar5 + cVar3;
  if (param_1 != (byte *)0x1 && *pcVar5 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = ((uint)CONCAT71(uVar7,cVar2) | 0x80) + 0x64050002;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

