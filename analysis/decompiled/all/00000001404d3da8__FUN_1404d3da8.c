// Function: FUN_1404d3da8
// Addr: 1404d3da8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3da8(char *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  short in_AX;
  char *pcVar3;
  uint uVar4;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  cRamc007d009e00bf00d = (char)in_AX;
  *param_1 = *param_1 + cRamc007d009e00bf00d;
  uVar4 = (int)param_1 - iRam0000000143c568b3;
  cRam00000001514d4221 = cRam00000001514d4221 + unaff_BL;
  pcVar3 = (char *)(ulonglong)((int)in_AX + 0x3600470U);
  cVar2 = *pcVar3;
  *pcVar3 = *pcVar3 + (char)((int)in_AX + 0x3600470U);
  piVar1 = (int *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((char)((ulonglong)param_2 >> 8) + cVar2,(char)param_2)) +
                   0x5d88c00 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *piVar1 = *piVar1 + uVar4;
  pcVar3 = (char *)((ulonglong)uVar4 - 0x38);
  *pcVar3 = *pcVar3 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

