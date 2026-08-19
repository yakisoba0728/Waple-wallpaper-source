// Function: FUN_1404ad44c
// Addr: 1404ad44c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ad44a) */

void FUN_1404ad44c(byte *param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  char *pcVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  byte in_CF;
  byte bVar3;
  
  bVar2 = *param_1;
  bVar4 = (byte)in_RAX;
  bVar3 = *param_1;
  *param_1 = (bVar3 - bVar4) - in_CF;
  *in_RAX = (*in_RAX - bVar4) - (bVar2 < bVar4 || (byte)(bVar3 - bVar4) < in_CF);
  pcVar6 = (char *)((ulonglong)in_RAX | 0xe0);
  pcVar6[7] = pcVar6[7] | (byte)((ulonglong)param_2 >> 8);
  *unaff_RSI = *unaff_RSI ^ (byte)pcVar6;
  *pcVar6 = *pcVar6 + (byte)pcVar6;
  piVar1 = (int *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0xe);
  *piVar1 = *piVar1 + unaff_EDI;
  pcVar6 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0xc);
  *pcVar6 = *pcVar6 + unaff_BH;
  uVar5 = ((uint)in_RAX & 0xffffff00) + 0xd32b9100;
  pcVar6 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x3c);
  *pcVar6 = *pcVar6 + (char)(uVar5 >> 8);
  *(uint *)param_1 =
       *(int *)param_1 + (uVar5 - *(uint *)(ulonglong)uVar5) +
       (uint)(uVar5 < *(uint *)(ulonglong)uVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

