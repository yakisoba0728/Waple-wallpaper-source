// Function: FUN_1404c7204
// Addr: 1404c7204
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7204(char *param_1,char *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined8 in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar5;
  int unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  char unaff_R12B;
  byte in_CF;
  char *pcVar4;
  
  uVar5 = (ulonglong)(((int)&stack0x00000000 - unaff_ESI) - (uint)in_CF);
  iVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x2c);
  uVar2 = iVar3 + 0x6740f00;
  *param_2 = *param_2 + (char)param_1;
  *(ulonglong *)(uVar5 - 8) = uVar5;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
  iVar3 = iVar3 + -0x7e8be1cc;
  sVar1 = (short)(char)((char)iVar3 * *unaff_RDI) * (short)*unaff_RDI;
  pcVar4 = (char *)(ulonglong)CONCAT22((short)((uint)iVar3 >> 0x10),sVar1);
  param_1[CONCAT44(unaff_00000034,unaff_ESI) * 2] =
       param_1[CONCAT44(unaff_00000034,unaff_ESI) * 2] + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar4 = *pcVar4 + (char)sVar1;
  pcVar4 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -10);
  *pcVar4 = *pcVar4 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

