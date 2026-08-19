// Function: FUN_1404c07a0
// Addr: 1404c07a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c07a0(char *param_1,char param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  uint *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  bool in_OF;
  
  if (!in_OF) {
    pcVar1 = (char *)((ulonglong)((uint)in_RAX & *in_RAX) - 0x68);
    *pcVar1 = *pcVar1 + unaff_BL;
    pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x78);
    *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *in_RAX;
  bVar3 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX - bVar3;
  *unaff_RSI = *unaff_RSI + bVar3 + ((byte)uVar2 < bVar3);
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  *(byte *)in_RAX = (byte)*in_RAX + (char)((ulonglong)in_RAX >> 8);
  *(byte *)in_RAX = (byte)*in_RAX - param_3;
  *unaff_RDI = *(undefined4 *)unaff_RSI;
  *(byte *)in_RAX = (byte)*in_RAX - param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

