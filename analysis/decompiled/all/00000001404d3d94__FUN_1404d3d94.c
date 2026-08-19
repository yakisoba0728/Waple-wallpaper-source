// Function: FUN_1404d3d94
// Addr: 1404d3d94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3d94(uint param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  longlong lVar4;
  uint uVar6;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  char *pcVar5;
  
  in_RAX[0x21004d3c] = in_RAX[0x21004d3c] + unaff_BL;
  *in_RAX = *in_RAX + (char)in_RAX;
  cRamc007d009e00bf00d = (char)in_RAX + (char)((ulonglong)in_RAX >> 8);
  lVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cRamc007d009e00bf00d);
  puVar7 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x11';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  pcVar5 = (char *)(lVar4 + 0x1004d3c);
  *pcVar5 = *pcVar5 + unaff_BL;
  uVar6 = (param_1 & 0xffffff00) - iRam0000000143c568b3;
  cRam00000001514d4221 = cRam00000001514d4221 + unaff_BL;
  uVar3 = (int)lVar4 + 0x3600470;
  pcVar5 = (char *)(ulonglong)uVar3;
  cVar2 = *pcVar5;
  *pcVar5 = *pcVar5 + (char)uVar3;
  piVar1 = (int *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((char)((ulonglong)param_2 >> 8) + cVar2,(char)param_2)) +
                   0x5d88c00 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *piVar1 = *piVar1 + uVar6;
  pcVar5 = (char *)((ulonglong)uVar6 - 0x38);
  *pcVar5 = *pcVar5 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

