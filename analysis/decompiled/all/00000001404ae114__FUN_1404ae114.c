// Function: FUN_1404ae114
// Addr: 1404ae114
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae114(byte *param_1,int param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  char *pcVar2;
  longlong unaff_RBX;
  int unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_RSI;
  byte *unaff_RDI;
  
  *(int *)(param_1 + unaff_RBX) = *(int *)(param_1 + unaff_RBX) + unaff_ESP;
  pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + unaff_RSI);
  *pcVar2 = *pcVar2 + (char)(in_RAX >> 8);
  *param_1 = *param_1 | (byte)in_RAX;
  pcVar2 = (char *)(in_RAX & 0xffffffffffffff01);
  *pcVar2 = *pcVar2 + '\x01';
  uVar1 = (int)pcVar2 + 0x11e013f0;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *(int *)param_1 = *(int *)param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

