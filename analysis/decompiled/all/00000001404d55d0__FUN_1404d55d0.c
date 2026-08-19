// Function: FUN_1404d55d0
// Addr: 1404d55d0
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

void FUN_1404d55d0(byte *param_1,undefined8 param_2,byte param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  char *pcVar4;
  undefined7 uVar6;
  uint *puVar5;
  char cVar7;
  byte bVar8;
  char unaff_BL;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char unaff_R12B;
  
  cVar7 = (char)param_2;
  cVar2 = in((short)param_2);
  pcVar4 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2) + -0x2c);
  *pcVar4 = *pcVar4 + cVar2;
  *param_1 = *param_1 + unaff_R12B;
  bVar8 = (byte)((ulonglong)param_2 >> 8) | param_1[(longlong)&stack0x00000000];
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x40,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x40,unaff_BL)) + unaff_BL;
  *param_4 = *param_4 + unaff_R12B;
  cRam0000000054f00040 = cRam0000000054f00040 + '@';
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x40,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x40,unaff_BL)) + unaff_BL;
  *param_4 = *param_4 + unaff_R12B;
  cRam0000000054f00040 = cRam0000000054f00040 + '@';
  pcVar4 = (char *)CONCAT62(0x54f0,CONCAT11((char)((ulonglong)param_1 >> 8),0x80));
  pcVar4[-0x2c] = pcVar4[-0x2c] + -0x80;
  bVar1 = *param_1;
  *param_1 = *param_1 + param_3;
  *unaff_RSI = *unaff_RSI + -0x80 + CARRY1(bVar1,param_3);
  *pcVar4 = *pcVar4 + cVar7;
  uVar6 = (undefined7)((ulonglong)pcVar4 >> 8);
  if (*pcVar4 != '\0') {
    *pcVar4 = *pcVar4 + cVar7;
    cVar2 = *pcVar4;
    pcVar4 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar8,cVar7)) + 0xc);
    *pcVar4 = *pcVar4 + cVar7;
    if (param_1 != (byte *)0x1 && *pcVar4 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = ((uint)CONCAT71(uVar6,cVar2) | 0x80) + 0x64050002;
    *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (int)CONCAT71(uVar6,*pcVar4 + -0x80) + 0xb0000964;
  if (-1 < (int)uVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *(char *)(ulonglong)uVar3) + 0xd0000674;
  cVar2 = (char)uVar3;
  out(CONCAT11(bVar8,cVar7),cVar2);
  uVar3 = uVar3 ^ 0x35eef400;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8) + '@',cVar2));
  puVar5 = (uint *)(ulonglong)uVar3;
  *(int *)param_1 = *(int *)param_1 + -1;
  *puVar5 = *puVar5 & uVar3;
  *(char *)puVar5 = (char)*puVar5 + cVar2;
  *(int *)param_1 = *(int *)param_1 + -1;
  iRam00000001825a5699 = iRam00000001825a5699 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

