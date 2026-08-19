// Function: FUN_1404d4b48
// Addr: 1404d4b48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4b48(char *param_1,longlong param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar5;
  uint *in_RAX;
  char *pcVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined7 uVar6;
  
  *in_RAX = *in_RAX & (uint)param_1;
  bVar2 = (char)in_RAX + (char)*in_RAX;
  bVar5 = (byte)((ulonglong)in_RAX >> 8) | bVar2;
  uVar6 = (undefined7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar5,bVar2)) >> 8);
  pcVar4 = (char *)CONCAT71(uVar6,bVar2);
  pcVar1 = (char *)(param_2 + 0x4d + (longlong)param_1 * 2);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + bVar5;
  *pcVar4 = *pcVar4 + bVar2;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -100);
  *pcVar1 = *pcVar1 + (char)param_1;
  pcVar1 = (char *)(param_2 + 0x4d + (longlong)param_1 * 2);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + bVar5;
  *pcVar4 = *pcVar4 + bVar2;
  *pcVar4 = *pcVar4 + bVar5;
  pcVar1 = (char *)(param_2 + 0x4d + (longlong)param_1 * 2);
  *pcVar1 = *pcVar1 + bVar2;
  *param_1 = *param_1 + bVar5;
  *param_3 = *param_3 | (byte)param_3;
  cVar3 = in(7);
  pcVar1 = (char *)(CONCAT71(uVar6,cVar3) + 100);
  *pcVar1 = *pcVar1 + cVar3;
  in(0x49);
  *param_1 = *param_1 +
             (char)((uint)((int)CONCAT71(uVar6,cVar3) + -0xffff4ac) >> 8) +
             ((byte)((ulonglong)param_2 >> 8) | param_1[unaff_RBP]);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

