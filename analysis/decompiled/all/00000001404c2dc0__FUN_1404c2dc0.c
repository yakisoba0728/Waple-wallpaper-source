// Function: FUN_1404c2dc0
// Addr: 1404c2dc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2dc0(longlong param_1,undefined8 param_2,char param_3)

{
  uint3 uVar1;
  uint uVar2;
  char cVar3;
  undefined8 in_RAX;
  int *piVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined6 uVar7;
  char unaff_BL;
  char unaff_BH;
  byte *unaff_RSI;
  char unaff_R13B;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar6 = (undefined1)((ulonglong)param_2 >> 8);
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  cVar3 = (char)in_RAX + -0x4c;
  pcVar5 = (char *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                            CONCAT11((char)((ulonglong)in_RAX >> 8) + unaff_BH,
                                                     (char)in_RAX)) >> 8),cVar3);
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + (char)((ulonglong)param_1 >> 8);
  uVar1 = (uint3)((uint)((int)pcVar5 + 0x7fc4be1) >> 8);
  piVar4 = (int *)CONCAT71((uint7)uVar1,0x72);
  *piVar4 = *piVar4 + (int)piVar4;
  pcVar5 = (char *)(param_1 + -1);
  if (pcVar5 == (char *)0x0 || *piVar4 == 0) {
    uVar2 = CONCAT31(uVar1,0x72);
    *(int *)(ulonglong)uVar2 = *(int *)(ulonglong)uVar2 + uVar2;
    *pcVar5 = *pcVar5 + unaff_BL;
    unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)piVar4 + 0x2d) = *(char *)((longlong)piVar4 + 0x2d) + (char)pcVar5;
  cVar3 = (char)param_2 + (byte)param_1 + unaff_R13B;
  *(char *)piVar4 = (char)*piVar4 + 'r';
  *(char *)piVar4 = (char)*piVar4 + (char)((ulonglong)pcVar5 >> 8);
  pcVar5[CONCAT62(uVar7,CONCAT11(uVar6,cVar3))] =
       pcVar5[CONCAT62(uVar7,CONCAT11(uVar6,cVar3))] + param_3;
  piVar4 = (int *)CONCAT71((uint7)(uint3)((uint)((int)piVar4 + -0x2d5f004c) >> 8),0x72);
  *piVar4 = *piVar4 + (uint)piVar4;
  *(uint *)CONCAT62(uVar7,CONCAT11(uVar6,cVar3)) =
       *(uint *)CONCAT62(uVar7,CONCAT11(uVar6,cVar3)) & (uint)piVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

